// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/area.cpp

// Line 30: range 00000000131603E0-00000000131605AA
int32_t __cdecl Area::fromBin(Area *const this, const proto::AreaBin *proto_area_bin)
{
  uint32_t v2; // ecx
  char v3; // dl
  bool v4; // dl
  uint32_t v5; // edx
  char v6; // al
  const proto::AreaBin *proto_area_bina; // [rsp+0h] [rbp-70h]
  unsigned int __x; // [rsp+10h] [rbp-60h] BYREF
  unsigned int __y; // [rsp+14h] [rbp-5Ch] BYREF
  google::protobuf::RepeatedPtrField<proto::InteractGadget>::const_iterator __for_begin; // [rsp+18h] [rbp-58h] BYREF
  google::protobuf::RepeatedPtrField<proto::InteractGadget>::const_iterator __for_end; // [rsp+20h] [rbp-50h] BYREF
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin_0; // [rsp+28h] [rbp-48h]
  const google::protobuf::RepeatedPtrField<proto::InteractGadget> *__for_range; // [rsp+30h] [rbp-40h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range_0; // [rsp+38h] [rbp-38h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end_0; // [rsp+40h] [rbp-30h]
  const unsigned int *unlock_point_id; // [rsp+48h] [rbp-28h]
  const proto::InteractGadget *interact_gadget_bin; // [rsp+50h] [rbp-20h]
  std::set<std::pair<unsigned int,unsigned int>>::value_type v19; // [rsp+58h] [rbp-18h] BYREF

  proto_area_bina = proto_area_bin;
  v2 = proto::AreaBin::explore_point(proto_area_bin);
  v3 = *(_BYTE *)(((unsigned __int64)&this->explore_point_ >> 3) + 0x7FFF8000);
  LOBYTE(proto_area_bin) = v3 != 0;
  v4 = v3 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v3;
  if ( v4 )
    __asan_report_store4(&this->explore_point_, proto_area_bin, v4);
  this->explore_point_ = v2;
  v5 = proto::AreaBin::explore_num(proto_area_bina);
  v6 = *(_BYTE *)(((unsigned __int64)&this->explore_num_ >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(proto_area_bin) = v6 != 0;
    __asan_report_store4(&this->explore_num_, proto_area_bin, v5);
  }
  this->explore_num_ = v5;
  __for_range = proto::AreaBin::interact_gadget_list(proto_area_bina);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::InteractGadget>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::InteractGadget>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::InteractGadget const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    interact_gadget_bin = google::protobuf::internal::RepeatedPtrIterator<proto::InteractGadget const>::operator*(&__for_begin);
    __y = proto::InteractGadget::config_id(interact_gadget_bin);
    __x = proto::InteractGadget::group_id(interact_gadget_bin);
    v19 = std::make_pair<unsigned int,unsigned int>(&__x, &__y);
    std::set<std::pair<unsigned int,unsigned int>>::insert(&this->interact_temple_set_, &v19);
    google::protobuf::internal::RepeatedPtrIterator<proto::InteractGadget const>::operator++(&__for_begin);
  }
  __for_range_0 = proto::AreaBin::unlock_point_list(proto_area_bina);
  __for_begin_0 = google::protobuf::RepeatedField<unsigned int>::begin(__for_range_0);
  __for_end_0 = google::protobuf::RepeatedField<unsigned int>::end(__for_range_0);
  while ( __for_begin_0 != __for_end_0 )
  {
    unlock_point_id = __for_begin_0;
    std::set<unsigned int>::insert(&this->unlock_point_set_, __for_begin_0++);
  }
  return 0;
};

// Line 49: range 00000000131605AC-0000000013160819
int32_t __cdecl Area::toBin(const Area *const this, proto::AreaBin *proto_area_bin)
{
  const unsigned int *v2; // rax
  std::set<std::pair<unsigned int,unsigned int>>::iterator __for_begin; // [rsp+18h] [rbp-38h] BYREF
  std::set<std::pair<unsigned int,unsigned int>>::iterator __for_end; // [rsp+20h] [rbp-30h] BYREF
  const std::set<std::pair<unsigned int,unsigned int>> *__for_range; // [rsp+28h] [rbp-28h]
  const std::set<unsigned int> *__for_range_0; // [rsp+30h] [rbp-20h]
  const unsigned int *unlock_point_id; // [rsp+38h] [rbp-18h]
  const std::pair<unsigned int,unsigned int> *interact_gadget_pair; // [rsp+40h] [rbp-10h]
  proto::InteractGadget *interact_gadget_bin; // [rsp+48h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->explore_point_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->explore_point_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->explore_point_);
  }
  proto::AreaBin::set_explore_point(proto_area_bin, this->explore_point_);
  if ( *(_BYTE *)(((unsigned __int64)&this->explore_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->explore_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->explore_num_);
  }
  proto::AreaBin::set_explore_num(proto_area_bin, this->explore_num_);
  __for_range = &this->interact_temple_set_;
  __for_begin._M_node = std::set<std::pair<unsigned int,unsigned int>>::begin(&this->interact_temple_set_)._M_node;
  __for_end._M_node = std::set<std::pair<unsigned int,unsigned int>>::end(&this->interact_temple_set_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    interact_gadget_pair = std::_Rb_tree_const_iterator<std::pair<unsigned int,unsigned int>>::operator*(&__for_begin);
    interact_gadget_bin = proto::AreaBin::add_interact_gadget_list(proto_area_bin);
    if ( *(_BYTE *)(((unsigned __int64)interact_gadget_pair >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)interact_gadget_pair & 7) + 3) >= *(_BYTE *)(((unsigned __int64)interact_gadget_pair >> 3)
                                                                             + 0x7FFF8000) )
    {
      __asan_report_load4(interact_gadget_pair);
    }
    proto::InteractGadget::set_group_id(interact_gadget_bin, interact_gadget_pair->first);
    if ( *(_BYTE *)(((unsigned __int64)&interact_gadget_pair->second >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)interact_gadget_pair + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&interact_gadget_pair->second >> 3)
                                                                         + 0x7FFF8000) )
    {
      __asan_report_load4(&interact_gadget_pair->second);
    }
    proto::InteractGadget::set_config_id(interact_gadget_bin, interact_gadget_pair->second);
    std::_Rb_tree_const_iterator<std::pair<unsigned int,unsigned int>>::operator++(&__for_begin);
  }
  __for_range_0 = &this->unlock_point_set_;
  __for_begin._M_node = std::set<unsigned int>::begin(&this->unlock_point_set_)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(__for_range_0)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_end) )
  {
    v2 = std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
    unlock_point_id = v2;
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v2);
    }
    proto::AreaBin::add_unlock_point_list(proto_area_bin, *unlock_point_id);
    std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
  }
  return 0;
};

// Line 69: range 000000001316081A-0000000013160F14
__int64 __fastcall Area::onTransferPointUnlocked(Area *const this, uint32_t point_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned int M_array_high; // r14d
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t SceneId; // eax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  const char *v10; // rax
  std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  Player *v14; // rax
  __int64 result; // rax
  char v16; // [rsp+17h] [rbp-139h]
  JsonConfigMgr *scene_ida; // [rsp+18h] [rbp-138h]
  char scene_id; // [rsp+18h] [rbp-138h]
  char v19; // [rsp+20h] [rbp-130h]
  std::allocator<char> __a; // [rsp+37h] [rbp-119h] BYREF
  std::initializer_list<unsigned int> __l; // [rsp+38h] [rbp-118h] BYREF
  common::milog::MiLogStream v22; // [rsp+60h] [rbp-F0h] BYREF
  char v23[208]; // [rsp+80h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 11 point_id:68 64 16 12 scene_ptr:70 96 16 18 trans_point_ptr:77 128 16 13 player_ptr:91";
  *(_QWORD *)(v2 + 16) = Area::onTransferPointUnlocked;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -202178560;
  *(_DWORD *)(v2 + 48) = point_id;
  Area::getScene((const Area *const)(v2 + 64));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/area.cpp",
      "onTransferPointUnlocked",
      73);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v22, (const char (*)[18])"scene_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v22);
    M_array_high = -1;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v2 + 128));
    scene_ida = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128))->design_config.json_config_mgr;
    v6 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    SceneId = Scene::getSceneId(v6);
    JsonConfigMgr::findScenePoint<data::SceneTransPoint>(
      (const JsonConfigMgr *const)(v2 + 96),
      (uint32_t)scene_ida,
      SceneId);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 128));
    scene_id = 0;
    v19 = 0;
    if ( std::operator==<data::SceneTransPoint>(0LL, (const std::shared_ptr<data::SceneTransPoint> *)(v2 + 96)) )
      goto LABEL_15;
    std::allocator<char>::allocator(&__a);
    scene_id = 1;
    std::string::basic_string<std::allocator<char>>((std::string *const)&v22, "SceneTransPoint", &__a);
    v19 = 1;
    v8 = (unsigned __int64)std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      v8 = __asan_report_load8(v8);
    v9 = *(_QWORD *)v8 + 32LL;
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      v8 = __asan_report_load8(*(_QWORD *)v8 + 32LL);
    v10 = (const char *)(*(__int64 (__fastcall **)(unsigned __int64))v9)(v8);
    if ( std::operator!=<char>(v10, (const std::string *)&v22) )
      goto LABEL_15;
    v11 = std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    if ( *(_BYTE *)(((unsigned __int64)&v11->type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v11->type >> 3) + 0x7FFF8000) <= 3 )
    {
      v11 = (std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v11->type);
    }
    if ( v11->type )
