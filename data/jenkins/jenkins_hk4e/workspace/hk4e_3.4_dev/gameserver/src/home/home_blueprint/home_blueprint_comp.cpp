// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/home/home_blueprint/home_blueprint_comp.cpp

// Line 30: range 00000000145B89B2-00000000145B8ABF
void __cdecl HomeBlueprintSearchData::toClient(
        const HomeBlueprintSearchData *const this,
        proto::HomeBlueprintSearchInfo *proto)
{
  proto::HomeBlueprintSearchInfo::set_share_code(proto, &this->share_code);
  if ( *(_BYTE *)(((unsigned __int64)&this->module_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->module_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::HomeBlueprintSearchInfo::set_module_id(proto, this->module_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::HomeBlueprintSearchInfo::set_scene_id(proto, this->scene_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->block_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->block_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::HomeBlueprintSearchInfo::set_block_id(proto, this->block_id);
};

// Line 38: range 00000000145B8AC0-00000000145B8C24
void __cdecl HomeBlueprintSearchData::fromRedis(
        HomeBlueprintSearchData *const this,
        const proto::HomeBlueprintBriefRedisData *proto)
{
  const std::string *v2; // rdx
  uint32_t v3; // edx
  uint32_t v4; // ecx
  uint32_t v5; // edx
  uint32_t v6; // ecx

  v2 = proto::HomeBlueprintBriefRedisData::share_code[abi:cxx11](proto);
  std::string::operator=(this, v2);
  v3 = proto::HomeBlueprintBriefRedisData::owner_uid(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->owner_uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->owner_uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->owner_uid);
  }
  this->owner_uid = v3;
  v4 = proto::HomeBlueprintBriefRedisData::module_id(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->module_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->module_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->module_id);
  }
  this->module_id = v4;
  v5 = proto::HomeBlueprintBriefRedisData::scene_id(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->scene_id);
  }
  this->scene_id = v5;
  v6 = proto::HomeBlueprintBriefRedisData::block_id(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->block_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->block_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->block_id);
  }
  this->block_id = v6;
};

// Line 47: range 00000000145B8C26-00000000145B8C9A
int32_t __cdecl HomeBlueprintComp::fromBin(HomeBlueprintComp *const this, const proto::HomeDataBin *home_data_bin)
{
  bool is_allow_friend_copy; // dl
  const proto::HomeBlueprintCompBin *blueprint_bin; // [rsp+18h] [rbp-8h]

  blueprint_bin = proto::HomeDataBin::blueprint_bin(home_data_bin);
  is_allow_friend_copy = proto::HomeBlueprintCompBin::is_allow_friend_copy(blueprint_bin);
  if ( *(char *)(((unsigned __int64)&this->is_allow_friend_copy_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_allow_friend_copy_);
  this->is_allow_friend_copy_ = is_allow_friend_copy;
  return 0;
};

// Line 54: range 00000000145B8C9C-00000000145B8D13
int32_t __cdecl HomeBlueprintComp::toBin(HomeBlueprintComp *const this, proto::HomeDataBin *home_data_bin)
{
  proto::HomeBlueprintCompBin *blueprint_bin; // [rsp+18h] [rbp-8h]

  blueprint_bin = proto::HomeDataBin::mutable_blueprint_bin(home_data_bin);
  if ( *(char *)(((unsigned __int64)&this->is_allow_friend_copy_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_allow_friend_copy_);
  proto::HomeBlueprintCompBin::set_is_allow_friend_copy(blueprint_bin, this->is_allow_friend_copy_);
  return 0;
};

// Line 61: range 00000000145B8D14-00000000145B8D34
void __cdecl HomeBlueprintComp::onUpdateArrangementInfo(
        HomeBlueprintComp *const this,
        uint32_t module_id,
        uint32_t scene_id)
{
  HomeBlueprintComp::logPreviewRecord(this);
};

// Line 66: range 00000000145B8ECA-00000000145B9A8E
void __cdecl HomeBlueprintComp::convertDetailClientToRedisData(
        const proto::HomeSceneArrangementInfo *proto_info,
        proto::HomeBlueprintDetailRedisData *redis_data)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  google::protobuf::uint32 v5; // eax
  google::protobuf::uint32 v6; // eax
  bool is_unlocked; // al
  google::protobuf::uint32 v8; // eax
  proto::VectorBin *v9; // r14
  const proto::Vector *v10; // rax
  google::protobuf::RepeatedField<int> *v11; // r14
  const google::protobuf::RepeatedField<int> *v12; // rax
  google::protobuf::uint32 v13; // eax
  bool is_allow_summon; // al
  google::protobuf::uint32 v15; // eax
  google::protobuf::uint32 v16; // eax
  proto::VectorBin *v17; // r14
  const proto::Vector *v18; // rax
  proto::VectorBin *v19; // r14
  const proto::Vector *v20; // rax
  proto::VectorBin *v21; // r14
  const proto::Vector *v22; // rax
  proto::VectorBin *v23; // r14
  const proto::Vector *v24; // rax
  google::protobuf::uint32 v25; // eax
  google::protobuf::uint32 v26; // eax
  google::protobuf::RepeatedField<int> *v27; // r14
  const google::protobuf::RepeatedField<int> *v28; // rax
  proto::VectorBin *v29; // r14
  const proto::Vector *v30; // rax
  proto::HomeFurnitureBin *v31; // r14
  const proto::HomeFurnitureData *v32; // rax
  google::protobuf::uint32 v33; // eax
  google::protobuf::RepeatedPtrField<proto::HomeBlockArrangementInfo>::const_iterator __for_begin; // [rsp+10h] [rbp-1D0h] BYREF
  google::protobuf::RepeatedPtrField<proto::HomeBlockArrangementInfo>::const_iterator __for_end; // [rsp+18h] [rbp-1C8h] BYREF
  google::protobuf::RepeatedPtrField<proto::HomeBlockFieldData>::const_iterator __for_begin_1; // [rsp+20h] [rbp-1C0h] BYREF
  google::protobuf::RepeatedPtrField<proto::HomeBlockFieldData>::const_iterator __for_end_1; // [rsp+28h] [rbp-1B8h] BYREF
  google::protobuf::RepeatedPtrField<proto::HomeFurnitureData>::const_iterator __for_begin_0; // [rsp+30h] [rbp-1B0h] BYREF
  google::protobuf::RepeatedPtrField<proto::HomeFurnitureData>::const_iterator __for_end_0; // [rsp+38h] [rbp-1A8h] BYREF
  proto::HomeSceneBin *scene_bin; // [rsp+40h] [rbp-1A0h]
  const google::protobuf::RepeatedPtrField<proto::HomeBlockArrangementInfo> *__for_range; // [rsp+48h] [rbp-198h]
  const google::protobuf::RepeatedPtrField<proto::HomeFurnitureData> *__for_range_8; // [rsp+50h] [rbp-190h]
  const google::protobuf::RepeatedPtrField<proto::HomeFurnitureData> *__for_range_9; // [rsp+58h] [rbp-188h]
  const proto::HomeFurnitureData *stair_info; // [rsp+60h] [rbp-180h]
  proto::HomeFurnitureBin *stair_bin; // [rsp+68h] [rbp-178h]
  const proto::HomeFurnitureData *door_info; // [rsp+70h] [rbp-170h]
  proto::HomeFurnitureBin *door_bin; // [rsp+78h] [rbp-168h]
  const proto::HomeBlockArrangementInfo *block_arrangement_info; // [rsp+80h] [rbp-160h]
  proto::HomeBlockBin *block_bin; // [rsp+88h] [rbp-158h]
  const google::protobuf::RepeatedPtrField<proto::HomeFurnitureData> *__for_range_0; // [rsp+90h] [rbp-150h]
  const google::protobuf::RepeatedPtrField<proto::HomeFurnitureData> *__for_range_1; // [rsp+98h] [rbp-148h]
  const google::protobuf::RepeatedPtrField<proto::HomeFurnitureSuiteData> *__for_range_2; // [rsp+A0h] [rbp-140h]
  const google::protobuf::RepeatedPtrField<proto::HomeBlockFieldData> *__for_range_3; // [rsp+A8h] [rbp-138h]
  const google::protobuf::RepeatedPtrField<proto::HomeFurnitureGroupData> *__for_range_5; // [rsp+B0h] [rbp-130h]
  const google::protobuf::RepeatedPtrField<proto::HomeFurnitureCustomSuiteData> *__for_range_7; // [rsp+B8h] [rbp-128h]
  const proto::HomeFurnitureCustomSuiteData *furniture_custom_suite_info; // [rsp+C0h] [rbp-120h]
  proto::HomeFurnitureCustomSuiteBin *furniture_custom_suite_bin; // [rsp+C8h] [rbp-118h]
  const proto::HomeFurnitureGroupData *furniture_group_info; // [rsp+D0h] [rbp-110h]
  proto::HomeFurnitureGroupBin *furniture_group_bin; // [rsp+D8h] [rbp-108h]
  const google::protobuf::RepeatedPtrField<proto::HomeFurnitureData> *__for_range_6; // [rsp+E0h] [rbp-100h]
  const proto::HomeFurnitureData *furniture_info_1; // [rsp+E8h] [rbp-F8h]
  proto::HomeFurnitureBin *furniture_bin_1; // [rsp+F0h] [rbp-F0h]
  const proto::HomeBlockFieldData *field_info; // [rsp+F8h] [rbp-E8h]
  proto::HomeBlockFieldBin *field_bin; // [rsp+100h] [rbp-E0h]
  const google::protobuf::RepeatedPtrField<proto::HomeBlockSubFieldData> *__for_range_4; // [rsp+108h] [rbp-D8h]
  const proto::HomeBlockSubFieldData *sub_field_info; // [rsp+110h] [rbp-D0h]
  proto::HomeBlockSubFieldBin *sub_field_bin; // [rsp+118h] [rbp-C8h]
  const proto::HomeFurnitureSuiteData *furniture_suite_info; // [rsp+120h] [rbp-C0h]
  proto::HomeFurnitureSuiteBin *furniture_suite_bin; // [rsp+128h] [rbp-B8h]
  const proto::HomeFurnitureData *furniture_info_0; // [rsp+130h] [rbp-B0h]
  proto::HomeFurnitureBin *furniture_bin_0; // [rsp+138h] [rbp-A8h]
  const proto::HomeFurnitureData *furniture_info; // [rsp+140h] [rbp-A0h]
  proto::HomeFurnitureBin *furniture_bin; // [rsp+148h] [rbp-98h]
  char v74[144]; // [rsp+150h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v74;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 27 convertVectorClientToBin:67 64 8 30 convertFurnitureClientToBin:73";
  *(_QWORD *)(v2 + 16) = HomeBlueprintComp::convertDetailClientToRedisData;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -202116352;
  *(_QWORD *)(v2 + 64) = v2 + 48;
  scene_bin = proto::HomeBlueprintDetailRedisData::mutable_scene_bin(redis_data);
  v5 = proto::HomeSceneArrangementInfo::scene_id(proto_info);
  proto::HomeSceneBin::set_scene_id(scene_bin, v5);
  __for_range = proto::HomeSceneArrangementInfo::block_arrangement_info_list(proto_info);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::HomeBlockArrangementInfo>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::HomeBlockArrangementInfo>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeBlockArrangementInfo const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    block_arrangement_info = google::protobuf::internal::RepeatedPtrIterator<proto::HomeBlockArrangementInfo const>::operator*(&__for_begin);
    block_bin = proto::HomeSceneBin::add_block_bin_list(scene_bin);
    v6 = proto::HomeBlockArrangementInfo::block_id(block_arrangement_info);
    proto::HomeBlockBin::set_block_id(block_bin, v6);
    is_unlocked = proto::HomeBlockArrangementInfo::is_unlocked(block_arrangement_info);
    proto::HomeBlockBin::set_is_unlocked(block_bin, is_unlocked);
    __for_range_0 = proto::HomeBlockArrangementInfo::persistent_furniture_list(block_arrangement_info);
    __for_begin_0.it_ = google::protobuf::RepeatedPtrField<proto::HomeFurnitureData>::begin(__for_range_0).it_;
    __for_end_0.it_ = google::protobuf::RepeatedPtrField<proto::HomeFurnitureData>::end(__for_range_0).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeFurnitureData const>::operator!=(
              &__for_begin_0,
              &__for_end_0) )
    {
      furniture_info = google::protobuf::internal::RepeatedPtrIterator<proto::HomeFurnitureData const>::operator*(&__for_begin_0);
      furniture_bin = proto::HomeBlockBin::add_persistent_furniture_list(block_bin);
      HomeBlueprintComp::convertDetailClientToRedisData(proto::HomeSceneArrangementInfo const&,proto::HomeBlueprintDetailRedisData &)::{lambda(proto::HomeFurnitureData const&,proto::HomeFurnitureBin &)#2}::operator()(
        (const HomeBlueprintComp::convertDetailClientToRedisData::<lambda(const proto::HomeFurnitureData&, proto::HomeFurnitureBin&)> *const)(v2 + 64),
        furniture_info,
        furniture_bin);
      google::protobuf::internal::RepeatedPtrIterator<proto::HomeFurnitureData const>::operator++(&__for_begin_0);
    }
    __for_range_1 = proto::HomeBlockArrangementInfo::deploy_furniure_list(block_arrangement_info);
    __for_begin_0.it_ = google::protobuf::RepeatedPtrField<proto::HomeFurnitureData>::begin(__for_range_1).it_;
    __for_end_0.it_ = google::protobuf::RepeatedPtrField<proto::HomeFurnitureData>::end(__for_range_1).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeFurnitureData const>::operator!=(
              &__for_begin_0,
              &__for_end_0) )
    {
      furniture_info_0 = google::protobuf::internal::RepeatedPtrIterator<proto::HomeFurnitureData const>::operator*(&__for_begin_0);
      furniture_bin_0 = proto::HomeBlockBin::add_deploy_furniure_list(block_bin);
      HomeBlueprintComp::convertDetailClientToRedisData(proto::HomeSceneArrangementInfo const&,proto::HomeBlueprintDetailRedisData &)::{lambda(proto::HomeFurnitureData const&,proto::HomeFurnitureBin &)#2}::operator()(
        (const HomeBlueprintComp::convertDetailClientToRedisData::<lambda(const proto::HomeFurnitureData&, proto::HomeFurnitureBin&)> *const)(v2 + 64),
        furniture_info_0,
        furniture_bin_0);
      google::protobuf::internal::RepeatedPtrIterator<proto::HomeFurnitureData const>::operator++(&__for_begin_0);
    }
    __for_range_2 = proto::HomeBlockArrangementInfo::furniture_suite_list(block_arrangement_info);
    __for_begin_0.it_ = google::protobuf::RepeatedPtrField<proto::HomeFurnitureSuiteData>::begin(__for_range_2).it_;
    __for_end_0.it_ = google::protobuf::RepeatedPtrField<proto::HomeFurnitureSuiteData>::end(__for_range_2).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeFurnitureSuiteData const>::operator!=(
              (const google::protobuf::internal::RepeatedPtrIterator<const proto::HomeFurnitureSuiteData> *const)&__for_begin_0,
              (const google::protobuf::internal::RepeatedPtrIterator<const proto::HomeFurnitureSuiteData>::iterator *)&__for_end_0) )
    {
      furniture_suite_info = google::protobuf::internal::RepeatedPtrIterator<proto::HomeFurnitureSuiteData const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::HomeFurnitureSuiteData> *const)&__for_begin_0);
      furniture_suite_bin = proto::HomeBlockBin::add_furniture_suite_list(block_bin);
      v8 = proto::HomeFurnitureSuiteData::suite_id(furniture_suite_info);
      proto::HomeFurnitureSuiteBin::set_suite_id(furniture_suite_bin, v8);
      v9 = proto::HomeFurnitureSuiteBin::mutable_spawn_pos(furniture_suite_bin);
      v10 = proto::HomeFurnitureSuiteData::spawn_pos(furniture_suite_info);
      HomeBlueprintComp::convertDetailClientToRedisData(proto::HomeSceneArrangementInfo const&,proto::HomeBlueprintDetailRedisData &)::{lambda(proto::Vector const&,proto::VectorBin &)#1}::operator()(
        (const HomeBlueprintComp::convertDetailClientToRedisData::<lambda(const proto::Vector&, proto::VectorBin&)> *const)(v2 + 48),
        v10,
        v9);
      v11 = proto::HomeFurnitureSuiteBin::mutable_included_furniture_index_list(furniture_suite_bin);
      v12 = proto::HomeFurnitureSuiteData::included_furniture_index_list(furniture_suite_info);
      google::protobuf::RepeatedField<int>::CopyFrom(v11, v12);
      v13 = proto::HomeFurnitureSuiteData::guid(furniture_suite_info);
      proto::HomeFurnitureSuiteBin::set_guid(furniture_suite_bin, v13);
      is_allow_summon = proto::HomeFurnitureSuiteData::is_allow_summon(furniture_suite_info);
      proto::HomeFurnitureSuiteBin::set_is_allow_summon(furniture_suite_bin, is_allow_summon);
      google::protobuf::internal::RepeatedPtrIterator<proto::HomeFurnitureSuiteData const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::HomeFurnitureSuiteData> *const)&__for_begin_0);
    }
    __for_range_3 = proto::HomeBlockArrangementInfo::field_list(block_arrangement_info);
    __for_begin_1.it_ = google::protobuf::RepeatedPtrField<proto::HomeBlockFieldData>::begin(__for_range_3).it_;
    __for_end_1.it_ = google::protobuf::RepeatedPtrField<proto::HomeBlockFieldData>::end(__for_range_3).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeBlockFieldData const>::operator!=(
              &__for_begin_1,
              &__for_end_1) )
    {
      field_info = google::protobuf::internal::RepeatedPtrIterator<proto::HomeBlockFieldData const>::operator*(&__for_begin_1);
      field_bin = proto::HomeBlockBin::add_deploy_field_list(block_bin);
      v15 = proto::HomeBlockFieldData::guid(field_info);
      proto::HomeBlockFieldBin::set_guid(field_bin, v15);
      v16 = proto::HomeBlockFieldBin::furniture_id(field_bin);
      proto::HomeBlockFieldBin::set_furniture_id(field_bin, v16);
      v17 = proto::HomeBlockFieldBin::mutable_spawn_pos(field_bin);
      v18 = proto::HomeBlockFieldData::pos(field_info);
      HomeBlueprintComp::convertDetailClientToRedisData(proto::HomeSceneArrangementInfo const&,proto::HomeBlueprintDetailRedisData &)::{lambda(proto::Vector const&,proto::VectorBin &)#1}::operator()(
        (const HomeBlueprintComp::convertDetailClientToRedisData::<lambda(const proto::Vector&, proto::VectorBin&)> *const)(v2 + 48),
        v18,
        v17);
      v19 = proto::HomeBlockFieldBin::mutable_spawn_rot(field_bin);
      v20 = proto::HomeBlockFieldData::rot(field_info);
      HomeBlueprintComp::convertDetailClientToRedisData(proto::HomeSceneArrangementInfo const&,proto::HomeBlueprintDetailRedisData &)::{lambda(proto::Vector const&,proto::VectorBin &)#1}::operator()(
        (const HomeBlueprintComp::convertDetailClientToRedisData::<lambda(const proto::Vector&, proto::VectorBin&)> *const)(v2 + 48),
        v20,
        v19);
      __for_range_4 = proto::HomeBlockFieldData::sub_field_list(field_info);
      __for_begin_0.it_ = google::protobuf::RepeatedPtrField<proto::HomeBlockSubFieldData>::begin(__for_range_4).it_;
      __for_end_0.it_ = google::protobuf::RepeatedPtrField<proto::HomeBlockSubFieldData>::end(__for_range_4).it_;
      while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeBlockSubFieldData const>::operator!=(
                (const google::protobuf::internal::RepeatedPtrIterator<const proto::HomeBlockSubFieldData> *const)&__for_begin_0,
                (const google::protobuf::internal::RepeatedPtrIterator<const proto::HomeBlockSubFieldData>::iterator *)&__for_end_0) )
      {
        sub_field_info = google::protobuf::internal::RepeatedPtrIterator<proto::HomeBlockSubFieldData const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::HomeBlockSubFieldData> *const)&__for_begin_0);
        sub_field_bin = proto::HomeBlockFieldBin::add_sub_field_list(field_bin);
        v21 = proto::HomeBlockSubFieldBin::mutable_spawn_pos(sub_field_bin);
        v22 = proto::HomeBlockSubFieldData::pos(sub_field_info);
        HomeBlueprintComp::convertDetailClientToRedisData(proto::HomeSceneArrangementInfo const&,proto::HomeBlueprintDetailRedisData &)::{lambda(proto::Vector const&,proto::VectorBin &)#1}::operator()(
          (const HomeBlueprintComp::convertDetailClientToRedisData::<lambda(const proto::Vector&, proto::VectorBin&)> *const)(v2 + 48),
          v22,
          v21);
        v23 = proto::HomeBlockSubFieldBin::mutable_spawn_rot(sub_field_bin);
        v24 = proto::HomeBlockSubFieldData::rot(sub_field_info);
        HomeBlueprintComp::convertDetailClientToRedisData(proto::HomeSceneArrangementInfo const&,proto::HomeBlueprintDetailRedisData &)::{lambda(proto::Vector const&,proto::VectorBin &)#1}::operator()(
          (const HomeBlueprintComp::convertDetailClientToRedisData::<lambda(const proto::Vector&, proto::VectorBin&)> *const)(v2 + 48),
          v24,
          v23);
        google::protobuf::internal::RepeatedPtrIterator<proto::HomeBlockSubFieldData const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::HomeBlockSubFieldData> *const)&__for_begin_0);
      }
      google::protobuf::internal::RepeatedPtrIterator<proto::HomeBlockFieldData const>::operator++(&__for_begin_1);
    }
    __for_range_5 = proto::HomeBlockArrangementInfo::furniture_group_list(block_arrangement_info);
    __for_begin_1.it_ = google::protobuf::RepeatedPtrField<proto::HomeFurnitureGroupData>::begin(__for_range_5).it_;
    __for_end_1.it_ = google::protobuf::RepeatedPtrField<proto::HomeFurnitureGroupData>::end(__for_range_5).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeFurnitureGroupData const>::operator!=(
              (const google::protobuf::internal::RepeatedPtrIterator<const proto::HomeFurnitureGroupData> *const)&__for_begin_1,
              (const google::protobuf::internal::RepeatedPtrIterator<const proto::HomeFurnitureGroupData>::iterator *)&__for_end_1) )
    {
      furniture_group_info = google::protobuf::internal::RepeatedPtrIterator<proto::HomeFurnitureGroupData const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::HomeFurnitureGroupData> *const)&__for_begin_1);
      furniture_group_bin = proto::HomeBlockBin::add_deploy_furniture_group_list(block_bin);
      v25 = proto::HomeFurnitureGroupData::group_furniture_index(furniture_group_info);
      proto::HomeFurnitureGroupBin::set_group_furniture_index(furniture_group_bin, v25);
      __for_range_6 = proto::HomeFurnitureGroupData::virtual_furniure_list(furniture_group_info);
      __for_begin_0.it_ = google::protobuf::RepeatedPtrField<proto::HomeFurnitureData>::begin(__for_range_6).it_;
      __for_end_0.it_ = google::protobuf::RepeatedPtrField<proto::HomeFurnitureData>::end(__for_range_6).it_;
      while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeFurnitureData const>::operator!=(
                &__for_begin_0,
                &__for_end_0) )
      {
        furniture_info_1 = google::protobuf::internal::RepeatedPtrIterator<proto::HomeFurnitureData const>::operator*(&__for_begin_0);
        furniture_bin_1 = proto::HomeFurnitureGroupBin::add_virtual_furniure_list(furniture_group_bin);
        HomeBlueprintComp::convertDetailClientToRedisData(proto::HomeSceneArrangementInfo const&,proto::HomeBlueprintDetailRedisData &)::{lambda(proto::HomeFurnitureData const&,proto::HomeFurnitureBin &)#2}::operator()(
          (const HomeBlueprintComp::convertDetailClientToRedisData::<lambda(const proto::HomeFurnitureData&, proto::HomeFurnitureBin&)> *const)(v2 + 64),
          furniture_info_1,
          furniture_bin_1);
        google::protobuf::internal::RepeatedPtrIterator<proto::HomeFurnitureData const>::operator++(&__for_begin_0);
      }
      google::protobuf::internal::RepeatedPtrIterator<proto::HomeFurnitureGroupData const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::HomeFurnitureGroupData> *const)&__for_begin_1);
    }
    __for_range_7 = proto::HomeBlockArrangementInfo::furniture_custom_suite_list(block_arrangement_info);
    __for_begin_0.it_ = google::protobuf::RepeatedPtrField<proto::HomeFurnitureCustomSuiteData>::begin(__for_range_7).it_;
    __for_end_0.it_ = google::protobuf::RepeatedPtrField<proto::HomeFurnitureCustomSuiteData>::end(__for_range_7).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeFurnitureCustomSuiteData const>::operator!=(
              (const google::protobuf::internal::RepeatedPtrIterator<const proto::HomeFurnitureCustomSuiteData> *const)&__for_begin_0,
              (const google::protobuf::internal::RepeatedPtrIterator<const proto::HomeFurnitureCustomSuiteData>::iterator *)&__for_end_0) )
    {
      furniture_custom_suite_info = google::protobuf::internal::RepeatedPtrIterator<proto::HomeFurnitureCustomSuiteData const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::HomeFurnitureCustomSuiteData> *const)&__for_begin_0);
      furniture_custom_suite_bin = proto::HomeBlockBin::add_furniture_custom_suite_list(block_bin);
      v26 = proto::HomeFurnitureCustomSuiteData::guid(furniture_custom_suite_info);
      proto::HomeFurnitureCustomSuiteBin::set_guid(furniture_custom_suite_bin, v26);
      v27 = proto::HomeFurnitureCustomSuiteBin::mutable_included_furniture_index_list(furniture_custom_suite_bin);
      v28 = proto::HomeFurnitureCustomSuiteData::included_furniture_index_list(furniture_custom_suite_info);
      google::protobuf::RepeatedField<int>::CopyFrom(v27, v28);
      v29 = proto::HomeFurnitureCustomSuiteBin::mutable_spawn_pos(furniture_custom_suite_bin);
      v30 = proto::HomeFurnitureCustomSuiteData::spawn_pos(furniture_custom_suite_info);
      HomeBlueprintComp::convertDetailClientToRedisData(proto::HomeSceneArrangementInfo const&,proto::HomeBlueprintDetailRedisData &)::{lambda(proto::Vector const&,proto::VectorBin &)#1}::operator()(
        (const HomeBlueprintComp::convertDetailClientToRedisData::<lambda(const proto::Vector&, proto::VectorBin&)> *const)(v2 + 48),
        v30,
        v29);
      google::protobuf::internal::RepeatedPtrIterator<proto::HomeFurnitureCustomSuiteData const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::HomeFurnitureCustomSuiteData> *const)&__for_begin_0);
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::HomeBlockArrangementInfo const>::operator++(&__for_begin);
  }
  __for_range_8 = proto::HomeSceneArrangementInfo::door_list(proto_info);
  __for_begin_0.it_ = google::protobuf::RepeatedPtrField<proto::HomeFurnitureData>::begin(__for_range_8).it_;
  __for_end_0.it_ = google::protobuf::RepeatedPtrField<proto::HomeFurnitureData>::end(__for_range_8).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeFurnitureData const>::operator!=(
            &__for_begin_0,
            &__for_end_0) )
  {
    door_info = google::protobuf::internal::RepeatedPtrIterator<proto::HomeFurnitureData const>::operator*(&__for_begin_0);
    door_bin = proto::HomeSceneBin::add_door_list(scene_bin);
    HomeBlueprintComp::convertDetailClientToRedisData(proto::HomeSceneArrangementInfo const&,proto::HomeBlueprintDetailRedisData &)::{lambda(proto::HomeFurnitureData const&,proto::HomeFurnitureBin &)#2}::operator()(
      (const HomeBlueprintComp::convertDetailClientToRedisData::<lambda(const proto::HomeFurnitureData&, proto::HomeFurnitureBin&)> *const)(v2 + 64),
      door_info,
      door_bin);
    google::protobuf::internal::RepeatedPtrIterator<proto::HomeFurnitureData const>::operator++(&__for_begin_0);
  }
  __for_range_9 = proto::HomeSceneArrangementInfo::stair_list(proto_info);
  __for_begin_0.it_ = google::protobuf::RepeatedPtrField<proto::HomeFurnitureData>::begin(__for_range_9).it_;
  __for_end_0.it_ = google::protobuf::RepeatedPtrField<proto::HomeFurnitureData>::end(__for_range_9).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeFurnitureData const>::operator!=(
            &__for_begin_0,
            &__for_end_0) )
  {
    stair_info = google::protobuf::internal::RepeatedPtrIterator<proto::HomeFurnitureData const>::operator*(&__for_begin_0);
    stair_bin = proto::HomeSceneBin::add_stair_list(scene_bin);
    HomeBlueprintComp::convertDetailClientToRedisData(proto::HomeSceneArrangementInfo const&,proto::HomeBlueprintDetailRedisData &)::{lambda(proto::HomeFurnitureData const&,proto::HomeFurnitureBin &)#2}::operator()(
      (const HomeBlueprintComp::convertDetailClientToRedisData::<lambda(const proto::HomeFurnitureData&, proto::HomeFurnitureBin&)> *const)(v2 + 64),
      stair_info,
      stair_bin);
    google::protobuf::internal::RepeatedPtrIterator<proto::HomeFurnitureData const>::operator++(&__for_begin_0);
  }
  v31 = proto::HomeSceneBin::mutable_main_house(scene_bin);
  v32 = proto::HomeSceneArrangementInfo::main_house(proto_info);
  HomeBlueprintComp::convertDetailClientToRedisData(proto::HomeSceneArrangementInfo const&,proto::HomeBlueprintDetailRedisData &)::{lambda(proto::HomeFurnitureData const&,proto::HomeFurnitureBin &)#2}::operator()(
    (const HomeBlueprintComp::convertDetailClientToRedisData::<lambda(const proto::HomeFurnitureData&, proto::HomeFurnitureBin&)> *const)(v2 + 64),
    v32,
    v31);
  v33 = proto::HomeSceneArrangementInfo::tmp_version(proto_info);
  proto::HomeSceneBin::set_tmp_version(scene_bin, v33);
  if ( v74 == (char *)v2 )
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

