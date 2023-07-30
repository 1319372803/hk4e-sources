// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_area_comp.cpp

// Line 25: range 0000000015C6639A-0000000015C66D2A
int32_t __cdecl SceneAreaComp::fromBin(SceneAreaComp *const this, const proto::SceneBin *scene_bin)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  Scene *Scene; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  int v10; // r15d
  Area *v11; // r15
  Area *v12; // rax
  std::shared_ptr<Area> *v13; // r8
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Area> >,false,false>,bool> v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rdx
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rdx
  int v24; // r15d
  City *v25; // rax
  std::shared_ptr<City> *v26; // r8
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rdx
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<City> >,false,false>,bool> v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rdx
  int32_t result; // eax
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-170h]
  const proto::SceneAreaCompBin *area_comp_bin; // [rsp+28h] [rbp-168h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range; // [rsp+30h] [rbp-160h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end; // [rsp+38h] [rbp-158h]
  const google::protobuf::Map<unsigned int,proto::AreaBin> *__for_range_0; // [rsp+40h] [rbp-150h]
  const google::protobuf::Map<unsigned int,proto::CityBin> *__for_range_1; // [rsp+48h] [rbp-148h]
  google::protobuf::Map<unsigned int,proto::CityBin>::const_reference p_city_id; // [rsp+50h] [rbp-140h]
  google::protobuf::Map<unsigned int,proto::AreaBin>::const_reference p_area_id; // [rsp+58h] [rbp-138h]
  google::protobuf::Map<unsigned int,proto::AreaBin>::const_iterator __for_begin_0; // [rsp+60h] [rbp-130h] BYREF
  google::protobuf::Map<unsigned int,proto::AreaBin>::const_iterator __for_end_0; // [rsp+80h] [rbp-110h] BYREF
  common::milog::MiLogStream v45; // [rsp+A0h] [rbp-F0h] BYREF
  char v46[208]; // [rsp+C0h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v46;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 11 scene_id:33 64 16 12 scene_ptr:34 96 16 11 area_ptr:37 128 16 11 city_ptr:58";
  *(_QWORD *)(v3 + 16) = SceneAreaComp::fromBin;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -202178560;
  area_comp_bin = proto::SceneBin::area_comp_bin(scene_bin);
  std::unordered_set<unsigned int>::clear(&this->unlocked_area_set_);
  __for_range = proto::SceneAreaCompBin::unlocked_area_list(area_comp_bin);
  __for_begin = google::protobuf::RepeatedField<unsigned int>::begin(__for_range);
  __for_end = google::protobuf::RepeatedField<unsigned int>::end(__for_range);
  while ( __for_begin != __for_end )
  {
    if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)__for_begin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(__for_begin);
    }
    *(_DWORD *)(v3 + 48) = *__for_begin;
    std::unordered_set<unsigned int>::insert(
      &this->unlocked_area_set_,
      (const std::unordered_set<unsigned int>::value_type *)(v3 + 48));
    ++__for_begin;
  }
  std::unordered_map<unsigned int,std::shared_ptr<Area>>::clear(&this->area_map_);
  Scene = SceneCompBase::getScene(this);
  *(_DWORD *)(v3 + 48) = Scene::getSceneId(Scene);
  SceneCompBase::getScene(this);
  std::enable_shared_from_this<Scene>::shared_from_this((std::enable_shared_from_this<Scene> *const)(v3 + 64));
  __for_range_0 = proto::SceneAreaCompBin::area_map(area_comp_bin);
  google::protobuf::Map<unsigned int,proto::AreaBin>::begin(&__for_begin_0, __for_range_0);
  google::protobuf::Map<unsigned int,proto::AreaBin>::end(&__for_end_0, __for_range_0);
  while ( google::protobuf::operator!=(&__for_begin_0, &__for_end_0) )
  {
    p_area_id = google::protobuf::Map<unsigned int,proto::AreaBin>::const_iterator::operator*(&__for_begin_0);
    common::tools::perf::make_shared<Area,unsigned int const&>((const unsigned int *)(v3 + 96), &p_area_id->first);
    if ( std::operator==<Area>((const std::shared_ptr<Area> *)(v3 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v45,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/scene_area_comp.cpp",
        "fromBin",
        40);
      v7 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
             &v45,
             (const char (*)[33])"make_shared<Area> failed, scene:");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
      v9 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v8, (const char (*)[11])" group_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &p_area_id->first);
      common::milog::MiLogStream::~MiLogStream(&v45);
      v2 = -1;
      v10 = 0;
    }
    else
    {
      v11 = std::__shared_ptr_access<Area,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Area,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      std::shared_ptr<Scene>::shared_ptr(
        (std::shared_ptr<Scene> *const)(v3 + 128),
        (const std::shared_ptr<Scene> *)(v3 + 64));
      Area::setScene(v11, (ScenePtr *)(v3 + 128));
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 128));
      v12 = std::__shared_ptr_access<Area,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Area,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      if ( Area::fromBin(v12, &p_area_id->second) )
      {
        common::milog::MiLogStream::create(
          &v45,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/scene/scene_area_comp.cpp",
          "fromBin",
          46);
        v14 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                &v45,
                (const char (*)[33])"area_ptr->fromBin failed, scene:");
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v14,
                (const unsigned int *)(v3 + 48));
        v16 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v15, (const char (*)[10])" area_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &p_area_id->first);
        common::milog::MiLogStream::~MiLogStream(&v45);
        v2 = -1;
        v10 = 0;
      }
      else
      {
        v17 = std::unordered_map<unsigned int,std::shared_ptr<Area>>::emplace<unsigned int const&,std::shared_ptr<Area>&>(
                &this->area_map_,
                &p_area_id->first,
                (std::shared_ptr<Area> *)(v3 + 96),
                (const unsigned int *)&this->area_map_,
                v13);
        if ( !v17.second )
        {
          common::milog::MiLogStream::create(
            &v45,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/scene/scene_area_comp.cpp",
            "fromBin",
            51);
          v18 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                  &v45,
                  (const char (*)[26])"duplicate block in scene:");
          v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v18,
                  (const unsigned int *)(v3 + 48));
          v20 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v19, (const char (*)[10])" area_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &p_area_id->first);
          common::milog::MiLogStream::~MiLogStream(&v45);
          v2 = -1;
          v10 = 0;
        }
        else
        {
          v10 = 1;
        }
      }
    }
    std::shared_ptr<Area>::~shared_ptr((std::shared_ptr<Area> *const)(v3 + 96));
    if ( v10 != 1 )
      goto LABEL_32;
    google::protobuf::Map<unsigned int,proto::AreaBin>::const_iterator::operator++(&__for_begin_0);
  }
  __for_range_1 = proto::SceneAreaCompBin::city_map(area_comp_bin);
  google::protobuf::Map<unsigned int,proto::CityBin>::begin(
    (google::protobuf::Map<unsigned int,proto::CityBin>::const_iterator *)&__for_begin_0,
    __for_range_1);
  google::protobuf::Map<unsigned int,proto::CityBin>::end(
    (google::protobuf::Map<unsigned int,proto::CityBin>::const_iterator *)&__for_end_0,
    __for_range_1);
  while ( google::protobuf::operator!=(
            (const google::protobuf::Map<unsigned int,proto::CityBin>::const_iterator *)&__for_begin_0,
            (const google::protobuf::Map<unsigned int,proto::CityBin>::const_iterator *)&__for_end_0) )
  {
    p_city_id = google::protobuf::Map<unsigned int,proto::CityBin>::const_iterator::operator*((const google::protobuf::Map<unsigned int,proto::CityBin>::const_iterator *const)&__for_begin_0);
    common::tools::perf::make_shared<City,unsigned int const&>((const unsigned int *)(v3 + 128), &p_city_id->first);
    if ( std::operator==<City>((const std::shared_ptr<City> *)(v3 + 128), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v45,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/scene_area_comp.cpp",
        "fromBin",
        61);
      v21 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v45,
              (const char (*)[33])"make_shared<City> failed, scene:");
      v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v3 + 48));
      v23 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v22, (const char (*)[10])" city_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &p_city_id->first);
      common::milog::MiLogStream::~MiLogStream(&v45);
      v2 = -1;
      v24 = 0;
    }
    else
    {
      v25 = std::__shared_ptr_access<City,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<City,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
      if ( City::fromBin(v25, &p_city_id->second) )
      {
        common::milog::MiLogStream::create(
          &v45,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/scene/scene_area_comp.cpp",
          "fromBin",
          66);
        v27 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                &v45,
                (const char (*)[33])"city_ptr->fromBin failed, scene:");
        v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v27,
                (const unsigned int *)(v3 + 48));
        v29 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v28, (const char (*)[10])" city_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, &p_city_id->first);
        common::milog::MiLogStream::~MiLogStream(&v45);
        v2 = -1;
        v24 = 0;
      }
      else
      {
        v30 = std::unordered_map<unsigned int,std::shared_ptr<City>>::emplace<unsigned int const&,std::shared_ptr<City>&>(
                &this->city_map_,
                &p_city_id->first,
                (std::shared_ptr<City> *)(v3 + 128),
                (const unsigned int *)&this->city_map_,
                v26);
        if ( !v30.second )
        {
          common::milog::MiLogStream::create(
            &v45,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/scene/scene_area_comp.cpp",
            "fromBin",
            71);
          v31 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                  &v45,
                  (const char (*)[26])"duplicate city in scene: ");
          v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v31,
                  (const unsigned int *)(v3 + 48));
          v33 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v32, (const char (*)[11])" city_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, &p_city_id->first);
          common::milog::MiLogStream::~MiLogStream(&v45);
          v2 = -1;
          v24 = 0;
        }
        else
        {
          v24 = 1;
        }
      }
    }
    std::shared_ptr<City>::~shared_ptr((std::shared_ptr<City> *const)(v3 + 128));
    if ( v24 != 1 )
      goto LABEL_32;
    google::protobuf::Map<unsigned int,proto::CityBin>::const_iterator::operator++((google::protobuf::Map<unsigned int,proto::CityBin>::const_iterator *const)&__for_begin_0);
  }
  v2 = 0;
