// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/play/tower_defense_play_base.cpp

// Line 26: range 00000000161B9E50-00000000161BA024
std::string *__cdecl TowerDefensePlayBase::getDesc[abi:cxx11](
        std::string *retstr,
        const TowerDefensePlayBase *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v5; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v6; // rax
  char v8[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 5 os:27";
  *(_QWORD *)(v2 + 16) = TowerDefensePlayBase::getDesc[abi:cxx11];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  v5 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
         (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
         "<group:");
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  v6 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v5, this->group_id_);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v6, ">");
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
    retstr,
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::~StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 33: range 00000000161BA026-00000000161BA555
void __cdecl TowerDefensePlayBase::initTowerGadgetServerGlobalValueMap(
        TowerDefensePlayBase *const this,
        const std::set<unsigned int> *tower_gadget_set)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::_Rb_tree_const_iterator<unsigned int>::reference v5; // rdx
  unsigned int v6; // eax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  std::map<std::string,float>::mapped_type *v10; // rax
  _DWORD *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  int v13; // [rsp+Ch] [rbp-124h]
  std::set<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-110h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+28h] [rbp-108h] BYREF
  std::unordered_map<std::string,float>::iterator __for_begin_0; // [rsp+30h] [rbp-100h] BYREF
  std::unordered_map<std::string,float>::iterator __for_end_0; // [rsp+38h] [rbp-F8h] BYREF
  const std::set<unsigned int> *__for_range; // [rsp+40h] [rbp-F0h]
  std::map<std::string,float> *sgv_map; // [rsp+48h] [rbp-E8h]
  std::unordered_map<std::string,float> *__for_range_0; // [rsp+50h] [rbp-E0h]
  const std::pair<const std::string,float> *v21; // [rsp+58h] [rbp-D8h]
  std::tuple_element<0,const std::pair<const std::string,float> >::type *key; // [rsp+60h] [rbp-D0h]
  std::tuple_element<1,const std::pair<const std::string,float> >::type *value; // [rsp+68h] [rbp-C8h]
  std::shared_ptr<Config> v24; // [rsp+70h] [rbp-C0h] BYREF
  common::milog::MiLogStream v25; // [rsp+80h] [rbp-B0h] BYREF
  char v26[144]; // [rsp+A0h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 gadget_id:34 64 16 25 gadget_json_config_ptr:36";
  *(_QWORD *)(v2 + 16) = TowerDefensePlayBase::initTowerGadgetServerGlobalValueMap;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  __for_range = tower_gadget_set;
  __for_begin._M_node = std::set<unsigned int>::begin(tower_gadget_set)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(tower_gadget_set)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v5 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 48) = *v5;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v24);
    v6 = (unsigned int)std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v24);
    JsonConfigMgr::findGadgetConfig((const JsonConfigMgr *const)(v2 + 64), v6 + 93080);
    std::shared_ptr<Config>::~shared_ptr(&v24);
    if ( std::operator==<data::ConfigGadget>(0LL, (const std::shared_ptr<data::ConfigGadget> *)(v2 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/play/tower_defense_play_base.cpp",
        "initTowerGadgetServerGlobalValueMap",
        39);
      v7 = common::milog::MiLogStream::operator<<<TowerDefensePlayBase,(TowerDefensePlayBase*)0>(&v25, this);
      v8 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v7, (const char (*)[9])" gadget:");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v9, (const char (*)[22])" json config nullptr.");
      common::milog::MiLogStream::~MiLogStream(&v25);
    }
    else
    {
      sgv_map = std::map<unsigned int,std::map<std::string,float>>::operator[](
                  &this->gadget_server_global_value_map_,
                  (const std::map<unsigned int,std::map<std::string,float>>::key_type *)(v2 + 48));
      __for_range_0 = &std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64))->global_value.init_server_global_values;
      __for_begin_0._M_cur = std::unordered_map<std::string,float>::begin(__for_range_0)._M_cur;
      __for_end_0._M_cur = std::unordered_map<std::string,float>::end(__for_range_0)._M_cur;
      while ( std::__detail::operator!=<std::pair<std::string const,float>,true>(&__for_begin_0, &__for_end_0) )
      {
        v21 = std::__detail::_Node_iterator<std::pair<std::string const,float>,false,true>::operator*(&__for_begin_0);
        key = std::get<0ul,std::string const,float>(v21);
        value = (std::tuple_element<1,const std::pair<const std::string,float> >::type *)std::get<1ul,std::string const,float>(v21);
        if ( *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)value & 7) + 3) >= *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        v13 = *(_DWORD *)value;
        v10 = std::map<std::string,float>::operator[](sgv_map, key);
        v11 = v10;
        if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v10);
        }
        *v11 = v13;
        std::__detail::_Node_iterator<std::pair<std::string const,float>,false,true>::operator++(&__for_begin_0);
      }
    }
    std::shared_ptr<data::ConfigGadget>::~shared_ptr((std::shared_ptr<data::ConfigGadget> *const)(v2 + 64));
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  common::milog::MiLogStream::create(
    &v25,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/play/tower_defense_play_base.cpp",
    "initTowerGadgetServerGlobalValueMap",
    48);
  v12 = common::milog::MiLogStream::operator<<<TowerDefensePlayBase,(TowerDefensePlayBase*)0>(&v25, this);
  common::milog::MiLogStream::operator<<<unsigned int,std::map<std::string,float>>(
    v12,
    &this->gadget_server_global_value_map_);
  common::milog::MiLogStream::~MiLogStream(&v25);
  if ( v26 == (char *)v2 )
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