LABEL_15:
      v16 = 1;
    else
      v16 = 0;
    if ( v19 )
      std::string::~string(&v22);
    if ( scene_id )
      std::allocator<char>::~allocator(&__a);
    if ( v16 )
    {
      M_array_high = 0;
    }
    else if ( common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
                &this->unlock_point_set_,
                (const unsigned int *)(v2 + 48)) )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/area.cpp",
        "onTransferPointUnlocked",
        87);
      v12 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
              &v22,
              (const char (*)[37])"unlock_point_set_ contains point_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v22);
      M_array_high = -1;
    }
    else
    {
      Area::getPlayerPtr((Area *const)(v2 + 128));
      if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 128), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/area.cpp",
          "onTransferPointUnlocked",
          94);
        common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v22, (const char (*)[19])"getPlayerPtr fails");
        common::milog::MiLogStream::~MiLogStream(&v22);
        M_array_high = -1;
      }
      else
      {
        v13 = std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        if ( *(_BYTE *)(((unsigned __int64)&v13->explore_ratio >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v13->explore_ratio >> 3) + 0x7FFF8000) <= 3 )
        {
          v13 = (std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v13->explore_ratio);
        }
        LODWORD(__l._M_array) = v13->explore_ratio;
        std::allocator<unsigned int>::allocator((std::allocator<unsigned int> *const)&__a);
        std::vector<unsigned int>::vector(
          (std::vector<unsigned int> *const)&__l._M_len,
          (std::initializer_list<unsigned int>)__PAIR128__(1LL, &__l),
          (const std::vector<unsigned int>::allocator_type *)&__a);
        v14 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        HIDWORD(__l._M_array) = Area::addExplorePoint(
                                  this,
                                  v14,
                                  EXPLORE_EVENT_UNLOCK_POINT,
                                  (const std::vector<unsigned int> *)&__l._M_len);
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)&__l._M_len);
        std::allocator<unsigned int>::~allocator((std::allocator<unsigned int> *const)&__a);
        if ( HIDWORD(__l._M_array) )
        {
          M_array_high = HIDWORD(__l._M_array);
        }
        else
        {
          std::set<unsigned int>::insert(
            &this->unlock_point_set_,
            (const std::set<unsigned int>::value_type *)(v2 + 48));
          M_array_high = 0;
        }
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 128));
    }
    std::shared_ptr<data::SceneTransPoint>::~shared_ptr((std::shared_ptr<data::SceneTransPoint> *const)(v2 + 96));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
  result = M_array_high;
  if ( v23 == (char *)v2 )
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

// Line 107: range 0000000013160F16-0000000013161307
__int64 __fastcall Area::tryAddExplorePointOnTempleInteract(Area *const this, uint32_t group_id, uint32_t config_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  unsigned int v9; // r14d
  Player *v10; // rax
  __int64 result; // rax
  std::allocator<unsigned int> __a; // [rsp+23h] [rbp-DDh] BYREF
  int ret; // [rsp+24h] [rbp-DCh]
  std::pair<unsigned int,unsigned int> value; // [rsp+28h] [rbp-D8h] BYREF
  std::vector<unsigned int> param_vec; // [rsp+30h] [rbp-D0h] BYREF
  common::milog::MiLogStream v17; // [rsp+50h] [rbp-B0h] BYREF
  char v18[144]; // [rsp+70h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 12 group_id:106 48 4 13 config_id:106 64 16 14 player_ptr:114";
  *(_QWORD *)(v3 + 16) = Area::tryAddExplorePointOnTempleInteract;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 32) = group_id;
  *(_DWORD *)(v3 + 48) = config_id;
  value = std::make_pair<unsigned int &,unsigned int &>((unsigned int *)(v3 + 32), (unsigned int *)(v3 + 48));
  if ( common::tools::MiscUtils::isContains<std::set<std::pair<unsigned int,unsigned int>>,std::pair<unsigned int,unsigned int>>(
         &this->interact_temple_set_,
         &value) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/area.cpp",
      "tryAddExplorePointOnTempleInteract",
      110);
    v6 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
           &v17,
           (const char (*)[40])"interact_temple_set_ contains,group_id:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 32));
    v8 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v7, (const char (*)[12])" config_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v17);
    v9 = -1;
  }
  else
  {
    Area::getPlayerPtr((Area *const)(v3 + 64));
    if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v3 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/area.cpp",
        "tryAddExplorePointOnTempleInteract",
        117);
      common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v17, (const char (*)[19])"getPlayerPtr fails");
      common::milog::MiLogStream::~MiLogStream(&v17);
      v9 = -1;
    }
    else
    {
      value.first = *(_DWORD *)(v3 + 32);
      value.second = *(_DWORD *)(v3 + 48);
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector(&param_vec, (std::initializer_list<unsigned int>)__PAIR128__(2LL, &value), &__a);
      v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      ret = Area::addExplorePoint(this, v10, EXPLORE_EVENT_OPEN_CHEST, &param_vec);
      std::vector<unsigned int>::~vector(&param_vec);
      std::allocator<unsigned int>::~allocator(&__a);
      if ( ret )
      {
        v9 = ret;
      }
      else
      {
        value = std::make_pair<unsigned int &,unsigned int &>((unsigned int *)(v3 + 32), (unsigned int *)(v3 + 48));
        std::set<std::pair<unsigned int,unsigned int>>::insert(&this->interact_temple_set_, &value);
        v9 = 0;
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 64));
  }
  result = v9;
  if ( v18 == (char *)v3 )
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

// Line 131: range 0000000013161308-0000000013161704
__int64 __fastcall Area::tryAddExplorePointOnChestOpen(
        Area *const this,
        uint32_t scene_id,
        uint32_t group_id,
        uint32_t config_id)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  unsigned int v7; // r14d
  Player *v8; // rax
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  Player *v17; // rax
  __int64 result; // rax
  std::allocator<unsigned int> __a; // [rsp+27h] [rbp-F9h] BYREF
  std::initializer_list<unsigned int> __l; // [rsp+28h] [rbp-F8h] BYREF
  common::milog::MiLogStream v23; // [rsp+50h] [rbp-D0h] BYREF
  char v24[176]; // [rsp+70h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 48 4 12 scene_id:130 64 4 12 group_id:130 80 4 13 config_id:130 96 16 14 player_ptr:132";
  *(_QWORD *)(v4 + 16) = Area::tryAddExplorePointOnChestOpen;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = -202178560;
  *(_DWORD *)(v4 + 48) = scene_id;
  *(_DWORD *)(v4 + 64) = group_id;
  *(_DWORD *)(v4 + 80) = config_id;
  Area::getPlayerPtr((Area *const)(v4 + 96));
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v4 + 96), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/area.cpp",
      "tryAddExplorePointOnChestOpen",
      135);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v23, (const char (*)[19])"getPlayerPtr fails");
    common::milog::MiLogStream::~MiLogStream(&v23);
    v7 = -1;
  }
  else
  {
    v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
    SceneComp = Player::getSceneComp(v8);
    if ( PlayerSceneComp::isInOneOffRecord(
           SceneComp,
           PROT_ENTITY_GADGET,
           *(_DWORD *)(v4 + 48),
           0,
           *(_DWORD *)(v4 + 64),
           *(_DWORD *)(v4 + 80)) )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/area.cpp",
        "tryAddExplorePointOnChestOpen",
        140);
      v10 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
              &v23,
              (const char (*)[58])"ignore gadget that is already in oneoff record. scene_id:");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])" group_id:");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v4 + 64));
      v14 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v13, (const char (*)[12])" config_id:");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v4 + 80));
      v16 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v15, (const char (*)[10])" area_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &this->area_id_);
      common::milog::MiLogStream::~MiLogStream(&v23);
      v7 = 0;
    }
    else
    {
      LODWORD(__l._M_array) = *(_DWORD *)(v4 + 64);
      HIDWORD(__l._M_array) = *(_DWORD *)(v4 + 80);
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector(
        (std::vector<unsigned int> *const)&__l._M_len,
        (std::initializer_list<unsigned int>)__PAIR128__(2LL, &__l),
        &__a);
      v17 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
      v7 = Area::addExplorePoint(this, v17, EXPLORE_EVENT_OPEN_CHEST, (const std::vector<unsigned int> *)&__l._M_len);
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)&__l._M_len);
      std::allocator<unsigned int>::~allocator(&__a);
    }
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 96));
  result = v7;
  if ( v24 == (char *)v4 )
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