// Line 67: range 00000000145B8D36-00000000145B8D94
void __cdecl HomeBlueprintComp::convertDetailClientToRedisData(proto::HomeSceneArrangementInfo const&,proto::HomeBlueprintDetailRedisData &)::{lambda(proto::Vector const&,proto::VectorBin &)#1}::operator()(
        const HomeBlueprintComp::convertDetailClientToRedisData::<lambda(const proto::Vector&, proto::VectorBin&)> *const __closure,
        const proto::Vector *client,
        proto::VectorBin *bin)
{
  float v3; // xmm0_4
  float v4; // xmm0_4
  float v5; // xmm0_4

  v3 = proto::Vector::x(client);
  proto::VectorBin::set_x(bin, v3);
  v4 = proto::Vector::y(client);
  proto::VectorBin::set_y(bin, v4);
  v5 = proto::Vector::z(client);
  proto::VectorBin::set_z(bin, v5);
};

// Line 73: range 00000000145B8D96-00000000145B8EC8
void __cdecl HomeBlueprintComp::convertDetailClientToRedisData(proto::HomeSceneArrangementInfo const&,proto::HomeBlueprintDetailRedisData &)::{lambda(proto::HomeFurnitureData const&,proto::HomeFurnitureBin &)#2}::operator()(
        const HomeBlueprintComp::convertDetailClientToRedisData::<lambda(const proto::HomeFurnitureData&, proto::HomeFurnitureBin&)> *const __closure,
        const proto::HomeFurnitureData *client,
        proto::HomeFurnitureBin *bin)
{
  google::protobuf::uint32 v3; // edx
  HomeBlueprintComp::convertDetailClientToRedisData::<lambda(const proto::Vector&, proto::VectorBin&)> *convertVectorClientToBin; // rbx
  proto::VectorBin *v5; // r12
  const proto::Vector *v6; // rax
  HomeBlueprintComp::convertDetailClientToRedisData::<lambda(const proto::Vector&, proto::VectorBin&)> *v7; // rbx
  proto::VectorBin *v8; // r12
  const proto::Vector *v9; // rax
  google::protobuf::int32 v10; // edx
  google::protobuf::uint32 v11; // edx
  google::protobuf::uint32 v12; // edx

  v3 = proto::HomeFurnitureData::furniture_id(client);
  proto::HomeFurnitureBin::set_furniture_id(bin, v3);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  convertVectorClientToBin = __closure->__convertVectorClientToBin;
  v5 = proto::HomeFurnitureBin::mutable_spawn_pos(bin);
  v6 = proto::HomeFurnitureData::spawn_pos(client);
  HomeBlueprintComp::convertDetailClientToRedisData(proto::HomeSceneArrangementInfo const&,proto::HomeBlueprintDetailRedisData &)::{lambda(proto::Vector const&,proto::VectorBin &)#1}::operator()(
    convertVectorClientToBin,
    v6,
    v5);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v7 = __closure->__convertVectorClientToBin;
  v8 = proto::HomeFurnitureBin::mutable_spawn_rot(bin);
  v9 = proto::HomeFurnitureData::spawn_rot(client);
  HomeBlueprintComp::convertDetailClientToRedisData(proto::HomeSceneArrangementInfo const&,proto::HomeBlueprintDetailRedisData &)::{lambda(proto::Vector const&,proto::VectorBin &)#1}::operator()(
    v7,
    v9,
    v8);
  v10 = proto::HomeFurnitureData::parent_furniture_index(client);
  proto::HomeFurnitureBin::set_parent_furniture_index(bin, v10);
  v11 = proto::HomeFurnitureData::guid(client);
  proto::HomeFurnitureBin::set_guid(bin, v11);
  v12 = proto::HomeFurnitureData::version(client);
  proto::HomeFurnitureBin::set_version(bin, v12);
};