// Line 52: range 00000000161BA556-00000000161BB10E
void __cdecl TowerDefensePlayBase::createFoundations(
        TowerDefensePlayBase *const this,
        Group *group,
        const std::map<unsigned int,unsigned int> *config_id_2_point_map)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  std::pair<unsigned int const,unsigned int> *v10; // rax
  std::pair<unsigned int const,unsigned int> *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rdx
  uint32_t v20; // ecx
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rdx
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  std::weak_ptr<FoundationComp> *v28; // rax
  std::__shared_ptr_access<FoundationComp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rdx
  std::map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-3E0h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-3D8h] BYREF
  const GroupScriptConfig *group_script_config_ptr; // [rsp+30h] [rbp-3D0h]
  const std::map<unsigned int,unsigned int> *__for_range; // [rsp+38h] [rbp-3C8h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *config_id; // [rsp+40h] [rbp-3C0h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *point_config_id; // [rsp+48h] [rbp-3B8h]
  GroupGadgetFoundationParam *foundation; // [rsp+60h] [rbp-3A0h]
  std::pair<unsigned int const,unsigned int> __in; // [rsp+68h] [rbp-398h] BYREF
  common::milog::MiLogStream v46; // [rsp+70h] [rbp-390h] BYREF
  common::milog::MiLogStream v47; // [rsp+90h] [rbp-370h] BYREF
  char v48[848]; // [rsp+B0h] [rbp-350h] BYREF

  v3 = (unsigned __int64)v48;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(800LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 16 16 this_play_ptr:59 80 16 13 gadget_ptr:85 112 16 22 foundation_comp_ptr:91 144 520 8 param:80";
  *(_QWORD *)(v3 + 16) = TowerDefensePlayBase::createFoundations;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = 62194;
  v5[536862723] = 62194;
  v5[536862724] = 62194;
  v5[536862740] = -218103808;
  v5[536862741] = -202116109;
  v5[536862742] = -202116109;
  v5[536862743] = -202116109;
  v5[536862744] = -202116109;
  group_script_config_ptr = Group::getScriptConfig(group);
  if ( group_script_config_ptr )
  {
    toPtr<TowerDefensePlayBase,TowerDefensePlayBase>((TowerDefensePlayBase *)(v3 + 48));
    if ( std::operator==<TowerDefensePlayBase>(0LL, (const std::shared_ptr<TowerDefensePlayBase> *)(v3 + 48)) )
    {
      common::milog::MiLogStream::create(
        &v47,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/play/tower_defense_play_base.cpp",
        "createFoundations",
        62);
      v8 = common::milog::MiLogStream::operator<<<TowerDefensePlayBase,(TowerDefensePlayBase*)0>(&v47, this);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v8, (const char (*)[16])" play nullptr. ");
      operator<<(v9, group);
      common::milog::MiLogStream::~MiLogStream(&v47);
    }
    else
    {
      __for_range = config_id_2_point_map;
      __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(config_id_2_point_map)._M_node;
      __for_end._M_node = std::map<unsigned int,unsigned int>::end(config_id_2_point_map)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        v10 = (std::pair<unsigned int const,unsigned int> *)std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
        v11 = v10;
        if ( ((unsigned __int8)v10 & 7) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&v10->second + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)v10 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v10->second + 3) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load_n(v10, 8LL);
        }
        __in = *v11;
        config_id = std::get<0ul,unsigned int const,unsigned int>(&__in);
        point_config_id = std::get<1ul,unsigned int const,unsigned int>(&__in);
        if ( *(_BYTE *)(((unsigned __int64)config_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)config_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)config_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( GroupScriptConfig::findGadgetConfig(group_script_config_ptr, *config_id) )
        {
          if ( *(_BYTE *)(((unsigned __int64)point_config_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)point_config_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)point_config_id >> 3)
                                                                              + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          if ( GroupScriptConfig::findPointConfig(group_script_config_ptr, *point_config_id) )
          {
            GroupEntityParam::GroupEntityParam((GroupEntityParam *const)(v3 + 144));
            if ( *(_BYTE *)(((unsigned __int64)config_id >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)config_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)config_id >> 3)
                                                                          + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            *(_DWORD *)(v3 + 144) = *config_id;
            foundation = (GroupGadgetFoundationParam *)(v3 + 568);
            if ( *(_BYTE *)(((unsigned __int64)point_config_id >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)point_config_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)point_config_id >> 3)
                                                                                + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            v20 = *point_config_id;
            if ( *(_BYTE *)(((unsigned __int64)foundation >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)foundation >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_store4(foundation);
            }
            foundation->point_config_id = v20;
            std::shared_ptr<TowerDefensePlayBase>::operator=(
              &foundation->play_base_ptr,
              (const std::shared_ptr<TowerDefensePlayBase> *)(v3 + 48));
            Group::createGadget((Group *const)(v3 + 80), (const GroupEntityParam *)group);
            if ( std::operator==<Gadget>((const std::shared_ptr<Gadget> *)(v3 + 80), 0LL) )
            {
              common::milog::MiLogStream::create(
                &v47,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/play/tower_defense_play_base.cpp",
                "createFoundations",
                88);
              v21 = common::milog::MiLogStream::operator<<<TowerDefensePlayBase,(TowerDefensePlayBase*)0>(&v47, this);
              v22 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                      v21,
                      (const char (*)[32])" createGadget fails, config_id:");
              v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, config_id);
              v24 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v23, (const char (*)[3])", ");
              operator<<(v24, group);
              common::milog::MiLogStream::~MiLogStream(&v47);
            }
            else
            {
              std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
              EcsBase<Gadget,GadgetCompBase,28u>::findComp<FoundationComp>((const EcsBase<Gadget,GadgetCompBase,28> *const)(v3 + 112));
              if ( std::operator==<FoundationComp>(0LL, (const std::shared_ptr<FoundationComp> *)(v3 + 112)) )
              {
                common::milog::MiLogStream::create(
                  &v47,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/play/tower_defense_play_base.cpp",
                  "createFoundations",
                  94);
                v25 = common::milog::MiLogStream::operator<<<TowerDefensePlayBase,(TowerDefensePlayBase*)0>(&v47, this);
                v26 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                        v25,
                        (const char (*)[27])" foundation comp nullptr, ");
                v27 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
                common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v26, v27);
              }
              else
              {
                v28 = std::map<unsigned int,std::weak_ptr<FoundationComp>>::operator[](
                        &this->foundation_wtr_map_,
                        config_id);
                std::weak_ptr<FoundationComp>::operator=<FoundationComp>(
                  v28,
                  (const std::shared_ptr<FoundationComp> *)(v3 + 112));
                v29 = std::__shared_ptr_access<FoundationComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FoundationComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
                FoundationComp::broadcastFoundationInfo(v29);
                common::milog::MiLogStream::create(
                  &v47,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/play/tower_defense_play_base.cpp",
                  "createFoundations",
                  99);
                v30 = common::milog::MiLogStream::operator<<<TowerDefensePlayBase,(TowerDefensePlayBase*)0>(&v47, this);
                v31 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        v30,
                        (const char (*)[16])" tower created:");
                v32 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
                v33 = common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v31, v32);
                v34 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
                        v33,
                        (const char (*)[5])off_25B85EC0);
                operator<<(v34, group);
              }
              common::milog::MiLogStream::~MiLogStream(&v47);
              std::shared_ptr<FoundationComp>::~shared_ptr((std::shared_ptr<FoundationComp> *const)(v3 + 112));
            }
            std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v3 + 80));
            GroupEntityParam::~GroupEntityParam((GroupEntityParam *const)(v3 + 144));
          }
          else
          {
            common::milog::MiLogStream::create(
              &v47,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/play/tower_defense_play_base.cpp",
              "createFoundations",
              76);
            v16 = common::milog::MiLogStream::operator<<<TowerDefensePlayBase,(TowerDefensePlayBase*)0>(&v47, this);
            v17 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v16, (const char (*)[8])" point:");
            v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, point_config_id);
            v19 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                    v18,
                    (const char (*)[29])" script config not found in ");
            operator<<(v19, group);
            common::milog::MiLogStream::~MiLogStream(&v47);
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v46,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/play/tower_defense_play_base.cpp",
            "createFoundations",
            70);
          v12 = common::milog::MiLogStream::operator<<<TowerDefensePlayBase,(TowerDefensePlayBase*)0>(&v46, this);
          v13 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v12, (const char (*)[9])" gadget:");
          v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, config_id);
          v15 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                  v14,
                  (const char (*)[29])" script config not found in ");
          operator<<(v15, group);
          common::milog::MiLogStream::~MiLogStream(&v46);
        }
        std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
      }
    }
    std::shared_ptr<TowerDefensePlayBase>::~shared_ptr((std::shared_ptr<TowerDefensePlayBase> *const)(v3 + 48));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v47,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/play/tower_defense_play_base.cpp",
      "createFoundations",
      56);
    v6 = common::milog::MiLogStream::operator<<<TowerDefensePlayBase,(TowerDefensePlayBase*)0>(&v47, this);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           v6,
           (const char (*)[30])" script config not found for ");
    operator<<(v7, group);
    common::milog::MiLogStream::~MiLogStream(&v47);
  }
  if ( v48 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8050) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8058) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8060) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8060) = -168430091;
  }
};

