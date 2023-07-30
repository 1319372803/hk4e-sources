// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/home/home_plant/home_plant_comp.cpp

// Line 35: range 0000000016878CF0-0000000016878EE7
int32_t __cdecl HomePlantComp::fromBin(HomePlantComp *const this, const proto::HomeDataBin *home_data_bin)
{
  common::milog::MiLogStream *v2; // rbx
  common::milog::MiLogStream *v3; // rcx
  HomeFieldData *v4; // rax
  std::unordered_map<unsigned int,HomeModuleFieldData>::key_type __k; // [rsp+1Ch] [rbp-64h] BYREF
  google::protobuf::RepeatedPtrField<proto::HomePlantFieldBin>::const_iterator __for_begin; // [rsp+20h] [rbp-60h] BYREF
  google::protobuf::RepeatedPtrField<proto::HomePlantFieldBin>::const_iterator __for_end; // [rsp+28h] [rbp-58h] BYREF
  const proto::HomePlantBin *home_plant_bin; // [rsp+30h] [rbp-50h]
  const google::protobuf::RepeatedPtrField<proto::HomePlantFieldBin> *__for_range; // [rsp+38h] [rbp-48h]
  const proto::HomePlantFieldBin *field_bin; // [rsp+40h] [rbp-40h]
  std::unordered_map<unsigned int,HomeFieldData> *field_data_map; // [rsp+48h] [rbp-38h]
  common::milog::MiLogStream v13; // [rsp+50h] [rbp-30h] BYREF

  std::unordered_map<unsigned int,HomeModuleFieldData>::clear(&this->module_data_map_);
  home_plant_bin = proto::HomeDataBin::plant_bin(home_data_bin);
  __for_range = proto::HomePlantBin::field_bin_list(home_plant_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::HomePlantFieldBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::HomePlantFieldBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomePlantFieldBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    field_bin = google::protobuf::internal::RepeatedPtrIterator<proto::HomePlantFieldBin const>::operator*(&__for_begin);
    __k = proto::HomePlantFieldBin::module_id(field_bin);
    field_data_map = (std::unordered_map<unsigned int,HomeFieldData> *)std::unordered_map<unsigned int,HomeModuleFieldData>::operator[](
                                                                         &this->module_data_map_,
                                                                         &__k);
    __k = proto::HomePlantFieldBin::guid(field_bin);
    if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,HomeFieldData>,unsigned int>(
           field_data_map,
           &__k) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/home/home_plant/home_plant_comp.cpp",
        "fromBin",
        44);
      v2 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
             &v13,
             (const char (*)[35])"[HOME_PLANT]duplicate guid. guid: ");
      __k = proto::HomePlantFieldBin::guid(field_bin);
      v3 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &__k);
      if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::milog::MiLogStream::operator<<<Home,(Home*)0>(v3, this->home_);
      common::milog::MiLogStream::~MiLogStream(&v13);
    }
    else
    {
      __k = proto::HomePlantFieldBin::guid(field_bin);
      v4 = std::unordered_map<unsigned int,HomeFieldData>::operator[](field_data_map, &__k);
      HomeFieldData::fromBin(v4, field_bin);
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::HomePlantFieldBin const>::operator++(&__for_begin);
  }
  return 0;
};

// Line 53: range 0000000016878EE8-00000000168790B2
int32_t __cdecl HomePlantComp::toBin(HomePlantComp *const this, proto::HomeDataBin *home_data_bin)
{
  std::unordered_map<unsigned int,HomeModuleFieldData>::iterator __for_begin; // [rsp+10h] [rbp-80h] BYREF
  std::unordered_map<unsigned int,HomeModuleFieldData>::iterator __for_end; // [rsp+18h] [rbp-78h] BYREF
  std::unordered_map<unsigned int,HomeFieldData>::const_iterator __for_begin_0; // [rsp+20h] [rbp-70h] BYREF
  std::unordered_map<unsigned int,HomeFieldData>::const_iterator __for_end_0; // [rsp+28h] [rbp-68h] BYREF
  proto::HomePlantBin *home_plant_bin; // [rsp+30h] [rbp-60h]
  std::unordered_map<unsigned int,HomeModuleFieldData> *__for_range; // [rsp+38h] [rbp-58h]
  const std::pair<unsigned int const,HomeModuleFieldData> *v9; // [rsp+40h] [rbp-50h]
  std::tuple_element<0,const std::pair<unsigned int const,HomeModuleFieldData> >::type *module_id; // [rsp+48h] [rbp-48h]
  std::tuple_element<1,const std::pair<unsigned int const,HomeModuleFieldData> >::type *module_field_data; // [rsp+50h] [rbp-40h]
  const std::unordered_map<unsigned int,HomeFieldData> *__for_range_0; // [rsp+58h] [rbp-38h]
  const std::pair<unsigned int const,HomeFieldData> *v13; // [rsp+60h] [rbp-30h]
  std::tuple_element<0,const std::pair<unsigned int const,HomeFieldData> >::type *guid; // [rsp+68h] [rbp-28h]
  std::tuple_element<1,const std::pair<unsigned int const,HomeFieldData> >::type *field_data; // [rsp+70h] [rbp-20h]
  proto::HomePlantFieldBin *field_bin; // [rsp+78h] [rbp-18h]

  home_plant_bin = proto::HomeDataBin::mutable_plant_bin(home_data_bin);
  __for_range = &this->module_data_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,HomeModuleFieldData>::begin(&this->module_data_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,HomeModuleFieldData>::end(&this->module_data_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,HomeModuleFieldData>,false>(&__for_begin, &__for_end) )
  {
    v9 = std::__detail::_Node_iterator<std::pair<unsigned int const,HomeModuleFieldData>,false,false>::operator*(&__for_begin);
    module_id = std::get<0ul,unsigned int const,HomeModuleFieldData>(v9);
    module_field_data = (std::tuple_element<1,const std::pair<unsigned int const,HomeModuleFieldData> >::type *)std::get<1ul,unsigned int const,HomeModuleFieldData>(v9);
    __for_range_0 = &module_field_data->field_data_map;
    __for_begin_0._M_cur = std::unordered_map<unsigned int,HomeFieldData>::begin(&module_field_data->field_data_map)._M_cur;
    __for_end_0._M_cur = std::unordered_map<unsigned int,HomeFieldData>::end(__for_range_0)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,HomeFieldData>,false>(&__for_begin_0, &__for_end_0) )
    {
      v13 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,HomeFieldData>,false,false>::operator*(&__for_begin_0);
      guid = std::get<0ul,unsigned int const,HomeFieldData>(v13);
      field_data = (std::tuple_element<1,const std::pair<unsigned int const,HomeFieldData> >::type *)std::get<1ul,unsigned int const,HomeFieldData>(v13);
      field_bin = proto::HomePlantBin::add_field_bin_list(home_plant_bin);
      if ( *(_BYTE *)(((unsigned __int64)module_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)module_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)module_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::HomePlantFieldBin::set_module_id(field_bin, *module_id);
      HomeFieldData::toBin(field_data, field_bin);
      std::__detail::_Node_const_iterator<std::pair<unsigned int const,HomeFieldData>,false,false>::operator++(&__for_begin_0);
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,HomeModuleFieldData>,false,false>::operator++(&__for_begin);
  }
  return 0;
};

// Line 68: range 00000000168790B4-00000000168790D2
int32_t __cdecl HomePlantComp::init(HomePlantComp *const this)
{
  HomePlantComp::initFieldData(this);
  return 0;
};

// Line 74: range 00000000168790D4-0000000016879762
void __cdecl HomePlantComp::initFieldData(HomePlantComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  HomeSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rcx
  bool is_pause; // [rsp+13h] [rbp-16Dh]
  uint32_t cur_module_id; // [rsp+14h] [rbp-16Ch]
  std::map<unsigned int,std::shared_ptr<HomeModuleData>>::iterator __for_begin; // [rsp+18h] [rbp-168h] BYREF
  std::map<unsigned int,std::shared_ptr<HomeModuleData>>::iterator __for_end; // [rsp+20h] [rbp-160h] BYREF
  std::map<unsigned int,HomeSceneData>::iterator __for_begin_0; // [rsp+28h] [rbp-158h] BYREF
  std::map<unsigned int,HomeSceneData>::iterator __for_end_0; // [rsp+30h] [rbp-150h] BYREF
  std::unordered_map<unsigned int,HomeFieldData>::iterator __for_begin_1; // [rsp+38h] [rbp-148h] BYREF
  std::unordered_map<unsigned int,HomeFieldData>::iterator __for_end_1; // [rsp+40h] [rbp-140h] BYREF
  std::vector<HomeSubFieldData>::iterator __for_begin_2; // [rsp+48h] [rbp-138h] BYREF
  std::vector<HomeSubFieldData>::iterator __for_end_2; // [rsp+50h] [rbp-130h] BYREF
  std::map<unsigned int,std::shared_ptr<HomeModuleData>> *__for_range; // [rsp+58h] [rbp-128h]
  std::vector<HomePlantCancelLogBody> *__for_range_3; // [rsp+60h] [rbp-120h]
  HomePlantCancelLogBody *cancel_plant_body; // [rsp+68h] [rbp-118h]
  std::pair<unsigned int const,std::shared_ptr<HomeModuleData> > *__in; // [rsp+70h] [rbp-110h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<HomeModuleData> > >::type *module_id; // [rsp+78h] [rbp-108h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<HomeModuleData> > >::type *module_data_ptr; // [rsp+80h] [rbp-100h]
  HomeModuleFieldData *module_data; // [rsp+88h] [rbp-F8h]
  std::map<unsigned int,HomeSceneData> *__for_range_0; // [rsp+90h] [rbp-F0h]
  std::pair<unsigned int const,HomeSceneData> *v29; // [rsp+98h] [rbp-E8h]
  std::tuple_element<0,std::pair<unsigned int const,HomeSceneData> >::type *scene_id; // [rsp+A0h] [rbp-E0h]
  std::tuple_element<1,std::pair<unsigned int const,HomeSceneData> >::type *scene_data; // [rsp+A8h] [rbp-D8h]
  std::unordered_map<unsigned int,HomeFieldData> *__for_range_1; // [rsp+B0h] [rbp-D0h]
  std::pair<unsigned int const,HomeFieldData> *v33; // [rsp+B8h] [rbp-C8h]
  std::tuple_element<0,std::pair<unsigned int const,HomeFieldData> >::type *guid; // [rsp+C0h] [rbp-C0h]
  std::tuple_element<1,std::pair<unsigned int const,HomeFieldData> >::type *field_data; // [rsp+C8h] [rbp-B8h]
  std::vector<HomeSubFieldData> *__for_range_2; // [rsp+D0h] [rbp-B0h]
  HomeSubFieldData *sub_field_data; // [rsp+D8h] [rbp-A8h]
  common::milog::MiLogStream v38; // [rsp+E0h] [rbp-A0h] BYREF
  char v39[128]; // [rsp+100h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 24 19 cancel_plant_vec:77";
  *(_QWORD *)(v1 + 16) = HomePlantComp::initFieldData;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218103808;
  v3[536862722] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  cur_module_id = Home::getCurModuleId(this->home_);
  std::vector<HomePlantCancelLogBody>::vector((std::vector<HomePlantCancelLogBody> *const)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Home::getSceneComp(this->home_);
  __for_range = HomeSceneComp::getModuleDataMap(SceneComp);
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<HomeModuleData>>::begin(__for_range)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<HomeModuleData>>::end(__for_range)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<HomeModuleData>>>::operator*(&__for_begin);
    module_id = std::get<0ul,unsigned int const,std::shared_ptr<HomeModuleData>>(__in);
    module_data_ptr = std::get<1ul,unsigned int const,std::shared_ptr<HomeModuleData>>(__in);
    if ( *(_BYTE *)(((unsigned __int64)module_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)module_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)module_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    is_pause = cur_module_id != *module_id;
    module_data = std::unordered_map<unsigned int,HomeModuleFieldData>::operator[](&this->module_data_map_, module_id);
    __for_range_0 = &std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false> *const)module_data_ptr)->scene_data_map;
    __for_begin_0._M_node = std::map<unsigned int,HomeSceneData>::begin(__for_range_0)._M_node;
    __for_end_0._M_node = std::map<unsigned int,HomeSceneData>::end(__for_range_0)._M_node;
    while ( std::operator!=(&__for_begin_0, &__for_end_0) )
    {
      v29 = std::_Rb_tree_iterator<std::pair<unsigned int const,HomeSceneData>>::operator*(&__for_begin_0);
      scene_id = std::get<0ul,unsigned int const,HomeSceneData>(v29);
      scene_data = std::get<1ul,unsigned int const,HomeSceneData>(v29);
      HomeModuleFieldData::fromData(
        module_data,
        &scene_data->arrangement_data,
        (std::vector<HomePlantCancelLogBody> *)(v1 + 32));
      __for_range_1 = &module_data->field_data_map;
      __for_begin_1._M_cur = std::unordered_map<unsigned int,HomeFieldData>::begin(&module_data->field_data_map)._M_cur;
      __for_end_1._M_cur = std::unordered_map<unsigned int,HomeFieldData>::end(__for_range_1)._M_cur;
      while ( std::__detail::operator!=<std::pair<unsigned int const,HomeFieldData>,false>(&__for_begin_1, &__for_end_1) )
      {
        v33 = std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFieldData>,false,false>::operator*(&__for_begin_1);
        guid = std::get<0ul,unsigned int const,HomeFieldData>(v33);
        field_data = std::get<1ul,unsigned int const,HomeFieldData>(v33);
        __for_range_2 = &field_data->sub_field_vec;
        __for_begin_2._M_current = std::vector<HomeSubFieldData>::begin(&field_data->sub_field_vec)._M_current;
        __for_end_2._M_current = std::vector<HomeSubFieldData>::end(__for_range_2)._M_current;
        while ( __gnu_cxx::operator!=<HomeSubFieldData *,std::vector<HomeSubFieldData>>(&__for_begin_2, &__for_end_2) )
        {
          sub_field_data = __gnu_cxx::__normal_iterator<HomeSubFieldData *,std::vector<HomeSubFieldData>>::operator*(&__for_begin_2);
          HomeSubFieldData::init(sub_field_data, is_pause);
          __gnu_cxx::__normal_iterator<HomeSubFieldData *,std::vector<HomeSubFieldData>>::operator++(&__for_begin_2);
        }
        std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFieldData>,false,false>::operator++(&__for_begin_1);
      }
      std::_Rb_tree_iterator<std::pair<unsigned int const,HomeSceneData>>::operator++(&__for_begin_0);
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<HomeModuleData>>>::operator++(&__for_begin);
  }
  if ( !std::vector<HomePlantCancelLogBody>::empty((const std::vector<HomePlantCancelLogBody> *const)(v1 + 32)) )
  {
    __for_range_3 = (std::vector<HomePlantCancelLogBody> *)(v1 + 32);
    __for_begin_2._M_current = (HomeSubFieldData *)std::vector<HomePlantCancelLogBody>::begin((std::vector<HomePlantCancelLogBody> *const)(v1 + 32))._M_current;
    __for_end_2._M_current = (HomeSubFieldData *)std::vector<HomePlantCancelLogBody>::end(__for_range_3)._M_current;
    while ( __gnu_cxx::operator!=<HomePlantCancelLogBody *,std::vector<HomePlantCancelLogBody>>(
              (const __gnu_cxx::__normal_iterator<HomePlantCancelLogBody*,std::vector<HomePlantCancelLogBody> > *)&__for_begin_2,
              (const __gnu_cxx::__normal_iterator<HomePlantCancelLogBody*,std::vector<HomePlantCancelLogBody> > *)&__for_end_2) )
    {
      cancel_plant_body = __gnu_cxx::__normal_iterator<HomePlantCancelLogBody *,std::vector<HomePlantCancelLogBody>>::operator*((const __gnu_cxx::__normal_iterator<HomePlantCancelLogBody*,std::vector<HomePlantCancelLogBody> > *const)&__for_begin_2);
      common::milog::MiLogStream::create(
        &v38,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/home/home_plant/home_plant_comp.cpp",
        "initFieldData",
        100);
      v5 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
             &v38,
             (const char (*)[43])"some plant delete at initFieldData. guid: ");
      v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &cancel_plant_body->guid);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v6, (const char (*)[16])" furniture_id: ");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &cancel_plant_body->furniture_id);
      v9 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v8, (const char (*)[11])" seed_id: ");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &cancel_plant_body->seed_id);
      if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::milog::MiLogStream::operator<<<Home,(Home*)0>(v10, this->home_);
      common::milog::MiLogStream::~MiLogStream(&v38);
      __gnu_cxx::__normal_iterator<HomePlantCancelLogBody *,std::vector<HomePlantCancelLogBody>>::operator++((__gnu_cxx::__normal_iterator<HomePlantCancelLogBody*,std::vector<HomePlantCancelLogBody> > *const)&__for_begin_2);
    }
  }
  std::vector<HomePlantCancelLogBody>::~vector((std::vector<HomePlantCancelLogBody> *const)(v1 + 32));
  if ( v39 == (char *)v1 )
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