// Line 148: range 0000000013161706-0000000013161986
int32_t __cdecl Area::onItemAdd(Area *const this, uint32_t item_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t M_array_high; // r14d
  Player *v6; // rsi
  int32_t result; // eax
  std::allocator<unsigned int> __a; // [rsp+27h] [rbp-B9h] BYREF
  std::initializer_list<unsigned int> __l; // [rsp+28h] [rbp-B8h] BYREF
  common::milog::MiLogStream v10; // [rsp+50h] [rbp-90h] BYREF
  char v11[112]; // [rsp+70h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 player_ptr:149";
  *(_QWORD *)(v2 + 16) = Area::onItemAdd;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  Area::getPlayerPtr((Area *const)(v2 + 32));
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/area.cpp",
      "onItemAdd",
      152);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v10, (const char (*)[19])"getPlayerPtr fails");
    common::milog::MiLogStream::~MiLogStream(&v10);
    M_array_high = -1;
  }
  else
  {
    LODWORD(__l._M_array) = item_id;
    std::allocator<unsigned int>::allocator(&__a);
    std::vector<unsigned int>::vector(
      (std::vector<unsigned int> *const)&__l._M_len,
      (std::initializer_list<unsigned int>)__PAIR128__(1LL, &__l),
      &__a);
    v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    HIDWORD(__l._M_array) = Area::addExplorePoint(
                              this,
                              v6,
                              EXPLORE_EVENT_ITEM_ADD,
                              (const std::vector<unsigned int> *)&__l._M_len);
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)&__l._M_len);
    std::allocator<unsigned int>::~allocator(&__a);
    if ( HIDWORD(__l._M_array) )
      M_array_high = HIDWORD(__l._M_array);
    else
      M_array_high = 0;
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 32));
  result = M_array_high;
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

// Line 164: range 0000000013161988-0000000013161BED
int32_t __cdecl Area::onGather(Area *const this, uint32_t explore_exp)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  Player *v6; // rsi
  int32_t result; // eax
  std::allocator<unsigned int> __a; // [rsp+2Bh] [rbp-B5h] BYREF
  std::initializer_list<unsigned int> __l; // [rsp+2Ch] [rbp-B4h] BYREF
  common::milog::MiLogStream v10; // [rsp+50h] [rbp-90h] BYREF
  char v11[112]; // [rsp+70h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 player_ptr:165";
  *(_QWORD *)(v2 + 16) = Area::onGather;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  Area::getPlayerPtr((Area *const)(v2 + 32));
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/area.cpp",
      "onGather",
      168);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v10, (const char (*)[19])"getPlayerPtr fails");
    common::milog::MiLogStream::~MiLogStream(&v10);
    v5 = -1;
  }
  else
  {
    LODWORD(__l._M_array) = explore_exp;
    std::allocator<unsigned int>::allocator(&__a);
    std::vector<unsigned int>::vector(
      (std::vector<unsigned int> *const)((char *)&__l._M_array + 4),
      (std::initializer_list<unsigned int>)__PAIR128__(1LL, &__l),
      &__a);
    v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v5 = Area::addExplorePoint(
           this,
           v6,
           EXPLORE_EVENT_GATHER,
           (const std::vector<unsigned int> *)((char *)&__l._M_array + 4));
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)((char *)&__l._M_array + 4));
    std::allocator<unsigned int>::~allocator(&__a);
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 32));
  result = v5;
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

// Line 176: range 0000000013161BEE-0000000013161F83
__int64 __fastcall Area::addExplorePoint(
        Area *const this,
        Player *player,
        data::ExploreEventType explore_type,
        const std::vector<unsigned int> *param_vec)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r13
  __int64 result; // rax
  unsigned int v8; // ecx
  uint32_t v9; // ecx
  char v10; // dl
  __int64 v11; // rsi
  bool v12; // dl
  __int64 v13; // rsi
  uint32_t v14; // edx
  char v15; // al
  common::milog::MiLogStream *v16; // r14
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  unsigned int val; // [rsp+2Ch] [rbp-B4h] BYREF
  common::milog::MiLogStream v27; // [rsp+30h] [rbp-B0h] BYREF
  char v28[144]; // [rsp+50h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 13 add_point:177 64 4 16 explore_type:175";
  *(_QWORD *)(v4 + 16) = Area::addExplorePoint;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202116348;
  *(_DWORD *)(v4 + 64) = explore_type;
  *(_DWORD *)(v4 + 48) = Area::getExploreAddPoint(this, *(data::ExploreEventType *)(v4 + 64), param_vec);
  if ( *(_DWORD *)(v4 + 48) )
  {
    v8 = *(_DWORD *)(v4 + 48);
    if ( *(_BYTE *)(((unsigned __int64)&this->explore_point_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->explore_point_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->explore_point_);
    }
    v11 = v8;
    v9 = SAFE_ADD<unsigned int,unsigned int>(this->explore_point_, v8);
    v10 = *(_BYTE *)(((unsigned __int64)&this->explore_point_ >> 3) + 0x7FFF8000);
    LOBYTE(v11) = v10 != 0;
    v12 = v10 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v10;
    if ( v12 )
      __asan_report_store4(&this->explore_point_, v11, v12);
    this->explore_point_ = v9;
    if ( *(_BYTE *)(((unsigned __int64)&this->explore_num_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->explore_num_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->explore_num_);
    }
    v13 = 1LL;
    v14 = SAFE_ADD<unsigned int,int>(this->explore_num_, 1);
    v15 = *(_BYTE *)(((unsigned __int64)&this->explore_num_ >> 3) + 0x7FFF8000);
    if ( v15 != 0 && v15 <= 3 )
    {
      LOBYTE(v13) = v15 != 0;
      __asan_report_store4(&this->explore_num_, v13, v14);
    }
    this->explore_num_ = v14;
    Area::logPlayerLogAreaExploration(this, player, *(data::ExploreEventType *)(v4 + 64), *(_DWORD *)(v4 + 48));
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/area.cpp",
      "addExplorePoint",
      190);
    v16 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v27, (const char (*)[6])"area:");
    val = Area::getAreaId(this);
    v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &val);
    v18 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v17, (const char (*)[15])" explore_type:");
    v19 = common::milog::MiLogStream::operator<<<data::ExploreEventType,(data::ExploreEventType*)0>(
            v18,
            (const data::ExploreEventType *)(v4 + 64));
    v20 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v19, (const char (*)[12])" add_point:");
    v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v4 + 48));
    v22 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v21, (const char (*)[17])" explore_point_:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &this->explore_point_);
    common::milog::MiLogStream::~MiLogStream(&v27);
    result = 0LL;
  }
  else
  {
    result = 0xFFFFFFFFLL;
  }
  if ( v28 == (char *)v4 )
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
  return result;
};