LABEL_32:
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 64));
  result = v2;
  if ( v46 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 80: range 0000000015C66D2C-0000000015C67283
int32_t __cdecl SceneAreaComp::toBin(const SceneAreaComp *const this, proto::SceneBin *scene_bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  unsigned int *v5; // rax
  google::protobuf::uint32 *v6; // rdx
  const Scene *Scene; // rax
  std::__shared_ptr_access<Area,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  int32_t result; // eax
  std::__shared_ptr_access<City,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  std::unordered_set<unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-100h] BYREF
  std::unordered_set<unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-F8h] BYREF
  proto::SceneAreaCompBin *area_comp_bin; // [rsp+30h] [rbp-F0h]
  const std::unordered_set<unsigned int> *__for_range; // [rsp+38h] [rbp-E8h]
  google::protobuf::Map<unsigned int,proto::AreaBin> *area_map; // [rsp+40h] [rbp-E0h]
  const std::unordered_map<unsigned int,std::shared_ptr<Area>> *__for_range_0; // [rsp+48h] [rbp-D8h]
  google::protobuf::Map<unsigned int,proto::CityBin> *city_map; // [rsp+50h] [rbp-D0h]
  const std::unordered_map<unsigned int,std::shared_ptr<City>> *__for_range_1; // [rsp+58h] [rbp-C8h]
  const std::pair<unsigned int const,std::shared_ptr<City> > *v25; // [rsp+60h] [rbp-C0h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<City> > >::type *city_id; // [rsp+68h] [rbp-B8h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<City> > >::type *city_ptr; // [rsp+70h] [rbp-B0h]
  proto::CityBin *city_bin; // [rsp+78h] [rbp-A8h]
  const std::pair<unsigned int const,std::shared_ptr<Area> > *v29; // [rsp+80h] [rbp-A0h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<Area> > >::type *area_id; // [rsp+88h] [rbp-98h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Area> > >::type *area_ptr; // [rsp+90h] [rbp-90h]
  proto::AreaBin *area_bin; // [rsp+98h] [rbp-88h]
  common::milog::MiLogStream v33; // [rsp+A0h] [rbp-80h] BYREF
  char v34[96]; // [rsp+C0h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 11 scene_id:86";
  *(_QWORD *)(v2 + 16) = SceneAreaComp::toBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  area_comp_bin = proto::SceneBin::mutable_area_comp_bin(scene_bin);
  __for_range = &this->unlocked_area_set_;
  __for_begin._M_cur = std::unordered_set<unsigned int>::begin(&this->unlocked_area_set_)._M_cur;
  __for_end._M_cur = std::unordered_set<unsigned int>::end(&this->unlocked_area_set_)._M_cur;
  while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
  {
    v5 = (unsigned int *)std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*(&__for_begin);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    proto::SceneAreaCompBin::add_unlocked_area_list(area_comp_bin, *v6);
    std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++(&__for_begin);
  }
  Scene = SceneCompBase::getScene(this);
  *(_DWORD *)(v2 + 32) = Scene::getSceneId(Scene);
  area_map = proto::SceneAreaCompBin::mutable_area_map(area_comp_bin);
  __for_range_0 = &this->area_map_;
  __for_begin._M_cur = (std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *)std::unordered_map<unsigned int,std::shared_ptr<Area>>::begin(&this->area_map_)._M_cur;
  __for_end._M_cur = (std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *)std::unordered_map<unsigned int,std::shared_ptr<Area>>::end(__for_range_0)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<Area>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Area> >,false> *)&__for_begin,
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Area> >,false> *)&__for_end) )
  {
    v29 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<Area>>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<Area> >,false,false> *const)&__for_begin);
    area_id = std::get<0ul,unsigned int const,std::shared_ptr<Area>>(v29);
    area_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Area> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<Area>>(v29);
    area_bin = google::protobuf::Map<unsigned int,proto::AreaBin>::operator[](area_map, area_id);
    v8 = std::__shared_ptr_access<Area,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Area,(__gnu_cxx::_Lock_policy)2,false,false> *const)area_ptr);
    if ( Area::toBin(v8, area_bin) )
    {
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/scene_area_comp.cpp",
        "toBin",
        93);
      v9 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
             &v33,
             (const char (*)[31])"area_ptr->toBin failed, scene:");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 32));
      v11 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v10, (const char (*)[10])" area_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, area_id);
      common::milog::MiLogStream::~MiLogStream(&v33);
      result = -1;
      goto LABEL_20;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<Area>>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<Area> >,false,false> *const)&__for_begin);
  }
  city_map = proto::SceneAreaCompBin::mutable_city_map(area_comp_bin);
  __for_range_1 = &this->city_map_;
  __for_begin._M_cur = (std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *)std::unordered_map<unsigned int,std::shared_ptr<City>>::begin(&this->city_map_)._M_cur;
  __for_end._M_cur = (std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *)std::unordered_map<unsigned int,std::shared_ptr<City>>::end(__for_range_1)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<City>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<City> >,false> *)&__for_begin,
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<City> >,false> *)&__for_end) )
  {
    v25 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<City>>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<City> >,false,false> *const)&__for_begin);
    city_id = std::get<0ul,unsigned int const,std::shared_ptr<City>>(v25);
    city_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<City> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<City>>(v25);
    city_bin = google::protobuf::Map<unsigned int,proto::CityBin>::operator[](city_map, city_id);
    v13 = std::__shared_ptr_access<City,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<City,(__gnu_cxx::_Lock_policy)2,false,false> *const)city_ptr);
    if ( City::toBin(v13, city_bin) )
    {
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/scene_area_comp.cpp",
        "toBin",
        104);
      v14 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
              &v33,
              (const char (*)[31])"city_ptr->toBin failed, scene:");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v2 + 32));
      v16 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v15, (const char (*)[10])" city_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, city_id);
      common::milog::MiLogStream::~MiLogStream(&v33);
      result = -1;
      goto LABEL_20;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<City>>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<City> >,false,false> *const)&__for_begin);
  }
  result = 0;