// Line 106: range 0000000016879764-00000000168798CB
void __cdecl HomePlantComp::onUpdateArrangementInfo(HomePlantComp *const this, uint32_t module_id, uint32_t scene_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  Player *v6; // rdx
  char v8[96]; // [rsp+10h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 14 player_ptr:108";
  *(_QWORD *)(v3 + 16) = HomePlantComp::onUpdateArrangementInfo;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  HomePlantComp::updateFieldData(this, module_id, scene_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Home::findOwnerPlayer((Home *const)(v3 + 32));
  if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
  {
    v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    HomePlantComp::notifyCurFieldData(this, v6);
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
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

// Line 116: range 00000000168798CC-000000001687A0EB
void __fastcall HomePlantComp::onChangeRoomScene(
        HomePlantComp *const this,
        __int32 module_id,
        __int32 old_room_scene_id,
        __int32 new_room_scene_id)
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
  Player *v14; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHomePlantCancel,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyHomePlantCancel,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyHomePlantCancel,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  Player *v19; // r14
  Player *v20; // rax
  std::string v21; // [rsp+0h] [rbp-1D0h]
  HomePlantComp *thisa; // [rsp+18h] [rbp-1B8h]
  unsigned int val; // [rsp+2Ch] [rbp-1A4h] BYREF
  std::vector<HomePlantCancelLogBody>::iterator __for_begin; // [rsp+30h] [rbp-1A0h] BYREF
  std::vector<HomePlantCancelLogBody>::iterator __for_end; // [rsp+38h] [rbp-198h] BYREF
  const HomeSceneData *home_scene_data_ptr; // [rsp+40h] [rbp-190h]
  HomeModuleFieldData *module_field_data; // [rsp+48h] [rbp-188h]
  std::vector<HomePlantCancelLogBody> *__for_range; // [rsp+50h] [rbp-180h]
  HomePlantCancelLogBody *cancel_plant_body; // [rsp+58h] [rbp-178h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+60h] [rbp-170h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+70h] [rbp-160h] BYREF
  common::milog::MiLogStream v32; // [rsp+80h] [rbp-150h] BYREF
  char v33[304]; // [rsp+A0h] [rbp-130h] BYREF

  *(&v21._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(v21._anon_0._M_allocated_capacity) = module_id;
  *(_DWORD *)v21._anon_0._M_local_buf = old_room_scene_id;
  HIDWORD(v21._M_string_length) = new_room_scene_id;
  v4 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(256LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "7 48 1 10 holder:141 64 4 13 module_id:115 80 4 21 new_room_scene_id:115 96 16 19 module_data_pt"
                        "r:117 128 16 16 owner_player:138 160 16 11 log_ptr:144 192 24 20 cancel_plant_vec:131";
  *(_QWORD *)(v4 + 16) = HomePlantComp::onChangeRoomScene;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -234556924;
  v6[536862723] = -219021312;
  v6[536862724] = -219021312;
  v6[536862725] = -219021312;
  v6[536862726] = -218103808;
  v6[536862727] = -202116109;
  *(_DWORD *)(v4 + 64) = module_id;
  *(_DWORD *)(v4 + 80) = HIDWORD(v21._M_string_length);
  if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = (unsigned int)Home::getSceneComp(this->home_);
  HomeSceneComp::getHomeModuleData((const HomeSceneComp *const)(v4 + 96), SceneComp);
  if ( std::operator==<HomeModuleData>(0LL, (const std::shared_ptr<HomeModuleData> *)(v4 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v32,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home_plant/home_plant_comp.cpp",
      "onChangeRoomScene",
      120);
    v8 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           &v32,
           (const char (*)[35])"getHomeModuleData fail, module_id:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 64));
    v10 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v9, (const char (*)[11])" home_uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_9:
    val = Home::getHomeUid(this->home_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
    common::milog::MiLogStream::~MiLogStream(&v32);
    goto LABEL_26;
  }
  v11 = std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
  home_scene_data_ptr = HomeModuleData::findHomeSceneData(v11, *(_DWORD *)(v4 + 80));
  if ( !home_scene_data_ptr )
  {
    common::milog::MiLogStream::create(
      &v32,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home_plant/home_plant_comp.cpp",
      "onChangeRoomScene",
      126);
    v12 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
            &v32,
            (const char (*)[35])"findHomeSceneData fail, scene_id: ");
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v4 + 80));
    v10 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v13, (const char (*)[11])" home_uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_9;
  }
  module_field_data = std::unordered_map<unsigned int,HomeModuleFieldData>::operator[](
                        &this->module_data_map_,
                        (const std::unordered_map<unsigned int,HomeModuleFieldData>::key_type *)(v4 + 64));
  std::vector<HomePlantCancelLogBody>::vector((std::vector<HomePlantCancelLogBody> *const)(v4 + 192));
  HomeModuleFieldData::deleteDataBySceneId(
    module_field_data,
    v21._anon_0._M_allocated_capacity,
    (std::vector<HomePlantCancelLogBody> *)(v4 + 192));
  HomeModuleFieldData::fromData(
    module_field_data,
    &home_scene_data_ptr->arrangement_data,
    (std::vector<HomePlantCancelLogBody> *)(v4 + 192));
  if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Home::findOwnerPlayer((Home *const)(v4 + 128));
  if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v4 + 128), 0LL) )
  {
    v14 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
    BasicComp = Player::getBasicComp(v14);
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v32, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48), 0xDABu, v21);
    std::string::~string(&v32);
    __for_range = (std::vector<HomePlantCancelLogBody> *)(v4 + 192);
    __for_begin._M_current = std::vector<HomePlantCancelLogBody>::begin((std::vector<HomePlantCancelLogBody> *const)(v4 + 192))._M_current;
    __for_end._M_current = std::vector<HomePlantCancelLogBody>::end((std::vector<HomePlantCancelLogBody> *const)(v4 + 192))._M_current;
    while ( __gnu_cxx::operator!=<HomePlantCancelLogBody *,std::vector<HomePlantCancelLogBody>>(
              &__for_begin,
              &__for_end) )
    {
      cancel_plant_body = __gnu_cxx::__normal_iterator<HomePlantCancelLogBody *,std::vector<HomePlantCancelLogBody>>::operator*(&__for_begin);
      common::tools::perf::make_shared<proto_log::PlayerLogBodyHomePlantCancel>();
      v16 = std::__shared_ptr_access<proto_log::PlayerLogBodyHomePlantCancel,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHomePlantCancel,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
      if ( *(_BYTE *)(((unsigned __int64)&cancel_plant_body->seed_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)cancel_plant_body + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cancel_plant_body->seed_id >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto_log::PlayerLogBodyHomePlantCancel::set_seed_id(v16, cancel_plant_body->seed_id);
      v17 = std::__shared_ptr_access<proto_log::PlayerLogBodyHomePlantCancel,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHomePlantCancel,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
      if ( *(_BYTE *)(((unsigned __int64)&cancel_plant_body->furniture_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)cancel_plant_body + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cancel_plant_body->furniture_id >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto_log::PlayerLogBodyHomePlantCancel::set_furniture_id(v17, cancel_plant_body->furniture_id);
      v18 = std::__shared_ptr_access<proto_log::PlayerLogBodyHomePlantCancel,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHomePlantCancel,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
      proto_log::PlayerLogBodyHomePlantCancel::set_reason(v18, 1u);
      v19 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
      std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
      std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyHomePlantCancel,void>(
        &p_body_ptr,
        (const std::shared_ptr<proto_log::PlayerLogBodyHomePlantCancel> *)(v4 + 160));
      Player::printStatLog(v19, &p_body_ptr, &p_body_ext_ptr, 0xEu);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
      std::shared_ptr<proto_log::PlayerLogBodyHomePlantCancel>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyHomePlantCancel> *const)(v4 + 160));
      __gnu_cxx::__normal_iterator<HomePlantCancelLogBody *,std::vector<HomePlantCancelLogBody>>::operator++(&__for_begin);
    }
    v20 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
    HomePlantComp::notifyCurFieldData(thisa, v20);
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 128));
  std::vector<HomePlantCancelLogBody>::~vector((std::vector<HomePlantCancelLogBody> *const)(v4 + 192));