// Line 199: range 0000000013161F84-0000000013162654
uint32_t __cdecl Area::getExploreAddPoint(
        Area *const this,
        data::ExploreEventType explore_type,
        const std::vector<unsigned int> *param_vec)
{
  uint32_t ExploreMaterialPoint; // ebx
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v4; // rax
  unsigned int *v5; // rdx
  unsigned int v6; // ebx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  unsigned int ExploreUnlockPoint; // eax
  std::vector<unsigned int>::const_reference v9; // rax
  _DWORD *v10; // rdx
  LuaConfigMgr *p_lua_config_mgr; // rbx
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v12; // rax
  uint32_t *v13; // rdx
  common::milog::MiLogStream *v14; // rbx
  const unsigned int *v15; // rax
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v16; // rax
  uint32_t *v17; // rdx
  common::milog::MiLogStream *v18; // rbx
  const unsigned int *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rbx
  const unsigned int *v22; // rax
  ExploreExcelConfigMgr *p_explore_config_mgr; // rbx
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v24; // rax
  uint32_t *v25; // rdx
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v26; // rax
  uint32_t *v27; // rdx
  const GroupScriptConfig *group_script_config_ptr; // [rsp+20h] [rbp-50h]
  const GadgetScriptConfig *gadget_script_config_ptr; // [rsp+28h] [rbp-48h]
  std::shared_ptr<Config> v32; // [rsp+30h] [rbp-40h] BYREF
  common::milog::MiLogStream v33; // [rsp+40h] [rbp-30h] BYREF

  if ( explore_type == EXPLORE_EVENT_GATHER )
  {
    if ( std::vector<unsigned int>::size(param_vec) )
    {
      v26 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                  param_vec,
                                                                                                  0LL);
      v27 = v26;
      if ( *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v26 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v26);
      }
      return *v27;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    if ( explore_type > EXPLORE_EVENT_GATHER )
      return 0;
    if ( explore_type == EXPLORE_EVENT_ITEM_ADD )
    {
      if ( !std::vector<unsigned int>::size(param_vec) )
        return 0;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v32);
      p_explore_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v32)->design_config.txt_config_mgr.explore_config_mgr;
      v24 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                  param_vec,
                                                                                                  0LL);
      v25 = v24;
      if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v24 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v24);
      }
      ExploreMaterialPoint = ExploreExcelConfigMgr::getExploreMaterialPoint(p_explore_config_mgr, *v25);
      std::shared_ptr<Config>::~shared_ptr(&v32);
      return ExploreMaterialPoint;
    }
    if ( explore_type > EXPLORE_EVENT_ITEM_ADD )
      return 0;
    if ( explore_type == EXPLORE_EVENT_UNLOCK_POINT )
    {
      if ( std::vector<unsigned int>::size(param_vec) )
      {
        v4 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                   param_vec,
                                                                                                   0LL);
        v5 = v4;
        if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v4);
        }
        v6 = *v5;
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v32);
        v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v32);
        ExploreUnlockPoint = ConstValueExcelConfigMgr::getExploreUnlockPoint(&v7->design_config.txt_config_mgr.const_value_config_mgr);
        ExploreMaterialPoint = SAFE_MULTIPLY<unsigned int,unsigned int>(ExploreUnlockPoint, v6);
        std::shared_ptr<Config>::~shared_ptr(&v32);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v33,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/area.cpp",
          "getExploreAddPoint",
          205);
        common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
          &v33,
          (const char (*)[21])"param_vec.size() < 1");
        common::milog::MiLogStream::~MiLogStream(&v33);
        return 0;
      }
    }
    else
    {
      if ( explore_type != EXPLORE_EVENT_OPEN_CHEST )
        return 0;
      if ( std::vector<unsigned int>::size(param_vec) > 1 )
      {
        v9 = std::vector<unsigned int>::operator[](param_vec, 1uLL);
        v10 = v9;
        if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v9);
        }
        if ( *v10 )
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v32);
          p_lua_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v32)->design_config.lua_config_mgr;
          v12 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](param_vec, 0LL);
          v13 = v12;
          if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v12);
          }
          group_script_config_ptr = LuaConfigMgr::findGroupScriptConfig(p_lua_config_mgr, *v13);
          std::shared_ptr<Config>::~shared_ptr(&v32);
          if ( group_script_config_ptr )
          {
            v16 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](param_vec, 1uLL);
            v17 = v16;
            if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v16);
            }
            gadget_script_config_ptr = GroupScriptConfig::findGadgetConfig(group_script_config_ptr, *v17);
            if ( gadget_script_config_ptr )
            {
              if ( *(_BYTE *)(((unsigned __int64)&gadget_script_config_ptr->explore_config >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&gadget_script_config_ptr->explore_config >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&gadget_script_config_ptr->explore_config);
              }
              if ( gadget_script_config_ptr->explore_config.type )
              {
                if ( *(_BYTE *)(((unsigned __int64)&gadget_script_config_ptr->explore_config.exp >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)gadget_script_config_ptr - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gadget_script_config_ptr->explore_config.exp >> 3)
                                                                                          + 0x7FFF8000) )
                {
                  __asan_report_load4(&gadget_script_config_ptr->explore_config.exp);
                }
                return gadget_script_config_ptr->explore_config.exp;
              }
              else
              {
                return 0;
              }
            }
            else
            {
              common::milog::MiLogStream::create(
                &v33,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/scene/area.cpp",
                "getExploreAddPoint",
                231);
              v18 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                      &v33,
                      (const char (*)[35])"findGadgetConfig fails, config_id:");
              v19 = std::vector<unsigned int>::operator[](param_vec, 1uLL);
              v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, v19);
              v21 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                      v20,
                      (const char (*)[11])" group_id:");
              v22 = std::vector<unsigned int>::operator[](param_vec, 0LL);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, v22);
              common::milog::MiLogStream::~MiLogStream(&v33);
              return 0;
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v33,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/scene/area.cpp",
              "getExploreAddPoint",
              224);
            v14 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                    &v33,
                    (const char (*)[23])"getScriptConfig fails:");
            v15 = std::vector<unsigned int>::operator[](param_vec, 0LL);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, v15);
            common::milog::MiLogStream::~MiLogStream(&v33);
            return 0;
          }
        }
        else
        {
          return 0;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v33,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/area.cpp",
          "getExploreAddPoint",
          213);
        common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
          &v33,
          (const char (*)[21])"param_vec.size() < 2");
        common::milog::MiLogStream::~MiLogStream(&v33);
        return 0;
      }
    }
  }
  return ExploreMaterialPoint;
};

// Line 261: range 0000000013162656-0000000013162ACA
void __cdecl Area::logPlayerLogAreaExploration(
        Area *const this,
        Player *player,
        data::ExploreEventType explore_type,
        uint32_t add_point)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyAreaExploration,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // r14
  PlayerSceneComp *SceneComp; // rax
  uint32_t Level1AreaId; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyAreaExploration,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // r14
  PlayerSceneComp *v12; // rax
  uint32_t Level2AreaId; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyAreaExploration,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyAreaExploration,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyAreaExploration,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyAreaExploration,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rcx
  std::string v18; // [rsp+0h] [rbp-110h]
  uint32_t add_pointa; // [rsp+8h] [rbp-108h]
  google::protobuf::uint32 explore_typea; // [rsp+Ch] [rbp-104h]
  Player *playera; // [rsp+10h] [rbp-100h]
  Area *thisa; // [rsp+18h] [rbp-F8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-F0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+30h] [rbp-E0h] BYREF
  common::milog::MiLogStream v25; // [rsp+40h] [rbp-D0h] BYREF
  char v26[176]; // [rsp+60h] [rbp-B0h] BYREF

  *(&v18._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v18._anon_0._M_allocated_capacity = (std::string::size_type)player;
  HIDWORD(v18._M_string_length) = explore_type;
  LODWORD(v18._M_string_length) = add_point;
  v4 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 1 10 holder:269 64 16 13 scene_ptr:262 96 16 11 log_ptr:271";
  *(_QWORD *)(v4 + 16) = Area::logPlayerLogAreaExploration;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -219021312;
  v6[536862723] = -202178560;
  Area::getScene((const Area *const)(v4 + 64));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/area.cpp",
      "logPlayerLogAreaExploration",
      265);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v25, (const char (*)[18])"scene_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v25);
  }
  else
  {
    BasicComp = Player::getBasicComp(player);
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v25, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48), 0x5E9u, v18);
    std::string::~string(&v25);
    common::tools::perf::make_shared<proto_log::PlayerLogBodyAreaExploration>();
    v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyAreaExploration,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAreaExploration,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
    SceneComp = Player::getSceneComp(playera);
    Level1AreaId = PlayerSceneComp::getLevel1AreaId(SceneComp);
    proto_log::PlayerLogBodyAreaExploration::set_level1_area_id(v8, Level1AreaId);
    v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyAreaExploration,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAreaExploration,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
    v12 = Player::getSceneComp(playera);
    Level2AreaId = PlayerSceneComp::getLevel2AreaId(v12);
    proto_log::PlayerLogBodyAreaExploration::set_level2_area_id(v11, Level2AreaId);
    v14 = std::__shared_ptr_access<proto_log::PlayerLogBodyAreaExploration,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAreaExploration,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
    proto_log::PlayerLogBodyAreaExploration::set_type(v14, explore_typea);
    v15 = std::__shared_ptr_access<proto_log::PlayerLogBodyAreaExploration,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAreaExploration,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
    if ( *(_BYTE *)(((unsigned __int64)&thisa->explore_num_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->explore_num_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&thisa->explore_num_);
    }
    proto_log::PlayerLogBodyAreaExploration::set_explore_num(v15, thisa->explore_num_);
    v16 = std::__shared_ptr_access<proto_log::PlayerLogBodyAreaExploration,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAreaExploration,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
    proto_log::PlayerLogBodyAreaExploration::set_add_point(v16, add_pointa);
    v17 = std::__shared_ptr_access<proto_log::PlayerLogBodyAreaExploration,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAreaExploration,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
    if ( *(_BYTE *)(((unsigned __int64)&thisa->explore_point_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)thisa + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->explore_point_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&thisa->explore_point_);
    }
    proto_log::PlayerLogBodyAreaExploration::set_cur_point(v17, thisa->explore_point_);
    std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyAreaExploration,void>(
      &p_body_ptr,
      (const std::shared_ptr<proto_log::PlayerLogBodyAreaExploration> *)(v4 + 96));
    Player::printStatLog(playera, &p_body_ptr, &p_body_ext_ptr, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
    std::shared_ptr<proto_log::PlayerLogBodyAreaExploration>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyAreaExploration> *const)(v4 + 96));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 64));
  if ( v26 == (char *)v4 )
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
};