LABEL_20:
  if ( v34 == (char *)v2 )
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

// Line 112: range 0000000015C67284-0000000015C674E3
int32_t __cdecl SceneAreaComp::init(SceneAreaComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  unsigned int *v4; // rax
  unsigned int *v5; // rdx
  int32_t result; // eax
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::key_type __x; // [rsp+18h] [rbp-98h] BYREF
  unsigned int area_id; // [rsp+1Ch] [rbp-94h]
  std::unordered_set<unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-90h] BYREF
  std::unordered_set<unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-88h] BYREF
  const std::unordered_map<unsigned int,std::unordered_set<unsigned int>> *default_unlock_area_map; // [rsp+30h] [rbp-80h]
  const std::unordered_set<unsigned int> *__for_range; // [rsp+38h] [rbp-78h]
  std::shared_ptr<Config> v13; // [rsp+40h] [rbp-70h] BYREF
  char v14[96]; // [rsp+50h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 8 iter:114";
  *(_QWORD *)(v1 + 16) = SceneAreaComp::init;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v13);
  default_unlock_area_map = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13)->design_config.txt_config_mgr.world_area_config_mgr.default_unlock_area_map;
  std::shared_ptr<Config>::~shared_ptr(&v13);
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  __x = Scene::getSceneId(this->scene_);
  *(std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::const_iterator *)(v1 + 32) = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::find(default_unlock_area_map, &__x);
  __for_end._M_cur = (std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *)std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::end(default_unlock_area_map)._M_cur;
  if ( std::__detail::operator!=<std::pair<unsigned int const,std::unordered_set<unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false> *)(v1 + 32),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false> *)&__for_end) )
  {
    __for_range = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false,false> *const)(v1 + 32))->second;
    __for_begin._M_cur = std::unordered_set<unsigned int>::begin(__for_range)._M_cur;
    __for_end._M_cur = std::unordered_set<unsigned int>::end(__for_range)._M_cur;
    while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
    {
      v4 = (unsigned int *)std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*(&__for_begin);
      v5 = v4;
      if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v4);
      }
      area_id = *v5;
      SceneAreaComp::unlockArea(this, area_id);
      std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++(&__for_begin);
    }
  }
  result = 0;
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