LABEL_26:
  std::shared_ptr<HomeModuleData>::~shared_ptr((std::shared_ptr<HomeModuleData> *const)(v4 + 96));
  if ( v33 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 155: range 000000001687A0EC-000000001687A1AD
int32_t __cdecl HomePlantComp::toSnapshotBin(HomePlantComp *const this, proto::HomeSnapshotBin *snapshot_bin)
{
  proto::HomeSceneCompSnapshotBin *v2; // rax
  std::unordered_map<unsigned int,HomeModuleFieldData>::mapped_type *v3; // rax
  std::unordered_map<unsigned int,HomeModuleFieldData>::key_type __k; // [rsp+1Ch] [rbp-34h] BYREF
  google::protobuf::RepeatedPtrField<proto::HomeModuleSnapshotBin>::iterator __for_begin; // [rsp+20h] [rbp-30h] BYREF
  google::protobuf::RepeatedPtrField<proto::HomeModuleSnapshotBin>::iterator __for_end; // [rsp+28h] [rbp-28h] BYREF
  google::protobuf::RepeatedPtrField<proto::HomeModuleSnapshotBin> *__for_range; // [rsp+30h] [rbp-20h]
  proto::HomeModuleSnapshotBin *module_snapshot_bin; // [rsp+38h] [rbp-18h]

  v2 = proto::HomeSnapshotBin::mutable_scene_snapshot(snapshot_bin);
  __for_range = proto::HomeSceneCompSnapshotBin::mutable_module_bin_list(v2);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::HomeModuleSnapshotBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::HomeModuleSnapshotBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeModuleSnapshotBin>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    module_snapshot_bin = google::protobuf::internal::RepeatedPtrIterator<proto::HomeModuleSnapshotBin>::operator*(&__for_begin);
    __k = proto::HomeModuleSnapshotBin::module_id(module_snapshot_bin);
    v3 = std::unordered_map<unsigned int,HomeModuleFieldData>::operator[](&this->module_data_map_, &__k);
    HomeModuleFieldData::toSnapshotBin(v3, module_snapshot_bin);
    google::protobuf::internal::RepeatedPtrIterator<proto::HomeModuleSnapshotBin>::operator++(&__for_begin);
  }
  return 0;
};

// Line 165: range 000000001687A1AE-000000001687A70C
void __fastcall HomePlantComp::onChangeModule(
        HomePlantComp *const this,
        uint32_t old_module_id,
        uint32_t new_module_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  HomeSceneComp *SceneComp; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v7; // rdx
  std::__shared_ptr_access<SceneHomeComp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint32_t now; // [rsp+18h] [rbp-168h]
  std::unordered_map<unsigned int,HomeFieldData>::iterator __for_begin; // [rsp+20h] [rbp-160h] BYREF
  std::unordered_map<unsigned int,HomeFieldData>::iterator __for_end; // [rsp+28h] [rbp-158h] BYREF
  std::unordered_map<unsigned int,HomeFieldData> *__for_range; // [rsp+30h] [rbp-150h]
  std::unordered_map<unsigned int,HomeFieldData> *__for_range_0; // [rsp+38h] [rbp-148h]
  HomeWorld *home_world; // [rsp+40h] [rbp-140h]
  std::set<unsigned int> *__for_range_1; // [rsp+48h] [rbp-138h]
  std::pair<unsigned int const,HomeFieldData> *v17; // [rsp+50h] [rbp-130h]
  std::tuple_element<0,std::pair<unsigned int const,HomeFieldData> >::type *guid_0; // [rsp+58h] [rbp-128h]
  std::tuple_element<1,std::pair<unsigned int const,HomeFieldData> >::type *field_data_0; // [rsp+60h] [rbp-120h]
  std::pair<unsigned int const,HomeFieldData> *__in; // [rsp+68h] [rbp-118h]
  std::tuple_element<0,std::pair<unsigned int const,HomeFieldData> >::type *guid; // [rsp+70h] [rbp-110h]
  std::tuple_element<1,std::pair<unsigned int const,HomeFieldData> >::type *field_data; // [rsp+78h] [rbp-108h]
  char v23[256]; // [rsp+80h] [rbp-100h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 4 17 old_module_id:164 64 4 17 new_module_id:164 80 16 13 scene_ptr:182 112 16 23 scene_hom"
                        "e_comp_ptr:185 144 48 16 scene_id_set:173";
  *(_QWORD *)(v3 + 16) = HomePlantComp::onChangeModule;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = 61956;
  v5[536862723] = 62194;
  v5[536862724] = 62194;
  v5[536862726] = -202116109;
  *(_DWORD *)(v3 + 48) = old_module_id;
  *(_DWORD *)(v3 + 64) = new_module_id;
  now = common::tools::TimeUtils::getNow();
  __for_range = (std::unordered_map<unsigned int,HomeFieldData> *)std::unordered_map<unsigned int,HomeModuleFieldData>::operator[](
                                                                    &this->module_data_map_,
                                                                    (const std::unordered_map<unsigned int,HomeModuleFieldData>::key_type *)(v3 + 48));
  __for_begin._M_cur = std::unordered_map<unsigned int,HomeFieldData>::begin(__for_range)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,HomeFieldData>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,HomeFieldData>,false>(&__for_begin, &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFieldData>,false,false>::operator*(&__for_begin);
    guid = std::get<0ul,unsigned int const,HomeFieldData>(__in);
    field_data = std::get<1ul,unsigned int const,HomeFieldData>(__in);
    HomeFieldData::setPause(field_data, 1, now);
    std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFieldData>,false,false>::operator++(&__for_begin);
  }
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 144));
  __for_range_0 = (std::unordered_map<unsigned int,HomeFieldData> *)std::unordered_map<unsigned int,HomeModuleFieldData>::operator[](
                                                                      &this->module_data_map_,
                                                                      (const std::unordered_map<unsigned int,HomeModuleFieldData>::key_type *)(v3 + 64));
  __for_begin._M_cur = std::unordered_map<unsigned int,HomeFieldData>::begin(__for_range_0)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,HomeFieldData>::end(__for_range_0)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,HomeFieldData>,false>(&__for_begin, &__for_end) )
  {
    v17 = std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFieldData>,false,false>::operator*(&__for_begin);
    guid_0 = std::get<0ul,unsigned int const,HomeFieldData>(v17);
    field_data_0 = std::get<1ul,unsigned int const,HomeFieldData>(v17);
    HomeFieldData::setPause(field_data_0, 0, now);
    std::set<unsigned int>::insert((std::set<unsigned int> *const)(v3 + 144), &field_data_0->scene_id);
    std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFieldData>,false,false>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Home::getSceneComp(this->home_);
  home_world = HomeSceneComp::getHomeWorld(SceneComp);
  __for_range_1 = (std::set<unsigned int> *)(v3 + 144);
  __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,HomeFieldData>,false>::__node_type *)std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v3 + 144))._M_node;
  __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,HomeFieldData>,false>::__node_type *)std::set<unsigned int>::end(__for_range_1)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_end) )
  {
    v7 = std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    World::findScene((World *const)(v3 + 80), (uint32_t)home_world);
    if ( std::operator!=<Scene>((const std::shared_ptr<Scene> *)(v3 + 80), 0LL) )
    {
      std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
      EcsBase<Scene,SceneCompBase,12u>::findComp<SceneHomeComp>((const EcsBase<Scene,SceneCompBase,12> *const)(v3 + 112));
      if ( std::operator!=<SceneHomeComp>((const std::shared_ptr<SceneHomeComp> *)(v3 + 112), 0LL) )
      {
        v8 = std::__shared_ptr_access<SceneHomeComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneHomeComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
        SceneHomeComp::refreshHomePlant(v8, 0);
      }
      std::shared_ptr<SceneHomeComp>::~shared_ptr((std::shared_ptr<SceneHomeComp> *const)(v3 + 112));
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 80));
    std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
  }
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 144));
  if ( v23 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = -168430091;
  }
};

// Line 196: range 000000001687A70E-000000001687ABCC
__int64 __fastcall HomePlantComp::getEmptySubFieldVec(
        HomePlantComp *const this,
        uint32_t field_guid,
        uint32_t start_index,
        std::vector<unsigned int> *empty_subfield_index_vec)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFieldData>,false,false>::pointer v9; // rax
  std::vector<HomeSubFieldData>::size_type v10; // r15
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  const HomeSubFieldData *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  std::vector<HomeSubFieldData>::size_type v18; // r15
  const HomeSubFieldData *v19; // rax
  uint32_t i; // [rsp+20h] [rbp-F0h]
  uint32_t size; // [rsp+24h] [rbp-ECh]
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,HomeFieldData>,false> __y; // [rsp+28h] [rbp-E8h] BYREF
  std::unordered_map<unsigned int,HomeFieldData> *field_data_map; // [rsp+30h] [rbp-E0h]
  HomeFieldData *field_data; // [rsp+38h] [rbp-D8h]
  common::milog::MiLogStream v27; // [rsp+40h] [rbp-D0h] BYREF
  char v28[176]; // [rsp+60h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 48 4 9 index:221 64 4 14 field_guid:195 80 4 15 start_index:195 96 8 8 iter:198";
  *(_QWORD *)(v4 + 16) = HomePlantComp::getEmptySubFieldVec;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = -202116352;
  *(_DWORD *)(v4 + 64) = field_guid;
  *(_DWORD *)(v4 + 80) = start_index;
  field_data_map = (std::unordered_map<unsigned int,HomeFieldData> *)HomePlantComp::getCurModuleFieldDataMap(this);
  *(std::unordered_map<unsigned int,HomeFieldData>::iterator *)(v4 + 96) = std::unordered_map<unsigned int,HomeFieldData>::find(
                                                                             field_data_map,
                                                                             (const std::unordered_map<unsigned int,HomeFieldData>::key_type *)(v4 + 64));
  __y._M_cur = std::unordered_map<unsigned int,HomeFieldData>::cend(field_data_map)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,HomeFieldData>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,HomeFieldData>,false> *)(v4 + 96),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/home/home_plant/home_plant_comp.cpp",
      "getEmptySubFieldVec",
      201);
    v7 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v27,
           (const char (*)[37])"[HOME_PLANT]can't find field. guid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 64));
    common::milog::MiLogStream::~MiLogStream(&v27);
    result = 9774LL;
  }
  else
  {
    v9 = std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFieldData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFieldData>,false,false> *const)(v4 + 96));
    field_data = &v9->second;
    v10 = *(unsigned int *)(v4 + 80);
    if ( v10 < std::vector<HomeSubFieldData>::size(&v9->second.sub_field_vec) )
    {
      v14 = std::vector<HomeSubFieldData>::operator[](&field_data->sub_field_vec, *(unsigned int *)(v4 + 80));
      if ( !HomeSubFieldData::isEmpty(v14) )
      {
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/home/home_plant/home_plant_comp.cpp",
          "getEmptySubFieldVec",
          212);
        v15 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                &v27,
                (const char (*)[41])"[HOME_PLANT]subfield index error. guid: ");
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v15,
                (const unsigned int *)(v4 + 64));
        v17 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v16, (const char (*)[9])" index: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v4 + 80));
        common::milog::MiLogStream::~MiLogStream(&v27);
        result = 9769LL;
      }
      else
      {
        size = std::vector<HomeSubFieldData>::size(&field_data->sub_field_vec);
        std::vector<unsigned int>::clear(empty_subfield_index_vec);
        if ( size )
        {
          for ( i = *(_DWORD *)(v4 + 80); i < *(_DWORD *)(v4 + 80) + size; ++i )
          {
            *(_DWORD *)(v4 + 48) = i % size;
            v18 = *(unsigned int *)(v4 + 48);
            if ( v18 < std::vector<HomeSubFieldData>::size(&field_data->sub_field_vec) )
            {
              v19 = std::vector<HomeSubFieldData>::operator[](&field_data->sub_field_vec, *(unsigned int *)(v4 + 48));
              if ( HomeSubFieldData::isEmpty(v19) )
                std::vector<unsigned int>::push_back(
                  empty_subfield_index_vec,
                  (const std::vector<unsigned int>::value_type *)(v4 + 48));
            }
          }
        }
        result = 0LL;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/home/home_plant/home_plant_comp.cpp",
        "getEmptySubFieldVec",
        207);
      v11 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
              &v27,
              (const char (*)[41])"[HOME_PLANT]subfield index error. guid: ");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v4 + 64));
      v13 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v12, (const char (*)[9])" index: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v4 + 80));
      common::milog::MiLogStream::~MiLogStream(&v27);
      result = 9774LL;
    }
  }
  if ( v28 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 236: range 000000001687ABCE-000000001687B02E
__int64 __fastcall HomePlantComp::getRandomHomeGatherId(HomePlantComp *const this, uint32_t seed_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  unsigned int v6; // r14d
  uint32_t weight; // r14d
  std::map<unsigned int,unsigned int>::mapped_type *v8; // rax
  uint32_t *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  __int64 result; // rax
  std::unordered_map<unsigned int,data::ConfigHomeGather>::const_iterator __for_begin; // [rsp+10h] [rbp-140h] BYREF
  std::unordered_map<unsigned int,data::ConfigHomeGather>::const_iterator __for_end; // [rsp+18h] [rbp-138h] BYREF
  const HomeWorldExcelConfigMgr *home_config_mgr; // [rsp+20h] [rbp-130h]
  const std::unordered_map<unsigned int,data::ConfigHomeGather> *home_gather_config_map_ptr; // [rsp+28h] [rbp-128h]
  const std::unordered_map<unsigned int,data::ConfigHomeGather> *__for_range; // [rsp+30h] [rbp-120h]
  const std::pair<unsigned int const,data::ConfigHomeGather> *v17; // [rsp+38h] [rbp-118h]
  std::tuple_element<0,const std::pair<unsigned int const,data::ConfigHomeGather> >::type *gather_id; // [rsp+40h] [rbp-110h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ConfigHomeGather> >::type *config; // [rsp+48h] [rbp-108h]
  std::shared_ptr<Config> v20; // [rsp+50h] [rbp-100h] BYREF
  common::milog::MiLogStream v21; // [rsp+60h] [rbp-F0h] BYREF
  char v22[208]; // [rsp+80h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 22 selected_gather_id:249 64 4 11 seed_id:235 80 48 14 weight_map:244";
  *(_QWORD *)(v2 + 16) = HomePlantComp::getRandomHomeGatherId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = 61956;
  v4[536862724] = -202116109;
  *(_DWORD *)(v2 + 64) = seed_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v20);
  home_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20)->design_config.txt_config_mgr.home_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v20);
  home_gather_config_map_ptr = HomeWorldExcelConfigMgr::findPlantHomeGatherConfigMap(
                                 home_config_mgr,
                                 *(_DWORD *)(v2 + 64));
  if ( home_gather_config_map_ptr )
  {
    std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v2 + 80));
    __for_range = home_gather_config_map_ptr;
    __for_begin._M_cur = std::unordered_map<unsigned int,data::ConfigHomeGather>::begin(home_gather_config_map_ptr)._M_cur;
    __for_end._M_cur = std::unordered_map<unsigned int,data::ConfigHomeGather>::end(home_gather_config_map_ptr)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,data::ConfigHomeGather>,false>(
              &__for_begin,
              &__for_end) )
    {
      v17 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ConfigHomeGather>,false,false>::operator*(&__for_begin);
      gather_id = std::get<0ul,unsigned int const,data::ConfigHomeGather>(v17);
      config = (std::tuple_element<1,const std::pair<unsigned int const,data::ConfigHomeGather> >::type *)std::get<1ul,unsigned int const,data::ConfigHomeGather>(v17);
      if ( *(_BYTE *)(((unsigned __int64)&config->weight >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->weight >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      weight = config->weight;
      v8 = std::map<unsigned int,unsigned int>::operator[](
             (std::map<unsigned int,unsigned int> *const)(v2 + 80),
             gather_id);
      v9 = v8;
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v8);
      }
      *v9 = weight;
      std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ConfigHomeGather>,false,false>::operator++(&__for_begin);
    }
    *(_DWORD *)(v2 + 48) = 0;
    if ( common::tools::RandomUtils::weightSelectOne<unsigned int,unsigned int>(
           (const std::map<unsigned int,unsigned int> *)(v2 + 80),
           (unsigned int *)(v2 + 48),
           0) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/home/home_plant/home_plant_comp.cpp",
        "getRandomHomeGatherId",
        252);
      v10 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
              &v21,
              (const char (*)[44])"[HOME_PLANT]weightSelectOne fail. seed id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 64));
      common::milog::MiLogStream::~MiLogStream(&v21);
      v6 = 0;
    }
    else
    {
      v6 = *(_DWORD *)(v2 + 48);
    }
    std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v2 + 80));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home_plant/home_plant_comp.cpp",
      "getRandomHomeGatherId",
      241);
    v5 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
           &v21,
           (const char (*)[57])"[HOME_PLANT]findPlantHomeGatherConfigMap fail. seed id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 64));
    common::milog::MiLogStream::~MiLogStream(&v21);
    v6 = 0;
  }
  result = v6;
  if ( v22 == (char *)v2 )
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