// Line 165: range 00000000145B9C24-00000000145BA7E8
void __cdecl HomeBlueprintComp::convertDetailRedisDataToClient(
        const proto::HomeBlueprintDetailRedisData *redis_data,
        proto::HomeSceneArrangementInfo *proto_info)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  google::protobuf::uint32 v5; // edx
  google::protobuf::uint32 v6; // eax
  bool is_unlocked; // al
  google::protobuf::uint32 v8; // eax
  proto::Vector *v9; // r14
  const proto::VectorBin *v10; // rax
  google::protobuf::RepeatedField<int> *v11; // r14
  const google::protobuf::RepeatedField<int> *v12; // rax
  google::protobuf::uint32 v13; // eax
  bool is_allow_summon; // al
  google::protobuf::uint32 v15; // eax
  google::protobuf::uint32 v16; // eax
  proto::Vector *v17; // r14
  const proto::VectorBin *v18; // rax
  proto::Vector *v19; // r14
  const proto::VectorBin *v20; // rax
  proto::Vector *v21; // r14
  const proto::VectorBin *v22; // rax
  proto::Vector *v23; // r14
  const proto::VectorBin *v24; // rax
  google::protobuf::uint32 v25; // eax
  google::protobuf::uint32 v26; // eax
  google::protobuf::RepeatedField<int> *v27; // r14
  const google::protobuf::RepeatedField<int> *v28; // rax
  proto::Vector *v29; // r14
  const proto::VectorBin *v30; // rax
  proto::HomeFurnitureData *v31; // r14
  const proto::HomeFurnitureBin *v32; // rax
  google::protobuf::uint32 v33; // edx
  google::protobuf::RepeatedPtrField<proto::HomeBlockBin>::const_iterator __for_begin; // [rsp+10h] [rbp-1D0h] BYREF
  google::protobuf::RepeatedPtrField<proto::HomeBlockBin>::const_iterator __for_end; // [rsp+18h] [rbp-1C8h] BYREF
  google::protobuf::RepeatedPtrField<proto::HomeBlockFieldBin>::const_iterator __for_begin_1; // [rsp+20h] [rbp-1C0h] BYREF
  google::protobuf::RepeatedPtrField<proto::HomeBlockFieldBin>::const_iterator __for_end_1; // [rsp+28h] [rbp-1B8h] BYREF
  google::protobuf::RepeatedPtrField<proto::HomeFurnitureBin>::const_iterator __for_begin_0; // [rsp+30h] [rbp-1B0h] BYREF
  google::protobuf::RepeatedPtrField<proto::HomeFurnitureBin>::const_iterator __for_end_0; // [rsp+38h] [rbp-1A8h] BYREF
  const proto::HomeSceneBin *scene_bin; // [rsp+40h] [rbp-1A0h]
  const google::protobuf::RepeatedPtrField<proto::HomeBlockBin> *__for_range; // [rsp+48h] [rbp-198h]
  const google::protobuf::RepeatedPtrField<proto::HomeFurnitureBin> *__for_range_8; // [rsp+50h] [rbp-190h]
  const google::protobuf::RepeatedPtrField<proto::HomeFurnitureBin> *__for_range_9; // [rsp+58h] [rbp-188h]
  const proto::HomeFurnitureBin *stair_bin; // [rsp+60h] [rbp-180h]
  proto::HomeFurnitureData *stair_info; // [rsp+68h] [rbp-178h]
  const proto::HomeFurnitureBin *door_bin; // [rsp+70h] [rbp-170h]
  proto::HomeFurnitureData *door_info; // [rsp+78h] [rbp-168h]
  const proto::HomeBlockBin *block_bin; // [rsp+80h] [rbp-160h]
  proto::HomeBlockArrangementInfo *block_arrangement_info; // [rsp+88h] [rbp-158h]
  const google::protobuf::RepeatedPtrField<proto::HomeFurnitureBin> *__for_range_0; // [rsp+90h] [rbp-150h]
  const google::protobuf::RepeatedPtrField<proto::HomeFurnitureBin> *__for_range_1; // [rsp+98h] [rbp-148h]
  const google::protobuf::RepeatedPtrField<proto::HomeFurnitureSuiteBin> *__for_range_2; // [rsp+A0h] [rbp-140h]
  const google::protobuf::RepeatedPtrField<proto::HomeBlockFieldBin> *__for_range_3; // [rsp+A8h] [rbp-138h]
  const google::protobuf::RepeatedPtrField<proto::HomeFurnitureGroupBin> *__for_range_5; // [rsp+B0h] [rbp-130h]
  const google::protobuf::RepeatedPtrField<proto::HomeFurnitureCustomSuiteBin> *__for_range_7; // [rsp+B8h] [rbp-128h]
  const proto::HomeFurnitureCustomSuiteBin *furniture_custom_suite_bin; // [rsp+C0h] [rbp-120h]
  proto::HomeFurnitureCustomSuiteData *furniture_custom_suite_info; // [rsp+C8h] [rbp-118h]
  const proto::HomeFurnitureGroupBin *furniture_group_bin; // [rsp+D0h] [rbp-110h]
  proto::HomeFurnitureGroupData *furniture_group_info; // [rsp+D8h] [rbp-108h]
  const google::protobuf::RepeatedPtrField<proto::HomeFurnitureBin> *__for_range_6; // [rsp+E0h] [rbp-100h]
  const proto::HomeFurnitureBin *furniture_bin_1; // [rsp+E8h] [rbp-F8h]
  proto::HomeFurnitureData *furniture_info_1; // [rsp+F0h] [rbp-F0h]
  const proto::HomeBlockFieldBin *field_bin; // [rsp+F8h] [rbp-E8h]
  proto::HomeBlockFieldData *field_info; // [rsp+100h] [rbp-E0h]
  const google::protobuf::RepeatedPtrField<proto::HomeBlockSubFieldBin> *__for_range_4; // [rsp+108h] [rbp-D8h]
  const proto::HomeBlockSubFieldBin *sub_field_bin; // [rsp+110h] [rbp-D0h]
  proto::HomeBlockSubFieldData *sub_field_info; // [rsp+118h] [rbp-C8h]
  const proto::HomeFurnitureSuiteBin *furniture_suite_bin; // [rsp+120h] [rbp-C0h]
  proto::HomeFurnitureSuiteData *furniture_suite_info; // [rsp+128h] [rbp-B8h]
  const proto::HomeFurnitureBin *furniture_bin_0; // [rsp+130h] [rbp-B0h]
  proto::HomeFurnitureData *furniture_info_0; // [rsp+138h] [rbp-A8h]
  const proto::HomeFurnitureBin *furniture_bin; // [rsp+140h] [rbp-A0h]
  proto::HomeFurnitureData *furniture_info; // [rsp+148h] [rbp-98h]
  char v74[144]; // [rsp+150h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v74;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 28 convertVectorBinToClient:166 64 8 31 convertFurnitureBinToClient:172";
  *(_QWORD *)(v2 + 16) = HomeBlueprintComp::convertDetailRedisDataToClient;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -202116352;
  *(_QWORD *)(v2 + 64) = v2 + 48;
  scene_bin = proto::HomeBlueprintDetailRedisData::scene_bin(redis_data);
  v5 = proto::HomeSceneBin::scene_id(scene_bin);
  proto::HomeSceneArrangementInfo::set_scene_id(proto_info, v5);
  __for_range = proto::HomeSceneBin::block_bin_list(scene_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::HomeBlockBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::HomeBlockBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeBlockBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    block_bin = google::protobuf::internal::RepeatedPtrIterator<proto::HomeBlockBin const>::operator*(&__for_begin);
    block_arrangement_info = proto::HomeSceneArrangementInfo::add_block_arrangement_info_list(proto_info);
    v6 = proto::HomeBlockBin::block_id(block_bin);
    proto::HomeBlockArrangementInfo::set_block_id(block_arrangement_info, v6);
    is_unlocked = proto::HomeBlockBin::is_unlocked(block_bin);
    proto::HomeBlockArrangementInfo::set_is_unlocked(block_arrangement_info, is_unlocked);
    __for_range_0 = proto::HomeBlockBin::persistent_furniture_list(block_bin);
    __for_begin_0.it_ = google::protobuf::RepeatedPtrField<proto::HomeFurnitureBin>::begin(__for_range_0).it_;
    __for_end_0.it_ = google::protobuf::RepeatedPtrField<proto::HomeFurnitureBin>::end(__for_range_0).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeFurnitureBin const>::operator!=(
              &__for_begin_0,
              &__for_end_0) )
    {
      furniture_bin = google::protobuf::internal::RepeatedPtrIterator<proto::HomeFurnitureBin const>::operator*(&__for_begin_0);
      furniture_info = proto::HomeBlockArrangementInfo::add_persistent_furniture_list(block_arrangement_info);
      HomeBlueprintComp::convertDetailRedisDataToClient(proto::HomeBlueprintDetailRedisData const&,proto::HomeSceneArrangementInfo &)::{lambda(proto::HomeFurnitureBin const&,proto::HomeFurnitureData &)#2}::operator()(
        (const HomeBlueprintComp::convertDetailRedisDataToClient::<lambda(const proto::HomeFurnitureBin&, proto::HomeFurnitureData&)> *const)(v2 + 64),
        furniture_bin,
        furniture_info);
      google::protobuf::internal::RepeatedPtrIterator<proto::HomeFurnitureBin const>::operator++(&__for_begin_0);
    }
    __for_range_1 = proto::HomeBlockBin::deploy_furniure_list(block_bin);
    __for_begin_0.it_ = google::protobuf::RepeatedPtrField<proto::HomeFurnitureBin>::begin(__for_range_1).it_;
    __for_end_0.it_ = google::protobuf::RepeatedPtrField<proto::HomeFurnitureBin>::end(__for_range_1).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeFurnitureBin const>::operator!=(
              &__for_begin_0,
              &__for_end_0) )
    {
      furniture_bin_0 = google::protobuf::internal::RepeatedPtrIterator<proto::HomeFurnitureBin const>::operator*(&__for_begin_0);
      furniture_info_0 = proto::HomeBlockArrangementInfo::add_deploy_furniure_list(block_arrangement_info);
      HomeBlueprintComp::convertDetailRedisDataToClient(proto::HomeBlueprintDetailRedisData const&,proto::HomeSceneArrangementInfo &)::{lambda(proto::HomeFurnitureBin const&,proto::HomeFurnitureData &)#2}::operator()(
        (const HomeBlueprintComp::convertDetailRedisDataToClient::<lambda(const proto::HomeFurnitureBin&, proto::HomeFurnitureData&)> *const)(v2 + 64),
        furniture_bin_0,
        furniture_info_0);
      google::protobuf::internal::RepeatedPtrIterator<proto::HomeFurnitureBin const>::operator++(&__for_begin_0);
    }
    __for_range_2 = proto::HomeBlockBin::furniture_suite_list(block_bin);
    __for_begin_0.it_ = google::protobuf::RepeatedPtrField<proto::HomeFurnitureSuiteBin>::begin(__for_range_2).it_;
    __for_end_0.it_ = google::protobuf::RepeatedPtrField<proto::HomeFurnitureSuiteBin>::end(__for_range_2).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeFurnitureSuiteBin const>::operator!=(
              (const google::protobuf::internal::RepeatedPtrIterator<const proto::HomeFurnitureSuiteBin> *const)&__for_begin_0,
              (const google::protobuf::internal::RepeatedPtrIterator<const proto::HomeFurnitureSuiteBin>::iterator *)&__for_end_0) )
    {
      furniture_suite_bin = google::protobuf::internal::RepeatedPtrIterator<proto::HomeFurnitureSuiteBin const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::HomeFurnitureSuiteBin> *const)&__for_begin_0);
      furniture_suite_info = proto::HomeBlockArrangementInfo::add_furniture_suite_list(block_arrangement_info);
      v8 = proto::HomeFurnitureSuiteBin::suite_id(furniture_suite_bin);
      proto::HomeFurnitureSuiteData::set_suite_id(furniture_suite_info, v8);
      v9 = proto::HomeFurnitureSuiteData::mutable_spawn_pos(furniture_suite_info);
      v10 = proto::HomeFurnitureSuiteBin::spawn_pos(furniture_suite_bin);
      HomeBlueprintComp::convertDetailRedisDataToClient(proto::HomeBlueprintDetailRedisData const&,proto::HomeSceneArrangementInfo &)::{lambda(proto::VectorBin const&,proto::Vector &)#1}::operator()(
        (const HomeBlueprintComp::convertDetailRedisDataToClient::<lambda(const proto::VectorBin&, proto::Vector&)> *const)(v2 + 48),
        v10,
        v9);
      v11 = proto::HomeFurnitureSuiteData::mutable_included_furniture_index_list(furniture_suite_info);
      v12 = proto::HomeFurnitureSuiteBin::included_furniture_index_list(furniture_suite_bin);
      google::protobuf::RepeatedField<int>::CopyFrom(v11, v12);
      v13 = proto::HomeFurnitureSuiteBin::guid(furniture_suite_bin);
      proto::HomeFurnitureSuiteData::set_guid(furniture_suite_info, v13);
      is_allow_summon = proto::HomeFurnitureSuiteBin::is_allow_summon(furniture_suite_bin);
      proto::HomeFurnitureSuiteData::set_is_allow_summon(furniture_suite_info, is_allow_summon);
      google::protobuf::internal::RepeatedPtrIterator<proto::HomeFurnitureSuiteBin const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::HomeFurnitureSuiteBin> *const)&__for_begin_0);
    }
    __for_range_3 = proto::HomeBlockBin::deploy_field_list(block_bin);
    __for_begin_1.it_ = google::protobuf::RepeatedPtrField<proto::HomeBlockFieldBin>::begin(__for_range_3).it_;
    __for_end_1.it_ = google::protobuf::RepeatedPtrField<proto::HomeBlockFieldBin>::end(__for_range_3).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeBlockFieldBin const>::operator!=(
              &__for_begin_1,
              &__for_end_1) )
    {
      field_bin = google::protobuf::internal::RepeatedPtrIterator<proto::HomeBlockFieldBin const>::operator*(&__for_begin_1);
      field_info = proto::HomeBlockArrangementInfo::add_field_list(block_arrangement_info);
      v15 = proto::HomeBlockFieldBin::guid(field_bin);
      proto::HomeBlockFieldData::set_guid(field_info, v15);
      v16 = proto::HomeBlockFieldBin::furniture_id(field_bin);
      proto::HomeBlockFieldData::set_furniture_id(field_info, v16);
      v17 = proto::HomeBlockFieldData::mutable_pos(field_info);
      v18 = proto::HomeBlockFieldBin::spawn_pos(field_bin);
      HomeBlueprintComp::convertDetailRedisDataToClient(proto::HomeBlueprintDetailRedisData const&,proto::HomeSceneArrangementInfo &)::{lambda(proto::VectorBin const&,proto::Vector &)#1}::operator()(
        (const HomeBlueprintComp::convertDetailRedisDataToClient::<lambda(const proto::VectorBin&, proto::Vector&)> *const)(v2 + 48),
        v18,
        v17);
      v19 = proto::HomeBlockFieldData::mutable_rot(field_info);
      v20 = proto::HomeBlockFieldBin::spawn_rot(field_bin);
      HomeBlueprintComp::convertDetailRedisDataToClient(proto::HomeBlueprintDetailRedisData const&,proto::HomeSceneArrangementInfo &)::{lambda(proto::VectorBin const&,proto::Vector &)#1}::operator()(
        (const HomeBlueprintComp::convertDetailRedisDataToClient::<lambda(const proto::VectorBin&, proto::Vector&)> *const)(v2 + 48),
        v20,
        v19);
      __for_range_4 = proto::HomeBlockFieldBin::sub_field_list(field_bin);
      __for_begin_0.it_ = google::protobuf::RepeatedPtrField<proto::HomeBlockSubFieldBin>::begin(__for_range_4).it_;
      __for_end_0.it_ = google::protobuf::RepeatedPtrField<proto::HomeBlockSubFieldBin>::end(__for_range_4).it_;
      while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeBlockSubFieldBin const>::operator!=(
                (const google::protobuf::internal::RepeatedPtrIterator<const proto::HomeBlockSubFieldBin> *const)&__for_begin_0,
                (const google::protobuf::internal::RepeatedPtrIterator<const proto::HomeBlockSubFieldBin>::iterator *)&__for_end_0) )
      {
        sub_field_bin = google::protobuf::internal::RepeatedPtrIterator<proto::HomeBlockSubFieldBin const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::HomeBlockSubFieldBin> *const)&__for_begin_0);
        sub_field_info = proto::HomeBlockFieldData::add_sub_field_list(field_info);
        v21 = proto::HomeBlockSubFieldData::mutable_pos(sub_field_info);
        v22 = proto::HomeBlockSubFieldBin::spawn_pos(sub_field_bin);
        HomeBlueprintComp::convertDetailRedisDataToClient(proto::HomeBlueprintDetailRedisData const&,proto::HomeSceneArrangementInfo &)::{lambda(proto::VectorBin const&,proto::Vector &)#1}::operator()(
          (const HomeBlueprintComp::convertDetailRedisDataToClient::<lambda(const proto::VectorBin&, proto::Vector&)> *const)(v2 + 48),
          v22,
          v21);
        v23 = proto::HomeBlockSubFieldData::mutable_rot(sub_field_info);
        v24 = proto::HomeBlockSubFieldBin::spawn_rot(sub_field_bin);
        HomeBlueprintComp::convertDetailRedisDataToClient(proto::HomeBlueprintDetailRedisData const&,proto::HomeSceneArrangementInfo &)::{lambda(proto::VectorBin const&,proto::Vector &)#1}::operator()(
          (const HomeBlueprintComp::convertDetailRedisDataToClient::<lambda(const proto::VectorBin&, proto::Vector&)> *const)(v2 + 48),
          v24,
          v23);
        google::protobuf::internal::RepeatedPtrIterator<proto::HomeBlockSubFieldBin const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::HomeBlockSubFieldBin> *const)&__for_begin_0);
      }
      google::protobuf::internal::RepeatedPtrIterator<proto::HomeBlockFieldBin const>::operator++(&__for_begin_1);
    }
    __for_range_5 = proto::HomeBlockBin::deploy_furniture_group_list(block_bin);
    __for_begin_1.it_ = google::protobuf::RepeatedPtrField<proto::HomeFurnitureGroupBin>::begin(__for_range_5).it_;
    __for_end_1.it_ = google::protobuf::RepeatedPtrField<proto::HomeFurnitureGroupBin>::end(__for_range_5).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeFurnitureGroupBin const>::operator!=(
              (const google::protobuf::internal::RepeatedPtrIterator<const proto::HomeFurnitureGroupBin> *const)&__for_begin_1,
              (const google::protobuf::internal::RepeatedPtrIterator<const proto::HomeFurnitureGroupBin>::iterator *)&__for_end_1) )
    {
      furniture_group_bin = google::protobuf::internal::RepeatedPtrIterator<proto::HomeFurnitureGroupBin const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::HomeFurnitureGroupBin> *const)&__for_begin_1);
      furniture_group_info = proto::HomeBlockArrangementInfo::add_furniture_group_list(block_arrangement_info);
      v25 = proto::HomeFurnitureGroupBin::group_furniture_index(furniture_group_bin);
      proto::HomeFurnitureGroupData::set_group_furniture_index(furniture_group_info, v25);
      __for_range_6 = proto::HomeFurnitureGroupBin::virtual_furniure_list(furniture_group_bin);
      __for_begin_0.it_ = google::protobuf::RepeatedPtrField<proto::HomeFurnitureBin>::begin(__for_range_6).it_;
      __for_end_0.it_ = google::protobuf::RepeatedPtrField<proto::HomeFurnitureBin>::end(__for_range_6).it_;
      while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeFurnitureBin const>::operator!=(
                &__for_begin_0,
                &__for_end_0) )
      {
        furniture_bin_1 = google::protobuf::internal::RepeatedPtrIterator<proto::HomeFurnitureBin const>::operator*(&__for_begin_0);
        furniture_info_1 = proto::HomeFurnitureGroupData::add_virtual_furniure_list(furniture_group_info);
        HomeBlueprintComp::convertDetailRedisDataToClient(proto::HomeBlueprintDetailRedisData const&,proto::HomeSceneArrangementInfo &)::{lambda(proto::HomeFurnitureBin const&,proto::HomeFurnitureData &)#2}::operator()(
          (const HomeBlueprintComp::convertDetailRedisDataToClient::<lambda(const proto::HomeFurnitureBin&, proto::HomeFurnitureData&)> *const)(v2 + 64),
          furniture_bin_1,
          furniture_info_1);
        google::protobuf::internal::RepeatedPtrIterator<proto::HomeFurnitureBin const>::operator++(&__for_begin_0);
      }
      google::protobuf::internal::RepeatedPtrIterator<proto::HomeFurnitureGroupBin const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::HomeFurnitureGroupBin> *const)&__for_begin_1);
    }
    __for_range_7 = proto::HomeBlockBin::furniture_custom_suite_list(block_bin);
    __for_begin_0.it_ = google::protobuf::RepeatedPtrField<proto::HomeFurnitureCustomSuiteBin>::begin(__for_range_7).it_;
    __for_end_0.it_ = google::protobuf::RepeatedPtrField<proto::HomeFurnitureCustomSuiteBin>::end(__for_range_7).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeFurnitureCustomSuiteBin const>::operator!=(
              (const google::protobuf::internal::RepeatedPtrIterator<const proto::HomeFurnitureCustomSuiteBin> *const)&__for_begin_0,
              (const google::protobuf::internal::RepeatedPtrIterator<const proto::HomeFurnitureCustomSuiteBin>::iterator *)&__for_end_0) )
    {
      furniture_custom_suite_bin = google::protobuf::internal::RepeatedPtrIterator<proto::HomeFurnitureCustomSuiteBin const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::HomeFurnitureCustomSuiteBin> *const)&__for_begin_0);
      furniture_custom_suite_info = proto::HomeBlockArrangementInfo::add_furniture_custom_suite_list(block_arrangement_info);
      v26 = proto::HomeFurnitureCustomSuiteBin::guid(furniture_custom_suite_bin);
      proto::HomeFurnitureCustomSuiteData::set_guid(furniture_custom_suite_info, v26);
      v27 = proto::HomeFurnitureCustomSuiteData::mutable_included_furniture_index_list(furniture_custom_suite_info);
      v28 = proto::HomeFurnitureCustomSuiteBin::included_furniture_index_list(furniture_custom_suite_bin);
      google::protobuf::RepeatedField<int>::CopyFrom(v27, v28);
      v29 = proto::HomeFurnitureCustomSuiteData::mutable_spawn_pos(furniture_custom_suite_info);
      v30 = proto::HomeFurnitureCustomSuiteBin::spawn_pos(furniture_custom_suite_bin);
      HomeBlueprintComp::convertDetailRedisDataToClient(proto::HomeBlueprintDetailRedisData const&,proto::HomeSceneArrangementInfo &)::{lambda(proto::VectorBin const&,proto::Vector &)#1}::operator()(
        (const HomeBlueprintComp::convertDetailRedisDataToClient::<lambda(const proto::VectorBin&, proto::Vector&)> *const)(v2 + 48),
        v30,
        v29);
      google::protobuf::internal::RepeatedPtrIterator<proto::HomeFurnitureCustomSuiteBin const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::HomeFurnitureCustomSuiteBin> *const)&__for_begin_0);
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::HomeBlockBin const>::operator++(&__for_begin);
  }
  __for_range_8 = proto::HomeSceneBin::door_list(scene_bin);
  __for_begin_0.it_ = google::protobuf::RepeatedPtrField<proto::HomeFurnitureBin>::begin(__for_range_8).it_;
  __for_end_0.it_ = google::protobuf::RepeatedPtrField<proto::HomeFurnitureBin>::end(__for_range_8).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeFurnitureBin const>::operator!=(
            &__for_begin_0,
            &__for_end_0) )
  {
    door_bin = google::protobuf::internal::RepeatedPtrIterator<proto::HomeFurnitureBin const>::operator*(&__for_begin_0);
    door_info = proto::HomeSceneArrangementInfo::add_door_list(proto_info);
    HomeBlueprintComp::convertDetailRedisDataToClient(proto::HomeBlueprintDetailRedisData const&,proto::HomeSceneArrangementInfo &)::{lambda(proto::HomeFurnitureBin const&,proto::HomeFurnitureData &)#2}::operator()(
      (const HomeBlueprintComp::convertDetailRedisDataToClient::<lambda(const proto::HomeFurnitureBin&, proto::HomeFurnitureData&)> *const)(v2 + 64),
      door_bin,
      door_info);
    google::protobuf::internal::RepeatedPtrIterator<proto::HomeFurnitureBin const>::operator++(&__for_begin_0);
  }
  __for_range_9 = proto::HomeSceneBin::stair_list(scene_bin);
  __for_begin_0.it_ = google::protobuf::RepeatedPtrField<proto::HomeFurnitureBin>::begin(__for_range_9).it_;
  __for_end_0.it_ = google::protobuf::RepeatedPtrField<proto::HomeFurnitureBin>::end(__for_range_9).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeFurnitureBin const>::operator!=(
            &__for_begin_0,
            &__for_end_0) )
  {
    stair_bin = google::protobuf::internal::RepeatedPtrIterator<proto::HomeFurnitureBin const>::operator*(&__for_begin_0);
    stair_info = proto::HomeSceneArrangementInfo::add_stair_list(proto_info);
    HomeBlueprintComp::convertDetailRedisDataToClient(proto::HomeBlueprintDetailRedisData const&,proto::HomeSceneArrangementInfo &)::{lambda(proto::HomeFurnitureBin const&,proto::HomeFurnitureData &)#2}::operator()(
      (const HomeBlueprintComp::convertDetailRedisDataToClient::<lambda(const proto::HomeFurnitureBin&, proto::HomeFurnitureData&)> *const)(v2 + 64),
      stair_bin,
      stair_info);
    google::protobuf::internal::RepeatedPtrIterator<proto::HomeFurnitureBin const>::operator++(&__for_begin_0);
  }
  v31 = proto::HomeSceneArrangementInfo::mutable_main_house(proto_info);
  v32 = proto::HomeSceneBin::main_house(scene_bin);
  HomeBlueprintComp::convertDetailRedisDataToClient(proto::HomeBlueprintDetailRedisData const&,proto::HomeSceneArrangementInfo &)::{lambda(proto::HomeFurnitureBin const&,proto::HomeFurnitureData &)#2}::operator()(
    (const HomeBlueprintComp::convertDetailRedisDataToClient::<lambda(const proto::HomeFurnitureBin&, proto::HomeFurnitureData&)> *const)(v2 + 64),
    v32,
    v31);
  v33 = proto::HomeSceneBin::tmp_version(scene_bin);
  proto::HomeSceneArrangementInfo::set_tmp_version(proto_info, v33);
  if ( v74 == (char *)v2 )
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