// Line 127: range 0000000015C674E4-0000000015C6766C
SceneAreaComp *__fastcall SceneAreaComp::findArea(SceneAreaComp *const this, __int64 area_id, int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Area> >,false,false>::pointer v6; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Area> >,false> __y; // [rsp+28h] [rbp-88h] BYREF
  char v10[128]; // [rsp+30h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 11 area_id:126 64 8 8 iter:128";
  *(_QWORD *)(v3 + 16) = SceneAreaComp::findArea;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = a3;
  *(std::unordered_map<unsigned int,std::shared_ptr<Area>>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::shared_ptr<Area>>::find(
                                                                                     (std::unordered_map<unsigned int,std::shared_ptr<Area>> *const)(area_id + 24),
                                                                                     (const std::unordered_map<unsigned int,std::shared_ptr<Area>>::key_type *)(v3 + 48));
  __y._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Area>>::end((std::unordered_map<unsigned int,std::shared_ptr<Area>> *const)(area_id + 24))._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,std::shared_ptr<Area>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Area> >,false> *)(v3 + 64),
         &__y) )
  {
    std::shared_ptr<Area>::shared_ptr((std::shared_ptr<Area> *const)this, 0LL);
  }
  else
  {
    v6 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Area>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Area> >,false,false> *const)(v3 + 64));
    std::shared_ptr<Area>::shared_ptr((std::shared_ptr<Area> *const)this, &v6->second);
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