// Line 259: range 000000001687B030-000000001687B963
__int64 __fastcall HomePlantComp::setChangePlantGather(
        HomePlantComp *const this,
        uint32_t field_guid,
        uint32_t sub_field_index,
        uint32_t seed_id,
        uint32_t home_gather_id)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  common::milog::MiLogStream *v8; // rax
  unsigned int v9; // r14d
  std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFieldData>,false,false>::pointer v10; // rax
  std::vector<HomeSubFieldData>::size_type v11; // r14
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rcx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  bool v22; // r14
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rcx
  HomeSceneComp *SceneComp; // rax
  uint32_t HomeWorld; // esi
  std::__shared_ptr_access<SceneHomeComp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rax
  __int64 result; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,HomeFieldData>,false> __y; // [rsp+20h] [rbp-130h] BYREF
  std::unordered_map<unsigned int,HomeFieldData> *field_data_map; // [rsp+28h] [rbp-128h]
  HomeFieldData *field_data; // [rsp+30h] [rbp-120h]
  HomeSubFieldData *sub_field_data; // [rsp+38h] [rbp-118h]
  common::milog::MiLogStream v41; // [rsp+40h] [rbp-110h] BYREF
  char v42[240]; // [rsp+60h] [rbp-F0h] BYREF

  v5 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(192LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "7 32 4 14 field_guid:258 48 4 19 sub_field_index:258 64 4 11 seed_id:258 80 4 18 home_gather_id:"
                        "258 96 8 8 iter:261 128 16 13 scene_ptr:295 160 16 23 scene_home_comp_ptr:298";
  *(_QWORD *)(v5 + 16) = HomePlantComp::setChangePlantGather;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556924;
  v7[536862722] = -234556924;
  v7[536862723] = -218959360;
  v7[536862724] = -219021312;
  v7[536862725] = -202178560;
  *(_DWORD *)(v5 + 32) = field_guid;
  *(_DWORD *)(v5 + 48) = sub_field_index;
  *(_DWORD *)(v5 + 64) = seed_id;
  *(_DWORD *)(v5 + 80) = home_gather_id;
  field_data_map = (std::unordered_map<unsigned int,HomeFieldData> *)HomePlantComp::getCurModuleFieldDataMap(this);
  *(std::unordered_map<unsigned int,HomeFieldData>::iterator *)(v5 + 96) = std::unordered_map<unsigned int,HomeFieldData>::find(
                                                                             field_data_map,
                                                                             (const std::unordered_map<unsigned int,HomeFieldData>::key_type *)(v5 + 32));
  __y._M_cur = std::unordered_map<unsigned int,HomeFieldData>::cend(field_data_map)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,HomeFieldData>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,HomeFieldData>,false> *)(v5 + 96),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v41,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/home/home_plant/home_plant_comp.cpp",
      "setChangePlantGather",
      264);
    v8 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v41,
           (const char (*)[37])"[HOME_PLANT]can't find field. guid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v5 + 32));
    common::milog::MiLogStream::~MiLogStream(&v41);
    v9 = 9774;
    goto LABEL_31;
  }
  v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFieldData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFieldData>,false,false> *const)(v5 + 96));
  field_data = &v10->second;
  v11 = *(unsigned int *)(v5 + 48);
  if ( v11 >= std::vector<HomeSubFieldData>::size(&v10->second.sub_field_vec) )
  {
    common::milog::MiLogStream::create(
      &v41,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/home/home_plant/home_plant_comp.cpp",
      "setChangePlantGather",
      270);
    v12 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
            &v41,
            (const char (*)[41])"[HOME_PLANT]subfield index error. guid: ");
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v5 + 32));
    v14 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v13, (const char (*)[9])" index: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v5 + 48));
    common::milog::MiLogStream::~MiLogStream(&v41);
    v9 = 9774;
    goto LABEL_31;
  }
  sub_field_data = std::vector<HomeSubFieldData>::operator[](&field_data->sub_field_vec, *(unsigned int *)(v5 + 48));
  if ( HomeSubFieldData::isEmpty(sub_field_data) )
  {
    common::milog::MiLogStream::create(
      &v41,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/home/home_plant/home_plant_comp.cpp",
      "setChangePlantGather",
      276);
    v15 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
            &v41,
            (const char (*)[44])"[HOME_PLANT]sub field already empty. guid: ");
    v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v5 + 32));
    v17 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v16, (const char (*)[9])" index: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v5 + 48));
    common::milog::MiLogStream::~MiLogStream(&v41);
    v9 = 9770;
    goto LABEL_31;
  }
  if ( HomeSubFieldData::getSeedId(sub_field_data) != *(_DWORD *)(v5 + 64) )
  {
    common::milog::MiLogStream::create(
      &v41,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/home/home_plant/home_plant_comp.cpp",
      "setChangePlantGather",
      281);
    v18 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
            &v41,
            (const char (*)[48])"[HOME_PLANT]sub field data not match. seed_id: ");
    v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v5 + 64));
    v20 = operator<<(v19, sub_field_data);
    if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_13:
    common::milog::MiLogStream::operator<<<Home,(Home*)0>(v20, this->home_);
    common::milog::MiLogStream::~MiLogStream(&v41);
    v9 = 9774;
    goto LABEL_31;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v5 + 160));
  v21 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 160));
  v22 = !HomeWorldExcelConfigMgr::isHomeGatherIdInSeedConfig(
           &v21->design_config.txt_config_mgr.home_config_mgr,
           *(_DWORD *)(v5 + 64),
           *(_DWORD *)(v5 + 80));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v5 + 160));
  if ( v22 )
  {
    common::milog::MiLogStream::create(
      &v41,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/home/home_plant/home_plant_comp.cpp",
      "setChangePlantGather",
      286);
    v23 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
            &v41,
            (const char (*)[47])"[HOME_PLANT]home_gather_id not match seed_id: ");
    v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)(v5 + 64));
    v25 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v24, (const char (*)[18])" home_gather_id: ");
    v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, (const unsigned int *)(v5 + 80));
    if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_13;
  }
  if ( HomeSubFieldData::getHomeGatherId(sub_field_data) == *(_DWORD *)(v5 + 80) )
  {
    v9 = 0;
  }
  else
  {
    HomeSubFieldData::setHomeGatherId(sub_field_data, *(_DWORD *)(v5 + 80));
    common::milog::MiLogStream::create(
      &v41,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/home/home_plant/home_plant_comp.cpp",
      "setChangePlantGather",
      294);
    v26 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
            &v41,
            (const char (*)[47])"[HOME_PLANT]set change plant gather. seed_id: ");
    v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, (const unsigned int *)(v5 + 64));
    v28 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v27, (const char (*)[18])" home_gather_id: ");
    v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, (const unsigned int *)(v5 + 80));
    if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::milog::MiLogStream::operator<<<Home,(Home*)0>(v29, this->home_);
    common::milog::MiLogStream::~MiLogStream(&v41);
    if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    SceneComp = Home::getSceneComp(this->home_);
    HomeWorld = (unsigned int)HomeSceneComp::getHomeWorld(SceneComp);
    if ( *(_BYTE *)(((unsigned __int64)&field_data->scene_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&field_data->scene_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    World::findScene((World *const)(v5 + 128), HomeWorld);
    if ( std::operator!=<Scene>((const std::shared_ptr<Scene> *)(v5 + 128), 0LL) )
    {
      std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 128));
      EcsBase<Scene,SceneCompBase,12u>::findComp<SceneHomeComp>((const EcsBase<Scene,SceneCompBase,12> *const)(v5 + 160));
      if ( std::operator!=<SceneHomeComp>((const std::shared_ptr<SceneHomeComp> *)(v5 + 160), 0LL) )
      {
        v32 = std::__shared_ptr_access<SceneHomeComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneHomeComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 160));
        SceneHomeComp::refreshHomePlant(v32, 0);
      }
      std::shared_ptr<SceneHomeComp>::~shared_ptr((std::shared_ptr<SceneHomeComp> *const)(v5 + 160));
    }
    v9 = 0;
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v5 + 128));
  }