// Line 166: range 00000000145B9A90-00000000145B9AEE
void __cdecl HomeBlueprintComp::convertDetailRedisDataToClient(proto::HomeBlueprintDetailRedisData const&,proto::HomeSceneArrangementInfo &)::{lambda(proto::VectorBin const&,proto::Vector &)#1}::operator()(
        const HomeBlueprintComp::convertDetailRedisDataToClient::<lambda(const proto::VectorBin&, proto::Vector&)> *const __closure,
        const proto::VectorBin *bin,
        proto::Vector *client)
{
  float v3; // xmm0_4
  float v4; // xmm0_4
  float v5; // xmm0_4

  v3 = proto::VectorBin::x(bin);
  proto::Vector::set_x(client, v3);
  v4 = proto::VectorBin::y(bin);
  proto::Vector::set_y(client, v4);
  v5 = proto::VectorBin::z(bin);
  proto::Vector::set_z(client, v5);
};

// Line 172: range 00000000145B9AF0-00000000145B9C22
void __cdecl HomeBlueprintComp::convertDetailRedisDataToClient(proto::HomeBlueprintDetailRedisData const&,proto::HomeSceneArrangementInfo &)::{lambda(proto::HomeFurnitureBin const&,proto::HomeFurnitureData &)#2}::operator()(
        const HomeBlueprintComp::convertDetailRedisDataToClient::<lambda(const proto::HomeFurnitureBin&, proto::HomeFurnitureData&)> *const __closure,
        const proto::HomeFurnitureBin *bin,
        proto::HomeFurnitureData *client)
{
  google::protobuf::uint32 v3; // edx
  HomeBlueprintComp::convertDetailRedisDataToClient::<lambda(const proto::VectorBin&, proto::Vector&)> *convertVectorBinToClient; // rbx
  proto::Vector *v5; // r12
  const proto::VectorBin *v6; // rax
  HomeBlueprintComp::convertDetailRedisDataToClient::<lambda(const proto::VectorBin&, proto::Vector&)> *v7; // rbx
  proto::Vector *v8; // r12
  const proto::VectorBin *v9; // rax
  google::protobuf::int32 v10; // edx
  google::protobuf::uint32 v11; // edx
  google::protobuf::uint32 v12; // edx

  v3 = proto::HomeFurnitureBin::furniture_id(bin);
  proto::HomeFurnitureData::set_furniture_id(client, v3);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  convertVectorBinToClient = __closure->__convertVectorBinToClient;
  v5 = proto::HomeFurnitureData::mutable_spawn_pos(client);
  v6 = proto::HomeFurnitureBin::spawn_pos(bin);
  HomeBlueprintComp::convertDetailRedisDataToClient(proto::HomeBlueprintDetailRedisData const&,proto::HomeSceneArrangementInfo &)::{lambda(proto::VectorBin const&,proto::Vector &)#1}::operator()(
    convertVectorBinToClient,
    v6,
    v5);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v7 = __closure->__convertVectorBinToClient;
  v8 = proto::HomeFurnitureData::mutable_spawn_rot(client);
  v9 = proto::HomeFurnitureBin::spawn_rot(bin);
  HomeBlueprintComp::convertDetailRedisDataToClient(proto::HomeBlueprintDetailRedisData const&,proto::HomeSceneArrangementInfo &)::{lambda(proto::VectorBin const&,proto::Vector &)#1}::operator()(
    v7,
    v9,
    v8);
  v10 = proto::HomeFurnitureBin::parent_furniture_index(bin);
  proto::HomeFurnitureData::set_parent_furniture_index(client, v10);
  v11 = proto::HomeFurnitureBin::guid(bin);
  proto::HomeFurnitureData::set_guid(client, v11);
  v12 = proto::HomeFurnitureBin::version(bin);
  proto::HomeFurnitureData::set_version(client, v12);
};