// Line 135: range 0000000015C6766E-0000000015C67737
data::AreaTerrainType __cdecl SceneAreaComp::getTerrainType(const SceneAreaComp *const this, uint32_t level2_area_id)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  const data::WorldAreaConfig *level2_area_config_ptr; // [rsp+18h] [rbp-28h]
  std::shared_ptr<Config> v5[2]; // [rsp+20h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v5);
  v2 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v5);
  level2_area_config_ptr = WorldAreaExcelConfigMgr::findSecondLevelWorldAreaConfig(
                             &v2->design_config.txt_config_mgr.world_area_config_mgr,
                             level2_area_id);
  std::shared_ptr<Config>::~shared_ptr(v5);
  if ( !level2_area_config_ptr )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&level2_area_config_ptr->terrain_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&level2_area_config_ptr->terrain_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&level2_area_config_ptr->terrain_type);
  }
  return level2_area_config_ptr->terrain_type;
};

// Line 145: range 0000000015C67738-0000000015C67AA3
SceneAreaComp *__fastcall SceneAreaComp::getArea(SceneAreaComp *const this, __int64 area_id, int a3)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  Area *v6; // r14
  std::shared_ptr<Area> *v7; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Area> >,false,false>,bool> v8; // rax
  common::milog::MiLogStream *v9; // rax
  std::shared_ptr<Area> __r; // [rsp+20h] [rbp-D0h] BYREF
  std::enable_shared_from_this<Scene> v13; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v14; // [rsp+40h] [rbp-B0h] BYREF
  char v15[144]; // [rsp+60h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 11 area_id:144 64 16 12 area_ptr:146";
  *(_QWORD *)(v3 + 16) = SceneAreaComp::getArea;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = a3;
  SceneAreaComp::findArea((SceneAreaComp *const)(v3 + 64), area_id, *(_DWORD *)(v3 + 48));
  if ( std::operator!=<Area>((const std::shared_ptr<Area> *)(v3 + 64), 0LL) )
  {
    std::shared_ptr<Area>::shared_ptr((std::shared_ptr<Area> *const)this, (std::shared_ptr<Area> *)(v3 + 64));
  }
  else
  {
    common::tools::perf::make_shared<Area,unsigned int &>((unsigned int *)&__r, (unsigned int *)(v3 + 48));
    std::shared_ptr<Area>::operator=((std::shared_ptr<Area> *const)(v3 + 64), &__r);
    std::shared_ptr<Area>::~shared_ptr(&__r);
    if ( std::operator==<Area>((const std::shared_ptr<Area> *)(v3 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_area_comp.cpp",
        "getArea",
        154);
      common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v14, (const char (*)[17])"area_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v14);
      std::shared_ptr<Area>::shared_ptr((std::shared_ptr<Area> *const)this, 0LL);
    }
    else
    {
      v6 = std::__shared_ptr_access<Area,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Area,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      SceneCompBase::getScene((SceneCompBase *const)area_id);
      std::enable_shared_from_this<Scene>::shared_from_this(&v13);
      Area::setScene(v6, (ScenePtr *)&v13);
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)&v13);
      v8 = std::unordered_map<unsigned int,std::shared_ptr<Area>>::emplace<unsigned int &,std::shared_ptr<Area>&>(
             (std::unordered_map<unsigned int,std::shared_ptr<Area>> *const)(area_id + 24),
             (unsigned int *)(v3 + 48),
             (std::shared_ptr<Area> *)(v3 + 64),
             (unsigned int *)(area_id + 24),
             v7);
      if ( !v8.second )
      {
        common::milog::MiLogStream::create(
          &v14,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_area_comp.cpp",
          "getArea",
          160);
        v9 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
               &v14,
               (const char (*)[19])"duplicate area_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v14);
        std::shared_ptr<Area>::shared_ptr((std::shared_ptr<Area> *const)this, 0LL);
      }
      else
      {
        std::shared_ptr<Area>::shared_ptr((std::shared_ptr<Area> *const)this, (std::shared_ptr<Area> *)(v3 + 64));
      }
    }
  }
  std::shared_ptr<Area>::~shared_ptr((std::shared_ptr<Area> *const)(v3 + 64));
  if ( v15 == (char *)v3 )
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