LABEL_31:
  result = v9;
  if ( v42 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 308: range 000000001687B964-000000001687C743
__int64 __fastcall HomePlantComp::seed(
        HomePlantComp *const this,
        Player *player,
        __int32 field_guid,
        __int32 index,
        __int32 seed_id)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  common::milog::MiLogStream *v8; // rax
  unsigned int v9; // r14d
  std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFieldData>,false,false>::pointer v10; // rax
  std::vector<HomeSubFieldData>::size_type v11; // r14
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  uint32_t furniture_id; // ecx
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  HomeSceneComp *SceneComp; // rax
  uint32_t HomeWorld; // esi
  std::__shared_ptr_access<SceneHomeComp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHomePlant,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHomePlant,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rcx
  uint32_t v33; // r14d
  std::__shared_ptr_access<HomePlantEvent,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rax
  std::__shared_ptr_access<HomePlantEvent,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // rdx
  uint32_t *p_home_gather_id; // rax
  uint32_t v37; // r14d
  std::__shared_ptr_access<HomePlantEvent,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rax
  uint32_t v39; // r14d
  std::__shared_ptr_access<HomePlantEvent,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rdx
  uint32_t *p_sub_field_index; // rax
  PlayerEventComp *EventComp; // r14
  __int64 result; // rax
  std::string v44; // [rsp+0h] [rbp-1F0h]
  Player *playera; // [rsp+10h] [rbp-1E0h]
  uint32_t home_gather_id; // [rsp+2Ch] [rbp-1C4h]
  HomeModuleFieldData *field_data_map; // [rsp+30h] [rbp-1C0h]
  HomeFieldData *field_data; // [rsp+38h] [rbp-1B8h]
  HomeSubFieldData *sub_field_data; // [rsp+40h] [rbp-1B0h]
  HomeWorldExcelConfigMgr *home_config_mgr; // [rsp+48h] [rbp-1A8h]
  const data::HomeWorldPlantExcelConfig *plant_config_ptr; // [rsp+50h] [rbp-1A0h]
  PlayerItemComp *item_comp; // [rsp+58h] [rbp-198h]
  common::milog::MiLogStream v53; // [rsp+60h] [rbp-190h] BYREF
  char v54[368]; // [rsp+80h] [rbp-170h] BYREF

  *(&v44._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v44._anon_0._M_allocated_capacity = (std::string::size_type)player;
  HIDWORD(v44._M_string_length) = field_guid;
  LODWORD(v44._M_string_length) = index;
  HIDWORD(v44._M_dataplus._M_p) = seed_id;
  v5 = (unsigned __int64)v54;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_3(320LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "11 32 1 10 holder:371 48 4 14 field_guid:307 64 4 9 index:307 80 4 11 seed_id:307 96 8 8 iter:31"
                        "0 128 8 10 reason:355 160 16 14 item_param:348 192 16 13 scene_ptr:360 224 16 11 log_ptr:372 256"
                        " 16 13 event_ptr:378 288 16 23 scene_home_comp_ptr:363";
  *(_QWORD *)(v5 + 16) = HomePlantComp::seed;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556927;
  v7[536862722] = -234556924;
  v7[536862723] = -218959360;
  v7[536862724] = -218959360;
  v7[536862725] = -219021312;
  v7[536862726] = -219021312;
  v7[536862727] = -219021312;
  v7[536862728] = -219021312;
  v7[536862729] = -202178560;
  *(_DWORD *)(v5 + 48) = HIDWORD(v44._M_string_length);
  *(_DWORD *)(v5 + 64) = v44._M_string_length;
  *(_DWORD *)(v5 + 80) = HIDWORD(v44._M_dataplus._M_p);
  field_data_map = HomePlantComp::getCurModuleFieldDataMap(this);
  *(std::unordered_map<unsigned int,HomeFieldData>::iterator *)(v5 + 96) = std::unordered_map<unsigned int,HomeFieldData>::find(
                                                                             &field_data_map->field_data_map,
                                                                             (const std::unordered_map<unsigned int,HomeFieldData>::key_type *)(v5 + 48));
  *(std::unordered_map<unsigned int,HomeFieldData>::const_iterator *)(v5 + 128) = std::unordered_map<unsigned int,HomeFieldData>::cend(&field_data_map->field_data_map);
  if ( std::__detail::operator==<std::pair<unsigned int const,HomeFieldData>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,HomeFieldData>,false> *)(v5 + 96),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,HomeFieldData>,false> *)(v5 + 128)) )
  {
    common::milog::MiLogStream::create(
      &v53,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/home/home_plant/home_plant_comp.cpp",
      "seed",
      313);
    v8 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v53,
           (const char (*)[37])"[HOME_PLANT]can't find field. guid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v5 + 48));
    common::milog::MiLogStream::~MiLogStream(&v53);
    v9 = 9774;
  }
  else
  {
    v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFieldData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFieldData>,false,false> *const)(v5 + 96));
    field_data = &v10->second;
    v11 = *(unsigned int *)(v5 + 64);
    if ( v11 < std::vector<HomeSubFieldData>::size(&v10->second.sub_field_vec) )
    {
      sub_field_data = std::vector<HomeSubFieldData>::operator[](&field_data->sub_field_vec, *(unsigned int *)(v5 + 64));
      if ( !HomeSubFieldData::isEmpty(sub_field_data) )
      {
        common::milog::MiLogStream::create(
          &v53,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/home/home_plant/home_plant_comp.cpp",
          "seed",
          325);
        v15 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                &v53,
                (const char (*)[40])"[HOME_PLANT]sub field not empty. guid: ");
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v15,
                (const unsigned int *)(v5 + 48));
        v17 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v16, (const char (*)[9])" index: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v5 + 64));
        common::milog::MiLogStream::~MiLogStream(&v53);
        v9 = 9769;
      }
      else
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)(v5 + 288));
        home_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 288))->design_config.txt_config_mgr.home_config_mgr;
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v5 + 288));
        plant_config_ptr = data::HomeWorldExcelConfigMgrBase::findHomeWorldPlantExcelConfig(
                             home_config_mgr,
                             *(_DWORD *)(v5 + 80));
        if ( plant_config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&field_data->furniture_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)field_data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&field_data->furniture_id >> 3)
                                                                     + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          furniture_id = field_data->furniture_id;
          if ( *(_BYTE *)(((unsigned __int64)&plant_config_ptr->field_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&plant_config_ptr->field_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          if ( furniture_id == plant_config_ptr->field_id )
          {
            home_gather_id = HomePlantComp::getRandomHomeGatherId(this, *(_DWORD *)(v5 + 80));
            if ( home_gather_id )
            {
              item_comp = Player::getItemComp(player);
              *(_QWORD *)(v5 + 160) = 0LL;
              *(_QWORD *)(v5 + 168) = 0LL;
              *(_DWORD *)(v5 + 164) = 1;
              *(_DWORD *)(v5 + 160) = *(_DWORD *)(v5 + 80);
              if ( PlayerItemComp::checkSubItem(item_comp, (const ItemParam *)(v5 + 160)) )
              {
                common::milog::MiLogStream::create(
                  &v53,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/home/home_plant/home_plant_comp.cpp",
                  "seed",
                  352);
                v26 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                        &v53,
                        (const char (*)[41])"[HOME_PLANT]checkSubItem fail. seed id: ");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v26,
                  (const unsigned int *)(v5 + 80));
                common::milog::MiLogStream::~MiLogStream(&v53);
                v9 = -1;
              }
              else
              {
                SubItemReason::SubItemReason((SubItemReason *const)(v5 + 128), ACTION_REASON_HOME_PLANT_SEED);
                PlayerItemComp::subItem(item_comp, (const ItemParam *)(v5 + 160), (const SubItemReason *)(v5 + 128));
                HomeSubFieldData::seed(sub_field_data, *(_DWORD *)(v5 + 80), home_gather_id);
                HomePlantComp::notifyFieldData(this, field_data);
                if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                SceneComp = Home::getSceneComp(this->home_);
                HomeWorld = (unsigned int)HomeSceneComp::getHomeWorld(SceneComp);
                if ( *(_BYTE *)(((unsigned __int64)&field_data->scene_id >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&field_data->scene_id >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4();
                }
                World::findScene((World *const)(v5 + 192), HomeWorld);
                if ( std::operator!=<Scene>((const std::shared_ptr<Scene> *)(v5 + 192), 0LL) )
                {
                  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 192));
                  EcsBase<Scene,SceneCompBase,12u>::findComp<SceneHomeComp>((const EcsBase<Scene,SceneCompBase,12> *const)(v5 + 288));
                  if ( std::operator!=<SceneHomeComp>((const std::shared_ptr<SceneHomeComp> *)(v5 + 288), 0LL) )
                  {
                    v29 = std::__shared_ptr_access<SceneHomeComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneHomeComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 288));
                    SceneHomeComp::refreshHomePlant(v29, 0);
                  }
                  std::shared_ptr<SceneHomeComp>::~shared_ptr((std::shared_ptr<SceneHomeComp> *const)(v5 + 288));
                }
                BasicComp = Player::getBasicComp((Player *const)v44._anon_0._M_allocated_capacity);
                PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v53, BasicComp);
                StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 32), 0xDAAu, v44);
                std::string::~string(&v53);
                common::tools::perf::make_shared<proto_log::PlayerLogBodyHomePlant>();
                v31 = std::__shared_ptr_access<proto_log::PlayerLogBodyHomePlant,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHomePlant,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 224));
                proto_log::PlayerLogBodyHomePlant::set_seed_id(v31, *(_DWORD *)(v5 + 80));
                v32 = std::__shared_ptr_access<proto_log::PlayerLogBodyHomePlant,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHomePlant,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 224));
                if ( *(_BYTE *)(((unsigned __int64)&field_data->furniture_id >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)field_data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&field_data->furniture_id >> 3)
                                                                           + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                proto_log::PlayerLogBodyHomePlant::set_furniture_id(v32, field_data->furniture_id);
                std::shared_ptr<google::protobuf::Message>::shared_ptr(
                  (std::shared_ptr<google::protobuf::Message> *const)(v5 + 288),
                  0LL);
                std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyHomePlant,void>(
                  (std::shared_ptr<google::protobuf::Message> *const)(v5 + 256),
                  (const std::shared_ptr<proto_log::PlayerLogBodyHomePlant> *)(v5 + 224));
                Player::printStatLog(playera, (MessagePtr *)(v5 + 256), (MessagePtr *)(v5 + 288), 0xEu);
                std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)(v5 + 256));
                std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)(v5 + 288));
                std::shared_ptr<proto_log::PlayerLogBodyHomePlant>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyHomePlant> *const)(v5 + 224));
                StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 32));
                common::tools::perf::make_shared<HomePlantEvent>();
                v33 = *(_DWORD *)(v5 + 80);
                v34 = std::__shared_ptr_access<HomePlantEvent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomePlantEvent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 256));
                if ( *(_BYTE *)(((unsigned __int64)&v34->seed_id >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&v34->seed_id >> 3) + 0x7FFF8000) <= 3 )
                {
                  v34 = (std::__shared_ptr_access<HomePlantEvent,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v34->seed_id);
                }
                v34->seed_id = v33;
                v35 = std::__shared_ptr_access<HomePlantEvent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomePlantEvent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 256));
                p_home_gather_id = &v35->home_gather_id;
                if ( *(_BYTE *)(((unsigned __int64)p_home_gather_id >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)p_home_gather_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_home_gather_id >> 3)
                                                                                     + 0x7FFF8000) )
                {
                  __asan_report_store4(p_home_gather_id);
                }
                v35->home_gather_id = home_gather_id;
                v37 = *(_DWORD *)(v5 + 48);
                v38 = std::__shared_ptr_access<HomePlantEvent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomePlantEvent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 256));
                if ( *(_BYTE *)(((unsigned __int64)&v38->field_guid >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&v38->field_guid >> 3) + 0x7FFF8000) <= 3 )
                {
                  v38 = (std::__shared_ptr_access<HomePlantEvent,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v38->field_guid);
                }
                v38->field_guid = v37;
                v39 = *(_DWORD *)(v5 + 64);
                v40 = std::__shared_ptr_access<HomePlantEvent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomePlantEvent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 256));
                p_sub_field_index = &v40->sub_field_index;
                if ( *(_BYTE *)(((unsigned __int64)p_sub_field_index >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)p_sub_field_index & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_sub_field_index >> 3)
                                                                                      + 0x7FFF8000) )
                {
                  __asan_report_store4(p_sub_field_index);
                }
                v40->sub_field_index = v39;
                EventComp = Player::getEventComp(playera);
                std::shared_ptr<BaseEvent>::shared_ptr<HomePlantEvent,void>(
                  (std::shared_ptr<BaseEvent> *const)(v5 + 288),
                  (const std::shared_ptr<HomePlantEvent> *)(v5 + 256));
                PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)(v5 + 288));
                std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v5 + 288));
                std::shared_ptr<HomePlantEvent>::~shared_ptr((std::shared_ptr<HomePlantEvent> *const)(v5 + 256));
                v9 = 0;
                std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v5 + 192));
              }
            }
            else
            {
              common::milog::MiLogStream::create(
                &v53,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/home/home_plant/home_plant_comp.cpp",
                "seed",
                343);
              v25 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                      &v53,
                      (const char (*)[51])"[HOME_PLANT]getRandomHomeGatherId fail. seed id : ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v25,
                (const unsigned int *)(v5 + 80));
              common::milog::MiLogStream::~MiLogStream(&v53);
              v9 = 5;
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v53,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/home/home_plant/home_plant_comp.cpp",
              "seed",
              337);
            v20 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                    &v53,
                    (const char (*)[50])"[HOME_PLANT]error field id. field furniture_id : ");
            v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &field_data->furniture_id);
            v22 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                    v21,
                    (const char (*)[21])" need furniture id: ");
            v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v22,
                    &plant_config_ptr->field_id);
            v24 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v23, (const char (*)[11])" seed_id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v5 + 80));
            common::milog::MiLogStream::~MiLogStream(&v53);
            v9 = 9771;
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v53,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/home/home_plant/home_plant_comp.cpp",
            "seed",
            332);
          v18 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
                  &v53,
                  (const char (*)[58])"[HOME_PLANT]findHomeWorldPlantExcelConfig fail. seed id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v5 + 80));
          common::milog::MiLogStream::~MiLogStream(&v53);
          v9 = 5;
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v53,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/home/home_plant/home_plant_comp.cpp",
        "seed",
        319);
      v12 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
              &v53,
              (const char (*)[41])"[HOME_PLANT]subfield index error. guid: ");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v5 + 48));
      v14 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v13, (const char (*)[9])" index: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v5 + 64));
      common::milog::MiLogStream::~MiLogStream(&v53);
      v9 = 9774;
    }
  }
  result = v9;
  if ( v54 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 389: range 000000001687C744-000000001687CD63
__int64 __fastcall HomePlantComp::weed(HomePlantComp *const this, Player *player, __int32 field_guid, __int32 index)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFieldData>,false,false>::pointer v9; // rax
  std::vector<HomeSubFieldData>::size_type v10; // r15
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHomePlantCancel,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHomePlantCancel,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rcx
  std::string v20; // [rsp+0h] [rbp-160h]
  Player *playera; // [rsp+10h] [rbp-150h]
  google::protobuf::uint32 seed_id; // [rsp+2Ch] [rbp-134h]
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,HomeFieldData>,false> __y; // [rsp+30h] [rbp-130h] BYREF
  std::unordered_map<unsigned int,HomeFieldData> *field_data_map; // [rsp+38h] [rbp-128h]
  HomeFieldData *field_data; // [rsp+40h] [rbp-120h]
  HomeSubFieldData *sub_field_data; // [rsp+48h] [rbp-118h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+50h] [rbp-110h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+60h] [rbp-100h] BYREF
  common::milog::MiLogStream v29; // [rsp+70h] [rbp-F0h] BYREF
  char v30[208]; // [rsp+90h] [rbp-D0h] BYREF

  *(&v20._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v20._anon_0._M_allocated_capacity = (std::string::size_type)player;
  HIDWORD(v20._M_string_length) = field_guid;
  LODWORD(v20._M_string_length) = index;
  v4 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 48 1 10 holder:414 64 4 14 field_guid:388 80 4 9 index:388 96 8 8 iter:391 128 16 11 log_ptr:415";
  *(_QWORD *)(v4 + 16) = HomePlantComp::weed;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -234556924;
  v6[536862723] = -218959360;
  v6[536862724] = -202178560;
  *(_DWORD *)(v4 + 64) = HIDWORD(v20._M_string_length);
  *(_DWORD *)(v4 + 80) = v20._M_string_length;
  field_data_map = (std::unordered_map<unsigned int,HomeFieldData> *)HomePlantComp::getCurModuleFieldDataMap(this);
  *(std::unordered_map<unsigned int,HomeFieldData>::iterator *)(v4 + 96) = std::unordered_map<unsigned int,HomeFieldData>::find(
                                                                             field_data_map,
                                                                             (const std::unordered_map<unsigned int,HomeFieldData>::key_type *)(v4 + 64));
  __y._M_cur = std::unordered_map<unsigned int,HomeFieldData>::cend(field_data_map)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,HomeFieldData>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,HomeFieldData>,false> *)(v4 + 96),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/home/home_plant/home_plant_comp.cpp",
      "weed",
      394);
    v7 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v29,
           (const char (*)[37])"[HOME_PLANT]can't find field. guid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 64));
    common::milog::MiLogStream::~MiLogStream(&v29);
    result = 9774LL;
  }
  else
  {
    v9 = std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFieldData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFieldData>,false,false> *const)(v4 + 96));
    field_data = &v9->second;
    v10 = *(unsigned int *)(v4 + 80);
    if ( v10 < std::vector<HomeSubFieldData>::size(&v9->second.sub_field_vec) )
    {
      sub_field_data = std::vector<HomeSubFieldData>::operator[](&field_data->sub_field_vec, *(unsigned int *)(v4 + 80));
      if ( HomeSubFieldData::isEmpty(sub_field_data) )
      {
        common::milog::MiLogStream::create(
          &v29,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/home/home_plant/home_plant_comp.cpp",
          "weed",
          406);
        v14 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                &v29,
                (const char (*)[44])"[HOME_PLANT]sub field already empty. guid: ");
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v14,
                (const unsigned int *)(v4 + 64));
        v16 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v15, (const char (*)[9])" index: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v4 + 80));
        common::milog::MiLogStream::~MiLogStream(&v29);
        result = 9770LL;
      }
      else
      {
        seed_id = HomeSubFieldData::getSeedId(sub_field_data);
        HomeSubFieldData::clear(sub_field_data);
        HomePlantComp::notifyFieldData(this, field_data);
        BasicComp = Player::getBasicComp(player);
        PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v29, BasicComp);
        StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48), 0xDABu, v20);
        std::string::~string(&v29);
        common::tools::perf::make_shared<proto_log::PlayerLogBodyHomePlantCancel>();
        v18 = std::__shared_ptr_access<proto_log::PlayerLogBodyHomePlantCancel,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHomePlantCancel,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
        proto_log::PlayerLogBodyHomePlantCancel::set_seed_id(v18, seed_id);
        v19 = std::__shared_ptr_access<proto_log::PlayerLogBodyHomePlantCancel,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHomePlantCancel,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
        if ( *(_BYTE *)(((unsigned __int64)&field_data->furniture_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)field_data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&field_data->furniture_id >> 3)
                                                                   + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto_log::PlayerLogBodyHomePlantCancel::set_furniture_id(v19, field_data->furniture_id);
        std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
        std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyHomePlantCancel,void>(
          &p_body_ptr,
          (const std::shared_ptr<proto_log::PlayerLogBodyHomePlantCancel> *)(v4 + 128));
        Player::printStatLog(playera, &p_body_ptr, &p_body_ext_ptr, 0xEu);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
        std::shared_ptr<proto_log::PlayerLogBodyHomePlantCancel>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyHomePlantCancel> *const)(v4 + 128));
        StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48));
        result = 0LL;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/home/home_plant/home_plant_comp.cpp",
        "weed",
        400);
      v11 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
              &v29,
              (const char (*)[41])"[HOME_PLANT]subfield index error. guid: ");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v4 + 64));
      v13 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v12, (const char (*)[9])" index: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v4 + 80));
      common::milog::MiLogStream::~MiLogStream(&v29);
      result = 9774LL;
    }
  }
  if ( v30 == (char *)v4 )
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