// Line 283: range 0000000013162ACC-0000000013162E6E
PlayerPtr __cdecl Area::getPlayerPtr(Area *const this)
{
  const unsigned int *v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rdx
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  PlayerPtr result; // rax
  common::milog::MiLogStream v12; // [rsp+10h] [rbp-B0h] BYREF
  char v13[144]; // [rsp+30h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 13 scene_ptr:284 64 16 14 player_ptr:295";
  *(_QWORD *)(v2 + 16) = Area::getPlayerPtr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  Area::getScene((const Area *const)(v2 + 32));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/area.cpp",
      "getPlayerPtr",
      287);
    v5 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
           &v12,
           (const char (*)[26])"getScene failed, area_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, v1);
    common::milog::MiLogStream::~MiLogStream(&v12);
    std::shared_ptr<Player>::shared_ptr((std::shared_ptr<Player> *const)this, 0LL);
  }
  else
  {
    v6 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( Scene::isHomeScene(v6) )
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/area.cpp",
        "getPlayerPtr",
        292);
      v7 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
             &v12,
             (const char (*)[37])"home scene doesn't has owner, scene:");
      v8 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      common::milog::MiLogStream::operator<<<Scene,(Scene*)0>(v7, v8);
      common::milog::MiLogStream::~MiLogStream(&v12);
      std::shared_ptr<Player>::shared_ptr((std::shared_ptr<Player> *const)this, 0LL);
    }
    else
    {
      std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      Scene::getOwnPlayer((const Scene *const)(v2 + 64));
      if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 64), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v12,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/area.cpp",
          "getPlayerPtr",
          298);
        v9 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
               &v12,
               (const char (*)[35])"scene_ptr owner is nullptr, scene:");
        v10 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        common::milog::MiLogStream::operator<<<Scene,(Scene*)0>(v9, v10);
        common::milog::MiLogStream::~MiLogStream(&v12);
        std::shared_ptr<Player>::shared_ptr((std::shared_ptr<Player> *const)this, 0LL);
      }
      else
      {
        std::shared_ptr<Player>::shared_ptr((std::shared_ptr<Player> *const)this, (std::shared_ptr<Player> *)(v2 + 64));
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
    }
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 32));
  if ( v13 == (char *)v2 )
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
  result._M_ptr = (std::__shared_ptr<Player,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 306: range 0000000013162E70-0000000013162EE4
void __cdecl Area::setExplorePointByMuip(Area *const this, Player *player, uint32_t explore_point)
{
  bool v3; // dl

  v3 = *(_BYTE *)(((unsigned __int64)&this->explore_point_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->explore_point_ >> 3) + 0x7FFF8000);
  if ( v3 )
    __asan_report_store4(&this->explore_point_, (((_BYTE)this + 4) & 7u) + 3, v3);
  this->explore_point_ = explore_point;
  Area::logPlayerLogAreaExploration(this, player, EXPLORE_EVENT_NONE, 0);
};

// Line 313: range 0000000013162EE6-0000000013163826
void __cdecl Area::calcTotalExplorePoint(
        const Area *const this,
        Player *player,
        proto_log::AreaExploreLog *area_explore_log)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  uint32_t v6; // edx
  std::tuple_element<0,const std::pair<unsigned int const,std::map<unsigned int,std::map<unsigned int,unsigned int>> > >::type v7; // eax
  uint32_t v8; // edx
  uint32_t v9; // edx
  uint32_t v10; // edx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  common::milog::MiLogStream *v14; // rdx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  uint32_t *p_area_id; // rax
  uint32_t area_id; // ecx
  PlayerDungeonComp *DungeonComp; // rcx
  char v20; // al
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rdx
  google::protobuf::uint32 v27; // r12d
  google::protobuf::uint32 v28; // r12d
  google::protobuf::uint32 v29; // r12d
  google::protobuf::uint32 v30; // r12d
  google::protobuf::uint32 v31; // edx
  std::map<unsigned int,std::map<unsigned int,std::map<unsigned int,unsigned int>>>::const_iterator __for_begin; // [rsp+28h] [rbp-108h] BYREF
  std::map<unsigned int,std::map<unsigned int,std::map<unsigned int,unsigned int>>>::const_iterator __for_end; // [rsp+30h] [rbp-100h] BYREF
  const WorldAreaExcelConfigMgr *world_area_config_mgr; // [rsp+38h] [rbp-F8h]
  const std::map<unsigned int,std::map<unsigned int,std::map<unsigned int,unsigned int>>> *__for_range; // [rsp+40h] [rbp-F0h]
  const std::pair<unsigned int const,std::map<unsigned int,std::map<unsigned int,unsigned int>> > *v37; // [rsp+48h] [rbp-E8h]
  std::tuple_element<0,const std::pair<unsigned int const,std::map<unsigned int,std::map<unsigned int,unsigned int>> > >::type *explore_type; // [rsp+50h] [rbp-E0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::map<unsigned int,std::map<unsigned int,unsigned int>> > >::type *group_gadgets_map; // [rsp+58h] [rbp-D8h]
  const std::unordered_map<unsigned int,data::DungeonMapAreaExcelConfig> *__for_range_0; // [rsp+60h] [rbp-D0h]
  const std::pair<unsigned int const,data::DungeonMapAreaExcelConfig> *v41; // [rsp+68h] [rbp-C8h]
  std::tuple_element<0,const std::pair<unsigned int const,data::DungeonMapAreaExcelConfig> >::type *dungeon_id; // [rsp+70h] [rbp-C0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::DungeonMapAreaExcelConfig> >::type *dungeon_map_area_config; // [rsp+78h] [rbp-B8h]
  std::shared_ptr<Config> v44; // [rsp+80h] [rbp-B0h] BYREF
  common::milog::MiLogStream v45; // [rsp+90h] [rbp-A0h] BYREF
  char v46[128]; // [rsp+B0h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v46;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 11 item_id:348 48 4 17 explore_point:349 64 8 8 iter:318";
  *(_QWORD *)(v3 + 16) = Area::calcTotalExplorePoint;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  proto_log::AreaExploreLog::set_area_id(area_explore_log, this->area_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->explore_point_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->explore_point_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->explore_point_);
  }
  proto_log::AreaExploreLog::set_old_total_exp(area_explore_log, this->explore_point_);
  v6 = Area::calcExplorePointByUnlockSceneTransPoint(this, player);
  proto_log::AreaExploreLog::set_trans_point_exp(area_explore_log, v6);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v44);
  world_area_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v44)->design_config.txt_config_mgr.world_area_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v44);
  *(std::map<unsigned int,std::map<unsigned int,std::map<unsigned int,std::map<unsigned int,unsigned int>>>>::const_iterator *)(v3 + 64) = std::map<unsigned int,std::map<unsigned int,std::map<unsigned int,std::map<unsigned int,unsigned int>>>>::find(&world_area_config_mgr->area_to_explorable_gadgets_map, &this->area_id_);
  __for_end._M_node = std::map<unsigned int,std::map<unsigned int,std::map<unsigned int,std::map<unsigned int,unsigned int>>>>::end(&world_area_config_mgr->area_to_explorable_gadgets_map)._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::map<unsigned int,std::map<unsigned int,unsigned int>>> > >::_Self *)(v3 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::map<unsigned int,std::map<unsigned int,unsigned int>>> > >::_Self *)&__for_end) )
  {
    __for_range = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::map<unsigned int,std::map<unsigned int,unsigned int>>>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::map<unsigned int,std::map<unsigned int,unsigned int>>> > > *const)(v3 + 64))->second;
    __for_begin._M_node = std::map<unsigned int,std::map<unsigned int,std::map<unsigned int,unsigned int>>>::begin(__for_range)._M_node;
    __for_end._M_node = std::map<unsigned int,std::map<unsigned int,std::map<unsigned int,unsigned int>>>::end(__for_range)._M_node;
    while ( 1 )
    {
      if ( !std::operator!=(&__for_begin, &__for_end) )
        goto LABEL_24;
      v37 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::map<unsigned int,unsigned int>>>>::operator*(&__for_begin);
      explore_type = std::get<0ul,unsigned int const,std::map<unsigned int,std::map<unsigned int,unsigned int>>>(v37);
      group_gadgets_map = (std::tuple_element<1,const std::pair<unsigned int const,std::map<unsigned int,std::map<unsigned int,unsigned int>> > >::type *)std::get<1ul,unsigned int const,std::map<unsigned int,std::map<unsigned int,unsigned int>>>(v37);
      if ( *(_BYTE *)(((unsigned __int64)explore_type >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)explore_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)explore_type >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4(explore_type);
      }
      v7 = *explore_type;
      if ( *explore_type == 3 )
      {
        v9 = Area::calcExplorePointByOneoffGadgets(this, player, group_gadgets_map);
        proto_log::AreaExploreLog::set_gather_exp(area_explore_log, v9);
      }
      else
      {
        if ( v7 > 3 )
          goto LABEL_21;
        if ( v7 == 1 )
        {
          v8 = Area::calcExplorePointByOneoffGadgets(this, player, group_gadgets_map);
          proto_log::AreaExploreLog::set_open_chest_exp(area_explore_log, v8);
          goto LABEL_22;
        }
        if ( v7 == 2 )
        {
          v10 = Area::calcExplorePointByOneoffGadgets(this, player, group_gadgets_map);
          proto_log::AreaExploreLog::set_temple_exp(area_explore_log, v10);
        }
        else
        {
LABEL_21:
          common::milog::MiLogStream::create(
            &v45,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/scene/area.cpp",
            "calcTotalExplorePoint",
            335);
          v11 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  &v45,
                  (const char (*)[22])"invalid explore_type:");
          v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, explore_type);
          v13 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v12, (const char (*)[10])" area_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &this->area_id_);
          common::milog::MiLogStream::~MiLogStream(&v45);
        }
      }