// Line 104: range 00000000161BB1FC-00000000161BB3B5
uint32_t __cdecl TowerDefensePlayBase::countTowerNum(const TowerDefensePlayBase *const this, uint32_t target_tower_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rax
  void (__fastcall *v6)(const TowerDefensePlayBase *const, std::function<ForeachPolicy(FoundationComp&)> *); // r14
  uint32_t result; // eax
  TowerDefensePlayBase::countTowerNum::<lambda(FoundationComp&)> v8; // [rsp-20h] [rbp-E0h]
  __int64 __f_16; // [rsp+20h] [rbp-A0h]
  std::function<ForeachPolicy(FoundationComp&)> v10; // [rsp+30h] [rbp-90h] BYREF
  char v11[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 count:105";
  *(_QWORD *)(v2 + 16) = TowerDefensePlayBase::countTowerNum;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = 0;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = (unsigned __int64)(this->_vptr_DescribalBase + 13);
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8();
  v6 = *(void (__fastcall **)(const TowerDefensePlayBase *const, std::function<ForeachPolicy(FoundationComp&)> *))v5;
  LODWORD(__f_16) = target_tower_id;
  *(_QWORD *)&v8.__target_tower_id = __f_16;
  v8.__count = (uint32_t *)(v2 + 32);
  v8.__this = this;
  std::function<ForeachPolicy ()(FoundationComp &)>::function<TowerDefensePlayBase::countTowerNum(unsigned int)::{lambda(FoundationComp &)#1},void,void>(
    &v10,
    v8);
  v6(this, &v10);
  std::function<ForeachPolicy ()(FoundationComp &)>::~function(&v10);
  result = *(_DWORD *)(v2 + 32);
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

// Line 106: range 00000000161BB110-00000000161BB1FA
ForeachPolicy __cdecl TowerDefensePlayBase::countTowerNum(unsigned int)const::{lambda(FoundationComp &)#1}::operator()(
        const TowerDefensePlayBase::countTowerNum::<lambda(FoundationComp&)> *const __closure,
        FoundationComp *foundation_comp)
{
  uint32_t *count; // rax
  uint32_t gear_gadget_id; // [rsp+1Ch] [rbp-4h]

  gear_gadget_id = FoundationComp::getGearGadgetId(foundation_comp);
  if ( !gear_gadget_id )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__target_tower_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&__closure->__target_tower_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( !__closure->__target_tower_id || gear_gadget_id == __closure->__target_tower_id )
  {
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__count >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    count = __closure->__count;
    if ( *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    ++*count;
  }
  return 0;
};

// Line 123: range 00000000161BB3B6-00000000161BB68B
void __cdecl TowerDefensePlayBase::foreachFoundation(
        const TowerDefensePlayBase *const this,
        std::function<ForeachPolicy(FoundationComp&)> *p_func)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::weak_ptr<FoundationComp> *v5; // rax
  int v6; // r14d
  std::__shared_ptr_access<FoundationComp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rdx
  int v8; // r14d
  std::vector<std::weak_ptr<FoundationComp>>::iterator __for_begin; // [rsp+18h] [rbp-E8h] BYREF
  std::vector<std::weak_ptr<FoundationComp>>::iterator __for_end; // [rsp+20h] [rbp-E0h] BYREF
  std::vector<std::weak_ptr<FoundationComp>> *__for_range; // [rsp+28h] [rbp-D8h]
  char v12[208]; // [rsp+30h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 23 foundation_comp_wtr:125 64 16 23 foundation_comp_ptr:127 96 24 11 wtr_vec:124";
  *(_QWORD *)(v2 + 16) = TowerDefensePlayBase::foreachFoundation;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  common::tools::MiscUtils::getAllMapValues<std::map<unsigned int,std::weak_ptr<FoundationComp>>>(
    (std::vector<std::weak_ptr<FoundationComp>> *)(v2 + 96),
    &this->foundation_wtr_map_);
  __for_range = (std::vector<std::weak_ptr<FoundationComp>> *)(v2 + 96);
  __for_begin._M_current = std::vector<std::weak_ptr<FoundationComp>>::begin((std::vector<std::weak_ptr<FoundationComp>> *const)(v2 + 96))._M_current;
  __for_end._M_current = std::vector<std::weak_ptr<FoundationComp>>::end((std::vector<std::weak_ptr<FoundationComp>> *const)(v2 + 96))._M_current;
  while ( __gnu_cxx::operator!=<std::weak_ptr<FoundationComp> *,std::vector<std::weak_ptr<FoundationComp>>>(
            &__for_begin,
            &__for_end) )
  {
    v5 = __gnu_cxx::__normal_iterator<std::weak_ptr<FoundationComp> *,std::vector<std::weak_ptr<FoundationComp>>>::operator*(&__for_begin);
    std::weak_ptr<FoundationComp>::weak_ptr((std::weak_ptr<FoundationComp> *const)(v2 + 32), v5);
    std::weak_ptr<FoundationComp>::lock((const std::weak_ptr<FoundationComp> *const)(v2 + 64));
    if ( std::operator==<FoundationComp>((const std::shared_ptr<FoundationComp> *)(v2 + 64), 0LL) )
    {
      v6 = 0;
    }
    else
    {
      v7 = std::__shared_ptr_access<FoundationComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<FoundationComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      v6 = std::function<ForeachPolicy ()(FoundationComp &)>::operator()(p_func, v7) ? 1 : 2;
    }
    std::shared_ptr<FoundationComp>::~shared_ptr((std::shared_ptr<FoundationComp> *const)(v2 + 64));
    if ( v6 )
      v8 = v6 == 2 ? 2 : 1;
    else
      v8 = 0;
    std::weak_ptr<FoundationComp>::~weak_ptr((std::weak_ptr<FoundationComp> *const)(v2 + 32));
    if ( v8 )
    {
      if ( v8 != 2 )
        break;
    }
    __gnu_cxx::__normal_iterator<std::weak_ptr<FoundationComp> *,std::vector<std::weak_ptr<FoundationComp>>>::operator++(&__for_begin);
  }
  std::vector<std::weak_ptr<FoundationComp>>::~vector((std::vector<std::weak_ptr<FoundationComp>> *const)(v2 + 96));
  if ( v12 == (char *)v2 )
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
};

// Line 140: range 00000000161BB6DA-00000000161BB78D
void __cdecl TowerDefensePlayBase::sendAllFoundationsNotify(const TowerDefensePlayBase *const this, Player *player)
{
  unsigned __int64 v2; // rax
  void (__fastcall *v3)(const TowerDefensePlayBase *const, std::function<ForeachPolicy(FoundationComp&)> *); // rbx
  std::function<ForeachPolicy(FoundationComp&)> v4; // [rsp+10h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = (unsigned __int64)(this->_vptr_DescribalBase + 13);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8();
  v3 = *(void (__fastcall **)(const TowerDefensePlayBase *const, std::function<ForeachPolicy(FoundationComp&)> *))v2;
  std::function<ForeachPolicy ()(FoundationComp &)>::function<TowerDefensePlayBase::sendAllFoundationsNotify(Player &)::{lambda(FoundationComp &)#1},void,void>(
    &v4,
    (TowerDefensePlayBase::sendAllFoundationsNotify::<lambda(FoundationComp&)>)player);
  v3(this, &v4);
  std::function<ForeachPolicy ()(FoundationComp &)>::~function(&v4);
};

// Line 142: range 00000000161BB68C-00000000161BB6D9
ForeachPolicy __cdecl TowerDefensePlayBase::sendAllFoundationsNotify(Player &)const::{lambda(FoundationComp &)#1}::operator()(
        const TowerDefensePlayBase::sendAllFoundationsNotify::<lambda(FoundationComp&)> *const __closure,
        FoundationComp *foundation_comp)
{
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  FoundationComp::sendFoundationInfoNotify(foundation_comp, __closure->__player);
  return 0;
};

// Line 150: range 00000000161BB78E-00000000161BB9D0
void __cdecl TowerDefensePlayBase::sendGlobalBuildingInfoNotify(const TowerDefensePlayBase *const this, Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned __int64 v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream v7; // [rsp+10h] [rbp-D0h] BYREF
  char v8[176]; // [rsp+30h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 56 10 notify:151";
  *(_QWORD *)(v2 + 16) = TowerDefensePlayBase::sendGlobalBuildingInfoNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  proto::GlobalBuildingInfoNotify::GlobalBuildingInfoNotify((proto::GlobalBuildingInfoNotify *const)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = (unsigned __int64)(this->_vptr_DescribalBase + 26);
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8();
  if ( (*(unsigned int (__fastcall **)(const TowerDefensePlayBase *const, unsigned __int64))v5)(this, v2 + 32) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/play/tower_defense_play_base.cpp",
      "sendGlobalBuildingInfoNotify",
      154);
    v6 = common::milog::MiLogStream::operator<<<TowerDefensePlayBase,(TowerDefensePlayBase*)0>(&v7, this);
    common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
      v6,
      (const char (*)[38])" fillGlobalBuildingInfoNotify failed.");
    common::milog::MiLogStream::~MiLogStream(&v7);
  }
  else
  {
    Player::sendProto(player, (const google::protobuf::Message *)(v2 + 32));
  }
  proto::GlobalBuildingInfoNotify::~GlobalBuildingInfoNotify((proto::GlobalBuildingInfoNotify *const)(v2 + 32));
  if ( v8 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 161: range 00000000161BB9D2-00000000161BBC7F
void __cdecl TowerDefensePlayBase::broadcastGlobalBuildingInfoNotify(TowerDefensePlayBase *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  unsigned __int64 v4; // rax
  common::milog::MiLogStream *v5; // rax
  unsigned __int64 SceneMultistagePlay; // rax
  unsigned __int64 v7; // rdx
  Scene *scene; // [rsp+18h] [rbp-D8h]
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-D0h] BYREF
  char v10[176]; // [rsp+40h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 56 10 notify:162";
  *(_QWORD *)(v1 + 16) = TowerDefensePlayBase::broadcastGlobalBuildingInfoNotify;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862722] = -218103808;
  v3[536862723] = -202116109;
  proto::GlobalBuildingInfoNotify::GlobalBuildingInfoNotify((proto::GlobalBuildingInfoNotify *const)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v4 = (unsigned __int64)(this->_vptr_DescribalBase + 26);
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    v4 = __asan_report_load8();
  if ( (*(unsigned int (__fastcall **)(TowerDefensePlayBase *const, unsigned __int64))v4)(this, v1 + 32) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/play/tower_defense_play_base.cpp",
      "broadcastGlobalBuildingInfoNotify",
      165);
    v5 = common::milog::MiLogStream::operator<<<TowerDefensePlayBase,(TowerDefensePlayBase*)0>(&v9, this);
    common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
      v5,
      (const char (*)[38])" fillGlobalBuildingInfoNotify failed.");
    common::milog::MiLogStream::~MiLogStream(&v9);
  }
  else
  {
    SceneMultistagePlay = (unsigned __int64)SceneMultistagePlayCompBase::getSceneMultistagePlay(&this->SceneMultistagePlayCompBase);
    if ( *(_BYTE *)((SceneMultistagePlay >> 3) + 0x7FFF8000) )
      SceneMultistagePlay = __asan_report_load8();
    v7 = *(_QWORD *)SceneMultistagePlay + 24LL;
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      SceneMultistagePlay = __asan_report_load8();
    scene = (Scene *)(*(__int64 (__fastcall **)(unsigned __int64))v7)(SceneMultistagePlay);
    Scene::notifyAllPlayer<proto::GlobalBuildingInfoNotify>(scene, (proto::GlobalBuildingInfoNotify *)(v1 + 32), 0);
  }
  proto::GlobalBuildingInfoNotify::~GlobalBuildingInfoNotify((proto::GlobalBuildingInfoNotify *const)(v1 + 32));
  if ( v10 == (char *)v1 )
  {
    *(_DWORD *)((v1 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 173: range 00000000161BBC80-00000000161BBD6A
const std::map<std::string,float> *__fastcall TowerDefensePlayBase::getModifyServerGlobalValueMap[abi:cxx11](
        const TowerDefensePlayBase *const this,
        uint32_t gadget_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const std::map<std::string,float> *result; // rax
  common::tools::transcribe_cv_t_14 *sgv_map_ptr; // [rsp+18h] [rbp-68h]
  char v7[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 gadget_id:172";
  *(_QWORD *)(v2 + 16) = TowerDefensePlayBase::getModifyServerGlobalValueMap[abi:cxx11];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = gadget_id;
  sgv_map_ptr = common::tools::MiscUtils::findMapValuePointer<std::map<unsigned int,std::map<std::string,float>> const>(
                  &this->gadget_server_global_value_map_,
                  (const std::map<unsigned int,std::map<std::string,float>>::key_type *)(v2 + 32));
  if ( sgv_map_ptr )
    result = sgv_map_ptr;
  else
    result = &this->empty_map_;
  if ( v7 == (char *)v2 )
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

// Line 183: range 00000000161BBD6C-00000000161BBF19
TowerDefensePlayBase *__fastcall TowerDefensePlayBase::getFoundationCompByConfigId(
        TowerDefensePlayBase *const this,
        std::map<unsigned int,std::weak_ptr<FoundationComp>> *config_id,
        int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<FoundationComp> > >::_Self __y; // [rsp+28h] [rbp-88h] BYREF
  char v9[128]; // [rsp+30h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 13 config_id:182 64 8 8 iter:184";
  *(_QWORD *)(v3 + 16) = TowerDefensePlayBase::getFoundationCompByConfigId;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = a3;
  *(std::map<unsigned int,std::weak_ptr<FoundationComp>>::iterator *)(v3 + 64) = std::map<unsigned int,std::weak_ptr<FoundationComp>>::find(
                                                                                   config_id + 1,
                                                                                   (const std::map<unsigned int,std::weak_ptr<FoundationComp>>::key_type *)(v3 + 48));
  __y._M_node = std::map<unsigned int,std::weak_ptr<FoundationComp>>::end(config_id + 1)._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<FoundationComp> > >::_Self *)(v3 + 64),
         &__y) )
  {
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<FoundationComp>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<FoundationComp> > > *const)(v3 + 64));
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    std::weak_ptr<FoundationComp>::lock((const std::weak_ptr<FoundationComp> *const)this);
  }
  else
  {
    std::shared_ptr<FoundationComp>::shared_ptr((std::shared_ptr<FoundationComp> *const)this, 0LL);
  }
  if ( v9 == (char *)v3 )
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

// Line 193: range 00000000161BBF1A-00000000161BC221
void __fastcall TowerDefensePlayBase::modifyGadgetServerGlobalValue(
        TowerDefensePlayBase *const this,
        uint32_t gadget_id,
        const std::string *key,
        float delta)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::map<std::string,float>::mapped_type *v7; // rdx
  std::map<std::string,float>::mapped_type *v8; // rax
  float *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r13
  std::map<std::string,float>::mapped_type *v18; // rax
  float v19; // [rsp+4h] [rbp-CCh]
  std::map<unsigned int,std::map<std::string,float>>::mapped_type *sgv_map; // [rsp+28h] [rbp-A8h]
  common::milog::MiLogStream v23; // [rsp+30h] [rbp-A0h] BYREF
  char v24[128]; // [rsp+50h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 13 old_value:195 64 4 13 gadget_id:192";
  *(_QWORD *)(v4 + 16) = TowerDefensePlayBase::modifyGadgetServerGlobalValue;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202116348;
  *(_DWORD *)(v4 + 64) = gadget_id;
  sgv_map = std::map<unsigned int,std::map<std::string,float>>::operator[](
              &this->gadget_server_global_value_map_,
              (const std::map<unsigned int,std::map<std::string,float>>::key_type *)(v4 + 64));
  v7 = std::map<std::string,float>::operator[](sgv_map, key);
  if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  *(std::map<std::string,float>::mapped_type *)(v4 + 48) = *v7;
  v19 = *(float *)(v4 + 48) + delta;
  v8 = std::map<std::string,float>::operator[](sgv_map, key);
  v9 = v8;
  if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v8);
  }
  *v9 = v19;
  common::milog::MiLogStream::create(
    &v23,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/play/tower_defense_play_base.cpp",
    "modifyGadgetServerGlobalValue",
    197);
  v10 = common::milog::MiLogStream::operator<<<TowerDefensePlayBase,(TowerDefensePlayBase*)0>(&v23, this);
  v11 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v10, (const char (*)[9])" gadget:");
  v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v4 + 64));
  v13 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v12, (const char (*)[3])", ");
  v14 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, key);
  v15 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v14, (const char (*)[3])": ");
  v16 = common::milog::MiLogStream::operator<<<float,(float *)0>(v15, (const float *)(v4 + 48));
  v17 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v16, (const char (*)[5])off_25B86180);
  v18 = std::map<std::string,float>::operator[](sgv_map, key);
  common::milog::MiLogStream::operator<<<float,(float *)0>(v17, v18);
  common::milog::MiLogStream::~MiLogStream(&v23);
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