// Line 167: range 0000000015C67AA4-0000000015C67F29
__int64 __fastcall SceneAreaComp::unlockArea(SceneAreaComp *const this, uint32_t area_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // r14
  Scene *Scene; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  unsigned int v9; // r14d
  std::pair<std::__detail::_Node_iterator<unsigned int,true,false>,bool> v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  Scene *v14; // rax
  Scene *v15; // rax
  Player *v16; // rax
  PlayerEventComp *EventComp; // r14
  __int64 result; // rax
  unsigned int val; // [rsp+1Ch] [rbp-104h] BYREF
  std::shared_ptr<UnlockAreaEvent> __r; // [rsp+20h] [rbp-100h] BYREF
  common::milog::MiLogStream v21; // [rsp+30h] [rbp-F0h] BYREF
  char v22[208]; // [rsp+50h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 11 area_id:166 64 16 12 area_ptr:168 96 16 14 player_ptr:180 128 16 13 event_ptr:183";
  *(_QWORD *)(v2 + 16) = SceneAreaComp::unlockArea;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -202178560;
  *(_DWORD *)(v2 + 48) = area_id;
  SceneAreaComp::getArea((SceneAreaComp *const)(v2 + 64), (__int64)this, *(_DWORD *)(v2 + 48));
  if ( std::operator==<Area>((const std::shared_ptr<Area> *)(v2 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_area_comp.cpp",
      "unlockArea",
      171);
    v5 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
           &v21,
           (const char (*)[26])"getArea failed, scene_id:");
    Scene = SceneCompBase::getScene(this);
    val = Scene::getSceneId(Scene);
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    v8 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v7, (const char (*)[10])" area_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v21);
    v9 = -1;
  }
  else
  {
    v10 = std::unordered_set<unsigned int>::insert(
            &this->unlocked_area_set_,
            (const std::unordered_set<unsigned int>::value_type *)(v2 + 48));
    if ( !v10.second )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_area_comp.cpp",
        "unlockArea",
        177);
      v11 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
              &v21,
              (const char (*)[35])"area is already unlocked, area_id:");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 48));
      v13 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v12, (const char (*)[12])", scene_id:");
      v14 = SceneCompBase::getScene(this);
      val = Scene::getSceneId(v14);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v9 = -1;
    }
    else
    {
      SceneCompBase::getScene(this);
      Scene::getOwnPlayer((const Scene *const)(v2 + 96));
      if ( std::operator!=<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 96)) )
      {
        v15 = SceneCompBase::getScene(this);
        val = Scene::getSceneId(v15);
        common::tools::perf::make_shared<UnlockAreaEvent,unsigned int,unsigned int &>(
          (unsigned int *)&__r,
          &val,
          (unsigned int *)(v2 + 48),
          &val);
        std::shared_ptr<BaseEvent>::shared_ptr<UnlockAreaEvent,void>(
          (std::shared_ptr<BaseEvent> *const)(v2 + 128),
          &__r);
        std::shared_ptr<UnlockAreaEvent>::~shared_ptr(&__r);
        v16 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        EventComp = Player::getEventComp(v16);
        std::shared_ptr<BaseEvent>::shared_ptr(
          (std::shared_ptr<BaseEvent> *const)&__r,
          (const std::shared_ptr<BaseEvent> *)(v2 + 128));
        PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&__r);
        std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&__r);
        std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v2 + 128));
      }
      v9 = 0;
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 96));
    }
  }
  std::shared_ptr<Area>::~shared_ptr((std::shared_ptr<Area> *const)(v2 + 64));
  result = v9;
  if ( v22 == (char *)v2 )
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