LABEL_22:
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::map<unsigned int,unsigned int>>>>::operator++(&__for_begin);
    }
  }
  common::milog::MiLogStream::create(
    &v45,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/scene/area.cpp",
    "calcTotalExplorePoint",
    342);
  v14 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
          &v45,
          (const char (*)[62])"area_id not found in area_to_explorable_gadgets_map! area_id:");
  v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &this->area_id_);
  v16 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v15, (const char (*)[9])" player:");
  operator<<(v16, player);
  common::milog::MiLogStream::~MiLogStream(&v45);
LABEL_24:
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v44);
  __for_range_0 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v44)->design_config.txt_config_mgr.explore_config_mgr.dungeon_map_area_excel_config_map;
  std::shared_ptr<Config>::~shared_ptr(&v44);
  __for_begin._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::map<unsigned int,unsigned int>> > >::_Base_ptr)std::unordered_map<unsigned int,data::DungeonMapAreaExcelConfig>::begin(__for_range_0)._M_cur;
  __for_end._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::map<unsigned int,unsigned int>> > >::_Base_ptr)std::unordered_map<unsigned int,data::DungeonMapAreaExcelConfig>::end(__for_range_0)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::DungeonMapAreaExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DungeonMapAreaExcelConfig>,false> *)&__for_begin,
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DungeonMapAreaExcelConfig>,false> *)&__for_end) )
  {
    v41 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::DungeonMapAreaExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::DungeonMapAreaExcelConfig>,false,false> *const)&__for_begin);
    dungeon_id = std::get<0ul,unsigned int const,data::DungeonMapAreaExcelConfig>(v41);
    dungeon_map_area_config = (std::tuple_element<1,const std::pair<unsigned int const,data::DungeonMapAreaExcelConfig> >::type *)std::get<1ul,unsigned int const,data::DungeonMapAreaExcelConfig>(v41);
    p_area_id = &dungeon_map_area_config->area_id;
    if ( *(_BYTE *)(((unsigned __int64)p_area_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_area_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_area_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_area_id);
    }
    area_id = dungeon_map_area_config->area_id;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(this);
    }
    if ( area_id != this->area_id_ )
      goto LABEL_35;
    DungeonComp = Player::getDungeonComp(player);
    if ( *(_BYTE *)(((unsigned __int64)dungeon_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)dungeon_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dungeon_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(dungeon_id);
    }
    if ( PlayerDungeonComp::isDungeonPassed(DungeonComp, *dungeon_id) )
      v20 = 1;
    else
LABEL_35:
      v20 = 0;
    if ( v20 )
    {
      *(_DWORD *)(v3 + 32) = 107001;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v44);
      v21 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v44);
      *(_DWORD *)(v3 + 48) = ExploreExcelConfigMgr::getExploreMaterialPoint(
                               &v21->design_config.txt_config_mgr.explore_config_mgr,
                               0x1A1F9u);
      std::shared_ptr<Config>::~shared_ptr(&v44);
      common::milog::MiLogStream::create(
        &v45,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/area.cpp",
        "calcTotalExplorePoint",
        350);
      v22 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
              &v45,
              (const char (*)[45])"dungeon_first reward explore point, item_id:");
      v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v3 + 32));
      v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v23, (const char (*)[16])" explore_point:");
      v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v3 + 48));
      v26 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v25, (const char (*)[9])" player:");
      operator<<(v26, player);
      common::milog::MiLogStream::~MiLogStream(&v45);
      proto_log::AreaExploreLog::set_item_exp(area_explore_log, *(_DWORD *)(v3 + 48));
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::DungeonMapAreaExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::DungeonMapAreaExcelConfig>,false,false> *const)&__for_begin);
  }
  v27 = proto_log::AreaExploreLog::trans_point_exp(area_explore_log);
  v28 = proto_log::AreaExploreLog::open_chest_exp(area_explore_log) + v27;
  v29 = proto_log::AreaExploreLog::gather_exp(area_explore_log) + v28;
  v30 = proto_log::AreaExploreLog::temple_exp(area_explore_log) + v29;
  v31 = v30 + proto_log::AreaExploreLog::item_exp(area_explore_log);
  proto_log::AreaExploreLog::set_total_exp(area_explore_log, v31);
  if ( v46 == (char *)v3 )
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