// Line 201: range 00000000161BC222-00000000161BC488
void __cdecl TowerDefensePlayBase::batchModifyGadgetServerGlobalValue(
        TowerDefensePlayBase *const this,
        const std::set<unsigned int> *gadget_set,
        const std::string *key,
        float delta)
{
  unsigned __int64 v4; // rax
  void (__fastcall *v5)(TowerDefensePlayBase *const, _QWORD, const std::string *, double); // r8
  std::_Rb_tree_const_iterator<unsigned int>::reference v6; // rdx
  unsigned __int64 v7; // rax
  uint32_t gadget_id_0; // [rsp+24h] [rbp-3Ch]
  std::map<unsigned int,std::map<std::string,float>>::iterator __for_begin; // [rsp+28h] [rbp-38h] BYREF
  std::map<unsigned int,std::map<std::string,float>>::iterator __for_end; // [rsp+30h] [rbp-30h] BYREF
  const std::set<unsigned int> *__for_range_0; // [rsp+38h] [rbp-28h]
  std::map<unsigned int,std::map<std::string,float>> *__for_range; // [rsp+40h] [rbp-20h]
  std::pair<unsigned int const,std::map<std::string,float> > *__in; // [rsp+48h] [rbp-18h]
  std::tuple_element<0,std::pair<unsigned int const,std::map<std::string,float> > >::type *gadget_id; // [rsp+50h] [rbp-10h]
  std::tuple_element<1,std::pair<unsigned int const,std::map<std::string,float> > >::type *_; // [rsp+58h] [rbp-8h]

  if ( std::set<unsigned int>::empty(gadget_set) )
  {
    __for_range = &this->gadget_server_global_value_map_;
    __for_begin._M_node = std::map<unsigned int,std::map<std::string,float>>::begin(&this->gadget_server_global_value_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,std::map<std::string,float>>::end(&this->gadget_server_global_value_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      __in = std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<std::string,float>>>::operator*(&__for_begin);
      gadget_id = std::get<0ul,unsigned int const,std::map<std::string,float>>(__in);
      _ = std::get<1ul,unsigned int const,std::map<std::string,float>>(__in);
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v4 = (unsigned __int64)(this->_vptr_DescribalBase + 17);
      if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
        v4 = __asan_report_load8();
      v5 = *(void (__fastcall **)(TowerDefensePlayBase *const, _QWORD, const std::string *, double))v4;
      if ( *(_BYTE *)(((unsigned __int64)gadget_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)gadget_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)gadget_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v5(this, *gadget_id, key, *(double *)_mm_cvtsi32_si128(LODWORD(delta)).m128i_i64);
      std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<std::string,float>>>::operator++(&__for_begin);
    }
  }
  else
  {
    __for_range_0 = gadget_set;
    __for_begin._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<std::string,float> > >::_Base_ptr)std::set<unsigned int>::begin(gadget_set)._M_node;
    __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<std::string,float> > >::_Base_ptr)std::set<unsigned int>::end(gadget_set)._M_node;
    while ( std::operator!=(
              (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_begin,
              (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_end) )
    {
      v6 = std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      gadget_id_0 = *v6;
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v7 = (unsigned __int64)(this->_vptr_DescribalBase + 17);
      if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
        v7 = __asan_report_load8();
      (*(void (__fastcall **)(TowerDefensePlayBase *const, _QWORD, const std::string *, double))v7)(
        this,
        gadget_id_0,
        key,
        *(double *)_mm_cvtsi32_si128(LODWORD(delta)).m128i_i64);
      std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
    }
  }
};

// Line 219: range 00000000161BC48A-00000000161BC60F
float __fastcall TowerDefensePlayBase::getGadgetServerGlobalValue(
        const TowerDefensePlayBase *const this,
        uint32_t gadget_id,
        const std::string *key)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  float *v6; // rdx
  float result; // xmm0_4
  float __a; // [rsp+28h] [rbp-78h] BYREF
  float ret; // [rsp+2Ch] [rbp-74h]
  const std::map<std::string,float> *sgv_map_ptr; // [rsp+30h] [rbp-70h]
  const float *value_ptr; // [rsp+38h] [rbp-68h]
  char v13[96]; // [rsp+40h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 13 gadget_id:218";
  *(_QWORD *)(v3 + 16) = TowerDefensePlayBase::getGadgetServerGlobalValue;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = gadget_id;
  ret = 0.0;
  sgv_map_ptr = common::tools::MiscUtils::findMapValuePointer<std::map<unsigned int,std::map<std::string,float>> const>(
                  &this->gadget_server_global_value_map_,
                  (const std::map<unsigned int,std::map<std::string,float>>::key_type *)(v3 + 32));
  if ( sgv_map_ptr )
  {
    value_ptr = common::tools::MiscUtils::findMapValuePointer<std::map<std::string,float> const>(sgv_map_ptr, key);
    if ( value_ptr )
    {
      __a = 0.0;
      v6 = (float *)std::max<float>(&__a, value_ptr);
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      ret = *v6;
    }
  }
  result = ret;
  if ( v13 == (char *)v3 )
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

// Line 234: range 00000000161BC610-00000000161BCA35
void __cdecl TowerDefensePlayBase::batchGetGadgetServerGlobalValue(
        TowerDefensePlayBase *const this,
        const std::set<unsigned int> *gadget_set,
        const std::string *key,
        std::map<unsigned int,float> *value_map)
{
  __m128i v4; // xmm0
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rax
  double (__fastcall *v9)(TowerDefensePlayBase *const, _QWORD, const std::string *); // r8
  int v10; // r13d
  std::map<unsigned int,float>::mapped_type *v11; // rax
  int *v12; // rdx
  std::_Rb_tree_const_iterator<unsigned int>::reference v13; // rdx
  unsigned __int64 v14; // rax
  int v15; // r14d
  std::map<unsigned int,float>::mapped_type *v16; // rax
  int *v17; // rdx
  std::map<unsigned int,std::map<std::string,float>>::iterator __for_begin; // [rsp+28h] [rbp-A8h] BYREF
  std::map<unsigned int,std::map<std::string,float>>::iterator __for_end; // [rsp+30h] [rbp-A0h] BYREF
  const std::set<unsigned int> *__for_range_0; // [rsp+38h] [rbp-98h]
  std::map<unsigned int,std::map<std::string,float>> *__for_range; // [rsp+40h] [rbp-90h]
  std::pair<unsigned int const,std::map<std::string,float> > *__in; // [rsp+48h] [rbp-88h]
  std::tuple_element<0,std::pair<unsigned int const,std::map<std::string,float> > >::type *gadget_id; // [rsp+50h] [rbp-80h]
  std::tuple_element<1,std::pair<unsigned int const,std::map<std::string,float> > >::type *_; // [rsp+58h] [rbp-78h]
  char v27[112]; // [rsp+60h] [rbp-70h] BYREF

  v5 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_0(64LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 4 13 gadget_id:244";
  *(_QWORD *)(v5 + 16) = TowerDefensePlayBase::batchGetGadgetServerGlobalValue;
  v7 = v5 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202116348;
  if ( std::set<unsigned int>::empty(gadget_set) )
  {
    __for_range = &this->gadget_server_global_value_map_;
    __for_begin._M_node = std::map<unsigned int,std::map<std::string,float>>::begin(&this->gadget_server_global_value_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,std::map<std::string,float>>::end(&this->gadget_server_global_value_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      __in = std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<std::string,float>>>::operator*(&__for_begin);
      gadget_id = std::get<0ul,unsigned int const,std::map<std::string,float>>(__in);
      _ = std::get<1ul,unsigned int const,std::map<std::string,float>>(__in);
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v8 = (unsigned __int64)(this->_vptr_DescribalBase + 19);
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        v8 = __asan_report_load8();
      v9 = *(double (__fastcall **)(TowerDefensePlayBase *const, _QWORD, const std::string *))v8;
      if ( *(_BYTE *)(((unsigned __int64)gadget_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)gadget_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)gadget_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(double *)v4.m128i_i64 = v9(this, *gadget_id, key);
      v10 = _mm_cvtsi128_si32(v4);
      v11 = std::map<unsigned int,float>::operator[](value_map, gadget_id);
      v12 = (int *)v11;
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v11);
      }
      *v12 = v10;
      std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<std::string,float>>>::operator++(&__for_begin);
    }
  }
  else
  {
    __for_range_0 = gadget_set;
    __for_begin._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<std::string,float> > >::_Base_ptr)std::set<unsigned int>::begin(gadget_set)._M_node;
    __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<std::string,float> > >::_Base_ptr)std::set<unsigned int>::end(gadget_set)._M_node;
    while ( std::operator!=(
              (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_begin,
              (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_end) )
    {
      v13 = std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v5 + 32) = *v13;
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v14 = (unsigned __int64)(this->_vptr_DescribalBase + 19);
      if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
        v14 = __asan_report_load8();
      *(double *)v4.m128i_i64 = (*(double (__fastcall **)(TowerDefensePlayBase *const, _QWORD, const std::string *))v14)(
                                  this,
                                  *(unsigned int *)(v5 + 32),
                                  key);
      v15 = _mm_cvtsi128_si32(v4);
      v16 = std::map<unsigned int,float>::operator[](
              value_map,
              (const std::map<unsigned int,float>::key_type *)(v5 + 32));
      v17 = (int *)v16;
      if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v16);
      }
      *v17 = v15;
      std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
    }
  }
  if ( v27 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 252: range 00000000161BCE2E-00000000161BCF11
void __cdecl TowerDefensePlayBase::batchRefreshGadgetServerGlobalValue(
        TowerDefensePlayBase *const this,
        const std::map<std::string,std::map<unsigned int,float>> *sgv_gadget_map)
{
  unsigned __int64 v2; // rax
  void (__fastcall *v3)(TowerDefensePlayBase *const, std::function<ForeachPolicy(FoundationComp&)> *); // rbx
  TowerDefensePlayBase::batchRefreshGadgetServerGlobalValue::<lambda(FoundationComp&)> sgv_gadget_mapa; // [rsp+0h] [rbp-50h]
  std::function<ForeachPolicy(FoundationComp&)> v5; // [rsp+10h] [rbp-40h] BYREF

  sgv_gadget_mapa.__this = this;
  sgv_gadget_mapa.__sgv_gadget_map = sgv_gadget_map;
  if ( !std::map<std::string,std::map<unsigned int,float>>::empty(sgv_gadget_map) )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v2 = (unsigned __int64)(this->_vptr_DescribalBase + 13);
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      v2 = __asan_report_load8();
    v3 = *(void (__fastcall **)(TowerDefensePlayBase *const, std::function<ForeachPolicy(FoundationComp&)> *))v2;
    std::function<ForeachPolicy ()(FoundationComp &)>::function<TowerDefensePlayBase::batchRefreshGadgetServerGlobalValue(std::map<std::string,std::map<unsigned int,float>> const&)::{lambda(FoundationComp &)#1},void,void>(
      &v5,
      sgv_gadget_mapa);
    v3(this, &v5);
    std::function<ForeachPolicy ()(FoundationComp &)>::~function(&v5);
  }
};

// Line 258: range 00000000161BCA36-00000000161BCE2C
ForeachPolicy __cdecl TowerDefensePlayBase::batchRefreshGadgetServerGlobalValue(std::map<std::string,std::map<unsigned int,float>> const&)::{lambda(FoundationComp &)#1}::operator()(
        const TowerDefensePlayBase::batchRefreshGadgetServerGlobalValue::<lambda(FoundationComp&)> *const __closure,
        FoundationComp *foundation_comp)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  Creature *v6; // rdi
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  ForeachPolicy result; // eax
  std::map<std::string,std::map<unsigned int,float>>::const_iterator __for_begin; // [rsp+18h] [rbp-E8h] BYREF
  std::map<std::string,std::map<unsigned int,float>>::const_iterator __for_end; // [rsp+20h] [rbp-E0h] BYREF
  const std::map<std::string,std::map<unsigned int,float>> *__for_range; // [rsp+28h] [rbp-D8h]
  const std::pair<const std::string,std::map<unsigned int,float> > *v19; // [rsp+30h] [rbp-D0h]
  std::tuple_element<0,const std::pair<const std::string,std::map<unsigned int,float> > >::type *key; // [rsp+38h] [rbp-C8h]
  std::tuple_element<1,const std::pair<const std::string,std::map<unsigned int,float> > >::type *value_map; // [rsp+40h] [rbp-C0h]
  const float *value_ptr; // [rsp+48h] [rbp-B8h]
  common::milog::MiLogStream v23; // [rsp+50h] [rbp-B0h] BYREF
  char v24[144]; // [rsp+70h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 13 gadget_id:265 64 16 14 gadget_ptr:260";
  *(_QWORD *)(v2 + 16) = TowerDefensePlayBase::batchRefreshGadgetServerGlobalValue(std::map<std::string,std::map<unsigned int,float>> const&)::{lambda(FoundationComp &)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  FoundationComp::getGearGadgetPtr((FoundationComp *const)(v2 + 64));
  if ( !std::operator==<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v2 + 64)) )
  {
    v5 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    *(_DWORD *)(v2 + 48) = Gadget::getGadgetId(v5);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    __for_range = __closure->__sgv_gadget_map;
    __for_begin._M_node = std::map<std::string,std::map<unsigned int,float>>::begin(__for_range)._M_node;
    __for_end._M_node = std::map<std::string,std::map<unsigned int,float>>::end(__for_range)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v19 = std::_Rb_tree_const_iterator<std::pair<std::string const,std::map<unsigned int,float>>>::operator*(&__for_begin);
      key = std::get<0ul,std::string const,std::map<unsigned int,float>>(v19);
      value_map = (std::tuple_element<1,const std::pair<const std::string,std::map<unsigned int,float> > >::type *)std::get<1ul,std::string const,std::map<unsigned int,float>>(v19);
      value_ptr = common::tools::MiscUtils::findMapValuePointer<std::map<unsigned int,float> const>(
                    value_map,
                    (const std::map<unsigned int,float>::key_type *)(v2 + 48));
      if ( value_ptr )
      {
        v6 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        if ( *(_BYTE *)(((unsigned __int64)value_ptr >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)value_ptr & 7) + 3) >= *(_BYTE *)(((unsigned __int64)value_ptr >> 3) + 0x7FFF8000) )
        {
          v6 = (Creature *)value_ptr;
          __asan_report_load4();
        }
        if ( !(unsigned int)Creature::setServerGlobalValue(v6, key, *value_ptr, 1) )
        {
          common::milog::MiLogStream::create(
            &v23,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/play/tower_defense_play_base.cpp",
            "operator()",
            275);
          if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v7 = common::milog::MiLogStream::operator<<<TowerDefensePlayBase,(TowerDefensePlayBase*)0>(
                 &v23,
                 __closure->__this);
          v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v7, (const char (*)[6])" set ");
          v9 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          v10 = common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v8, v9);
          v11 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v10, (const char (*)[6])" sgv:");
          v12 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, key);
          v13 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v12, (const char (*)[2])"=");
          common::milog::MiLogStream::operator<<<float,(float *)0>(v13, value_ptr);
          common::milog::MiLogStream::~MiLogStream(&v23);
        }
      }
      std::_Rb_tree_const_iterator<std::pair<std::string const,std::map<unsigned int,float>>>::operator++(&__for_begin);
    }
  }
  std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v2 + 64));
  result = FOREACH_CONTINUE;
  if ( v24 == (char *)v2 )
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