// Line 264: range 00000000145BA7EA-00000000145BA96F
void __cdecl HomeBlueprintComp::notifyBlueprintInfo(HomeBlueprintComp *const this, Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 10 notify:265";
  *(_QWORD *)(v2 + 16) = HomeBlueprintComp::notifyBlueprintInfo;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  proto::HomeBlueprintInfoNotify::HomeBlueprintInfoNotify((proto::HomeBlueprintInfoNotify *const)(v2 + 32));
  if ( *(char *)(((unsigned __int64)&this->is_allow_friend_copy_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_allow_friend_copy_);
  proto::HomeBlueprintInfoNotify::set_is_allow_friend_copy(
    (proto::HomeBlueprintInfoNotify *const)(v2 + 32),
    this->is_allow_friend_copy_);
  Player::sendProto(player, (const google::protobuf::Message *)(v2 + 32));
  proto::HomeBlueprintInfoNotify::~HomeBlueprintInfoNotify((proto::HomeBlueprintInfoNotify *const)(v2 + 32));
  if ( v5 == (char *)v2 )
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

// Line 271: range 00000000145BA970-00000000145BAB1F
void __cdecl HomeBlueprintComp::notifyBlueprintInfoToAll(HomeBlueprintComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  char v4[128]; // [rsp+10h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v4;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 24 10 notify:272";
  *(_QWORD *)(v1 + 16) = HomeBlueprintComp::notifyBlueprintInfoToAll;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218103808;
  v3[536862722] = -202116109;
  proto::HomeBlueprintInfoNotify::HomeBlueprintInfoNotify((proto::HomeBlueprintInfoNotify *const)(v1 + 32));
  if ( *(char *)(((unsigned __int64)&this->is_allow_friend_copy_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_allow_friend_copy_);
  proto::HomeBlueprintInfoNotify::set_is_allow_friend_copy(
    (proto::HomeBlueprintInfoNotify *const)(v1 + 32),
    this->is_allow_friend_copy_);
  if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Home::notifyAllPlayer<proto::HomeBlueprintInfoNotify>(
    this->home_,
    (const proto::HomeBlueprintInfoNotify *)(v1 + 32),
    0);
  proto::HomeBlueprintInfoNotify::~HomeBlueprintInfoNotify((proto::HomeBlueprintInfoNotify *const)(v1 + 32));
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

// Line 278: range 00000000145BAB20-00000000145BAB3A
void __cdecl HomeBlueprintComp::onEditModeChange(HomeBlueprintComp *const this)
{
  HomeBlueprintComp::clearPreviewRecord(this);
};

// Line 283: range 00000000145BAB3C-00000000145BB7D4
int32_t __cdecl HomeBlueprintComp::onPreviewBlueprintReq(HomeBlueprintComp *const this, const std::string *share_code)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  uint32_t last_preview_blueprint_time; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  int32_t v7; // r14d
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  Player *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  Player *v15; // rax
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  HomeSceneComp *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  Player *v38; // rax
  common::milog::MiLogStream *v39; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rax
  int v41; // eax
  int32_t result; // eax
  unsigned int val; // [rsp+14h] [rbp-14Ch] BYREF
  uint32_t share_owner_uid; // [rsp+18h] [rbp-148h]
  uint32_t now; // [rsp+1Ch] [rbp-144h]
  const PlayerHomeComp *player_home_comp; // [rsp+20h] [rbp-140h]
  const HomeBlueprintBriefData *brief_data_ptr; // [rsp+28h] [rbp-138h]
  common::milog::MiLogStream v48; // [rsp+30h] [rbp-130h] BYREF
  char v49[272]; // [rsp+50h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v49;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 4 21 preview_module_id:304 64 4 20 preview_scene_id:305 80 4 20 preview_block_id:306 96 4 1"
                        "6 cur_scene_id:329 112 4 17 cur_module_id:339 128 16 14 player_ptr:297 160 32 14 server_req:356";
  *(_QWORD *)(v2 + 16) = HomeBlueprintComp::onPreviewBlueprintReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862723] = -234556924;
  v4[536862724] = -219021312;
  v4[536862726] = -202116109;
  now = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&this->last_preview_blueprint_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_preview_blueprint_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  last_preview_blueprint_time = this->last_preview_blueprint_time_;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 128));
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
  LOBYTE(last_preview_blueprint_time) = now < last_preview_blueprint_time
                                            + ConstValueExcelConfigMgr::getHomeBlueprintPreviewCD(&v6->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 128));
  if ( (_BYTE)last_preview_blueprint_time )
  {
    v7 = 9814;
    goto LABEL_53;
  }
  if ( (unsigned __int8)std::string::empty(share_code) )
  {
    common::milog::MiLogStream::create(
      &v48,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/home/home_blueprint/home_blueprint_comp.cpp",
      "onPreviewBlueprintReq",
      292);
    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
      &v48,
      (const char (*)[37])"[HOME_BLUEPRINT] share_code is empty");
    common::milog::MiLogStream::~MiLogStream(&v48);
    v7 = -1;
    goto LABEL_53;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Home::findOwnerPlayer((Home *const)(v2 + 128));
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 128)) )
  {
    common::milog::MiLogStream::create(
      &v48,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/home/home_blueprint/home_blueprint_comp.cpp",
      "onPreviewBlueprintReq",
      300);
    v8 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
           &v48,
           (const char (*)[51])"[HOME_BLUEPRINT] findOwnerPlayer failed, home_uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Home::getHomeUid(this->home_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v48);
    v7 = -1;
    goto LABEL_52;
  }
  *(_DWORD *)(v2 + 48) = 0;
  *(_DWORD *)(v2 + 64) = 0;
  *(_DWORD *)(v2 + 80) = 0;
  v9 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
  share_owner_uid = Player::getUid(v9);
  v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
  player_home_comp = Player::getHomeComp(v10);
  if ( std::operator==<char>(share_code, &this->last_search_data_.share_code) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->last_search_data_.module_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_search_data_.module_id >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 48) = this->last_search_data_.module_id;
    if ( *(_BYTE *)(((unsigned __int64)&this->last_search_data_.scene_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->last_search_data_.scene_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 64) = this->last_search_data_.scene_id;
    if ( *(_BYTE *)(((unsigned __int64)&this->last_search_data_.block_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_search_data_.block_id >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 80) = this->last_search_data_.block_id;
    if ( *(_BYTE *)(((unsigned __int64)&this->last_search_data_.owner_uid >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->last_search_data_.owner_uid >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    share_owner_uid = this->last_search_data_.owner_uid;
  }
  else
  {
    brief_data_ptr = PlayerHomeComp::getHomeBlueprintBriefData(player_home_comp, share_code);
    if ( !brief_data_ptr )
    {
      common::milog::MiLogStream::create(
        &v48,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/home/home_blueprint/home_blueprint_comp.cpp",
        "onPreviewBlueprintReq",
        321);
      v11 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
              &v48,
              (const char (*)[63])"[HOME_BLUEPRINT] getHomeBlueprintBriefData failed, share_code:");
      v12 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, share_code);
      v13 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v12, (const char (*)[6])" uid:");
      v14 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      val = Player::getUid(v14);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v48);
      v7 = 9805;
      goto LABEL_52;
    }
    if ( *(_BYTE *)(((unsigned __int64)&brief_data_ptr->module_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&brief_data_ptr->module_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 48) = brief_data_ptr->module_id;
    if ( *(_BYTE *)(((unsigned __int64)&brief_data_ptr->scene_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)brief_data_ptr + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&brief_data_ptr->scene_id >> 3)
                                                                    + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 64) = brief_data_ptr->scene_id;
    if ( *(_BYTE *)(((unsigned __int64)&brief_data_ptr->block_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&brief_data_ptr->block_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 80) = brief_data_ptr->block_id;
  }
  v15 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
  SceneComp = Player::getSceneComp(v15);
  *(_DWORD *)(v2 + 96) = PlayerSceneComp::getCurSceneId(SceneComp);
  if ( *(_DWORD *)(v2 + 96) == *(_DWORD *)(v2 + 64) )
  {
    if ( *(_DWORD *)(v2 + 80) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      *(_DWORD *)(v2 + 112) = Home::getCurModuleId(this->home_);
      if ( *(_DWORD *)(v2 + 112) != *(_DWORD *)(v2 + 48) )
      {
        common::milog::MiLogStream::create(
          &v48,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/home/home_blueprint/home_blueprint_comp.cpp",
          "onPreviewBlueprintReq",
          342);
        v23 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                &v48,
                (const char (*)[36])"[HOME_BLUEPRINT] preview_module_id:");
        v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v23,
                (const unsigned int *)(v2 + 48));
        v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                v24,
                (const char (*)[16])" cur_module_id:");
        v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v25,
                (const unsigned int *)(v2 + 112));
        v27 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v26, (const char (*)[6])" uid:");
        v28 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        val = Player::getUid(v28);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, &val);
        common::milog::MiLogStream::~MiLogStream(&v48);
        v7 = 9815;
        goto LABEL_52;
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v29 = Home::getSceneComp(this->home_);
      if ( !HomeSceneComp::isHomeBlockUnlocked(v29, *(_DWORD *)(v2 + 48), *(_DWORD *)(v2 + 64), *(_DWORD *)(v2 + 80)) )
      {
        common::milog::MiLogStream::create(
          &v48,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/home/home_blueprint/home_blueprint_comp.cpp",
          "onPreviewBlueprintReq",
          349);
        v30 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
                &v48,
                (const char (*)[58])"[HOME_BLUEPRINT] block is not unlocked. preview_block_id:");
        v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v30,
                (const unsigned int *)(v2 + 80));
        v32 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                v31,
                (const char (*)[19])" preview_scene_id:");
        v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v32,
                (const unsigned int *)(v2 + 64));
        v34 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                v33,
                (const char (*)[20])" preview_module_id:");
        v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v34,
                (const unsigned int *)(v2 + 48));
        v36 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v35, (const char (*)[6])" uid:");
        v37 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        val = Player::getUid(v37);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, &val);
        common::milog::MiLogStream::~MiLogStream(&v48);
        v7 = 9807;
        goto LABEL_52;
      }
    }
    proto::ServerHomeGetBlueprintDetailDataReq::ServerHomeGetBlueprintDetailDataReq((proto::ServerHomeGetBlueprintDetailDataReq *const)(v2 + 160));
    proto::ServerHomeGetBlueprintDetailDataReq::set_share_code(
      (proto::ServerHomeGetBlueprintDetailDataReq *const)(v2 + 160),
      share_code);
    proto::ServerHomeGetBlueprintDetailDataReq::set_share_owner_uid(
      (proto::ServerHomeGetBlueprintDetailDataReq *const)(v2 + 160),
      share_owner_uid);
    v38 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
    if ( sendProtoToActivityService<proto::ServerHomeGetBlueprintDetailDataReq>(
           v38,
           (proto::ServerHomeGetBlueprintDetailDataReq *)(v2 + 160)) )
    {
      common::milog::MiLogStream::create(
        &v48,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/home/home_blueprint/home_blueprint_comp.cpp",
        "onPreviewBlueprintReq",
        361);
      v39 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
              &v48,
              (const char (*)[57])"[HOME_BLUEPRINT] sendProtoToActivityService failed, uid:");
      v40 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      val = Player::getUid(v40);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, &val);
      common::milog::MiLogStream::~MiLogStream(&v48);
      v7 = -1;
    }
    else
    {
      v41 = *(unsigned __int8 *)(((unsigned __int64)&this->last_preview_blueprint_time_ >> 3) + 0x7FFF8000);
      if ( (_BYTE)v41 != 0 && (char)v41 <= 3 )
        __asan_report_store4(&this->last_preview_blueprint_time_);
      this->last_preview_blueprint_time_ = now;
      v7 = 0;
    }
    proto::ServerHomeGetBlueprintDetailDataReq::~ServerHomeGetBlueprintDetailDataReq((proto::ServerHomeGetBlueprintDetailDataReq *const)(v2 + 160));
    goto LABEL_52;
  }
  common::milog::MiLogStream::create(
    &v48,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/home/home_blueprint/home_blueprint_comp.cpp",
    "onPreviewBlueprintReq",
    332);
  v17 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
          &v48,
          (const char (*)[35])"[HOME_BLUEPRINT] preview_scene_id:");
  v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v2 + 64));
  v19 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v18, (const char (*)[15])" cur_scene_id:");
  v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v2 + 96));
  v21 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v20, (const char (*)[6])" uid:");
  v22 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
  val = Player::getUid(v22);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &val);
  common::milog::MiLogStream::~MiLogStream(&v48);
  v7 = 9815;