// Line 192: range 0000000015C67F2A-0000000015C67FFA
void __fastcall SceneAreaComp::lockAreaByGm(SceneAreaComp *const this, uint32_t area_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char v5[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 11 area_id:191";
  *(_QWORD *)(v2 + 16) = SceneAreaComp::lockAreaByGm;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = area_id;
  std::unordered_set<unsigned int>::erase(
    &this->unlocked_area_set_,
    (const std::unordered_set<unsigned int>::key_type *)(v2 + 32));
  if ( v5 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 198: range 0000000015C67FFC-0000000015C680F6
bool __fastcall SceneAreaComp::isAreaUnlocked(SceneAreaComp *const this, uint32_t area_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  std::__detail::_Node_iterator_base<unsigned int,false> __x; // [rsp+10h] [rbp-70h] BYREF
  std::__detail::_Node_iterator_base<unsigned int,false> __y; // [rsp+18h] [rbp-68h] BYREF
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 11 area_id:197";
  *(_QWORD *)(v2 + 16) = SceneAreaComp::isAreaUnlocked;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = area_id;
  __y._M_cur = std::unordered_set<unsigned int>::find(
                 &this->unlocked_area_set_,
                 (const std::unordered_set<unsigned int>::key_type *)(v2 + 32))._M_cur;
  __x._M_cur = std::unordered_set<unsigned int>::end(&this->unlocked_area_set_)._M_cur;
  result = std::__detail::operator!=<unsigned int,false>(&__x, &__y);
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

// Line 203: range 0000000015C680F8-0000000015C6856A
void __cdecl SceneAreaComp::swapOutCityMapOnCheckAndModifyCityData(
        SceneAreaComp *const this,
        Player *player,
        std::unordered_map<unsigned int,std::shared_ptr<City>> *city_map)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  PlayerBasicComp *BasicComp; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  std::__shared_ptr_access<proto_log::PlayerLogBodyRecordCityDataBeforeCheckAndModify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<City,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  uint32_t CityId; // eax
  std::__shared_ptr_access<City,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  uint32_t Level; // eax
  std::__shared_ptr_access<City,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  uint32_t CrystalNum; // eax
  std::string v17; // [rsp+0h] [rbp-120h]
  std::unordered_map<unsigned int,std::shared_ptr<City>> *city_mapa; // [rsp+8h] [rbp-118h]
  Player *playera; // [rsp+10h] [rbp-110h]
  SceneAreaComp *thisa; // [rsp+18h] [rbp-108h]
  std::unordered_map<unsigned int,std::shared_ptr<City>>::iterator __for_begin; // [rsp+28h] [rbp-F8h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<City>>::iterator __for_end; // [rsp+30h] [rbp-F0h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<City>> *__for_range; // [rsp+38h] [rbp-E8h]
  const std::pair<unsigned int const,std::shared_ptr<City> > *v24; // [rsp+40h] [rbp-E0h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<City> > >::type *city_id; // [rsp+48h] [rbp-D8h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<City> > >::type *city_ptr; // [rsp+50h] [rbp-D0h]
  proto_log::CityLog *city_log; // [rsp+58h] [rbp-C8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+60h] [rbp-C0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+70h] [rbp-B0h] BYREF
  std::string v30; // [rsp+80h] [rbp-A0h] BYREF
  char v31[128]; // [rsp+A0h] [rbp-80h] BYREF

  *(&v17._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v17._anon_0._M_allocated_capacity = (std::string::size_type)player;
  v17._M_string_length = (std::string::size_type)city_map;
  v3 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 1 10 holder:205 64 16 11 log_ptr:206";
  *(_QWORD *)(v3 + 16) = SceneAreaComp::swapOutCityMapOnCheckAndModifyCityData;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -202178560;
  BasicComp = Player::getBasicComp(player);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v30, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48), 0x3F3u, v17);
  std::string::~string(&v30);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyRecordCityDataBeforeCheckAndModify>();
  __for_range = &thisa->city_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<City>>::begin(&thisa->city_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<City>>::end(&thisa->city_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<City>>,false>(&__for_begin, &__for_end) )
  {
    v24 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<City>>,false,false>::operator*(&__for_begin);
    city_id = std::get<0ul,unsigned int const,std::shared_ptr<City>>(v24);
    city_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<City> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<City>>(v24);
    if ( std::operator==<City>(0LL, city_ptr) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v30,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/scene_area_comp.cpp",
        "swapOutCityMapOnCheckAndModifyCityData",
        211);
      v7 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
             (common::milog::MiLogStream *const)&v30,
             (const char (*)[23])"city is null, city_id:");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, city_id);
      v9 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v8, (const char (*)[9])" player:");
      operator<<(v9, playera);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v30);
    }
    else
    {
      v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyRecordCityDataBeforeCheckAndModify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRecordCityDataBeforeCheckAndModify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      city_log = proto_log::PlayerLogBodyRecordCityDataBeforeCheckAndModify::add_city_log_list(v10);
      v11 = std::__shared_ptr_access<City,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<City,(__gnu_cxx::_Lock_policy)2,false,false> *const)city_ptr);
      CityId = City::getCityId(v11);
      proto_log::CityLog::set_city_id(city_log, CityId);
      v13 = std::__shared_ptr_access<City,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<City,(__gnu_cxx::_Lock_policy)2,false,false> *const)city_ptr);
      Level = City::getLevel(v13);
      proto_log::CityLog::set_level(city_log, Level);
      v15 = std::__shared_ptr_access<City,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<City,(__gnu_cxx::_Lock_policy)2,false,false> *const)city_ptr);
      CrystalNum = City::getCrystalNum(v15);
      proto_log::CityLog::set_crystal_num(city_log, CrystalNum);
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<City>>,false,false>::operator++(&__for_begin);
  }
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyRecordCityDataBeforeCheckAndModify,void>(
    &p_body_ptr,
    (const std::shared_ptr<proto_log::PlayerLogBodyRecordCityDataBeforeCheckAndModify> *)(v3 + 64));
  Player::printStatLog(playera, &p_body_ptr, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  std::unordered_map<unsigned int,std::shared_ptr<City>>::swap(city_mapa, &thisa->city_map_);
  std::shared_ptr<proto_log::PlayerLogBodyRecordCityDataBeforeCheckAndModify>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyRecordCityDataBeforeCheckAndModify> *const)(v3 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48));
  if ( v31 == (char *)v3 )
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