// Line 363: range 0000000013163828-00000000131643BD
uint32_t __cdecl Area::calcExplorePointByUnlockSceneTransPoint(const Area *const this, Player *player)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rdx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  uint32_t v8; // r14d
  common::milog::MiLogStream *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rdx
  common::milog::MiLogStream *v21; // rdx
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rdx
  std::_Rb_tree_const_iterator<unsigned int>::reference v24; // rax
  _DWORD *v25; // rdx
  unsigned int v26; // eax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rdx
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rdx
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rdx
  const char *v36; // rax
  std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // rax
  uint32_t ExploreUnlockPoint; // eax
  common::milog::MiLogStream *v41; // rdx
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rdx
  uint32_t result; // eax
  char v47; // [rsp+Fh] [rbp-1B1h]
  std::allocator<char> __a; // [rsp+2Bh] [rbp-195h] BYREF
  uint32_t explore_point; // [rsp+2Ch] [rbp-194h]
  std::set<unsigned int>::iterator __for_begin; // [rsp+30h] [rbp-190h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+38h] [rbp-188h] BYREF
  const WorldAreaExcelConfigMgr *world_area_config_mgr; // [rsp+40h] [rbp-180h]
  const std::set<unsigned int> *__for_range; // [rsp+48h] [rbp-178h]
  std::shared_ptr<Config> v54; // [rsp+50h] [rbp-170h] BYREF
  std::shared_ptr<Config> v55; // [rsp+60h] [rbp-160h] BYREF
  common::milog::MiLogStream v56; // [rsp+70h] [rbp-150h] BYREF
  char v57[304]; // [rsp+90h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v57;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 48 4 12 scene_id:365 64 4 24 scene_trans_point_id:390 80 8 8 iter:382 112 16 13 scene_ptr:371 "
                        "144 16 25 scene_trans_point_ptr:392 176 48 25 unlocked_point_id_set:388";
  *(_QWORD *)(v2 + 16) = Area::calcExplorePointByUnlockSceneTransPoint;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = 61956;
  v4[536862722] = -234881024;
  v4[536862723] = 62194;
  v4[536862724] = 62194;
  v4[536862725] = 62194;
  v4[536862727] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v55);
  world_area_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v55)->design_config.txt_config_mgr.world_area_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v55);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  *(_DWORD *)(v2 + 48) = WorldAreaExcelConfigMgr::findSceneIdByLevel1AreaId(world_area_config_mgr, this->area_id_);
  if ( *(_DWORD *)(v2 + 48) )
  {
    Area::getScene((const Area *const)(v2 + 112));
    if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 112)) )
    {
      common::milog::MiLogStream::create(
        &v56,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/area.cpp",
        "calcExplorePointByUnlockSceneTransPoint",
        374);
      v9 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
             &v56,
             (const char (*)[24])"getScene fail, area_id:");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->area_id_);
      v11 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v10, (const char (*)[9])" player:");
      operator<<(v11, player);
      common::milog::MiLogStream::~MiLogStream(&v56);
      v8 = 0;
    }
    else
    {
      v12 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
      if ( Scene::getSceneId(v12) == *(_DWORD *)(v2 + 48) )
      {
        *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v2 + 80) = std::unordered_map<unsigned int,std::set<unsigned int>>::find(
                                                                                                  &world_area_config_mgr->area_to_scene_trans_points_map,
                                                                                                  &this->area_id_);
        __for_end._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::unordered_map<unsigned int,std::set<unsigned int>>::end(&world_area_config_mgr->area_to_scene_trans_points_map)._M_cur;
        if ( std::__detail::operator==<std::pair<unsigned int const,std::set<unsigned int>>,false>(
               (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v2 + 80),
               (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)&__for_end) )
        {
          common::milog::MiLogStream::create(
            &v56,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/scene/area.cpp",
            "calcExplorePointByUnlockSceneTransPoint",
            385);
          v21 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
                  &v56,
                  (const char (*)[62])"area_id not found in area_to_scene_trans_points_map! area_id:");
          v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &this->area_id_);
          v23 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v22, (const char (*)[9])" player:");
          operator<<(v23, player);
          common::milog::MiLogStream::~MiLogStream(&v56);
          v8 = 0;
        }
        else
        {
          std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 176));
          explore_point = 0;
          __for_range = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v2 + 80))->second;
          __for_begin._M_node = std::set<unsigned int>::begin(__for_range)._M_node;
          __for_end._M_node = std::set<unsigned int>::end(__for_range)._M_node;
          while ( std::operator!=(&__for_begin, &__for_end) )
          {
            v24 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
            v25 = v24;
            if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v24 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v24);
            }
            *(_DWORD *)(v2 + 64) = *v25;
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v54);
            v26 = (unsigned int)std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v54);
            JsonConfigMgr::findScenePoint<data::SceneTransPoint>(
              (const JsonConfigMgr *const)(v2 + 144),
              v26 + 93080,
              *(_DWORD *)(v2 + 48));
            std::shared_ptr<Config>::~shared_ptr(&v54);
            if ( std::operator==<data::SceneTransPoint>(0LL, (const std::shared_ptr<data::SceneTransPoint> *)(v2 + 144)) )
            {
              common::milog::MiLogStream::create(
                &v56,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/scene/area.cpp",
                "calcExplorePointByUnlockSceneTransPoint",
                395);
              v27 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                      &v56,
                      (const char (*)[31])"findScenePoint fail, scene_id:");
              v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v27,
                      (const unsigned int *)(v2 + 48));
              v29 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                      v28,
                      (const char (*)[11])" point_id:");
              v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v29,
                      (const unsigned int *)(v2 + 64));
              v31 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                      v30,
                      (const char (*)[10])" area_id:");
              v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, &this->area_id_);
              v33 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v32, (const char (*)[9])" player:");
              operator<<(v33, player);
              common::milog::MiLogStream::~MiLogStream(&v56);
            }
            else
            {
              std::allocator<char>::allocator(&__a);
              std::string::basic_string<std::allocator<char>>((std::string *const)&v56, "SceneTransPoint", &__a);
              v34 = (unsigned __int64)std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
              if ( *(_BYTE *)((v34 >> 3) + 0x7FFF8000) )
                v34 = __asan_report_load8(v34);
              v35 = *(_QWORD *)v34 + 32LL;
              if ( *(_BYTE *)((v35 >> 3) + 0x7FFF8000) )
                v34 = __asan_report_load8(*(_QWORD *)v34 + 32LL);
              v36 = (const char *)(*(__int64 (__fastcall **)(unsigned __int64))v35)(v34);
              if ( std::operator!=<char>(v36, (const std::string *)&v56) )
                goto LABEL_28;
              v37 = std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
              if ( *(_BYTE *)(((unsigned __int64)&v37->type >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&v37->type >> 3) + 0x7FFF8000) <= 3 )
              {
                v37 = (std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v37->type);
              }
              if ( v37->type )
LABEL_28:
                v47 = 1;
              else
                v47 = 0;
              std::string::~string(&v56);
              std::allocator<char>::~allocator(&__a);
              if ( !v47 )
              {
                v38 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
                if ( Scene::isPointUnlocked(v38, *(_DWORD *)(v2 + 64)) )
                {
                  std::set<unsigned int>::insert(
                    (std::set<unsigned int> *const)(v2 + 176),
                    (const std::set<unsigned int>::value_type *)(v2 + 64));
                  ServiceBox::findService<GameserverService>();
                  GameserverService::getConfig((GameserverService *const)&v55);
                  v39 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v55);
                  ExploreUnlockPoint = ConstValueExcelConfigMgr::getExploreUnlockPoint(&v39->design_config.txt_config_mgr.const_value_config_mgr);
                  explore_point += ExploreUnlockPoint;
                  std::shared_ptr<Config>::~shared_ptr(&v55);
                }
              }
            }
            std::shared_ptr<data::SceneTransPoint>::~shared_ptr((std::shared_ptr<data::SceneTransPoint> *const)(v2 + 144));
            std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
          }
          common::milog::MiLogStream::create(
            &v56,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/scene/area.cpp",
            "calcExplorePointByUnlockSceneTransPoint",
            408);
          v41 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v56, (const char (*)[9])"area_id:");
          v42 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, &this->area_id_);
          v43 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                  v42,
                  (const char (*)[24])" unlocked_point_id_set:");
          v44 = common::milog::MiLogStream::operator<<<unsigned int>(v43, (const std::set<unsigned int> *)(v2 + 176));
          v45 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v44, (const char (*)[9])" player:");
          operator<<(v45, player);
          common::milog::MiLogStream::~MiLogStream(&v56);
          v8 = explore_point;
          std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 176));
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v56,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/scene/area.cpp",
          "calcExplorePointByUnlockSceneTransPoint",
          379);
        v13 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                &v56,
                (const char (*)[29])"scene_id not match! area_id:");
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &this->area_id_);
        v15 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v14, (const char (*)[11])" scene_id:");
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v15,
                (const unsigned int *)(v2 + 48));
        v17 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v16, (const char (*)[12])" own_scene:");
        v18 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
        v19 = common::milog::MiLogStream::operator<<<Scene,(Scene*)0>(v17, v18);
        v20 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v19, (const char (*)[9])" player:");
        operator<<(v20, player);
        common::milog::MiLogStream::~MiLogStream(&v56);
        v8 = 0;
      }
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 112));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v56,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/area.cpp",
      "calcExplorePointByUnlockSceneTransPoint",
      368);
    v5 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           &v56,
           (const char (*)[29])"scene_id not found! area_id:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->area_id_);
    v7 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v6, (const char (*)[9])" player:");
    operator<<(v7, player);
    common::milog::MiLogStream::~MiLogStream(&v56);
    v8 = 0;
  }
  result = v8;
  if ( v57 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 413: range 00000000131643BE-0000000013164957
uint32_t __cdecl Area::calcExplorePointByOneoffGadgets(
        const Area *const this,
        Player *player,
        const GroupGadgetExploreExpMap *group_gadget_explore_exp_map)
{
  LuaConfigMgr *p_lua_config_mgr; // rcx
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  LuaConfigMgr *v9; // rcx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  std::pair<unsigned int const,unsigned int> *v13; // rax
  std::pair<unsigned int const,unsigned int> *v14; // rdx
  PlayerSceneComp *SceneComp; // rdi
  uint32_t v16; // ecx
  uint32_t explore_point; // [rsp+20h] [rbp-B0h]
  uint32_t scene_id; // [rsp+24h] [rbp-ACh]
  std::map<unsigned int,std::map<unsigned int,unsigned int>>::const_iterator __for_begin; // [rsp+28h] [rbp-A8h] BYREF
  std::map<unsigned int,std::map<unsigned int,unsigned int>>::const_iterator __for_end; // [rsp+30h] [rbp-A0h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_begin_0; // [rsp+38h] [rbp-98h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end_0; // [rsp+40h] [rbp-90h] BYREF
  const std::map<unsigned int,std::map<unsigned int,unsigned int>> *__for_range; // [rsp+48h] [rbp-88h]
  const std::pair<unsigned int const,std::map<unsigned int,unsigned int> > *v26; // [rsp+50h] [rbp-80h]
  std::tuple_element<0,const std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::type *group_id; // [rsp+58h] [rbp-78h]
  std::tuple_element<1,const std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::type *gadget_exp_map; // [rsp+60h] [rbp-70h]
  const GroupScriptConfig *group_script_config_ptr; // [rsp+68h] [rbp-68h]
  const std::map<unsigned int,unsigned int> *__for_range_0; // [rsp+70h] [rbp-60h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *config_id; // [rsp+78h] [rbp-58h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *explore_exp; // [rsp+80h] [rbp-50h]
  std::pair<unsigned int const,unsigned int> __in; // [rsp+88h] [rbp-48h] BYREF
  std::shared_ptr<Config> v34; // [rsp+90h] [rbp-40h] BYREF
  common::milog::MiLogStream v35; // [rsp+A0h] [rbp-30h] BYREF

  explore_point = 0;
  __for_range = group_gadget_explore_exp_map;
  __for_begin._M_node = std::map<unsigned int,std::map<unsigned int,unsigned int>>::begin(group_gadget_explore_exp_map)._M_node;
  __for_end._M_node = std::map<unsigned int,std::map<unsigned int,unsigned int>>::end(__for_range)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v26 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>>::operator*(&__for_begin);
    group_id = std::get<0ul,unsigned int const,std::map<unsigned int,unsigned int>>(v26);
    gadget_exp_map = (std::tuple_element<1,const std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::type *)std::get<1ul,unsigned int const,std::map<unsigned int,unsigned int>>(v26);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v34);
    p_lua_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v34)->design_config.lua_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)group_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)group_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)group_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(group_id);
    }
    scene_id = LuaConfigMgr::getSceneIdByGroupId(p_lua_config_mgr, *group_id);
    std::shared_ptr<Config>::~shared_ptr(&v34);
    if ( scene_id )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v34);
      v9 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v34)->design_config.lua_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)group_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)group_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)group_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(group_id);
      }
      group_script_config_ptr = LuaConfigMgr::findGroupScriptConfig(v9, *group_id);
      std::shared_ptr<Config>::~shared_ptr(&v34);
      if ( group_script_config_ptr )
      {
        __for_range_0 = gadget_exp_map;
        __for_begin_0._M_node = std::map<unsigned int,unsigned int>::begin(gadget_exp_map)._M_node;
        __for_end_0._M_node = std::map<unsigned int,unsigned int>::end(__for_range_0)._M_node;
        while ( std::operator!=(&__for_begin_0, &__for_end_0) )
        {
          v13 = (std::pair<unsigned int const,unsigned int> *)std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin_0);
          v14 = v13;
          if ( ((unsigned __int8)v13 & 7) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&v13->second + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)v13 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v13->second + 3) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load_n(v13, 8LL);
          }
          __in = *v14;
          config_id = std::get<0ul,unsigned int const,unsigned int>(&__in);
          explore_exp = std::get<1ul,unsigned int const,unsigned int>(&__in);
          SceneComp = Player::getSceneComp(player);
          if ( *(_BYTE *)(((unsigned __int64)config_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)config_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)config_id >> 3) + 0x7FFF8000) )
          {
            SceneComp = (PlayerSceneComp *)config_id;
            __asan_report_load4(config_id);
          }
          v16 = *config_id;
          if ( *(_BYTE *)(((unsigned __int64)group_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)group_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)group_id >> 3) + 0x7FFF8000) )
          {
            SceneComp = (PlayerSceneComp *)group_id;
            __asan_report_load4(group_id);
          }
          if ( PlayerSceneComp::isInOneOffRecord(SceneComp, PROT_ENTITY_GADGET, scene_id, 0, *group_id, v16) )
          {
            if ( *(_BYTE *)(((unsigned __int64)explore_exp >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)explore_exp & 7) + 3) >= *(_BYTE *)(((unsigned __int64)explore_exp >> 3)
                                                                            + 0x7FFF8000) )
            {
              __asan_report_load4(explore_exp);
            }
            explore_point += *explore_exp;
          }
          std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin_0);
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v35,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/scene/area.cpp",
          "calcExplorePointByOneoffGadgets",
          426);
        v10 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                &v35,
                (const char (*)[38])"findGroupScriptConfig fail, group_id:");
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, group_id);
        v12 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v11, (const char (*)[9])" player:");
        operator<<(v12, player);
        common::milog::MiLogStream::~MiLogStream(&v35);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v35,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/area.cpp",
        "calcExplorePointByOneoffGadgets",
        420);
      v4 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
             &v35,
             (const char (*)[36])"getSceneIdByGroupId fail, group_id:");
      v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, group_id);
      v6 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v5, (const char (*)[10])" area_id:");
      v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->area_id_);
      v8 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v7, (const char (*)[9])" player:");
      operator<<(v8, player);
      common::milog::MiLogStream::~MiLogStream(&v35);
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>>::operator++(&__for_begin);
  }
  return explore_point;
};