LABEL_52:
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 128));
LABEL_53:
  result = v7;
  if ( v49 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 371: range 00000000145BB7D6-00000000145BBC08
int32_t __cdecl HomeBlueprintComp::onServerHomeGetBlueprintDetailDataRsp(
        HomeBlueprintComp *const this,
        const proto::ServerHomeGetBlueprintDetailDataRsp *server_rsp)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // r14
  int32_t v6; // r14d
  const std::string *v7; // rax
  proto::HomeSceneArrangementInfo *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  Player *v13; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+14h] [rbp-FCh] BYREF
  const proto::HomeBlueprintDetailRedisData *detail_data; // [rsp+18h] [rbp-F8h]
  common::milog::MiLogStream v17; // [rsp+20h] [rbp-F0h] BYREF
  char v18[208]; // [rsp+40h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 11 retcode:379 48 16 14 player_ptr:372 80 40 7 rsp:380";
  *(_QWORD *)(v2 + 16) = HomeBlueprintComp::onServerHomeGetBlueprintDetailDataRsp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862722] = 62194;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Home::findOwnerPlayer((Home *const)(v2 + 48));
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/home/home_blueprint/home_blueprint_comp.cpp",
      "onServerHomeGetBlueprintDetailDataRsp",
      375);
    v5 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
           &v17,
           (const char (*)[51])"[HOME_BLUEPRINT] findOwnerPlayer failed, home_uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Home::getHomeUid(this->home_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v17);
    v6 = -1;
  }
  else
  {
    *(_DWORD *)(v2 + 32) = proto::ServerHomeGetBlueprintDetailDataRsp::retcode(server_rsp);
    proto::HomePreviewBlueprintRsp::HomePreviewBlueprintRsp((proto::HomePreviewBlueprintRsp *const)(v2 + 80));
    if ( *(_DWORD *)(v2 + 32) )
    {
      if ( *(_DWORD *)(v2 + 32) != 9803 )
      {
        common::milog::MiLogStream::create(
          &v17,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/home/home_blueprint/home_blueprint_comp.cpp",
          "onServerHomeGetBlueprintDetailDataRsp",
          390);
        v9 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
               &v17,
               (const char (*)[60])"[HOME_BLUEPRINT] get blueprint detail data failed, retcode:");
        v10 = common::milog::MiLogStream::operator<<<int,(int *)0>(v9, (const int *)(v2 + 32));
        v11 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v10, (const char (*)[6])" uid:");
        v12 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
        val = Player::getUid(v12);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
        common::milog::MiLogStream::~MiLogStream(&v17);
      }
    }
    else
    {
      detail_data = proto::ServerHomeGetBlueprintDetailDataRsp::detail_data(server_rsp);
      v7 = proto::HomeBlueprintDetailRedisData::share_code[abi:cxx11](detail_data);
      proto::HomePreviewBlueprintRsp::set_share_code((proto::HomePreviewBlueprintRsp *const)(v2 + 80), v7);
      v8 = proto::HomePreviewBlueprintRsp::mutable_scene_arrangement_info((proto::HomePreviewBlueprintRsp *const)(v2 + 80));
      HomeBlueprintComp::convertDetailRedisDataToClient(detail_data, v8);
      HomeBlueprintComp::addPreviewRecord(this, server_rsp);
    }
    proto::HomePreviewBlueprintRsp::set_retcode((proto::HomePreviewBlueprintRsp *const)(v2 + 80), *(_DWORD *)(v2 + 32));
    v13 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
    Player::sendProto(v13, (const google::protobuf::Message *)(v2 + 80));
    v6 = *(_DWORD *)(v2 + 32);
    proto::HomePreviewBlueprintRsp::~HomePreviewBlueprintRsp((proto::HomePreviewBlueprintRsp *const)(v2 + 80));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 48));
  result = v6;
  if ( v18 == (char *)v2 )
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