// Line 425: range 000000001687CD64-000000001687D8BE
__int64 __fastcall HomePlantComp::gather(
        HomePlantComp *const this,
        Player *player,
        uint32_t field_guid,
        uint32_t sub_field_index,
        uint32_t gather_index)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  common::milog::MiLogStream *v8; // rax
  __int64 result; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFieldData>,false,false>::pointer v10; // rax
  std::vector<HomeSubFieldData>::size_type v11; // r14
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  const std::set<unsigned int> *BundleIndexSet; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  common::milog::MiLogStream *v23; // rax
  uint32_t GrowTime; // ecx
  common::milog::MiLogStream *v25; // r14
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  PlayerItemComp *ItemComp; // rdi
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  PlayerItemComp *p_drop_id; // rdi
  PlayerWatcherComp *WatcherComp; // rcx
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,HomeFieldData>,false> __y; // [rsp+20h] [rbp-170h] BYREF
  std::unordered_map<unsigned int,HomeFieldData> *field_data_map; // [rsp+28h] [rbp-168h]
  HomeFieldData *field_data; // [rsp+30h] [rbp-160h]
  HomeSubFieldData *sub_field_data; // [rsp+38h] [rbp-158h]
  const data::HomeWorldPlantExcelConfig *plant_config_ptr; // [rsp+40h] [rbp-150h]
  const data::ConfigHomeGather *gather_config_ptr; // [rsp+48h] [rbp-148h]
  std::shared_ptr<Config> v48; // [rsp+50h] [rbp-140h] BYREF
  common::milog::MiLogStream v49; // [rsp+60h] [rbp-130h] BYREF
  char v50[272]; // [rsp+80h] [rbp-110h] BYREF

  v5 = (unsigned __int64)v50;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(224LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "8 32 4 11 seed_id:450 48 4 18 home_gather_id:462 64 4 7 ret:470 80 4 14 field_guid:424 96 4 19 s"
                        "ub_field_index:424 112 4 16 gather_index:424 128 8 8 iter:427 160 24 17 action_reason:469";
  *(_QWORD *)(v5 + 16) = HomePlantComp::gather;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556924;
  v7[536862722] = -234556924;
  v7[536862723] = -234556924;
  v7[536862724] = -218959360;
  v7[536862725] = -218103808;
  v7[536862726] = -202116109;
  *(_DWORD *)(v5 + 80) = field_guid;
  *(_DWORD *)(v5 + 96) = sub_field_index;
  *(_DWORD *)(v5 + 112) = gather_index;
  field_data_map = (std::unordered_map<unsigned int,HomeFieldData> *)HomePlantComp::getCurModuleFieldDataMap(this);
  *(std::unordered_map<unsigned int,HomeFieldData>::iterator *)(v5 + 128) = std::unordered_map<unsigned int,HomeFieldData>::find(
                                                                              field_data_map,
                                                                              (const std::unordered_map<unsigned int,HomeFieldData>::key_type *)(v5 + 80));
  __y._M_cur = std::unordered_map<unsigned int,HomeFieldData>::cend(field_data_map)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,HomeFieldData>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,HomeFieldData>,false> *)(v5 + 128),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v49,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/home/home_plant/home_plant_comp.cpp",
      "gather",
      430);
    v8 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v49,
           (const char (*)[37])"[HOME_PLANT]can't find field. guid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v5 + 80));
    common::milog::MiLogStream::~MiLogStream(&v49);
    result = 9774LL;
  }
  else
  {
    v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFieldData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFieldData>,false,false> *const)(v5 + 128));
    field_data = &v10->second;
    v11 = *(unsigned int *)(v5 + 96);
    if ( v11 < std::vector<HomeSubFieldData>::size(&v10->second.sub_field_vec) )
    {
      sub_field_data = std::vector<HomeSubFieldData>::operator[](&field_data->sub_field_vec, *(unsigned int *)(v5 + 96));
      if ( HomeSubFieldData::isEmpty(sub_field_data) )
      {
        common::milog::MiLogStream::create(
          &v49,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/home/home_plant/home_plant_comp.cpp",
          "gather",
          442);
        v15 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                &v49,
                (const char (*)[44])"[HOME_PLANT]sub field already empty. guid: ");
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v15,
                (const unsigned int *)(v5 + 80));
        v17 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                v16,
                (const char (*)[19])" sub_field_index: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v5 + 96));
        common::milog::MiLogStream::~MiLogStream(&v49);
        result = 9770LL;
      }
      else
      {
        BundleIndexSet = (const std::set<unsigned int> *)HomeSubFieldData::getBundleIndexSet(sub_field_data);
        if ( !common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
                BundleIndexSet,
                (const unsigned int *)(v5 + 112)) )
        {
          common::milog::MiLogStream::create(
            &v49,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/home/home_plant/home_plant_comp.cpp",
            "gather",
            447);
          v19 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                  &v49,
                  (const char (*)[51])"[HOME_PLANT]sub field gather already empty. guid: ");
          v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v19,
                  (const unsigned int *)(v5 + 80));
          v21 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                  v20,
                  (const char (*)[19])" sub_field_index: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v5 + 96));
          common::milog::MiLogStream::~MiLogStream(&v49);
          result = 9770LL;
        }
        else
        {
          *(_DWORD *)(v5 + 32) = HomeSubFieldData::getSeedId(sub_field_data);
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v48);
          v22 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v48);
          plant_config_ptr = data::HomeWorldExcelConfigMgrBase::findHomeWorldPlantExcelConfig(
                               &v22->design_config.txt_config_mgr.home_config_mgr,
                               *(_DWORD *)(v5 + 32));
          std::shared_ptr<Config>::~shared_ptr(&v48);
          if ( plant_config_ptr )
          {
            GrowTime = HomeSubFieldData::getGrowTime(sub_field_data);
            if ( *(_BYTE *)(((unsigned __int64)&plant_config_ptr->time >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)plant_config_ptr + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&plant_config_ptr->time >> 3)
                                                                              + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            if ( GrowTime >= plant_config_ptr->time )
            {
              *(_DWORD *)(v5 + 48) = HomeSubFieldData::getHomeGatherId(sub_field_data);
              ServiceBox::findService<GameserverService>();
              GameserverService::getConfig((GameserverService *const)&v48);
              v28 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v48);
              gather_config_ptr = HomeWorldExcelConfigMgr::findPlantHomeGatherConfig(
                                    &v28->design_config.txt_config_mgr.home_config_mgr,
                                    *(_DWORD *)(v5 + 32),
                                    *(_DWORD *)(v5 + 48));
              std::shared_ptr<Config>::~shared_ptr(&v48);
              if ( gather_config_ptr )
              {
                ActionReason::ActionReason(
                  (ActionReason *const)(v5 + 160),
                  ACTION_REASON_HOME_PLANT_GATHER,
                  ITEM_LIMIT_HOME_PLANT_GATHER_DROP);
                ItemComp = Player::getItemComp(player);
                if ( *(_BYTE *)(((unsigned __int64)&gather_config_ptr->drop_id >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&gather_config_ptr->drop_id >> 3) + 0x7FFF8000) <= 3 )
                {
                  ItemComp = (PlayerItemComp *)&gather_config_ptr->drop_id;
                  __asan_report_load4();
                }
                *(_DWORD *)(v5 + 64) = PlayerItemComp::checkFrontLooseGrantDropItems(
                                         ItemComp,
                                         gather_config_ptr->drop_id,
                                         1u,
                                         (const ActionReason *)(v5 + 160),
                                         0LL);
                if ( *(_DWORD *)(v5 + 64) )
                {
                  common::milog::MiLogStream::create(
                    &v49,
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/home/home_plant/home_plant_comp.cpp",
                    "gather",
                    473);
                  v34 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                          &v49,
                          (const char (*)[55])"[HOME_PLANT]checkFrontLooseGrantDropItems fails. ret: ");
                  v35 = common::milog::MiLogStream::operator<<<int,(int *)0>(v34, (const int *)(v5 + 64));
                  operator<<(v35, player);
                  common::milog::MiLogStream::~MiLogStream(&v49);
                  result = *(unsigned int *)(v5 + 64);
                }
                else
                {
                  HomeSubFieldData::removeBundleIndex(sub_field_data, *(_DWORD *)(v5 + 112));
                  p_drop_id = Player::getItemComp(player);
                  if ( *(_BYTE *)(((unsigned __int64)&gather_config_ptr->drop_id >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&gather_config_ptr->drop_id >> 3) + 0x7FFF8000) <= 3 )
                  {
                    p_drop_id = (PlayerItemComp *)&gather_config_ptr->drop_id;
                    __asan_report_load4();
                  }
                  PlayerItemComp::grantDropItems(
                    p_drop_id,
                    gather_config_ptr->drop_id,
                    1u,
                    (const ActionReason *)(v5 + 160),
                    0LL);
                  HomePlantComp::notifyFieldData(this, field_data);
                  WatcherComp = Player::getWatcherComp(player);
                  if ( *(_BYTE *)(((unsigned __int64)&field_data->furniture_id >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)field_data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&field_data->furniture_id >> 3)
                                                                             + 0x7FFF8000) )
                  {
                    __asan_report_load4();
                  }
                  PlayerWatcherComp::triggerHomeFieldGather(WatcherComp, field_data->furniture_id);
                  result = 0LL;
                }
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v49,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/home/home_plant/home_plant_comp.cpp",
                  "gather",
                  466);
                v29 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
                        &v49,
                        (const char (*)[54])"[HOME_PLANT]findPlantHomeGatherConfig fail. seed id: ");
                v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v29,
                        (const unsigned int *)(v5 + 32));
                v31 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                        v30,
                        (const char (*)[18])" home_gather_id: ");
                v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v31,
                        (const unsigned int *)(v5 + 48));
                operator<<(v32, player);
                common::milog::MiLogStream::~MiLogStream(&v49);
                result = 5LL;
              }
            }
            else
            {
              common::milog::MiLogStream::create(
                &v49,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/home/home_plant/home_plant_comp.cpp",
                "gather",
                459);
              v25 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                      &v49,
                      (const char (*)[45])"[HOME_PLANT]grow time not enough. now time: ");
              *(_DWORD *)(v5 + 64) = HomeSubFieldData::getGrowTime(sub_field_data);
              v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v25,
                      (const unsigned int *)(v5 + 64));
              v27 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                      v26,
                      (const char (*)[13])" need time: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, &plant_config_ptr->time);
              common::milog::MiLogStream::~MiLogStream(&v49);
              result = 9772LL;
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v49,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/home/home_plant/home_plant_comp.cpp",
              "gather",
              454);
            v23 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                    &v49,
                    (const char (*)[41])"[HOME_PLANT]can't find config. seed id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)(v5 + 32));
            common::milog::MiLogStream::~MiLogStream(&v49);
            result = 5LL;
          }
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v49,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/home/home_plant/home_plant_comp.cpp",
        "gather",
        436);
      v12 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
              &v49,
              (const char (*)[41])"[HOME_PLANT]subfield index error. guid: ");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v5 + 80));
      v14 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              v13,
              (const char (*)[19])" sub_field_index: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v5 + 96));
      common::milog::MiLogStream::~MiLogStream(&v49);
      result = 9774LL;
    }
  }
  if ( v50 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 488: range 000000001687D8C0-000000001687DA34
void __cdecl HomePlantComp::notifyFieldData(HomePlantComp *const this, HomeFieldData *field_data)
{
  proto::HomePlantFieldNotify *v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  proto::HomePlantFieldData *v5; // rdx
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (proto::HomePlantFieldNotify *)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (proto::HomePlantFieldNotify *)v3;
  }
  v2->_vptr_MessageLite = (int (**)(...))1102416563;
  v2->_internal_metadata_.ptr_ = "1 32 32 10 notify:489";
  v2->field_ = (proto::HomePlantFieldData *)HomePlantComp::notifyFieldData;
  v4 = (unsigned __int64)v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  proto::HomePlantFieldNotify::HomePlantFieldNotify(v2 + 1);
  v5 = proto::HomePlantFieldNotify::mutable_field(v2 + 1);
  HomeFieldData::toClient(field_data, v5);
  if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Home::notifyAllPlayer<proto::HomePlantFieldNotify>(this->home_, v2 + 1, 0);
  proto::HomePlantFieldNotify::~HomePlantFieldNotify(v2 + 1);
  if ( v6 == (char *)v2 )
  {
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_vptr_MessageLite = (int (**)(...))1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 495: range 000000001687DA36-000000001687DC4C
void __cdecl HomePlantComp::notifyCurFieldData(HomePlantComp *const this, Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  proto::HomePlantFieldData *v5; // rax
  std::unordered_map<unsigned int,HomeFieldData>::iterator __for_begin; // [rsp+10h] [rbp-D0h] BYREF
  std::unordered_map<unsigned int,HomeFieldData>::iterator __for_end; // [rsp+18h] [rbp-C8h] BYREF
  std::unordered_map<unsigned int,HomeFieldData> *__for_range; // [rsp+20h] [rbp-C0h]
  const std::pair<unsigned int const,HomeFieldData> *v9; // [rsp+28h] [rbp-B8h]
  std::tuple_element<0,const std::pair<unsigned int const,HomeFieldData> >::type *guid; // [rsp+30h] [rbp-B0h]
  std::tuple_element<1,const std::pair<unsigned int const,HomeFieldData> >::type *field_data; // [rsp+38h] [rbp-A8h]
  char v12[160]; // [rsp+40h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 48 48 10 notify:496";
  *(_QWORD *)(v2 + 16) = HomePlantComp::notifyCurFieldData;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  proto::HomePlantInfoNotify::HomePlantInfoNotify((proto::HomePlantInfoNotify *const)(v2 + 48));
  __for_range = (std::unordered_map<unsigned int,HomeFieldData> *)HomePlantComp::getCurModuleFieldDataMap(this);
  __for_begin._M_cur = std::unordered_map<unsigned int,HomeFieldData>::begin(__for_range)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,HomeFieldData>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,HomeFieldData>,false>(&__for_begin, &__for_end) )
  {
    v9 = std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFieldData>,false,false>::operator*(&__for_begin);
    guid = std::get<0ul,unsigned int const,HomeFieldData>(v9);
    field_data = (std::tuple_element<1,const std::pair<unsigned int const,HomeFieldData> >::type *)std::get<1ul,unsigned int const,HomeFieldData>(v9);
    v5 = proto::HomePlantInfoNotify::add_field_list((proto::HomePlantInfoNotify *const)(v2 + 48));
    HomeFieldData::toClient(field_data, v5);
    std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFieldData>,false,false>::operator++(&__for_begin);
  }
  Player::sendProto(player, (const google::protobuf::Message *)(v2 + 48));
  proto::HomePlantInfoNotify::~HomePlantInfoNotify((proto::HomePlantInfoNotify *const)(v2 + 48));
  if ( v12 == (char *)v2 )
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

// Line 505: range 000000001687DC4E-000000001687DD03
void __cdecl HomePlantComp::fillCurFieldData(HomePlantComp *const this, proto::HomePlantInfoRsp *rsp_0)
{
  proto::HomePlantFieldData *v2; // rax
  std::unordered_map<unsigned int,HomeFieldData>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::unordered_map<unsigned int,HomeFieldData>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  std::unordered_map<unsigned int,HomeFieldData> *__for_range; // [rsp+20h] [rbp-20h]
  const std::pair<unsigned int const,HomeFieldData> *v6; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,HomeFieldData> >::type *guid; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,HomeFieldData> >::type *field_data; // [rsp+38h] [rbp-8h]

  __for_range = (std::unordered_map<unsigned int,HomeFieldData> *)HomePlantComp::getCurModuleFieldDataMap(this);
  __for_begin._M_cur = std::unordered_map<unsigned int,HomeFieldData>::begin(__for_range)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,HomeFieldData>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,HomeFieldData>,false>(&__for_begin, &__for_end) )
  {
    v6 = std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFieldData>,false,false>::operator*(&__for_begin);
    guid = std::get<0ul,unsigned int const,HomeFieldData>(v6);
    field_data = (std::tuple_element<1,const std::pair<unsigned int const,HomeFieldData> >::type *)std::get<1ul,unsigned int const,HomeFieldData>(v6);
    v2 = proto::HomePlantInfoRsp::add_field_list(rsp_0);
    HomeFieldData::toClient(field_data, v2);
    std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFieldData>,false,false>::operator++(&__for_begin);
  }
};

// Line 514: range 000000001687DD04-000000001687DE07
HomeModuleFieldData *__cdecl HomePlantComp::getCurModuleFieldDataMap(HomePlantComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  HomeModuleFieldData *result; // rax
  char v5[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 17 cur_module_id:515";
  *(_QWORD *)(v1 + 16) = HomePlantComp::getCurModuleFieldDataMap;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(_DWORD *)(v1 + 32) = Home::getCurModuleId(this->home_);
  result = std::unordered_map<unsigned int,HomeModuleFieldData>::operator[](
             &this->module_data_map_,
             (const std::unordered_map<unsigned int,HomeModuleFieldData>::key_type *)(v1 + 32));
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

// Line 520: range 000000001687DE08-000000001687DF5B
HomeModuleFieldData *__fastcall HomePlantComp::getModuleFieldDataMap(HomePlantComp *const this, uint32_t module_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  HomeModuleFieldData *result; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,HomeModuleFieldData>,false> __y; // [rsp+18h] [rbp-88h] BYREF
  char v7[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 13 module_id:519 64 8 8 iter:521";
  *(_QWORD *)(v2 + 16) = HomePlantComp::getModuleFieldDataMap;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = module_id;
  *(std::unordered_map<unsigned int,HomeModuleFieldData>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,HomeModuleFieldData>::find(
                                                                                   &this->module_data_map_,
                                                                                   (const std::unordered_map<unsigned int,HomeModuleFieldData>::key_type *)(v2 + 48));
  __y._M_cur = std::unordered_map<unsigned int,HomeModuleFieldData>::cend(&this->module_data_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,HomeModuleFieldData>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,HomeModuleFieldData>,false> *)(v2 + 64),
         &__y) )
  {
    result = 0LL;
  }
  else
  {
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,HomeModuleFieldData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,HomeModuleFieldData>,false,false> *const)(v2 + 64))->second;
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

// Line 530: range 000000001687DF5C-000000001687E778
// local variable allocation has failed, the output may be wrong!
void __fastcall HomePlantComp::updateFieldData(HomePlantComp *const this, uint32_t module_id, uint32_t scene_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  uint32_t SceneComp; // eax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rcx
  HomeModuleData *v9; // rax
  common::milog::MiLogStream *v10; // rax
  HomeModuleFieldData *v11; // rax
  Player *v12; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHomePlantCancel,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyHomePlantCancel,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyHomePlantCancel,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  Player *v17; // r14
  std::string v18; // [rsp+0h] [rbp-1B0h] OVERLAPPED BYREF
  std::vector<HomePlantCancelLogBody>::iterator __for_end; // [rsp+20h] [rbp-190h] BYREF
  HomeSceneData *home_scene_data_ptr; // [rsp+28h] [rbp-188h]
  std::vector<HomePlantCancelLogBody> *__for_range; // [rsp+30h] [rbp-180h]
  HomePlantCancelLogBody *cancel_plant_body; // [rsp+38h] [rbp-178h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+40h] [rbp-170h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+50h] [rbp-160h] BYREF
  common::milog::MiLogStream v25; // [rsp+60h] [rbp-150h] BYREF
  char v26[304]; // [rsp+80h] [rbp-130h] BYREF

  v18._M_string_length = (std::string::size_type)this;
  v18._M_dataplus._M_p = (std::string::pointer)__PAIR64__(module_id, scene_id);
  v3 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 48 1 10 holder:553 64 4 13 module_id:529 80 4 12 scene_id:529 96 16 19 module_data_ptr:531 128"
                        " 16 16 owner_player:547 160 16 11 log_ptr:556 192 24 20 cancel_plant_vec:543";
  *(_QWORD *)(v3 + 16) = HomePlantComp::updateFieldData;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234556924;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -219021312;
  v5[536862726] = -218103808;
  v5[536862727] = -202116109;
  *(_DWORD *)(v3 + 64) = HIDWORD(v18._M_dataplus._M_p);
  *(_DWORD *)(v3 + 80) = v18._M_dataplus._M_p;
  if ( *(_BYTE *)(((v18._M_string_length + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = (unsigned int)Home::getSceneComp(*(Home *const *)(v18._M_string_length + 24));
  HomeSceneComp::getHomeModuleData((const HomeSceneComp *const)(v3 + 96), SceneComp);
  if ( std::operator==<HomeModuleData>((const std::shared_ptr<HomeModuleData> *)(v3 + 96), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home_plant/home_plant_comp.cpp",
      "updateFieldData",
      534);
    v7 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
           &v25,
           (const char (*)[47])"[HOME_PLANT]getHomeModuleData fail. module_id:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 64));
    if ( *(_BYTE *)(((v18._M_string_length + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_9:
    common::milog::MiLogStream::operator<<<Home,(Home*)0>(v8, *(const Home **)(v18._M_string_length + 24));
    common::milog::MiLogStream::~MiLogStream(&v25);
    goto LABEL_27;
  }
  v9 = std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
  home_scene_data_ptr = HomeModuleData::findHomeSceneData(v9, *(_DWORD *)(v3 + 80));
  if ( !home_scene_data_ptr )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home_plant/home_plant_comp.cpp",
      "updateFieldData",
      540);
    v10 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
            &v25,
            (const char (*)[47])"[HOME_PLANT]findHomeSceneData fail. scene_id: ");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 80));
    if ( *(_BYTE *)(((v18._M_string_length + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_9;
  }
  std::vector<HomePlantCancelLogBody>::vector((std::vector<HomePlantCancelLogBody> *const)(v3 + 192));
  v11 = std::unordered_map<unsigned int,HomeModuleFieldData>::operator[](
          (std::unordered_map<unsigned int,HomeModuleFieldData> *const)(v18._M_string_length + 32),
          (const std::unordered_map<unsigned int,HomeModuleFieldData>::key_type *)(v3 + 64));
  HomeModuleFieldData::fromData(
    v11,
    &home_scene_data_ptr->arrangement_data,
    (std::vector<HomePlantCancelLogBody> *)(v3 + 192));
  if ( *(_BYTE *)(((v18._M_string_length + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Home::findOwnerPlayer((Home *const)(v3 + 128));
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v3 + 128), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/home/home_plant/home_plant_comp.cpp",
      "updateFieldData",
      550);
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
      &v25,
      (const char (*)[34])"find owner player fail on update.");
    common::milog::MiLogStream::~MiLogStream(&v25);
  }
  else
  {
    v12 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
    BasicComp = Player::getBasicComp(v12);
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v25, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48), 0xDABu, v18);
    std::string::~string(&v25);
    __for_range = (std::vector<HomePlantCancelLogBody> *)(v3 + 192);
    *((std::vector<HomePlantCancelLogBody>::iterator *)&v18._anon_0._M_allocated_capacity + 1) = std::vector<HomePlantCancelLogBody>::begin((std::vector<HomePlantCancelLogBody> *const)(v3 + 192));
    __for_end._M_current = std::vector<HomePlantCancelLogBody>::end((std::vector<HomePlantCancelLogBody> *const)(v3 + 192))._M_current;
    while ( __gnu_cxx::operator!=<HomePlantCancelLogBody *,std::vector<HomePlantCancelLogBody>>(
              (const __gnu_cxx::__normal_iterator<HomePlantCancelLogBody*,std::vector<HomePlantCancelLogBody> > *)&v18._anon_0._M_allocated_capacity
            + 1,
              &__for_end) )
    {
      cancel_plant_body = __gnu_cxx::__normal_iterator<HomePlantCancelLogBody *,std::vector<HomePlantCancelLogBody>>::operator*(
                            (const __gnu_cxx::__normal_iterator<HomePlantCancelLogBody*,std::vector<HomePlantCancelLogBody> > *const)&v18._anon_0._M_allocated_capacity
                          + 1);
      common::tools::perf::make_shared<proto_log::PlayerLogBodyHomePlantCancel>();
      v14 = std::__shared_ptr_access<proto_log::PlayerLogBodyHomePlantCancel,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHomePlantCancel,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
      if ( *(_BYTE *)(((unsigned __int64)&cancel_plant_body->seed_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)cancel_plant_body + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cancel_plant_body->seed_id >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto_log::PlayerLogBodyHomePlantCancel::set_seed_id(v14, cancel_plant_body->seed_id);
      v15 = std::__shared_ptr_access<proto_log::PlayerLogBodyHomePlantCancel,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHomePlantCancel,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
      if ( *(_BYTE *)(((unsigned __int64)&cancel_plant_body->furniture_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)cancel_plant_body + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cancel_plant_body->furniture_id >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto_log::PlayerLogBodyHomePlantCancel::set_furniture_id(v15, cancel_plant_body->furniture_id);
      v16 = std::__shared_ptr_access<proto_log::PlayerLogBodyHomePlantCancel,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHomePlantCancel,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
      proto_log::PlayerLogBodyHomePlantCancel::set_reason(v16, 1u);
      v17 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
      std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
      std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyHomePlantCancel,void>(
        &p_body_ptr,
        (const std::shared_ptr<proto_log::PlayerLogBodyHomePlantCancel> *)(v3 + 160));
      Player::printStatLog(v17, &p_body_ptr, &p_body_ext_ptr, 0xEu);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
      std::shared_ptr<proto_log::PlayerLogBodyHomePlantCancel>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyHomePlantCancel> *const)(v3 + 160));
      __gnu_cxx::__normal_iterator<HomePlantCancelLogBody *,std::vector<HomePlantCancelLogBody>>::operator++(
        (__gnu_cxx::__normal_iterator<HomePlantCancelLogBody*,std::vector<HomePlantCancelLogBody> > *const)&v18._anon_0._M_allocated_capacity
      + 1);
    }
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 128));
  std::vector<HomePlantCancelLogBody>::~vector((std::vector<HomePlantCancelLogBody> *const)(v3 + 192));
LABEL_27:
  std::shared_ptr<HomeModuleData>::~shared_ptr((std::shared_ptr<HomeModuleData> *const)(v3 + 96));
  if ( v26 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 566: range 000000001687E77A-000000001687EAFB
void __cdecl HomePlantComp::onGMJumpTime(HomePlantComp *const this, uint32_t time)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  HomeSceneComp *SceneComp; // rax
  uint32_t HomeWorld; // esi
  std::__shared_ptr_access<SceneHomeComp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::unordered_map<unsigned int,HomeFieldData>::iterator __for_begin; // [rsp+18h] [rbp-D8h] BYREF
  std::unordered_map<unsigned int,HomeFieldData>::iterator __for_end; // [rsp+20h] [rbp-D0h] BYREF
  std::vector<HomeSubFieldData>::iterator __for_begin_0; // [rsp+28h] [rbp-C8h] BYREF
  std::vector<HomeSubFieldData>::iterator __for_end_0; // [rsp+30h] [rbp-C0h] BYREF
  std::unordered_map<unsigned int,HomeFieldData> *field_data_map; // [rsp+38h] [rbp-B8h]
  std::unordered_map<unsigned int,HomeFieldData> *__for_range; // [rsp+40h] [rbp-B0h]
  std::pair<unsigned int const,HomeFieldData> *__in; // [rsp+48h] [rbp-A8h]
  std::tuple_element<0,std::pair<unsigned int const,HomeFieldData> >::type *guid; // [rsp+50h] [rbp-A0h]
  std::tuple_element<1,std::pair<unsigned int const,HomeFieldData> >::type *field_data; // [rsp+58h] [rbp-98h]
  std::vector<HomeSubFieldData> *__for_range_0; // [rsp+60h] [rbp-90h]
  HomeSubFieldData *sub_field_data; // [rsp+68h] [rbp-88h]
  char v20[128]; // [rsp+70h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 13 scene_ptr:574 64 16 23 scene_home_comp_ptr:577";
  *(_QWORD *)(v2 + 16) = HomePlantComp::onGMJumpTime;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  field_data_map = (std::unordered_map<unsigned int,HomeFieldData> *)HomePlantComp::getCurModuleFieldDataMap(this);
  __for_range = field_data_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,HomeFieldData>::begin(field_data_map)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,HomeFieldData>::end(field_data_map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,HomeFieldData>,false>(&__for_begin, &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFieldData>,false,false>::operator*(&__for_begin);
    guid = std::get<0ul,unsigned int const,HomeFieldData>(__in);
    field_data = std::get<1ul,unsigned int const,HomeFieldData>(__in);
    __for_range_0 = &field_data->sub_field_vec;
    __for_begin_0._M_current = std::vector<HomeSubFieldData>::begin(&field_data->sub_field_vec)._M_current;
    __for_end_0._M_current = std::vector<HomeSubFieldData>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<HomeSubFieldData *,std::vector<HomeSubFieldData>>(&__for_begin_0, &__for_end_0) )
    {
      sub_field_data = __gnu_cxx::__normal_iterator<HomeSubFieldData *,std::vector<HomeSubFieldData>>::operator*(&__for_begin_0);
      HomeSubFieldData::onGMSetGrowTime(sub_field_data, time);
      __gnu_cxx::__normal_iterator<HomeSubFieldData *,std::vector<HomeSubFieldData>>::operator++(&__for_begin_0);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    SceneComp = Home::getSceneComp(this->home_);
    HomeWorld = (unsigned int)HomeSceneComp::getHomeWorld(SceneComp);
    if ( *(_BYTE *)(((unsigned __int64)&field_data->scene_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&field_data->scene_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    World::findScene((World *const)(v2 + 32), HomeWorld);
    if ( std::operator!=<Scene>((const std::shared_ptr<Scene> *)(v2 + 32), 0LL) )
    {
      std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      EcsBase<Scene,SceneCompBase,12u>::findComp<SceneHomeComp>((const EcsBase<Scene,SceneCompBase,12> *const)(v2 + 64));
      if ( std::operator!=<SceneHomeComp>((const std::shared_ptr<SceneHomeComp> *)(v2 + 64), 0LL) )
      {
        v7 = std::__shared_ptr_access<SceneHomeComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneHomeComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        SceneHomeComp::refreshHomePlant(v7, 0);
      }
      std::shared_ptr<SceneHomeComp>::~shared_ptr((std::shared_ptr<SceneHomeComp> *const)(v2 + 64));
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 32));
    std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFieldData>,false,false>::operator++(&__for_begin);
  }
  if ( v20 == (char *)v2 )
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