// Line 442: range 0000000013164958-0000000013164DBD
void __cdecl Area::removeChestGadgetInInteractGadgetSet(Area *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  std::pair<unsigned int,unsigned int> *v5; // rax
  std::pair<unsigned int,unsigned int> *v6; // rdx
  unsigned int *v7; // r8
  common::milog::MiLogStream *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  std::map<unsigned int,std::map<unsigned int,std::map<unsigned int,unsigned int>>>::key_type key; // [rsp+1Ch] [rbp-114h] BYREF
  const std::map<unsigned int,std::map<unsigned int,std::map<unsigned int,unsigned int>>> *explorable_gadgets_map_ptr; // [rsp+20h] [rbp-110h]
  const std::map<unsigned int,std::map<unsigned int,unsigned int>> *explorable_chests_map_ptr; // [rsp+28h] [rbp-108h]
  std::tuple_element<0,std::pair<unsigned int,unsigned int> >::type *group_id; // [rsp+30h] [rbp-100h]
  std::tuple_element<1,std::pair<unsigned int,unsigned int> >::type *config_id; // [rsp+38h] [rbp-F8h]
  const std::map<unsigned int,unsigned int> *chests_map_ptr; // [rsp+40h] [rbp-F0h]
  std::pair<unsigned int,unsigned int> __in; // [rsp+48h] [rbp-E8h] BYREF
  std::shared_ptr<Config> v19; // [rsp+50h] [rbp-E0h] BYREF
  common::milog::MiLogStream v20; // [rsp+60h] [rbp-D0h] BYREF
  char v21[176]; // [rsp+80h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 8 8 iter:455 64 24 31 removed_interact_gadget_vec:443";
  *(_QWORD *)(v1 + 16) = Area::removeChestGadgetInInteractGadgetSet;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959360;
  v3[536862722] = -218103808;
  v3[536862723] = -202116109;
  std::vector<std::pair<unsigned int,unsigned int>>::vector((std::vector<std::pair<unsigned int,unsigned int>> *const)(v1 + 64));
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v19);
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19);
  explorable_gadgets_map_ptr = common::tools::MiscUtils::findMapValuePointer<std::map<unsigned int,std::map<unsigned int,std::map<unsigned int,std::map<unsigned int,unsigned int>>>> const>(
                                 &v4->design_config.txt_config_mgr.world_area_config_mgr.area_to_explorable_gadgets_map,
                                 &this->area_id_);
  std::shared_ptr<Config>::~shared_ptr(&v19);
  if ( explorable_gadgets_map_ptr )
  {
    key = 1;
    explorable_chests_map_ptr = common::tools::MiscUtils::findMapValuePointer<std::map<unsigned int,std::map<unsigned int,std::map<unsigned int,unsigned int>>> const>(
                                  explorable_gadgets_map_ptr,
                                  &key);
    if ( explorable_chests_map_ptr )
    {
      *(std::set<std::pair<unsigned int,unsigned int>>::iterator *)(v1 + 32) = std::set<std::pair<unsigned int,unsigned int>>::begin(&this->interact_temple_set_);
      while ( 1 )
      {
        __in = (std::pair<unsigned int,unsigned int>)std::set<std::pair<unsigned int,unsigned int>>::end(&this->interact_temple_set_)._M_node;
        if ( !std::operator!=(
                (const std::_Rb_tree_const_iterator<std::pair<unsigned int,unsigned int> >::_Self *)(v1 + 32),
                (const std::_Rb_tree_const_iterator<std::pair<unsigned int,unsigned int> >::_Self *)&__in) )
          break;
        v5 = (std::pair<unsigned int,unsigned int> *)std::_Rb_tree_const_iterator<std::pair<unsigned int,unsigned int>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int,unsigned int> > *const)(v1 + 32));
        v6 = v5;
        if ( ((unsigned __int8)v5 & 7) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&v5->second + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)v5 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v5->second + 3) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load_n(v5, 8LL);
        }
        __in = *v6;
        group_id = std::get<0ul,unsigned int,unsigned int>(&__in);
        config_id = std::get<1ul,unsigned int,unsigned int>(&__in);
        chests_map_ptr = common::tools::MiscUtils::findMapValuePointer<std::map<unsigned int,std::map<unsigned int,unsigned int>> const>(
                           explorable_chests_map_ptr,
                           group_id);
        if ( chests_map_ptr
          && common::tools::MiscUtils::isContains<std::map<unsigned int,unsigned int> const,unsigned int>(
               chests_map_ptr,
               config_id) )
        {
          std::vector<std::pair<unsigned int,unsigned int>>::emplace_back<unsigned int &,unsigned int &>(
            (std::vector<std::pair<unsigned int,unsigned int>> *const)(v1 + 64),
            group_id,
            config_id,
            group_id,
            v7);
          *(std::set<std::pair<unsigned int,unsigned int>>::iterator *)(v1 + 32) = std::set<std::pair<unsigned int,unsigned int>>::erase[abi:cxx11](
                                                                                     &this->interact_temple_set_,
                                                                                     *(std::set<std::pair<unsigned int,unsigned int>>::const_iterator *)(v1 + 32));
        }
        else
        {
          std::_Rb_tree_const_iterator<std::pair<unsigned int,unsigned int>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int,unsigned int> > *const)(v1 + 32));
        }
      }
      if ( !std::vector<std::pair<unsigned int,unsigned int>>::empty((const std::vector<std::pair<unsigned int,unsigned int>> *const)(v1 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v20,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/area.cpp",
          "removeChestGadgetInInteractGadgetSet",
          471);
        v9 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
               &v20,
               (const char (*)[30])"remove record chest, area_id:");
        v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->area_id_);
        v11 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                v10,
                (const char (*)[30])" removed_interact_gadget_vec:");
        common::milog::MiLogStream::operator<<<std::pair<unsigned int,unsigned int>>(
          v11,
          (const std::vector<std::pair<unsigned int,unsigned int>> *)(v1 + 64));
        common::milog::MiLogStream::~MiLogStream(&v20);
      }
    }
  }
  std::vector<std::pair<unsigned int,unsigned int>>::~vector((std::vector<std::pair<unsigned int,unsigned int>> *const)(v1 + 64));
  if ( v21 == (char *)v1 )
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