// Line 398: range 00000000145BBC0A-00000000145BBE11
void __cdecl HomeBlueprintComp::addPreviewRecord(
        HomeBlueprintComp *const this,
        const proto::ServerHomeGetBlueprintDetailDataRsp *server_rsp)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const std::string *v5; // rax
  std::pair<std::string,unsigned int> *v6; // rax
  unsigned int __y; // [rsp+10h] [rbp-B0h] BYREF
  uint32_t block_id; // [rsp+14h] [rbp-ACh]
  const proto::HomeBlueprintDetailRedisData *detail_data; // [rsp+18h] [rbp-A8h]
  const proto::HomeSceneBin *scene_bin; // [rsp+20h] [rbp-A0h]
  const proto::HomeBlockBin *block_bin; // [rsp+28h] [rbp-98h]
  std::pair<std::string,unsigned int> __p; // [rsp+30h] [rbp-90h] BYREF
  char v13[96]; // [rsp+60h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 15 preview_key:407";
  *(_QWORD *)(v2 + 16) = HomeBlueprintComp::addPreviewRecord;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  detail_data = proto::ServerHomeGetBlueprintDetailDataRsp::detail_data(server_rsp);
  scene_bin = proto::HomeBlueprintDetailRedisData::scene_bin(detail_data);
  block_id = 0;
  if ( proto::HomeSceneBin::block_bin_list_size(scene_bin) == 1 )
  {
    block_bin = proto::HomeSceneBin::block_bin_list(scene_bin, 0);
    block_id = proto::HomeBlockBin::block_id(block_bin);
  }
  *(_QWORD *)(v2 + 32) = ((unsigned __int64)proto::HomeSceneBin::scene_id(scene_bin) << 32) | block_id;
  __y = proto::ServerHomeGetBlueprintDetailDataRsp::share_owner_uid(server_rsp);
  v5 = proto::HomeBlueprintDetailRedisData::share_code[abi:cxx11](detail_data);
  std::make_pair<std::string const&,unsigned int>(&__p, v5, &__y);
  v6 = std::map<unsigned long,std::pair<std::string,unsigned int>>::operator[](
         &this->preview_record_map_,
         (const std::map<long unsigned int,std::pair<std::string,unsigned int>>::key_type *)(v2 + 32));
  std::pair<std::string,unsigned int>::operator=(v6, &__p);
  std::pair<std::string,unsigned int>::~pair(&__p);
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 412: range 00000000145BBE12-00000000145BBE30
void __cdecl HomeBlueprintComp::clearPreviewRecord(HomeBlueprintComp *const this)
{
  std::map<unsigned long,std::pair<std::string,unsigned int>>::clear(&this->preview_record_map_);
};