// Line 283: range 00000000161BCF12-00000000161BD335
void __cdecl TowerDefensePlayBase::batchModifyAndRefreshGadgetServerGlobalValue(
        TowerDefensePlayBase *const this,
        const std::set<unsigned int> *gadget_set,
        const std::map<std::string,float> *server_global_value_map)
{
  std::map<std::string,std::map<unsigned int,float>> *v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned __int64 v6; // rax
  void (__fastcall *v7)(TowerDefensePlayBase *const, const std::set<unsigned int> *, std::tuple_element<0,const std::pair<const std::string,float> >::type *, double); // r8
  unsigned __int64 v8; // rax
  void (__fastcall *v9)(TowerDefensePlayBase *const, const std::set<unsigned int> *, std::tuple_element<0,const std::pair<const std::string,float> >::type *, std::map<std::string,std::map<unsigned int,float>>::mapped_type *); // r14
  std::map<std::string,std::map<unsigned int,float>>::mapped_type *v10; // rcx
  unsigned __int64 v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  std::map<std::string,float>::const_iterator __for_begin; // [rsp+20h] [rbp-100h] BYREF
  std::map<std::string,float>::const_iterator __for_end; // [rsp+28h] [rbp-F8h] BYREF
  const std::map<std::string,float> *__for_range; // [rsp+30h] [rbp-F0h]
  const std::pair<const std::string,float> *v18; // [rsp+38h] [rbp-E8h]
  std::tuple_element<0,const std::pair<const std::string,float> >::type *key; // [rsp+40h] [rbp-E0h]
  std::tuple_element<1,const std::pair<const std::string,float> >::type *value; // [rsp+48h] [rbp-D8h]
  common::milog::MiLogStream v21; // [rsp+50h] [rbp-D0h] BYREF
  char v22[176]; // [rsp+70h] [rbp-B0h] BYREF

  v3 = (std::map<std::string,std::map<unsigned int,float>> *)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = (std::map<std::string,std::map<unsigned int,float>> *)v4;
  }
  *(_QWORD *)v3->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v3->_M_t._M_impl._M_header._M_color = "1 48 48 18 sgv_gadget_map:284";
  v3->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)TowerDefensePlayBase::batchModifyAndRefreshGadgetServerGlobalValue;
  v5 = (_DWORD *)((unsigned __int64)v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862723] = -202116109;
  std::map<std::string,std::map<unsigned int,float>>::map(v3 + 1);
  __for_range = server_global_value_map;
  __for_begin._M_node = std::map<std::string,float>::begin(server_global_value_map)._M_node;
  __for_end._M_node = std::map<std::string,float>::end(server_global_value_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v18 = std::_Rb_tree_const_iterator<std::pair<std::string const,float>>::operator*(&__for_begin);
    key = std::get<0ul,std::string const,float>(v18);
    value = (std::tuple_element<1,const std::pair<const std::string,float> >::type *)std::get<1ul,std::string const,float>(v18);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v6 = (unsigned __int64)(this->_vptr_DescribalBase + 18);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      v6 = __asan_report_load8();
    v7 = *(void (__fastcall **)(TowerDefensePlayBase *const, const std::set<unsigned int> *, std::tuple_element<0,const std::pair<const std::string,float> >::type *, double))v6;
    if ( *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)value & 7) + 3) >= *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v7(this, gadget_set, key, *(double *)_mm_cvtsi32_si128(*(_DWORD *)value).m128i_i64);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v8 = (unsigned __int64)(this->_vptr_DescribalBase + 20);
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      v8 = __asan_report_load8();
    v9 = *(void (__fastcall **)(TowerDefensePlayBase *const, const std::set<unsigned int> *, std::tuple_element<0,const std::pair<const std::string,float> >::type *, std::map<std::string,std::map<unsigned int,float>>::mapped_type *))v8;
    v10 = std::map<std::string,std::map<unsigned int,float>>::operator[](v3 + 1, key);
    v9(this, gadget_set, key, v10);
    std::_Rb_tree_const_iterator<std::pair<std::string const,float>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v11 = (unsigned __int64)(this->_vptr_DescribalBase + 21);
  if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
    v11 = __asan_report_load8();
  (*(void (__fastcall **)(TowerDefensePlayBase *const, __int8 *))v11)(this, v3[1]._M_t._M_impl.gap0);
  common::milog::MiLogStream::create(
    &v21,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/play/tower_defense_play_base.cpp",
    "batchModifyAndRefreshGadgetServerGlobalValue",
    291);
  v12 = common::milog::MiLogStream::operator<<<TowerDefensePlayBase,(TowerDefensePlayBase*)0>(&v21, this);
  v13 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v12, (const char (*)[17])" sgv gadget map:");
  common::milog::MiLogStream::operator<<<std::string,std::map<unsigned int,float>>(v13, v3 + 1);
  common::milog::MiLogStream::~MiLogStream(&v21);
  std::map<std::string,std::map<unsigned int,float>>::~map(v3 + 1);
  if ( v22 == (char *)v3 )
  {
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3->_M_t._M_impl.gap0 = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