// Line 226: range 0000000015C6856C-0000000015C68667
void __cdecl SceneAreaComp::checkAndModifySceneAreaInteractGadgetSet(SceneAreaComp *const this)
{
  const std::pair<unsigned int const,std::shared_ptr<Area> > *v1; // rax
  Area *v2; // rax
  std::unordered_map<unsigned int,std::shared_ptr<Area>>::iterator __for_begin; // [rsp+18h] [rbp-58h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<Area>>::iterator __for_end; // [rsp+20h] [rbp-50h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<Area>> *__for_range; // [rsp+28h] [rbp-48h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<Area> > >::type *_; // [rsp+30h] [rbp-40h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<Area> > >::type *area_ptr; // [rsp+38h] [rbp-38h]
  std::pair<unsigned int const,std::shared_ptr<Area> > __in; // [rsp+40h] [rbp-30h] BYREF

  __for_range = &this->area_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Area>>::begin(&this->area_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Area>>::end(&this->area_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<Area>>,false>(&__for_begin, &__for_end) )
  {
    v1 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Area>>,false,false>::operator*(&__for_begin);
    std::pair<unsigned int const,std::shared_ptr<Area>>::pair(&__in, v1);
    _ = std::get<0ul,unsigned int const,std::shared_ptr<Area>>(&__in);
    area_ptr = std::get<1ul,unsigned int const,std::shared_ptr<Area>>(&__in);
    if ( std::operator!=<Area>(0LL, area_ptr) )
    {
      v2 = std::__shared_ptr_access<Area,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Area,(__gnu_cxx::_Lock_policy)2,false,false> *const)area_ptr);
      Area::removeChestGadgetInInteractGadgetSet(v2);
    }
    std::pair<unsigned int const,std::shared_ptr<Area>>::~pair(&__in);
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Area>>,false,false>::operator++(&__for_begin);
  }
};