// Line 417: range 00000000145BBE32-00000000145BC3B9
// local variable allocation has failed, the output may be wrong!
void __cdecl HomeBlueprintComp::logPreviewRecord(HomeBlueprintComp *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  common::milog::MiLogStream *v4; // r14
  Player *v5; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHomeUseBlueprint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHomeUseBlueprint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // r14
  uint32_t CurModuleId; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHomeUseBlueprint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // r14
  Player *v11; // rax
  PlayerSceneComp *SceneComp; // rax
  uint32_t CurSceneId; // eax
  Player *v14; // r14
  std::string v15; // [rsp+0h] [rbp-140h] OVERLAPPED BYREF
  std::map<long unsigned int,std::pair<std::string,unsigned int>>::iterator __for_end; // [rsp+20h] [rbp-120h] BYREF
  std::map<long unsigned int,std::pair<std::string,unsigned int>> *__for_range; // [rsp+28h] [rbp-118h]
  const std::pair<long unsigned int const,std::pair<std::string,unsigned int> > *v18; // [rsp+30h] [rbp-110h]
  std::tuple_element<0,const std::pair<long unsigned int const,std::pair<std::string,unsigned int> > >::type *_; // [rsp+38h] [rbp-108h]
  std::tuple_element<1,const std::pair<long unsigned int const,std::pair<std::string,unsigned int> > >::type *record_data; // [rsp+40h] [rbp-100h]
  proto_log::HomeBlueprintShareCodeLog *share_code_log; // [rsp+48h] [rbp-F8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+50h] [rbp-F0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+60h] [rbp-E0h] BYREF
  common::milog::MiLogStream v24; // [rsp+70h] [rbp-D0h] BYREF
  char v25[176]; // [rsp+90h] [rbp-B0h] BYREF

  v15._M_string_length = (std::string::size_type)this;
  v1 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 1 22 log_context_holder:429 64 16 14 player_ptr:422 96 16 11 log_ptr:430";
  *(_QWORD *)(v1 + 16) = HomeBlueprintComp::logPreviewRecord;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862723] = -202178560;
  if ( !std::map<unsigned long,std::pair<std::string,unsigned int>>::empty((const std::map<long unsigned int,std::pair<std::string,unsigned int>> *const)(v15._M_string_length + 80)) )
  {
    if ( *(_BYTE *)(((v15._M_string_length + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Home::findOwnerPlayer((Home *const)(v1 + 64));
    if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/home/home_blueprint/home_blueprint_comp.cpp",
        "logPreviewRecord",
        425);
      v4 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
             &v24,
             (const char (*)[51])"[HOME_BLUEPRINT] findOwnerPlayer failed, home_uid:");
      if ( *(_BYTE *)(((v15._M_string_length + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      HIDWORD(v15._anon_0._M_allocated_capacity) = Home::getHomeUid(*(const Home *const *)(v15._M_string_length + 24));
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v4,
        (const unsigned int *)&v15._anon_0._M_allocated_capacity + 1);
      common::milog::MiLogStream::~MiLogStream(&v24);
    }
    else
    {
      v5 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      BasicComp = Player::getBasicComp(v5);
      PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v24, BasicComp);
      StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48), 0xE8Eu, v15);
      std::string::~string(&v24);
      common::tools::perf::make_shared<proto_log::PlayerLogBodyHomeUseBlueprint>();
      __for_range = (std::map<long unsigned int,std::pair<std::string,unsigned int>> *)(v15._M_string_length + 80);
      *((std::map<long unsigned int,std::pair<std::string,unsigned int>>::iterator *)&v15._anon_0._M_allocated_capacity
      + 1) = std::map<unsigned long,std::pair<std::string,unsigned int>>::begin((std::map<long unsigned int,std::pair<std::string,unsigned int>> *const)(v15._M_string_length + 80));
      __for_end._M_node = std::map<unsigned long,std::pair<std::string,unsigned int>>::end((std::map<long unsigned int,std::pair<std::string,unsigned int>> *const)(v15._M_string_length + 80))._M_node;
      while ( std::operator!=(
                (const std::_Rb_tree_iterator<std::pair<long unsigned int const,std::pair<std::string,unsigned int> > >::_Self *)&v15._anon_0._M_allocated_capacity
              + 1,
                &__for_end) )
      {
        v18 = std::_Rb_tree_iterator<std::pair<unsigned long const,std::pair<std::string,unsigned int>>>::operator*(
                (const std::_Rb_tree_iterator<std::pair<long unsigned int const,std::pair<std::string,unsigned int> > > *const)&v15._anon_0._M_allocated_capacity
              + 1);
        _ = std::get<0ul,unsigned long const,std::pair<std::string,unsigned int>>(v18);
        record_data = (std::tuple_element<1,const std::pair<long unsigned int const,std::pair<std::string,unsigned int> > >::type *)std::get<1ul,unsigned long const,std::pair<std::string,unsigned int>>(v18);
        v7 = std::__shared_ptr_access<proto_log::PlayerLogBodyHomeUseBlueprint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHomeUseBlueprint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
        share_code_log = proto_log::PlayerLogBodyHomeUseBlueprint::add_share_code_log_list(v7);
        proto_log::HomeBlueprintShareCodeLog::set_share_code(share_code_log, &record_data->first);
        if ( *(_BYTE *)(((unsigned __int64)&record_data->second >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&record_data->second >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        proto_log::HomeBlueprintShareCodeLog::set_share_owner_uid(share_code_log, record_data->second);
        std::_Rb_tree_iterator<std::pair<unsigned long const,std::pair<std::string,unsigned int>>>::operator++(
          (std::_Rb_tree_iterator<std::pair<long unsigned int const,std::pair<std::string,unsigned int> > > *const)&v15._anon_0._M_allocated_capacity
        + 1);
      }
      v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyHomeUseBlueprint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHomeUseBlueprint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
      if ( *(_BYTE *)(((v15._M_string_length + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      CurModuleId = Home::getCurModuleId(*(Home *const *)(v15._M_string_length + 24));
      proto_log::PlayerLogBodyHomeUseBlueprint::set_module_id(v8, CurModuleId);
      v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyHomeUseBlueprint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHomeUseBlueprint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
      v11 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      SceneComp = Player::getSceneComp(v11);
      CurSceneId = PlayerSceneComp::getCurSceneId(SceneComp);
      proto_log::PlayerLogBodyHomeUseBlueprint::set_scene_id(v10, CurSceneId);
      v14 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
      std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyHomeUseBlueprint,void>(
        &p_body_ptr,
        (const std::shared_ptr<proto_log::PlayerLogBodyHomeUseBlueprint> *)(v1 + 96));
      Player::printStatLog(v14, &p_body_ptr, &p_body_ext_ptr, 0xEu);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
      HomeBlueprintComp::clearPreviewRecord((HomeBlueprintComp *const)v15._M_string_length);
      std::shared_ptr<proto_log::PlayerLogBodyHomeUseBlueprint>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyHomeUseBlueprint> *const)(v1 + 96));
      StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48));
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 64));
  }
  if ( v25 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 445: range 00000000145BC3BA-00000000145BCBD0
int32_t __cdecl HomeBlueprintComp::onSearchBlueprintReq(HomeBlueprintComp *const this, const std::string *share_code)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  uint32_t last_search_blueprint_time; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  int32_t v7; // r14d
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rbx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  Player *v16; // rax
  common::milog::MiLogStream *v17; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  Player *v19; // rax
  common::milog::MiLogStream *v20; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+18h] [rbp-128h] BYREF
  uint32_t now; // [rsp+1Ch] [rbp-124h]
  const PlayerHomeComp *player_home_comp; // [rsp+20h] [rbp-120h]
  common::milog::MiLogStream v27; // [rsp+30h] [rbp-110h] BYREF
  char v28[240]; // [rsp+50h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 4 12 guid_idx:459 48 8 19 share_code_guid:453 80 16 14 player_ptr:467 112 48 14 server_req:483";
  *(_QWORD *)(v2 + 16) = HomeBlueprintComp::onSearchBlueprintReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862721] = -234881024;
  v4[536862722] = 62194;
  v4[536862723] = 62194;
  v4[536862725] = -202116109;
  now = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&this->last_search_blueprint_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_search_blueprint_time_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  last_search_blueprint_time = this->last_search_blueprint_time_;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 80));
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
  LOBYTE(last_search_blueprint_time) = now < last_search_blueprint_time
                                           + ConstValueExcelConfigMgr::getHomeBlueprintSearchCD(&v6->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 80));
  if ( (_BYTE)last_search_blueprint_time )
  {
    v7 = 9813;
    goto LABEL_31;
  }
  *(_QWORD *)(v2 + 48) = 0LL;
  if ( common::tools::StringUtils::strToNum<unsigned long>(share_code, (unsigned __int64 *)(v2 + 48), 1) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/home/home_blueprint/home_blueprint_comp.cpp",
      "onSearchBlueprintReq",
      456);
    v8 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
           &v27,
           (const char (*)[46])"[HOME_BLUEPRINT] strToNum failed, share_code:");
    v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, share_code);
    v10 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v9, (const char (*)[12])", home_uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_11:
    val = Home::getHomeUid(this->home_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
    common::milog::MiLogStream::~MiLogStream(&v27);
    v7 = 9802;
    goto LABEL_31;
  }
  *(_DWORD *)(v2 + 32) = HIDWORD(*(_QWORD *)(v2 + 48));
  if ( !*(_DWORD *)(v2 + 32) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/home/home_blueprint/home_blueprint_comp.cpp",
      "onSearchBlueprintReq",
      463);
    v11 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
            &v27,
            (const char (*)[35])"[HOME_BLUEPRINT] invalid guid_idx:");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 32));
    v13 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v12, (const char (*)[13])" share_code:");
    v14 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, share_code);
    v10 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v14, (const char (*)[12])", home_uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_11;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Home::findOwnerPlayer((Home *const)(v2 + 80));
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 80)) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/home/home_blueprint/home_blueprint_comp.cpp",
      "onSearchBlueprintReq",
      470);
    v15 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
            &v27,
            (const char (*)[51])"[HOME_BLUEPRINT] findOwnerPlayer failed, home_uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Home::getHomeUid(this->home_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
    common::milog::MiLogStream::~MiLogStream(&v27);
    v7 = -1;
  }
  else
  {
    v16 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
    player_home_comp = Player::getHomeComp(v16);
    if ( PlayerHomeComp::getHomeBlueprintBriefData(player_home_comp, share_code) )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/home/home_blueprint/home_blueprint_comp.cpp",
        "onSearchBlueprintReq",
        479);
      v17 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
              &v27,
              (const char (*)[45])"[HOME_BLUEPRINT] search self blueprint, uid:");
      v18 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
      val = Player::getUid(v18);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
      common::milog::MiLogStream::~MiLogStream(&v27);
      v7 = 9801;
    }
    else
    {
      proto::ServerHomeGetBlueprintBriefDataReq::ServerHomeGetBlueprintBriefDataReq((proto::ServerHomeGetBlueprintBriefDataReq *const)(v2 + 112));
      proto::ServerHomeGetBlueprintBriefDataReq::set_reason(
        (proto::ServerHomeGetBlueprintBriefDataReq *const)(v2 + 112),
        HOME_GET_BLUEPRINT_BRIEF_REASON_SEARCH);
      proto::ServerHomeGetBlueprintBriefDataReq::add_share_code_list(
        (proto::ServerHomeGetBlueprintBriefDataReq *const)(v2 + 112),
        share_code);
      v19 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
      if ( sendProtoToActivityService<proto::ServerHomeGetBlueprintBriefDataReq>(
             v19,
             (proto::ServerHomeGetBlueprintBriefDataReq *)(v2 + 112)) )
      {
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/home/home_blueprint/home_blueprint_comp.cpp",
          "onSearchBlueprintReq",
          488);
        v20 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
                &v27,
                (const char (*)[57])"[HOME_BLUEPRINT] sendProtoToActivityService failed, uid:");
        v21 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
        val = Player::getUid(v21);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &val);
        common::milog::MiLogStream::~MiLogStream(&v27);
        v7 = -1;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->last_search_blueprint_time_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_search_blueprint_time_ >> 3)
                                                               + 0x7FFF8000) )
        {
          __asan_report_store4(&this->last_search_blueprint_time_);
        }
        this->last_search_blueprint_time_ = now;
        v7 = 0;
      }
      proto::ServerHomeGetBlueprintBriefDataReq::~ServerHomeGetBlueprintBriefDataReq((proto::ServerHomeGetBlueprintBriefDataReq *const)(v2 + 112));
    }
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 80));
LABEL_31:
  result = v7;
  if ( v28 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 498: range 00000000145BCBD2-00000000145BD2EE
int32_t __cdecl HomeBlueprintComp::onServerHomeGetBlueprintBriefDataRsp(
        HomeBlueprintComp *const this,
        const proto::ServerHomeGetBlueprintBriefDataRsp *server_rsp)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // r14
  int32_t v6; // r14d
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // r14
  const std::string *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  proto::HomeBlueprintSearchInfo *v16; // rax
  common::milog::MiLogStream *v17; // r14
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  Player *v25; // rax
  int32_t result; // eax
  unsigned int v27; // [rsp+18h] [rbp-108h] BYREF
  unsigned int val; // [rsp+1Ch] [rbp-104h] BYREF
  const google::protobuf::RepeatedPtrField<proto::HomeBlueprintBriefRedisData> *brief_data_list; // [rsp+20h] [rbp-100h]
  const proto::HomeBlueprintBriefRedisData *brief_data; // [rsp+28h] [rbp-F8h]
  common::milog::MiLogStream v31; // [rsp+30h] [rbp-F0h] BYREF
  char v32[208]; // [rsp+50h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 11 retcode:511 64 16 14 player_ptr:499 96 32 7 rsp:512";
  *(_QWORD *)(v2 + 16) = HomeBlueprintComp::onServerHomeGetBlueprintBriefDataRsp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Home::findOwnerPlayer((Home *const)(v2 + 64));
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/home/home_blueprint/home_blueprint_comp.cpp",
      "onServerHomeGetBlueprintBriefDataRsp",
      502);
    v5 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
           &v31,
           (const char (*)[51])"[HOME_BLUEPRINT] findOwnerPlayer failed, home_uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Home::getHomeUid(this->home_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v31);
    v6 = -1;
  }
  else if ( proto::ServerHomeGetBlueprintBriefDataRsp::reason(server_rsp) == HOME_GET_BLUEPRINT_BRIEF_REASON_SEARCH )
  {
    *(_DWORD *)(v2 + 48) = proto::ServerHomeGetBlueprintBriefDataRsp::retcode(server_rsp);
    proto::HomeSearchBlueprintRsp::HomeSearchBlueprintRsp((proto::HomeSearchBlueprintRsp *const)(v2 + 96));
    if ( *(_DWORD *)(v2 + 48) )
    {
      common::milog::MiLogStream::create(
        &v31,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/home/home_blueprint/home_blueprint_comp.cpp",
        "onServerHomeGetBlueprintBriefDataRsp",
        542);
      v21 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
              &v31,
              (const char (*)[59])"[HOME_BLUEPRINT] get blueprint brief data failed, retcode:");
      v22 = common::milog::MiLogStream::operator<<<int,(int *)0>(v21, (const int *)(v2 + 48));
      v23 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v22, (const char (*)[6])" uid:");
      v24 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      val = Player::getUid(v24);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &val);
      common::milog::MiLogStream::~MiLogStream(&v31);
    }
    else
    {
      brief_data_list = proto::ServerHomeGetBlueprintBriefDataRsp::brief_data_list(server_rsp);
      if ( proto::ServerHomeGetBlueprintBriefDataRsp::brief_data_list_size(server_rsp) )
      {
        if ( proto::ServerHomeGetBlueprintBriefDataRsp::brief_data_list_size(server_rsp) == 1 )
        {
          brief_data = proto::ServerHomeGetBlueprintBriefDataRsp::brief_data_list(server_rsp, 0);
          if ( !proto::HomeBlueprintBriefRedisData::is_allow_copy(brief_data) )
          {
            *(_DWORD *)(v2 + 48) = 9802;
            common::milog::MiLogStream::create(
              &v31,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/home/home_blueprint/home_blueprint_comp.cpp",
              "onServerHomeGetBlueprintBriefDataRsp",
              526);
            v11 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                    &v31,
                    (const char (*)[30])"[HOME_BLUEPRINT]  share_code:");
            v12 = proto::HomeBlueprintBriefRedisData::share_code[abi:cxx11](brief_data);
            v13 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, v12);
            v14 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                    v13,
                    (const char (*)[22])" not allow copy, uid:");
            v15 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
            val = Player::getUid(v15);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
            common::milog::MiLogStream::~MiLogStream(&v31);
          }
          else
          {
            HomeBlueprintSearchData::fromRedis(&this->last_search_data_, brief_data);
            v16 = proto::HomeSearchBlueprintRsp::mutable_search_info((proto::HomeSearchBlueprintRsp *const)(v2 + 96));
            HomeBlueprintSearchData::toClient(&this->last_search_data_, v16);
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v31,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/home/home_blueprint/home_blueprint_comp.cpp",
            "onServerHomeGetBlueprintBriefDataRsp",
            536);
          v17 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                  &v31,
                  (const char (*)[39])"[HOME_BLUEPRINT] brief_data_list_size:");
          v27 = proto::ServerHomeGetBlueprintBriefDataRsp::brief_data_list_size(server_rsp);
          v18 = common::milog::MiLogStream::operator<<<int,(int *)0>(v17, (const int *)&v27);
          v19 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v18, (const char (*)[6])" uid:");
          v20 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          val = Player::getUid(v20);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &val);
          common::milog::MiLogStream::~MiLogStream(&v31);
          *(_DWORD *)(v2 + 48) = -1;
        }
      }
      else
      {
        *(_DWORD *)(v2 + 48) = 9802;
      }
    }
    proto::HomeSearchBlueprintRsp::set_retcode((proto::HomeSearchBlueprintRsp *const)(v2 + 96), *(_DWORD *)(v2 + 48));
    v25 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    Player::sendProto(v25, (const google::protobuf::Message *)(v2 + 96));
    v6 = *(_DWORD *)(v2 + 48);
    proto::HomeSearchBlueprintRsp::~HomeSearchBlueprintRsp((proto::HomeSearchBlueprintRsp *const)(v2 + 96));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/home/home_blueprint/home_blueprint_comp.cpp",
      "onServerHomeGetBlueprintBriefDataRsp",
      507);
    v7 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v31,
           (const char (*)[31])"[HOME_BLUEPRINT] error reason:");
    v27 = proto::ServerHomeGetBlueprintBriefDataRsp::reason(server_rsp);
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &v27);
    v9 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v8, (const char (*)[6])" uid:");
    v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    val = Player::getUid(v10);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
    common::milog::MiLogStream::~MiLogStream(&v31);
    v6 = -1;
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
  result = v6;
  if ( v32 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
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

// Line 550: range 00000000145BD2F0-00000000145BD584
// local variable allocation has failed, the output may be wrong!
void __cdecl HomeBlueprintComp::logSetIsAllowFriendCopy(HomeBlueprintComp *const this, Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHomeSetAllowCopy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rcx
  std::string playera; // [rsp+0h] [rbp-D0h] OVERLAPPED BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+20h] [rbp-B0h] BYREF
  std::string v9; // [rsp+30h] [rbp-A0h] BYREF
  char v10[128]; // [rsp+50h] [rbp-80h] BYREF

  playera._M_string_length = (std::string::size_type)this;
  playera._M_dataplus._M_p = (std::string::pointer)player;
  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 22 log_context_holder:551 64 16 11 log_ptr:552";
  *(_QWORD *)(v2 + 16) = HomeBlueprintComp::logSetIsAllowFriendCopy;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -202178560;
  BasicComp = Player::getBasicComp((Player *const)playera._M_dataplus._M_p);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v9, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0xE90u, playera);
  std::string::~string(&v9);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyHomeSetAllowCopy>();
  v6 = std::__shared_ptr_access<proto_log::PlayerLogBodyHomeSetAllowCopy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHomeSetAllowCopy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  if ( *(char *)(((playera._M_string_length + 136) >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(playera._M_string_length + 136);
  proto_log::PlayerLogBodyHomeSetAllowCopy::set_is_home_allow_copy(v6, *(_BYTE *)(playera._M_string_length + 136));
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyHomeSetAllowCopy,void>(
    (std::shared_ptr<google::protobuf::Message> *const)&playera._anon_0,
    (const std::shared_ptr<proto_log::PlayerLogBodyHomeSetAllowCopy> *)(v2 + 64));
  Player::printStatLog((Player *const)playera._M_dataplus._M_p, (MessagePtr *)&playera._anon_0, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&playera._anon_0);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  std::shared_ptr<proto_log::PlayerLogBodyHomeSetAllowCopy>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyHomeSetAllowCopy> *const)(v2 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
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
