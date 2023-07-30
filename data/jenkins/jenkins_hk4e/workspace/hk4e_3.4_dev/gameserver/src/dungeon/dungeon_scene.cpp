// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/dungeon/dungeon_scene.cpp

// Line 58: range 0000000015F99B50-0000000015F99BD8
void __cdecl DungeonFightStatistic::clear(DungeonFightStatistic *const this)
{
  unsigned int __x; // [rsp+10h] [rbp-10h] BYREF
  unsigned int __y; // [rsp+14h] [rbp-Ch] BYREF
  std::pair<unsigned int,unsigned int> __p; // [rsp+18h] [rbp-8h] BYREF

  std::map<unsigned int,unsigned int>::clear(&this->kill_count_map);
  __y = 0;
  __x = 0;
  __p = std::make_pair<unsigned int,unsigned int>(&__x, &__y);
  std::pair<unsigned int,unsigned int>::operator=(&this->max_single_damage_pair, &__p);
  std::map<unsigned int,float>::clear(&this->take_damage_count_map);
  std::map<unsigned int,unsigned int>::clear(&this->normal_skill_count_map);
  std::map<unsigned int,unsigned int>::clear(&this->energy_skill_count_map);
};

// Line 68: range 0000000015F99BDA-0000000015F99E1F
std::string *__cdecl DungeonScene::getDesc[abi:cxx11](std::string *retstr, const DungeonScene *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v5; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v6; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v7; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v8; // rax
  char v10[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 7 ostr:69";
  *(_QWORD *)(v2 + 16) = DungeonScene::getDesc[abi:cxx11];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  v5 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
         (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
         "[dungeon_id:");
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->dungeon_id_);
  }
  v6 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v5, this->dungeon_id_);
  v7 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v6, ",inst_id:");
  if ( *(_BYTE *)(((unsigned __int64)&this->inst_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->inst_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->inst_id_);
  }
  v8 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v7, this->inst_id_);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v8, "]");
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
  if ( v10 == (char *)v2 )
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

// Line 75: range 0000000015F99E20-0000000015F99F47
int32_t __cdecl DungeonScene::constructComps(DungeonScene *const this)
{
  common::milog::MiLogStream v2; // [rsp+10h] [rbp-30h] BYREF

  if ( EcsBase<Scene,SceneCompBase,12u>::addComp<SceneGridComp>((EcsBase<Scene,SceneCompBase,12> *const)&this->baseclass_0[24]) )
  {
    common::milog::MiLogStream::create(
      &v2,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/dungeon_scene.cpp",
      "constructComps",
      78);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v2,
      (const char (*)[28])"addComp SceneGridComp fails");
    common::milog::MiLogStream::~MiLogStream(&v2);
    return -1;
  }
  else if ( Scene::constructComps((Scene *const)this) )
  {
    common::milog::MiLogStream::create(
      &v2,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/dungeon_scene.cpp",
      "constructComps",
      83);
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      &v2,
      (const char (*)[29])"Scene::constructComps failed");
    common::milog::MiLogStream::~MiLogStream(&v2);
    return -1;
  }
  else
  {
    return 0;
  }
};

// Line 91: range 0000000015F99F48-0000000015F9B73B
int32_t __cdecl DungeonScene::init(DungeonScene *const this, const SceneInitParam *init_param)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rdx
  uint32_t dungeon_id; // ecx
  uint32_t OwnerUid; // esi
  DungeonExcelConfigMgr *p_dungeon_config_mgr; // rcx
  common::milog::MiLogStream *v10; // rax
  int32_t level_revise; // edi
  JsonConfigMgr *p_json_config_mgr; // rcx
  bool v13; // r15
  common::milog::MiLogStream *v14; // rax
  const std::pair<unsigned int const,std::shared_ptr<data::DungeonWayPoint> > *v15; // rax
  common::milog::MiLogStream *v16; // rax
  int v17; // r15d
  std::__shared_ptr_access<data::DungeonWayPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rdx
  unsigned __int64 v19; // rax
  unsigned int *v20; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >,bool> v22; // rax
  common::milog::MiLogStream *v23; // rax
  JsonConfigMgr *v24; // rcx
  bool v25; // r15
  common::milog::MiLogStream *v26; // rax
  const std::pair<unsigned int const,std::shared_ptr<data::DungeonSlipRevivePoint> > *v27; // rax
  common::milog::MiLogStream *v28; // rax
  int v29; // r15d
  std::__shared_ptr_access<data::DungeonSlipRevivePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rdx
  unsigned __int64 v31; // rax
  unsigned int *v32; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >,bool> v34; // rax
  common::milog::MiLogStream *v35; // rax
  DungeonExcelConfigMgr *v36; // rcx
  common::milog::MiLogStream *v37; // rax
  data::LogicType logic_type; // ecx
  std::vector<data::DungeonCondConfig>::size_type v39; // r15
  unsigned int *v40; // r8
  DungeonScene *v41; // r9
  common::milog::MiLogStream *v42; // rax
  int v43; // r15d
  DungeonExcelConfigMgr *v44; // rcx
  int32_t result; // eax
  uint32_t level_config_id; // [rsp+24h] [rbp-26Ch]
  std::map<unsigned int,std::shared_ptr<data::DungeonWayPoint>>::iterator __for_begin; // [rsp+28h] [rbp-268h] BYREF
  std::map<unsigned int,std::shared_ptr<data::DungeonWayPoint>>::iterator __for_end; // [rsp+30h] [rbp-260h] BYREF
  const data::DungeonExcelConfig *dungeon_config_ptr; // [rsp+38h] [rbp-258h]
  std::map<unsigned int,std::shared_ptr<data::DungeonWayPoint>> *__for_range; // [rsp+40h] [rbp-250h]
  std::map<unsigned int,std::shared_ptr<data::DungeonSlipRevivePoint>> *__for_range_0; // [rsp+48h] [rbp-248h]
  const data::DungeonPassExcelConfig *pass_config_ptr; // [rsp+50h] [rbp-240h]
  const data::DungeonCondConfig *cond_config; // [rsp+58h] [rbp-238h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<data::DungeonSlipRevivePoint> > >::type *point_id_0; // [rsp+60h] [rbp-230h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<data::DungeonSlipRevivePoint> > >::type *slip_revive_point_ptr; // [rsp+68h] [rbp-228h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<data::DungeonWayPoint> > >::type *point_id; // [rsp+70h] [rbp-220h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<data::DungeonWayPoint> > >::type *way_point_ptr; // [rsp+78h] [rbp-218h]
  data::DungeonCondConfig v60; // [rsp+80h] [rbp-210h] BYREF
  data::DungeonCondConfig v61; // [rsp+B0h] [rbp-1E0h] BYREF
  data::DungeonCondConfig v62; // [rsp+E0h] [rbp-1B0h] BYREF
  common::milog::MiLogStream v63; // [rsp+120h] [rbp-170h] BYREF
  char v64[336]; // [rsp+140h] [rbp-150h] BYREF

  v3 = (unsigned __int64)v64;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 4 7 now:127 48 4 5 i:188 64 16 13 player_ptr:92 96 16 12 cond_ptr:191 128 48 17 way_point_m"
                        "ap:121 208 48 25 slip_revive_point_map:150";
  *(_QWORD *)(v3 + 16) = DungeonScene::init;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862725] = -219021312;
  v5[536862726] = 62194;
  v5[536862728] = -202116109;
  Scene::getOwnPlayer((const Scene *const)(v3 + 64));
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v63,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/dungeon_scene.cpp",
      "init",
      95);
    v6 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
           &v63,
           (const char (*)[26])"getOwnPlayer fail, scene:");
    common::milog::MiLogStream::operator<<<DungeonScene,(DungeonScene*)0>(v6, this);
    common::milog::MiLogStream::~MiLogStream(&v63);
    v2 = -1;
    goto LABEL_114;
  }
  if ( *(_BYTE *)(((unsigned __int64)init_param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)init_param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)init_param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(init_param);
  }
  dungeon_id = init_param->dungeon_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->dungeon_id_);
  }
  this->dungeon_id_ = dungeon_id;
  OwnerUid = Scene::getOwnerUid((const Scene *const)this);
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->dungeon_id_);
  }
  DungeonScene::createTransaction[abi:cxx11]((std::string *)&v63, this->dungeon_id_, OwnerUid);
  std::string::operator=(&this->transaction_, &v63);
  std::string::~string(&v63);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 96));
  p_dungeon_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96))->design_config.txt_config_mgr.dungeon_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->dungeon_id_);
  }
  dungeon_config_ptr = data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(p_dungeon_config_mgr, this->dungeon_id_);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 96));
  if ( !dungeon_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v63,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/dungeon_scene.cpp",
      "init",
      104);
    v10 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
            &v63,
            (const char (*)[42])"findDungeonExcelConfig fails, dungeon_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->dungeon_id_);
    common::milog::MiLogStream::~MiLogStream(&v63);
    v2 = -1;
    goto LABEL_114;
  }
  if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->level_revise >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->level_revise >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&dungeon_config_ptr->level_revise);
  }
  level_revise = dungeon_config_ptr->level_revise;
  if ( *(_BYTE *)(((unsigned __int64)&this->revise_level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->revise_level_ >> 3) + 0x7FFF8000) )
  {
    level_revise = (_DWORD)this + 2436;
    __asan_report_store4(&this->revise_level_);
  }
  this->revise_level_ = level_revise;
  if ( DungeonScene::initTimer(this) )
  {
    common::milog::MiLogStream::create(
      &v63,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/dungeon_scene.cpp",
      "init",
      110);
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v63, (const char (*)[16])"initTimer fails");
    common::milog::MiLogStream::~MiLogStream(&v63);
    v2 = -1;
    goto LABEL_114;
  }
  if ( Scene::init((Scene *const)this, init_param) )
  {
    common::milog::MiLogStream::create(
      &v63,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/dungeon_scene.cpp",
      "init",
      116);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v63, (const char (*)[18])"Scene::init fails");
    common::milog::MiLogStream::~MiLogStream(&v63);
    v2 = -1;
    goto LABEL_114;
  }
  std::map<unsigned int,std::shared_ptr<data::DungeonWayPoint>>::map((std::map<unsigned int,std::shared_ptr<data::DungeonWayPoint>> *const)(v3 + 128));
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 96));
  p_json_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96))->design_config.json_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[120] >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->baseclass_0[120] >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->baseclass_0[120]);
  }
  v13 = JsonConfigMgr::findAllScenePoint<data::DungeonWayPoint>(
          p_json_config_mgr,
          *(_DWORD *)&this->baseclass_0[120],
          (std::map<unsigned int,std::shared_ptr<data::DungeonWayPoint>> *)(v3 + 128)) != 0;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 96));
  if ( !v13 )
  {
    *(_DWORD *)(v3 + 32) = common::tools::TimeUtils::getNow();
    __for_range = (std::map<unsigned int,std::shared_ptr<data::DungeonWayPoint>> *)(v3 + 128);
    __for_begin._M_node = std::map<unsigned int,std::shared_ptr<data::DungeonWayPoint>>::begin((std::map<unsigned int,std::shared_ptr<data::DungeonWayPoint>> *const)(v3 + 128))._M_node;
    __for_end._M_node = std::map<unsigned int,std::shared_ptr<data::DungeonWayPoint>>::end((std::map<unsigned int,std::shared_ptr<data::DungeonWayPoint>> *const)(v3 + 128))._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v15 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<data::DungeonWayPoint>>>::operator*(&__for_begin);
      std::pair<unsigned int const,std::shared_ptr<data::DungeonWayPoint>>::pair(
        (std::pair<unsigned int const,std::shared_ptr<data::DungeonWayPoint> > *const)&v62.param._M_impl._M_end_of_storage,
        v15);
      point_id = std::get<0ul,unsigned int const,std::shared_ptr<data::DungeonWayPoint>>((std::pair<unsigned int const,std::shared_ptr<data::DungeonWayPoint> > *)&v62.param._M_impl._M_end_of_storage);
      way_point_ptr = std::get<1ul,unsigned int const,std::shared_ptr<data::DungeonWayPoint>>((std::pair<unsigned int const,std::shared_ptr<data::DungeonWayPoint> > *)&v62.param._M_impl._M_end_of_storage);
      if ( std::operator==<data::DungeonWayPoint>(way_point_ptr, 0LL) )
      {
        common::milog::MiLogStream::create(
          &v63,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/dungeon/dungeon_scene.cpp",
          "init",
          132);
        v16 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(&v63, (const char (*)[24])off_25AB1E60);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, point_id);
        common::milog::MiLogStream::~MiLogStream(&v63);
        v17 = 0;
      }
      else
      {
        v18 = std::__shared_ptr_access<data::DungeonWayPoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::DungeonWayPoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)way_point_ptr);
        if ( *(_BYTE *)(((unsigned __int64)&v18->is_active >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)v18 - 99) & 7) >= *(_BYTE *)(((unsigned __int64)&v18->is_active >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(&v18->is_active);
        }
        if ( !v18->is_active )
        {
          v17 = 0;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8(this);
          v19 = *(_QWORD *)this->baseclass_0 + 504LL;
          if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
            v19 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 504LL);
          if ( (*(unsigned __int8 (__fastcall **)(DungeonScene *const))v19)(this)
            && common::tools::MiscUtils::isContains<std::map<unsigned int,unsigned int>,unsigned int>(
                 &this->activated_way_point_map_,
                 point_id) )
          {
            v17 = 0;
          }
          else
          {
            v22 = std::map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int &>(
                    &this->activated_way_point_map_,
                    point_id,
                    (unsigned int *)(v3 + 32),
                    (const unsigned int *)&this->activated_way_point_map_,
                    v20);
            if ( !v22.second )
            {
              common::milog::MiLogStream::create(
                &v63,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/dungeon/dungeon_scene.cpp",
                "init",
                144);
              v23 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                      &v63,
                      (const char (*)[40])off_25AB1EA0);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, point_id);
              common::milog::MiLogStream::~MiLogStream(&v63);
              v2 = -1;
              v17 = 1;
            }
            else
            {
              v17 = 2;
            }
          }
        }
      }
      std::pair<unsigned int const,std::shared_ptr<data::DungeonWayPoint>>::~pair((std::pair<unsigned int const,std::shared_ptr<data::DungeonWayPoint> > *const)&v62.param._M_impl._M_end_of_storage);
      if ( v17 && v17 != 2 )
        goto LABEL_113;
      std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<data::DungeonWayPoint>>>::operator++(&__for_begin);
    }
    std::map<unsigned int,std::shared_ptr<data::DungeonSlipRevivePoint>>::map((std::map<unsigned int,std::shared_ptr<data::DungeonSlipRevivePoint>> *const)(v3 + 208));
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v3 + 96));
    v24 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96))->design_config.json_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[120] >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->baseclass_0[120] >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->baseclass_0[120]);
    }
    v25 = JsonConfigMgr::findAllScenePoint<data::DungeonSlipRevivePoint>(
            v24,
            *(_DWORD *)&this->baseclass_0[120],
            (std::map<unsigned int,std::shared_ptr<data::DungeonSlipRevivePoint>> *)(v3 + 208)) != 0;
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 96));
    if ( v25 )
    {
      common::milog::MiLogStream::create(
        &v63,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/dungeon_scene.cpp",
        "init",
        153);
      v26 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
              &v63,
              (const char (*)[35])"findAllScenePoint fails, scene_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v26,
        (const unsigned int *)&this->baseclass_0[120]);
      common::milog::MiLogStream::~MiLogStream(&v63);
      v2 = -1;
LABEL_112:
      std::map<unsigned int,std::shared_ptr<data::DungeonSlipRevivePoint>>::~map((std::map<unsigned int,std::shared_ptr<data::DungeonSlipRevivePoint>> *const)(v3 + 208));
      goto LABEL_113;
    }
    __for_range_0 = (std::map<unsigned int,std::shared_ptr<data::DungeonSlipRevivePoint>> *)(v3 + 208);
    __for_begin._M_node = std::map<unsigned int,std::shared_ptr<data::DungeonSlipRevivePoint>>::begin((std::map<unsigned int,std::shared_ptr<data::DungeonSlipRevivePoint>> *const)(v3 + 208))._M_node;
    __for_end._M_node = std::map<unsigned int,std::shared_ptr<data::DungeonSlipRevivePoint>>::end(__for_range_0)._M_node;
    while ( std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<data::DungeonSlipRevivePoint> > >::_Self *)&__for_begin,
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<data::DungeonSlipRevivePoint> > >::_Self *)&__for_end) )
    {
      v27 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<data::DungeonSlipRevivePoint>>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<data::DungeonSlipRevivePoint> > > *const)&__for_begin);
      std::pair<unsigned int const,std::shared_ptr<data::DungeonSlipRevivePoint>>::pair(
        (std::pair<unsigned int const,std::shared_ptr<data::DungeonSlipRevivePoint> > *const)&v62.param._M_impl._M_end_of_storage,
        v27);
      point_id_0 = std::get<0ul,unsigned int const,std::shared_ptr<data::DungeonSlipRevivePoint>>((std::pair<unsigned int const,std::shared_ptr<data::DungeonSlipRevivePoint> > *)&v62.param._M_impl._M_end_of_storage);
      slip_revive_point_ptr = std::get<1ul,unsigned int const,std::shared_ptr<data::DungeonSlipRevivePoint>>((std::pair<unsigned int const,std::shared_ptr<data::DungeonSlipRevivePoint> > *)&v62.param._M_impl._M_end_of_storage);
      if ( std::operator==<data::DungeonSlipRevivePoint>(slip_revive_point_ptr, 0LL) )
      {
        common::milog::MiLogStream::create(
          &v63,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/dungeon/dungeon_scene.cpp",
          "init",
          161);
        v28 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                &v63,
                (const char (*)[32])"slip_revive_point_ptr is null: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, point_id_0);
        common::milog::MiLogStream::~MiLogStream(&v63);
        v29 = 0;
      }
      else
      {
        v30 = std::__shared_ptr_access<data::DungeonSlipRevivePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::DungeonSlipRevivePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)slip_revive_point_ptr);
        if ( *(_BYTE *)(((unsigned __int64)&v30->is_active >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)v30 - 100) & 7) >= *(_BYTE *)(((unsigned __int64)&v30->is_active >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(&v30->is_active);
        }
        if ( !v30->is_active )
        {
          v29 = 0;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8(this);
          v31 = *(_QWORD *)this->baseclass_0 + 504LL;
          if ( *(_BYTE *)((v31 >> 3) + 0x7FFF8000) )
            v31 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 504LL);
          if ( (*(unsigned __int8 (__fastcall **)(DungeonScene *const))v31)(this)
            && common::tools::MiscUtils::isContains<std::map<unsigned int,unsigned int>,unsigned int>(
                 &this->activated_slip_revive_map_,
                 point_id_0) )
          {
            v29 = 0;
          }
          else
          {
            v34 = std::map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int &>(
                    &this->activated_slip_revive_map_,
                    point_id_0,
                    (unsigned int *)(v3 + 32),
                    (const unsigned int *)&this->activated_slip_revive_map_,
                    v32);
            if ( !v34.second )
            {
              common::milog::MiLogStream::create(
                &v63,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/dungeon/dungeon_scene.cpp",
                "init",
                173);
              v35 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                      &v63,
                      (const char (*)[48])"slip revive point has been activated, point_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, point_id_0);
              common::milog::MiLogStream::~MiLogStream(&v63);
              v2 = -1;
              v29 = 1;
            }
            else
            {
              v29 = 2;
            }
          }
        }
      }
      std::pair<unsigned int const,std::shared_ptr<data::DungeonSlipRevivePoint>>::~pair((std::pair<unsigned int const,std::shared_ptr<data::DungeonSlipRevivePoint> > *const)&v62.param._M_impl._M_end_of_storage);
      if ( v29 && v29 != 2 )
        goto LABEL_112;
      std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<data::DungeonSlipRevivePoint>>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<data::DungeonSlipRevivePoint> > > *const)&__for_begin);
    }
    if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->pass_cond >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)dungeon_config_ptr + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->pass_cond >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4(&dungeon_config_ptr->pass_cond);
    }
    if ( dungeon_config_ptr->pass_cond )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v3 + 96));
      v36 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96))->design_config.txt_config_mgr.dungeon_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->pass_cond >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)dungeon_config_ptr + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->pass_cond >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load4(&dungeon_config_ptr->pass_cond);
      }
      pass_config_ptr = data::DungeonExcelConfigMgrBase::findDungeonPassExcelConfig(v36, dungeon_config_ptr->pass_cond);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 96));
      if ( !pass_config_ptr )
      {
        common::milog::MiLogStream::create(
          &v63,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/dungeon/dungeon_scene.cpp",
          "init",
          184);
        v37 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                &v63,
                (const char (*)[43])"findDungeonPassExcelConfig fails, pass_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, &dungeon_config_ptr->pass_cond);
        common::milog::MiLogStream::~MiLogStream(&v63);
        v2 = -1;
        goto LABEL_112;
      }
      if ( *(_BYTE *)(((unsigned __int64)&pass_config_ptr->logic_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)pass_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pass_config_ptr->logic_type >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4(&pass_config_ptr->logic_type);
      }
      logic_type = pass_config_ptr->logic_type;
      if ( *(_BYTE *)(((unsigned __int64)&this->logic_type_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->logic_type_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(&this->logic_type_);
      }
      this->logic_type_ = logic_type;
      for ( *(_DWORD *)(v3 + 48) = 0; ; ++*(_DWORD *)(v3 + 48) )
      {
        v39 = *(unsigned int *)(v3 + 48);
        if ( v39 >= std::vector<data::DungeonCondConfig>::size(&pass_config_ptr->conds) )
          break;
        cond_config = std::vector<data::DungeonCondConfig>::operator[](
                        &pass_config_ptr->conds,
                        *(unsigned int *)(v3 + 48));
        *(_QWORD *)(v3 + 96) = 0LL;
        *(_QWORD *)(v3 + 104) = 0LL;
        if ( *(_BYTE *)(((unsigned __int64)&cond_config->cond_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&cond_config->cond_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&cond_config->cond_type);
        }
        switch ( cond_config->cond_type )
        {
          case DUNGEON_COND_KILL_MONSTER:
            common::tools::perf::make_shared<DungeonCondKillMonster,data::DungeonCondConfig const&,unsigned int &,DungeonScene &>(
              &v60,
              (unsigned int *)cond_config,
              (DungeonScene *)(v3 + 48),
              (const data::DungeonCondConfig *)this,
              v40,
              v41);
            std::shared_ptr<DungeonCondition>::operator=<DungeonCondKillMonster>(
              (std::shared_ptr<DungeonCondition> *const)(v3 + 96),
              (std::shared_ptr<DungeonCondKillMonster> *)&v60);
            std::shared_ptr<DungeonCondKillMonster>::~shared_ptr((std::shared_ptr<DungeonCondKillMonster> *const)&v60);
            break;
          case DUNGEON_COND_KILL_GROUP_MONSTER:
            common::tools::perf::make_shared<DungeonCondKillGroupMonster,data::DungeonCondConfig const&,unsigned int &,DungeonScene &>(
              (const data::DungeonCondConfig *)&v60.param,
              (unsigned int *)cond_config,
              (DungeonScene *)(v3 + 48),
              (const data::DungeonCondConfig *)this,
              v40,
              v41);
            std::shared_ptr<DungeonCondition>::operator=<DungeonCondKillGroupMonster>(
              (std::shared_ptr<DungeonCondition> *const)(v3 + 96),
              (std::shared_ptr<DungeonCondKillGroupMonster> *)&v60.param);
            std::shared_ptr<DungeonCondKillGroupMonster>::~shared_ptr((std::shared_ptr<DungeonCondKillGroupMonster> *const)&v60.param);
            break;
          case DUNGEON_COND_KILL_TYPE_MONSTER:
            common::tools::perf::make_shared<DungeonCondKillTypeMonster,data::DungeonCondConfig const&,unsigned int &,DungeonScene &>(
              (const data::DungeonCondConfig *)&v60.param._M_impl._M_end_of_storage,
              (unsigned int *)cond_config,
              (DungeonScene *)(v3 + 48),
              (const data::DungeonCondConfig *)this,
              v40,
              v41);
            std::shared_ptr<DungeonCondition>::operator=<DungeonCondKillTypeMonster>(
              (std::shared_ptr<DungeonCondition> *const)(v3 + 96),
              (std::shared_ptr<DungeonCondKillTypeMonster> *)&v60.param._M_impl._M_end_of_storage);
            std::shared_ptr<DungeonCondKillTypeMonster>::~shared_ptr((std::shared_ptr<DungeonCondKillTypeMonster> *const)&v60.param._M_impl._M_end_of_storage);
            break;
          case DUNGEON_COND_FINISH_QUEST:
            common::tools::perf::make_shared<DungeonCondFinishQuest,data::DungeonCondConfig const&,unsigned int &,DungeonScene &>(
              &v61,
              (unsigned int *)cond_config,
              (DungeonScene *)(v3 + 48),
              (const data::DungeonCondConfig *)this,
              v40,
              v41);
            std::shared_ptr<DungeonCondition>::operator=<DungeonCondFinishQuest>(
              (std::shared_ptr<DungeonCondition> *const)(v3 + 96),
              (std::shared_ptr<DungeonCondFinishQuest> *)&v61);
            std::shared_ptr<DungeonCondFinishQuest>::~shared_ptr((std::shared_ptr<DungeonCondFinishQuest> *const)&v61);
            break;
          case DUNGEON_COND_KILL_MONSTER_COUNT:
            common::tools::perf::make_shared<DungeonCondKillMonsterCount,data::DungeonCondConfig const&,unsigned int &,DungeonScene &>(
              (const data::DungeonCondConfig *)&v61.param,
              (unsigned int *)cond_config,
              (DungeonScene *)(v3 + 48),
              (const data::DungeonCondConfig *)this,
              v40,
              v41);
            std::shared_ptr<DungeonCondition>::operator=<DungeonCondKillMonsterCount>(
              (std::shared_ptr<DungeonCondition> *const)(v3 + 96),
              (std::shared_ptr<DungeonCondKillMonsterCount> *)&v61.param);
            std::shared_ptr<DungeonCondKillMonsterCount>::~shared_ptr((std::shared_ptr<DungeonCondKillMonsterCount> *const)&v61.param);
            break;
          case DUNGEON_COND_IN_TIME:
            common::tools::perf::make_shared<DungeonCondInTime,data::DungeonCondConfig const&,unsigned int &,DungeonScene &>(
              (const data::DungeonCondConfig *)&v61.param._M_impl._M_end_of_storage,
              (unsigned int *)cond_config,
              (DungeonScene *)(v3 + 48),
              (const data::DungeonCondConfig *)this,
              v40,
              v41);
            std::shared_ptr<DungeonCondition>::operator=<DungeonCondInTime>(
              (std::shared_ptr<DungeonCondition> *const)(v3 + 96),
              (std::shared_ptr<DungeonCondInTime> *)&v61.param._M_impl._M_end_of_storage);
            std::shared_ptr<DungeonCondInTime>::~shared_ptr((std::shared_ptr<DungeonCondInTime> *const)&v61.param._M_impl._M_end_of_storage);
            break;
          case DUNGEON_COND_FINISH_CHALLENGE:
            common::tools::perf::make_shared<DungeonCondFinishChallenge,data::DungeonCondConfig const&,unsigned int &,DungeonScene &>(
              &v62,
              (unsigned int *)cond_config,
              (DungeonScene *)(v3 + 48),
              (const data::DungeonCondConfig *)this,
              v40,
              v41);
            std::shared_ptr<DungeonCondition>::operator=<DungeonCondFinishChallenge>(
              (std::shared_ptr<DungeonCondition> *const)(v3 + 96),
              (std::shared_ptr<DungeonCondFinishChallenge> *)&v62);
            std::shared_ptr<DungeonCondFinishChallenge>::~shared_ptr((std::shared_ptr<DungeonCondFinishChallenge> *const)&v62);
            break;
          case DUNGEON_COND_END_MULTISTAGE_PLAY:
            common::tools::perf::make_shared<DungeonCondEndMultistagePlay,data::DungeonCondConfig const&,unsigned int &,DungeonScene &>(
              (const data::DungeonCondConfig *)&v62.param,
              (unsigned int *)cond_config,
              (DungeonScene *)(v3 + 48),
              (const data::DungeonCondConfig *)this,
              v40,
              v41);
            std::shared_ptr<DungeonCondition>::operator=<DungeonCondEndMultistagePlay>(
              (std::shared_ptr<DungeonCondition> *const)(v3 + 96),
              (std::shared_ptr<DungeonCondEndMultistagePlay> *)&v62.param);
            std::shared_ptr<DungeonCondEndMultistagePlay>::~shared_ptr((std::shared_ptr<DungeonCondEndMultistagePlay> *const)&v62.param);
            break;
          default:
            break;
        }
        if ( std::operator==<DungeonCondition>((const std::shared_ptr<DungeonCondition> *)(v3 + 96), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v63,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/dungeon/dungeon_scene.cpp",
            "init",
            223);
          v42 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                  &v63,
                  (const char (*)[29])"cond_ptr is null, cond_type:");
          common::milog::MiLogStream::operator<<<data::DungeonCondType,(data::DungeonCondType*)0>(
            v42,
            &cond_config->cond_type);
          common::milog::MiLogStream::~MiLogStream(&v63);
          v2 = -1;
          v43 = 0;
        }
        else
        {
          std::vector<std::shared_ptr<DungeonCondition>>::emplace_back<std::shared_ptr<DungeonCondition>&>(
            &this->cond_vec_,
            (std::shared_ptr<DungeonCondition> *)(v3 + 96),
            (std::shared_ptr<DungeonCondition> *)&this->cond_vec_);
          v43 = 1;
        }
        std::shared_ptr<DungeonCondition>::~shared_ptr((std::shared_ptr<DungeonCondition> *const)(v3 + 96));
        if ( v43 != 1 )
          goto LABEL_112;
      }
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v3 + 96));
    v44 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96))->design_config.txt_config_mgr.dungeon_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->dungeon_id_);
    }
    level_config_id = DungeonExcelConfigMgr::randDungeonLevelConfigId(v44, this->dungeon_id_);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 96));
    DungeonScene::tryAddLevelConfigBeforeNotify(this, 3u, level_config_id);
    toThisPtr<DungeonScene>((DungeonScene *)(v3 + 96));
    MistTrialDungeonStatProxy::setDungeonScene(&this->mist_trial_stat_proxy_, (DungeonScenePtr *)(v3 + 96));
    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v3 + 96));
    v2 = 0;
    goto LABEL_112;
  }
  common::milog::MiLogStream::create(
    &v63,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/dungeon/dungeon_scene.cpp",
    "init",
    124);
  v14 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
          &v63,
          (const char (*)[35])"findAllScenePoint fails, scene_id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
    v14,
    (const unsigned int *)&this->baseclass_0[120]);
  common::milog::MiLogStream::~MiLogStream(&v63);
  v2 = -1;
LABEL_113:
  std::map<unsigned int,std::shared_ptr<data::DungeonWayPoint>>::~map((std::map<unsigned int,std::shared_ptr<data::DungeonWayPoint>> *const)(v3 + 128));
LABEL_114:
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 64));
  result = v2;
  if ( v64 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8014) = 0LL;
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
  return result;
};

// Line 239: range 0000000015F9B73C-0000000015F9B85C
int32_t __cdecl DungeonScene::start(DungeonScene *const this)
{
  uint32_t Now; // esi
  uint32_t v2; // esi
  uint32_t SceneTimeSeconds; // ecx
  int32_t ret; // [rsp+1Ch] [rbp-4h]

  Now = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_begin_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_begin_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dungeon_begin_time_);
  }
  this->dungeon_begin_time_ = Now;
  v2 = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&this->last_location_notify_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_location_notify_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_location_notify_time_);
  }
  this->last_location_notify_time_ = v2;
  DungeonFightStatistic::clear(&this->fight_statistics_);
  ret = Scene::start((Scene *const)this);
  if ( ret )
    return ret;
  SceneTimeSeconds = Scene::getSceneTimeSeconds((Scene *const)this);
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_begin_scene_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_begin_scene_time_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->dungeon_begin_scene_time_);
  }
  this->dungeon_begin_scene_time_ = SceneTimeSeconds;
  return 0;
};

// Line 253: range 0000000015F9BA2C-0000000015F9BCB3
int32_t __cdecl DungeonScene::initTimer(DungeonScene *const this)
{
  std::weak_ptr<DungeonScene> *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  int32_t v4; // r14d
  int32_t result; // eax
  std::enable_shared_from_this<Scene> v6; // [rsp+10h] [rbp-C0h] BYREF
  std::weak_ptr<DungeonScene> v7; // [rsp+20h] [rbp-B0h] BYREF
  std::shared_ptr<DungeonScene> __r; // [rsp+30h] [rbp-A0h] BYREF
  common::milog::MiLogStream v9; // [rsp+40h] [rbp-90h] BYREF
  char v10[112]; // [rsp+60h] [rbp-70h] BYREF

  v1 = (std::weak_ptr<DungeonScene> *)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = (std::weak_ptr<DungeonScene> *)v2;
  }
  v1->_M_ptr = (std::__weak_ptr<DungeonScene,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v1->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 13 scene_wtr:254";
  v1[1]._M_ptr = (std::__weak_ptr<DungeonScene,(__gnu_cxx::_Lock_policy)2>::element_type *)DungeonScene::initTimer;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  toThisPtr<DungeonScene>((DungeonScene *)&__r);
  std::weak_ptr<DungeonScene>::weak_ptr<DungeonScene,void>(v1 + 2, &__r);
  std::shared_ptr<DungeonScene>::~shared_ptr(&__r);
  std::weak_ptr<DungeonScene>::weak_ptr(&v7, v1 + 2);
  std::enable_shared_from_this<Scene>::shared_from_this(&v6);
  common::tools::perf::make_shared<SceneTimer,std::shared_ptr<Scene>,DungeonScene::initTimer(void)::{lambda(unsigned long)#1}>(
    (std::shared_ptr<Scene> *)&__r,
    (DungeonScene::initTimer::<lambda(uint64_t)> *)&v6,
    (std::shared_ptr<Scene> *)&v7,
    (DungeonScene::initTimer::<lambda(uint64_t)> *)&v6);
  std::shared_ptr<SceneTimer>::operator=(&this->settle_timer_ptr_, (std::shared_ptr<SceneTimer> *)&__r);
  std::shared_ptr<SceneTimer>::~shared_ptr((std::shared_ptr<SceneTimer> *const)&__r);
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)&v6);
  DungeonScene::initTimer(void)::{lambda(unsigned long)#1}::~initTimer((DungeonScene::initTimer::<lambda(uint64_t)> *const)&v7);
  if ( std::operator==<SceneTimer>(&this->settle_timer_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/dungeon_scene.cpp",
      "initTimer",
      267);
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(&v9, (const char (*)[25])"createSettleTimer failed");
    common::milog::MiLogStream::~MiLogStream(&v9);
    v4 = -1;
  }
  else
  {
    v4 = 0;
  }
  std::weak_ptr<DungeonScene>::~weak_ptr(v1 + 2);
  result = v4;
  if ( v10 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v1->_M_ptr = (std::__weak_ptr<DungeonScene,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 255: range 0000000016042F14-0000000016042F39
void __cdecl DungeonScene::initTimer(void)::{lambda(unsigned long)#1}::initTimer(
        DungeonScene::initTimer::<lambda(uint64_t)> *const this,
        DungeonScene::initTimer::<lambda(uint64_t)> *a2)
{
  std::weak_ptr<DungeonScene>::weak_ptr(&this->__scene_wtr, &a2->__scene_wtr);
};

// Line 255: range 0000000016044266-000000001604428B
void __cdecl DungeonScene::initTimer(void)::{lambda(unsigned long)#1}::initTimer(
        DungeonScene::initTimer::<lambda(uint64_t)> *const this,
        const DungeonScene::initTimer::<lambda(uint64_t)> *a2)
{
  std::weak_ptr<DungeonScene>::weak_ptr(&this->__scene_wtr, &a2->__scene_wtr);
};

// Line 255: range 0000000015F9B85E-0000000015F9BA0F
void __cdecl DungeonScene::initTimer(void)::{lambda(unsigned long)#1}::operator()(
        const DungeonScene::initTimer::<lambda(uint64_t)> *const __closure,
        uint64_t now_ms)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  DungeonScene *v5; // rdx
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-90h] BYREF
  char v7[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 scene_ptr:257";
  *(_QWORD *)(v2 + 16) = DungeonScene::initTimer(void)::{lambda(unsigned long)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::weak_ptr<DungeonScene>::lock((const std::weak_ptr<DungeonScene> *const)(v2 + 32));
  if ( std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/dungeon_scene.cpp",
      "operator()",
      260);
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v6, (const char (*)[17])off_25AB20E0);
    common::milog::MiLogStream::~MiLogStream(&v6);
  }
  else
  {
    v5 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    DungeonScene::onSettleTimer(v5, now_ms);
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 32));
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

// Line 255: range 0000000015F9BA10-0000000015F9BA2A
void __cdecl DungeonScene::initTimer(void)::{lambda(unsigned long)#1}::~initTimer(
        DungeonScene::initTimer::<lambda(uint64_t)> *const this)
{
  std::weak_ptr<DungeonScene>::~weak_ptr(&this->__scene_wtr);
};

// Line 275: range 0000000015F9BCB4-0000000015F9BD47
WorldPtr __cdecl DungeonScene::getOwnWorld(const DungeonScene *const this)
{
  unsigned __int64 v1; // rsi
  unsigned __int64 v2; // rax
  WorldPtr result; // rax
  std::shared_ptr<PlayerWorld> __r; // [rsp+10h] [rbp-10h] BYREF

  if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = *(_QWORD *)v1 + 64LL;
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8();
  (*(void (__fastcall **)(std::shared_ptr<PlayerWorld> *))v2)(&__r);
  std::shared_ptr<World>::shared_ptr<PlayerWorld,void>((std::shared_ptr<World> *const)this, &__r);
  std::shared_ptr<PlayerWorld>::~shared_ptr(&__r);
  result._M_ptr = (std::__shared_ptr<World,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 280: range 0000000015F9BD48-0000000015F9BEB0
PlayerWorldPtr __cdecl DungeonScene::getOwnPlayerWorld(const DungeonScene *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  Player *v4; // rax
  PlayerWorldPtr result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 13 owner_ptr:281";
  *(_QWORD *)(v1 + 16) = DungeonScene::getOwnPlayerWorld;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  Scene::getOwnPlayer((const Scene *const)(v1 + 32));
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v1 + 32), 0LL) )
  {
    std::shared_ptr<PlayerWorld>::shared_ptr((std::shared_ptr<PlayerWorld> *const)this, 0LL);
  }
  else
  {
    v4 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    Player::getSceneComp(v4);
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    PlayerSceneComp::getMyPlayerWorld((const PlayerSceneComp *const)this);
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 32));
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<PlayerWorld,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 290: range 0000000015F9BEB2-0000000015F9BF51
void __cdecl DungeonScene::setCreatePlayer(DungeonScene *const this, PlayerPtr *p_player_ptr)
{
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  uint32_t Uid; // ecx

  std::weak_ptr<Player>::operator=<Player>(&this->create_player_wtr_, p_player_ptr);
  if ( std::operator!=<Player>(0LL, p_player_ptr) )
  {
    v2 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
    Uid = Player::getUid(v2);
    if ( *(_BYTE *)(((unsigned __int64)&this->create_player_uid_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->create_player_uid_ >> 3)
                                                           + 0x7FFF8000) )
    {
      __asan_report_store4(&this->create_player_uid_);
    }
    this->create_player_uid_ = Uid;
  }
};

// Line 300: range 0000000015F9BF52-0000000015F9C11B
int32_t __cdecl DungeonScene::playerEnter(
        DungeonScene *const this,
        Player *player,
        const Vector3 *pos,
        const Vector3 *rot,
        bool is_relogin,
        const std::vector<std::shared_ptr<Avatar>> *enter_scene_avatar_vec,
        AvatarPtr *p_appear_avatar_ptr)
{
  DungeonSceneTeam *DungeonSceneTeam; // rax
  PlayerMpComp *MpComp; // rax
  uint32_t Uid; // eax
  int32_t ret; // [rsp+3Ch] [rbp-44h]
  std::shared_ptr<Avatar> v16; // [rsp+40h] [rbp-40h] BYREF
  common::milog::MiLogStream v17; // [rsp+50h] [rbp-30h] BYREF

  DungeonSceneTeam = DungeonScene::getDungeonSceneTeam(this);
  DungeonSceneTeam::playerEnter(DungeonSceneTeam, player);
  MpComp = Player::getMpComp(player);
  PlayerMpComp::onEnterDungeonScene(MpComp, this);
  Uid = Player::getUid(player);
  DungeonScene::resetPlayerQuitReason(this, Uid);
  if ( *(char *)(((unsigned __int64)&this->is_reset_ban_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_reset_ban_);
  this->is_reset_ban_ = 0;
  std::shared_ptr<Avatar>::shared_ptr(&v16, p_appear_avatar_ptr);
  ret = Scene::playerEnter((Scene *const)this, player, pos, rot, is_relogin, enter_scene_avatar_vec, &v16);
  std::shared_ptr<Avatar>::~shared_ptr(&v16);
  if ( ret )
    return ret;
  if ( !DungeonScene::addTimer(this) )
    return 0;
  common::milog::MiLogStream::create(
    &v17,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/dungeon/dungeon_scene.cpp",
    "playerEnter",
    316);
  common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v17, (const char (*)[15])"addTimer fails");
  common::milog::MiLogStream::~MiLogStream(&v17);
  return -1;
};

// Line 325: range 0000000015F9C11C-0000000015F9C1E2
const data::DungeonExcelConfig *__cdecl DungeonScene::getDungeonConfig(DungeonScene *const this)
{
  DungeonExcelConfigMgr *p_dungeon_config_mgr; // rcx
  const data::DungeonExcelConfig *DungeonExcelConfig; // rbx
  std::shared_ptr<Config> v4[2]; // [rsp+10h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v4);
  p_dungeon_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v4)->design_config.txt_config_mgr.dungeon_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->dungeon_id_);
  }
  DungeonExcelConfig = data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(p_dungeon_config_mgr, this->dungeon_id_);
  std::shared_ptr<Config>::~shared_ptr(v4);
  return DungeonExcelConfig;
};

// Line 331: range 0000000015F9C1E4-0000000015F9C368
data::InvolveType __cdecl DungeonScene::getInvolveType(const DungeonScene *const this)
{
  DungeonExcelConfigMgr *p_dungeon_config_mgr; // rcx
  common::milog::MiLogStream *v2; // rdx
  const data::DungeonExcelConfig *dungeon_config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v5; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v6; // [rsp+30h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v5);
  p_dungeon_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5)->design_config.txt_config_mgr.dungeon_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->dungeon_id_);
  }
  dungeon_config_ptr = data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(p_dungeon_config_mgr, this->dungeon_id_);
  std::shared_ptr<Config>::~shared_ptr(&v5);
  if ( dungeon_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->involve_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->involve_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&dungeon_config_ptr->involve_type);
    }
    return dungeon_config_ptr->involve_type;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/dungeon_scene.cpp",
      "getInvolveType",
      335);
    v2 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           &v6,
           (const char (*)[29])"findDungeonExcelConfig fails");
    common::milog::MiLogStream::operator<<<DungeonScene,(DungeonScene*)0>(v2, this);
    common::milog::MiLogStream::~MiLogStream(&v6);
    return 0;
  }
};

// Line 342: range 0000000015F9C36A-0000000015F9C4F6
data::DungeonType __cdecl DungeonScene::getDungeonType(const DungeonScene *const this)
{
  DungeonExcelConfigMgr *p_dungeon_config_mgr; // rcx
  common::milog::MiLogStream *v2; // rdx
  const data::DungeonExcelConfig *dungeon_config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v5; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v6; // [rsp+30h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v5);
  p_dungeon_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5)->design_config.txt_config_mgr.dungeon_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->dungeon_id_);
  }
  dungeon_config_ptr = data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(p_dungeon_config_mgr, this->dungeon_id_);
  std::shared_ptr<Config>::~shared_ptr(&v5);
  if ( dungeon_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)dungeon_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->type >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4(&dungeon_config_ptr->type);
    }
    return dungeon_config_ptr->type;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/dungeon_scene.cpp",
      "getDungeonType",
      346);
    v2 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           &v6,
           (const char (*)[29])"findDungeonExcelConfig fails");
    common::milog::MiLogStream::operator<<<DungeonScene,(DungeonScene*)0>(v2, this);
    common::milog::MiLogStream::~MiLogStream(&v6);
    return 0;
  }
};

// Line 354: range 0000000015F9C4F8-0000000015F9C80C
__int64 __fastcall DungeonScene::activateWayPoint(
        DungeonScene *const this,
        uint32_t point_id,
        bool is_allow_repeat_activate)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v8; // rax
  std::map<unsigned int,unsigned int>::mapped_type *v9; // rax
  uint32_t *v10; // rdx
  bool is_need_notify; // [rsp+1Bh] [rbp-95h]
  uint32_t now; // [rsp+1Ch] [rbp-94h]
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-90h] BYREF
  char v15[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 12 point_id:353";
  *(_QWORD *)(v3 + 16) = DungeonScene::activateWayPoint;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = point_id;
  if ( *(char *)(((unsigned __int64)&this->is_reset_ban_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_reset_ban_);
  if ( this->is_reset_ban_ )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/dungeon_scene.cpp",
      "activateWayPoint",
      358);
    v6 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v14,
           (const char (*)[43])"is_reset_ban_ true, cannot activeWayPoint:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v14);
    result = 0xFFFFFFFFLL;
    goto LABEL_17;
  }
  now = common::tools::TimeUtils::getNow();
  is_need_notify = 1;
  if ( common::tools::MiscUtils::isContains<std::map<unsigned int,unsigned int>,unsigned int>(
         &this->activated_way_point_map_,
         (const unsigned int *)(v3 + 32)) )
  {
    if ( !is_allow_repeat_activate )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/dungeon/dungeon_scene.cpp",
        "activateWayPoint",
        367);
      v8 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(&v14, (const char (*)[40])off_25AB1EA0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v14);
      result = 0xFFFFFFFFLL;
      goto LABEL_17;
    }
    is_need_notify = 0;
  }
  v9 = std::map<unsigned int,unsigned int>::operator[](
         &this->activated_way_point_map_,
         (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 32));
  v10 = v9;
  if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v9);
  }
  *v10 = now;
  if ( is_need_notify )
    DungeonScene::notifyActivatedWayPointToAll(this, *(_DWORD *)(v3 + 32));
  result = 0LL;
LABEL_17:
  if ( v15 == (char *)v3 )
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

// Line 385: range 0000000015F9C80E-0000000015F9C990
__int64 __fastcall DungeonScene::activateSlipRevivePoint(
        DungeonScene *const this,
        uint32_t point_id,
        bool is_allow_repeat_activate)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  __int64 result; // rax
  std::map<unsigned int,unsigned int>::mapped_type *v8; // rax
  uint32_t *v9; // rdx
  uint32_t now; // [rsp+1Ch] [rbp-74h]
  char v12[112]; // [rsp+20h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 12 point_id:384";
  *(_QWORD *)(v3 + 16) = DungeonScene::activateSlipRevivePoint;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = point_id;
  now = common::tools::TimeUtils::getNow();
  if ( common::tools::MiscUtils::isContains<std::map<unsigned int,unsigned int>,unsigned int>(
         &this->activated_slip_revive_map_,
         (const unsigned int *)(v3 + 32))
    && !is_allow_repeat_activate )
  {
    result = 0LL;
  }
  else
  {
    v8 = std::map<unsigned int,unsigned int>::operator[](
           &this->activated_slip_revive_map_,
           (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 32));
    v9 = v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v8);
    }
    *v9 = now;
    result = 0LL;
  }
  if ( v12 == (char *)v3 )
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

// Line 397: range 0000000015F9C992-0000000015F9C9B9
std::pair<unsigned int,unsigned int> __cdecl DungeonScene::findLastestActivatedSlipRevivePoint(
        DungeonScene *const this)
{
  return DungeonScene::findLatestActivatedPoint(this, &this->activated_slip_revive_map_);
};

// Line 404: range 0000000015F9C9BA-0000000015F9CC00
std::pair<unsigned int,unsigned int> __cdecl DungeonScene::findLatestActivatedPoint(
        DungeonScene *const this,
        const std::map<unsigned int,unsigned int> *activated_point_map)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::pair<unsigned int const,unsigned int> *v5; // rax
  std::pair<unsigned int,unsigned int> v6; // rax
  uint32_t tmp_point_id; // [rsp+18h] [rbp-A8h]
  unsigned int activated_time; // [rsp+1Ch] [rbp-A4h]
  std::map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-A0h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-98h] BYREF
  const std::map<unsigned int,unsigned int> *__for_range; // [rsp+30h] [rbp-90h]
  const std::pair<unsigned int const,unsigned int> *p; // [rsp+38h] [rbp-88h]
  char v13[128]; // [rsp+40h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 point_id:405 64 4 26 lastest_activated_time:406";
  *(_QWORD *)(v2 + 16) = DungeonScene::findLatestActivatedPoint;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  *(_DWORD *)(v2 + 48) = 0;
  *(_DWORD *)(v2 + 64) = 0;
  __for_range = activated_point_map;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(activated_point_map)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(activated_point_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v5 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    p = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    tmp_point_id = p->first;
    if ( *(_BYTE *)(((unsigned __int64)&p->second >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)p + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p->second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&p->second);
    }
    activated_time = p->second;
    if ( activated_time > *(_DWORD *)(v2 + 64) )
    {
      *(_DWORD *)(v2 + 48) = tmp_point_id;
      *(_DWORD *)(v2 + 64) = activated_time;
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
  v6 = std::make_pair<unsigned int &,unsigned int &>((unsigned int *)(v2 + 48), (unsigned int *)(v2 + 64));
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
  return v6;
};

// Line 421: range 0000000015F9CC02-0000000015F9D155
void __cdecl DungeonScene::tryChangeOwner(DungeonScene *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  bool v4; // r15
  uint32_t v5; // ecx
  Player *v6; // rax
  PlayerBasicComp *BasicComp; // rax
  uint32_t WorldLevel; // r14d
  Player *v9; // rax
  PlayerBasicComp *v10; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  unsigned int val; // [rsp+1Ch] [rbp-104h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_begin; // [rsp+20h] [rbp-100h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_end; // [rsp+28h] [rbp-F8h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>> *__for_range; // [rsp+30h] [rbp-F0h]
  const std::pair<unsigned int const,std::weak_ptr<Player> > *v20; // [rsp+38h] [rbp-E8h]
  std::tuple_element<0,const std::pair<unsigned int const,std::weak_ptr<Player> > >::type *uid; // [rsp+40h] [rbp-E0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::weak_ptr<Player> > >::type *_; // [rsp+48h] [rbp-D8h]
  common::milog::MiLogStream v23; // [rsp+50h] [rbp-D0h] BYREF
  char v24[176]; // [rsp+70h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 4 13 owner_uid:423 64 16 21 select_player_ptr:430 96 16 14 player_ptr:433";
  *(_QWORD *)(v1 + 16) = DungeonScene::tryChangeOwner;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -219021312;
  v3[536862723] = -202178560;
  *(_DWORD *)(v1 + 48) = Scene::getOwnerUid((const Scene *const)this);
  Scene::findPlayer((const Scene *const)(v1 + 96), (uint32_t)this);
  v4 = std::operator!=<Player>(0LL, (const std::shared_ptr<Player> *)(v1 + 96))
    || !Scene::getPlayerCount((const Scene *const)this);
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 96));
  if ( !v4 )
  {
    std::shared_ptr<Player>::shared_ptr((std::shared_ptr<Player> *const)(v1 + 64), 0LL);
    __for_range = (std::map<unsigned int,std::weak_ptr<Player>> *)&this->baseclass_0[424];
    __for_begin._M_node = std::map<unsigned int,std::weak_ptr<Player>>::begin((std::map<unsigned int,std::weak_ptr<Player>> *const)&this->baseclass_0[424])._M_node;
    __for_end._M_node = std::map<unsigned int,std::weak_ptr<Player>>::end((std::map<unsigned int,std::weak_ptr<Player>> *const)&this->baseclass_0[424])._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v20 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator*(&__for_begin);
      uid = std::get<0ul,unsigned int const,std::weak_ptr<Player>>(v20);
      _ = (std::tuple_element<1,const std::pair<unsigned int const,std::weak_ptr<Player> > >::type *)std::get<1ul,unsigned int const,std::weak_ptr<Player>>(v20);
      v5 = (unsigned int)this;
      if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(uid);
      }
      Scene::findPlayer((const Scene *const)(v1 + 96), v5);
      if ( !std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v1 + 96)) )
      {
        if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v1 + 64))
          || (v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64)),
              BasicComp = Player::getBasicComp(v6),
              WorldLevel = PlayerBasicComp::getWorldLevel(BasicComp),
              v9 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96)),
              v10 = Player::getBasicComp(v9),
              WorldLevel > PlayerBasicComp::getWorldLevel(v10)) )
        {
          std::shared_ptr<Player>::operator=(
            (std::shared_ptr<Player> *const)(v1 + 64),
            (const std::shared_ptr<Player> *)(v1 + 96));
        }
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 96));
      std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator++(&__for_begin);
    }
    if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/dungeon/dungeon_scene.cpp",
        "tryChangeOwner",
        448);
      common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
        &v23,
        (const char (*)[29])"select player ptr is nullptr");
      common::milog::MiLogStream::~MiLogStream(&v23);
    }
    else
    {
      std::shared_ptr<Player>::shared_ptr(
        (std::shared_ptr<Player> *const)(v1 + 96),
        (const std::shared_ptr<Player> *)(v1 + 64));
      Scene::setOwnPlayer((Scene *const)this, (PlayerPtr *)(v1 + 96));
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 96));
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/dungeon/dungeon_scene.cpp",
        "tryChangeOwner",
        453);
      v12 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
              &v23,
              (const char (*)[49])"dungeon scene change owner succ, old owner uid: ");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v1 + 48));
      v14 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v13, (const char (*)[15])" ,select uid: ");
      v15 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      val = Player::getUid(v15);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
      common::milog::MiLogStream::~MiLogStream(&v23);
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 64));
  }
  if ( v24 == (char *)v1 )
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

// Line 458: range 0000000015F9D156-0000000015F9D39A
int32_t __cdecl DungeonScene::notifyActivatedWayPoints(DungeonScene *const this, Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::pair<unsigned int const,unsigned int> *v5; // rax
  std::__shared_ptr_access<proto::DungeonWayPointNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  int32_t result; // eax
  uint32_t point_id; // [rsp+1Ch] [rbp-A4h]
  std::map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-A0h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_end; // [rsp+28h] [rbp-98h] BYREF
  std::map<unsigned int,unsigned int> *__for_range; // [rsp+30h] [rbp-90h]
  std::pair<unsigned int const,unsigned int> *p; // [rsp+38h] [rbp-88h]
  std::shared_ptr<proto::DungeonWayPointNotify> __r; // [rsp+40h] [rbp-80h] BYREF
  char v14[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 notify_ptr:459";
  *(_QWORD *)(v2 + 16) = DungeonScene::notifyActivatedWayPoints;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::tools::perf::make_shared<proto::DungeonWayPointNotify>();
  __for_range = &this->activated_way_point_map_;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->activated_way_point_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(&this->activated_way_point_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v5 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    p = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    point_id = p->first;
    v6 = std::__shared_ptr_access<proto::DungeonWayPointNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::DungeonWayPointNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    proto::DungeonWayPointNotify::add_active_way_point_list(v6, point_id);
    std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
  std::dynamic_pointer_cast<google::protobuf::Message const,proto::DungeonWayPointNotify>(&__r);
  Player::sendMessage(player, (common::minet::ConstMessagePtr *)&__r, 0LL);
  std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
  std::shared_ptr<proto::DungeonWayPointNotify>::~shared_ptr((std::shared_ptr<proto::DungeonWayPointNotify> *const)(v2 + 32));
  result = 0;
  if ( v14 == (char *)v2 )
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

// Line 472: range 0000000015F9D3EE-0000000015F9D65A
int32_t __cdecl DungeonScene::notifyActivatedWayPointToAll(DungeonScene *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<unsigned int const,unsigned int> *v4; // rax
  int32_t result; // eax
  std::map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-F0h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_end; // [rsp+28h] [rbp-E8h] BYREF
  std::map<unsigned int,unsigned int> *__for_range; // [rsp+30h] [rbp-E0h]
  std::pair<unsigned int const,unsigned int> *p; // [rsp+38h] [rbp-D8h]
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+40h] [rbp-D0h] BYREF
  char v11[176]; // [rsp+60h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 48 48 10 notify:473";
  *(_QWORD *)(v1 + 16) = DungeonScene::notifyActivatedWayPointToAll;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862723] = -202116109;
  proto::DungeonWayPointNotify::DungeonWayPointNotify((proto::DungeonWayPointNotify *const)(v1 + 48));
  __for_range = &this->activated_way_point_map_;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->activated_way_point_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(&this->activated_way_point_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v4 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    p = v4;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v4);
    }
    proto::DungeonWayPointNotify::add_active_way_point_list((proto::DungeonWayPointNotify *const)(v1 + 48), p->first);
    std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
  std::function<ForeachPolicy ()(Player &)>::function<DungeonScene::notifyActivatedWayPointToAll(void)::{lambda(Player &)#1},void,void>(
    &p_func,
    (DungeonScene::notifyActivatedWayPointToAll::<lambda(Player&)>)(v1 + 48));
  Scene::foreachPlayer((Scene *const)this, &p_func);
  std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
  proto::DungeonWayPointNotify::~DungeonWayPointNotify((proto::DungeonWayPointNotify *const)(v1 + 48));
  result = 0;
  if ( v11 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 479: range 0000000015F9D39C-0000000015F9D3EC
ForeachPolicy __cdecl DungeonScene::notifyActivatedWayPointToAll(void)::{lambda(Player &)#1}::operator()(
        const DungeonScene::notifyActivatedWayPointToAll::<lambda(Player&)> *const __closure,
        Player *player)
{
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::sendProto(player, __closure->__notify);
  return 0;
};

// Line 489: range 0000000015F9D6AE-0000000015F9D881
int32_t __cdecl DungeonScene::notifyActivatedWayPointToAll(DungeonScene *const this, uint32_t point_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t result; // eax
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+10h] [rbp-D0h] BYREF
  char v7[176]; // [rsp+30h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 48 48 10 notify:492";
  *(_QWORD *)(v2 + 16) = DungeonScene::notifyActivatedWayPointToAll;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  if ( !std::map<unsigned int,unsigned int>::empty(&this->activated_way_point_map_) )
  {
    proto::DungeonWayPointNotify::DungeonWayPointNotify((proto::DungeonWayPointNotify *const)(v2 + 48));
    proto::DungeonWayPointNotify::add_active_way_point_list((proto::DungeonWayPointNotify *const)(v2 + 48), point_id);
    proto::DungeonWayPointNotify::set_is_add((proto::DungeonWayPointNotify *const)(v2 + 48), 1);
    std::function<ForeachPolicy ()(Player &)>::function<DungeonScene::notifyActivatedWayPointToAll(unsigned int)::{lambda(Player &)#1},void,void>(
      &p_func,
      (DungeonScene::notifyActivatedWayPointToAll::<lambda(Player&)>)(v2 + 48));
    Scene::foreachPlayer((Scene *const)this, &p_func);
    std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
    proto::DungeonWayPointNotify::~DungeonWayPointNotify((proto::DungeonWayPointNotify *const)(v2 + 48));
  }
  result = 0;
  if ( v7 == (char *)v2 )
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

// Line 495: range 0000000015F9D65C-0000000015F9D6AC
ForeachPolicy __cdecl DungeonScene::notifyActivatedWayPointToAll(unsigned int)::{lambda(Player &)#1}::operator()(
        const DungeonScene::notifyActivatedWayPointToAll::<lambda(Player&)> *const __closure,
        Player *player)
{
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::sendProto(player, __closure->__notify);
  return 0;
};

// Line 505: range 0000000015F9D882-0000000015F9D8A9
std::pair<unsigned int,unsigned int> __cdecl DungeonScene::findLastestActivatedWayPoint(DungeonScene *const this)
{
  return DungeonScene::findLatestActivatedPoint(this, &this->activated_way_point_map_);
};

// Line 511: range 0000000015F9D8AA-0000000015F9DCA2
uint32_t __cdecl DungeonScene::findNearestActivatedPoint(DungeonScene *const this, const Vector3 *pos)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  __m128i v5; // xmm0
  std::pair<unsigned int const,unsigned int> *v6; // rax
  uint32_t v7; // esi
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::__shared_ptr_access<data::DungeonWayPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  uint32_t result; // eax
  uint32_t point_id; // [rsp+14h] [rbp-FCh]
  float min_distance; // [rsp+18h] [rbp-F8h]
  float distance; // [rsp+1Ch] [rbp-F4h]
  std::map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-F0h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_end; // [rsp+28h] [rbp-E8h] BYREF
  std::map<unsigned int,unsigned int> *__for_range; // [rsp+30h] [rbp-E0h]
  std::pair<unsigned int const,unsigned int> *p; // [rsp+38h] [rbp-D8h]
  Vector3 pos2; // [rsp+44h] [rbp-CCh] BYREF
  std::shared_ptr<Config> v22; // [rsp+50h] [rbp-C0h] BYREF
  common::milog::MiLogStream v23; // [rsp+60h] [rbp-B0h] BYREF
  char v24[144]; // [rsp+80h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 16 tmp_point_id:516 64 16 17 way_point_ptr:517";
  *(_QWORD *)(v2 + 16) = DungeonScene::findNearestActivatedPoint;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  point_id = 0;
  v5 = (__m128i)0x7F7FFFFFu;
  min_distance = 3.4028235e38;
  __for_range = &this->activated_way_point_map_;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->activated_way_point_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(&this->activated_way_point_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    p = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      *(double *)v5.m128i_i64 = __asan_report_load4(v6);
    }
    *(_DWORD *)(v2 + 48) = p->first;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v22);
    v7 = (unsigned int)std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22)
       + 93080;
    if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[120] >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->baseclass_0[120] >> 3) + 0x7FFF8000) <= 3 )
    {
      *(double *)v5.m128i_i64 = __asan_report_load4(&this->baseclass_0[120]);
    }
    JsonConfigMgr::findScenePoint<data::DungeonWayPoint>(
      (const JsonConfigMgr *const)(v2 + 64),
      v7,
      *(_DWORD *)&this->baseclass_0[120]);
    std::shared_ptr<Config>::~shared_ptr(&v22);
    if ( std::operator==<data::DungeonWayPoint>((const std::shared_ptr<data::DungeonWayPoint> *)(v2 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/dungeon_scene.cpp",
        "findNearestActivatedPoint",
        520);
      v8 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
             &v23,
             (const char (*)[32])"findScenePoint fails, scene_id:");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
             v8,
             (const unsigned int *)&this->baseclass_0[120]);
      v10 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v9, (const char (*)[12])", point_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v23);
    }
    else
    {
      v11 = std::__shared_ptr_access<data::DungeonWayPoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::DungeonWayPoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      Vector3::Vector3(&pos2, &v11->pos);
      *(float *)v5.m128i_i32 = getPlaneDistance(pos, &pos2);
      distance = COERCE_FLOAT(_mm_cvtsi128_si32(v5));
      v5 = (__m128i)LODWORD(min_distance);
      if ( min_distance > distance )
      {
        point_id = *(_DWORD *)(v2 + 48);
        v5 = (__m128i)LODWORD(distance);
        min_distance = distance;
      }
    }
    std::shared_ptr<data::DungeonWayPoint>::~shared_ptr((std::shared_ptr<data::DungeonWayPoint> *const)(v2 + 64));
    std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
  result = point_id;
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

// Line 535: range 0000000015F9DCA4-0000000015F9DE25
int32_t __cdecl DungeonScene::addTimer(DungeonScene *const this)
{
  std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  SceneTimer *v3; // rax
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator==<SceneTimer>(&this->settle_timer_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/dungeon_scene.cpp",
      "addTimer",
      538);
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      &v5,
      (const char (*)[29])"settle_timer_ptr_ is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v5);
    return -1;
  }
  else
  {
    v2 = std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->settle_timer_ptr_);
    if ( !common::tools::MiTimer::isActive(v2)
      && (v3 = std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->settle_timer_ptr_),
          SceneTimer::startS(v3, 1u, 1, "./src/dungeon/dungeon_scene.cpp", "addTimer", 542)) )
    {
      common::milog::MiLogStream::create(
        &v5,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/dungeon_scene.cpp",
        "addTimer",
        544);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v5,
        (const char (*)[26])"settle_timer start failed");
      common::milog::MiLogStream::~MiLogStream(&v5);
      return -1;
    }
    else
    {
      return 0;
    }
  }
};

// Line 553: range 0000000015F9DE9C-0000000015F9E3EF
// local variable allocation has failed, the output may be wrong!
void __cdecl DungeonScene::onTimer(DungeonScene *const this, uint64_t now_ms)
{
  uint64_t v2; // rsi
  DungeonScene *v3; // rdx
  unsigned __int64 v4; // rax
  common::milog::MiLogStream *v5; // rdx
  GameserverService *v6; // rax
  DungeonMgr *p_dungeon_mgr; // rcx
  DungeonExcelConfigMgr *p_dungeon_config_mgr; // rcx
  common::milog::MiLogStream *v9; // rax
  char v10; // al
  common::milog::MiLogStream *v11; // rdx
  uint32_t now; // [rsp+10h] [rbp-60h]
  const data::DungeonExcelConfig *dungeon_config_ptr; // [rsp+18h] [rbp-58h]
  std::shared_ptr<Config> v14; // [rsp+20h] [rbp-50h] BYREF
  common::milog::MiLogStream v15; // [rsp+30h] [rbp-40h] BYREF

  Scene::onTimer((Scene *const)this, v2);
  now = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&this->last_location_notify_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_location_notify_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_location_notify_time_);
  }
  if ( now > this->last_location_notify_time_ + 5 )
  {
    this->last_location_notify_time_ = now;
    v3 = this;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v4 = *(_QWORD *)this->baseclass_0 + 488LL;
    if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
      v4 = __asan_report_load8();
    (*(void (__fastcall **)(DungeonScene *))v4)(v3);
  }
  if ( Scene::getPlayerCount((const Scene *const)this) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v14);
    p_dungeon_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14)->design_config.txt_config_mgr.dungeon_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->dungeon_id_);
    }
    dungeon_config_ptr = data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(
                           p_dungeon_config_mgr,
                           this->dungeon_id_);
    std::shared_ptr<Config>::~shared_ptr(&v14);
    if ( dungeon_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_result_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->dungeon_result_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->dungeon_result_);
      }
      if ( this->dungeon_result_ == DUNGEON_RESULT_NONE )
        goto LABEL_29;
      if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_close_time_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( !this->dungeon_close_time_ || now < this->dungeon_close_time_ )
        goto LABEL_29;
      if ( *(_BYTE *)(((unsigned __int64)&this->is_force_quit_ >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this - 117) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_force_quit_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&this->is_force_quit_);
      }
      if ( !this->is_force_quit_ && !DungeonScene::getIsInRestartProcess(this) )
        v10 = 1;
      else
LABEL_29:
        v10 = 0;
      if ( v10 )
      {
        common::milog::MiLogStream::create(
          &v15,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/dungeon/dungeon_scene.cpp",
          "onTimer",
          584);
        v11 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                &v15,
                (const char (*)[43])"[DUNGEON] settle timeout, kick all players");
        common::milog::MiLogStream::operator<<<DungeonScene,(DungeonScene*)0>(v11, this);
        common::milog::MiLogStream::~MiLogStream(&v15);
        DungeonScene::forceAllPlayerQuit(this);
        if ( *(_BYTE *)(((unsigned __int64)&this->is_force_quit_ >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)this - 117) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_force_quit_ >> 3)
                                                             + 0x7FFF8000) )
        {
          __asan_report_store1(&this->is_force_quit_);
        }
        this->is_force_quit_ = 1;
      }
      std::function<ForeachPolicy ()(Player &)>::function<DungeonScene::onTimer(unsigned long)::{lambda(Player &)#1},void,void>(
        (std::function<ForeachPolicy(Player&)> *const)&v15,
        *(DungeonScene::onTimer::<lambda(Player&)> *)&this);
      Scene::foreachPlayer((Scene *const)this, (std::function<ForeachPolicy(Player&)> *)&v15);
      std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v15);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/dungeon_scene.cpp",
        "onTimer",
        577);
      v9 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
             &v15,
             (const char (*)[32])"findDungeonExcelConfig failed: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->dungeon_id_);
      common::milog::MiLogStream::~MiLogStream(&v15);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/dungeon/dungeon_scene.cpp",
      "onTimer",
      567);
    v5 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v15,
           (const char (*)[42])"[DUNGEON] dungeon is nobody, need destroy");
    common::milog::MiLogStream::operator<<<DungeonScene,(DungeonScene*)0>(v5, this);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v6 = ServiceBox::findService<GameserverService>();
    p_dungeon_mgr = &GameserverService::getGameThreadLocal(v6)->dungeon_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->inst_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->inst_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->inst_id_);
    }
    DungeonMgr::destroyDungeon(p_dungeon_mgr, this->inst_id_);
  }
};

// Line 589: range 0000000015F9DE26-0000000015F9DE9B
ForeachPolicy __cdecl DungeonScene::onTimer(unsigned long)::{lambda(Player &)#1}::operator()(
        const DungeonScene::onTimer::<lambda(Player&)> *const __closure,
        Player *player)
{
  PlayerTowerComp *TowerComp; // rax
  PlayerTowerComp *v3; // rcx

  TowerComp = Player::getTowerComp(player);
  if ( PlayerTowerComp::isInTowerLevel(TowerComp) )
  {
    v3 = Player::getTowerComp(player);
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__now_ms >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    PlayerTowerComp::onTimer(v3, __closure->__now_ms);
  }
  return 0;
};

// Line 600: range 0000000015F9E3F0-0000000015F9E796
void __cdecl DungeonScene::notifyPlayerOpenStatue(DungeonScene *const this, uint32_t uid)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rdx
  int32_t *p_param1; // rax
  SceneBlockGroupComp *BlockGroupComp; // r14
  Player *v8; // rax
  PlayerEventComp *EventComp; // r14
  unsigned int __args_0; // [rsp+1Ch] [rbp-E4h] BYREF
  std::shared_ptr<Event> p_event_ptr; // [rsp+20h] [rbp-E0h] BYREF
  common::milog::MiLogStream v12; // [rsp+30h] [rbp-D0h] BYREF
  char v13[176]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 13 event_ptr:602 64 16 14 player_ptr:611 96 16 20 server_event_ptr:614";
  *(_QWORD *)(v2 + 16) = DungeonScene::notifyPlayerOpenStatue;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  EventUtil::createEvent((data::EventType)(v2 + 32));
  if ( std::operator==<Event>((const std::shared_ptr<Event> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/dungeon_scene.cpp",
      "notifyPlayerOpenStatue",
      605);
    common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
      &v12,
      (const char (*)[42])"createEvent(EVENT_DUNGEON_ONTIMER) failed");
    common::milog::MiLogStream::~MiLogStream(&v12);
  }
  else
  {
    v5 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    p_param1 = &v5->param1;
    if ( *(_BYTE *)(((unsigned __int64)p_param1 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_param1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_param1 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(p_param1);
    }
    v5->param1 = uid;
    BlockGroupComp = Scene::getBlockGroupComp((Scene *const)this);
    std::shared_ptr<Event>::shared_ptr(&p_event_ptr, (const std::shared_ptr<Event> *)(v2 + 32));
    SceneBlockGroupComp::broadcastGroupLuaEvent(BlockGroupComp, &p_event_ptr);
    std::shared_ptr<Event>::~shared_ptr(&p_event_ptr);
    Scene::findPlayer((const Scene *const)(v2 + 64), (uint32_t)this);
    if ( std::operator!=<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 64)) )
    {
      __args_0 = DungeonScene::getDungeonId(this);
      common::tools::perf::make_shared<DungeonOpenStatueEvent,unsigned int>((unsigned int *)&p_event_ptr, &__args_0);
      std::shared_ptr<BaseEvent>::shared_ptr<DungeonOpenStatueEvent,void>(
        (std::shared_ptr<BaseEvent> *const)(v2 + 96),
        (std::shared_ptr<DungeonOpenStatueEvent> *)&p_event_ptr);
      std::shared_ptr<DungeonOpenStatueEvent>::~shared_ptr((std::shared_ptr<DungeonOpenStatueEvent> *const)&p_event_ptr);
      v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      EventComp = Player::getEventComp(v8);
      std::shared_ptr<BaseEvent>::shared_ptr(
        (std::shared_ptr<BaseEvent> *const)&p_event_ptr,
        (const std::shared_ptr<BaseEvent> *)(v2 + 96));
      PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&p_event_ptr);
      std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&p_event_ptr);
      std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v2 + 96));
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
  }
  std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v2 + 32));
  if ( v13 == (char *)v2 )
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

// Line 621: range 0000000015F9E798-0000000015F9E7D0
int32_t __cdecl DungeonScene::trySettle(DungeonScene *const this)
{
  DungeonResult ret; // [rsp+1Ch] [rbp-4h]

  ret = DungeonScene::checkDungeonResult(this);
  if ( ret )
    DungeonScene::settle(this, ret);
  return 0;
};

// Line 631: range 0000000015F9E7D2-0000000015F9E949
DungeonResult __cdecl DungeonScene::checkDungeonResult(DungeonScene *const this)
{
  std::__shared_ptr_access<DungeonCondition,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  ConditionState CondState; // eax
  data::LogicType logic_type; // eax
  uint32_t meet_count; // [rsp+18h] [rbp-38h]
  uint32_t not_meet_count; // [rsp+1Ch] [rbp-34h]
  std::vector<std::shared_ptr<DungeonCondition>>::iterator __for_begin; // [rsp+20h] [rbp-30h] BYREF
  std::vector<std::shared_ptr<DungeonCondition>>::iterator __for_end; // [rsp+28h] [rbp-28h] BYREF
  std::vector<std::shared_ptr<DungeonCondition>> *__for_range; // [rsp+30h] [rbp-20h]
  DungeonConditionPtr *cond_ptr; // [rsp+38h] [rbp-18h]

  meet_count = 0;
  not_meet_count = 0;
  __for_range = &this->cond_vec_;
  __for_begin._M_current = std::vector<std::shared_ptr<DungeonCondition>>::begin(&this->cond_vec_)._M_current;
  __for_end._M_current = std::vector<std::shared_ptr<DungeonCondition>>::end(&this->cond_vec_)._M_current;
  while ( __gnu_cxx::operator!=<std::shared_ptr<DungeonCondition> *,std::vector<std::shared_ptr<DungeonCondition>>>(
            &__for_begin,
            &__for_end) )
  {
    cond_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<DungeonCondition> *,std::vector<std::shared_ptr<DungeonCondition>>>::operator*(&__for_begin);
    v1 = std::__shared_ptr_access<DungeonCondition,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonCondition,(__gnu_cxx::_Lock_policy)2,false,false> *const)cond_ptr);
    CondState = DungeonCondition::getCondState(v1);
    if ( CondState == COND_STATE_MEET )
    {
      ++meet_count;
    }
    else if ( CondState == COND_STATE_NOT_MEET )
    {
      ++not_meet_count;
    }
    __gnu_cxx::__normal_iterator<std::shared_ptr<DungeonCondition> *,std::vector<std::shared_ptr<DungeonCondition>>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->logic_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->logic_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->logic_type_);
  }
  logic_type = this->logic_type_;
  if ( logic_type > LOGIC_AND )
  {
    if ( logic_type == LOGIC_OR )
    {
      if ( meet_count )
        return 1;
      if ( not_meet_count >= std::vector<std::shared_ptr<DungeonCondition>>::size(&this->cond_vec_) )
        return 2;
    }
  }
  else if ( logic_type >= LOGIC_NONE )
  {
    if ( meet_count >= std::vector<std::shared_ptr<DungeonCondition>>::size(&this->cond_vec_) )
      return 1;
    if ( not_meet_count )
      return 2;
  }
  return 0;
};

// Line 670: range 0000000015F9E94A-0000000015F9EAD3
int32_t __fastcall DungeonScene::settleByGm(DungeonScene *const this, uint32_t result)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  int32_t v7; // eax
  unsigned int val; // [rsp+18h] [rbp-88h] BYREF
  DungeonResult res; // [rsp+1Ch] [rbp-84h]
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-80h] BYREF
  char v11[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 10 result:669";
  *(_QWORD *)(v2 + 16) = DungeonScene::settleByGm;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = result;
  res = *(_DWORD *)(v2 + 32);
  common::milog::MiLogStream::create(
    &v10,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/dungeon/dungeon_scene.cpp",
    "settleByGm",
    672);
  val = DungeonScene::getDungeonId(this);
  v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(&v10, &val);
  v6 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v5, (const char (*)[9])" result:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
  common::milog::MiLogStream::~MiLogStream(&v10);
  v7 = DungeonScene::settle(this, res);
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v7;
};

// Line 678: range 0000000015F9F2E6-0000000015F9FE9A
__int64 __fastcall DungeonScene::settle(DungeonScene *const this, DungeonResult result)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r14
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  DungeonResult v7; // ecx
  uint32_t Now; // edi
  uint32_t SceneTimeSeconds; // edx
  const data::DungeonExcelConfigMgrBase *p_dungeon_config_mgr; // rdi
  common::milog::MiLogStream *v11; // rax
  unsigned int v12; // ebx
  int v13; // eax
  uint32_t PlayerQuitReason; // eax
  common::milog::MiLogStream *v15; // rax
  uint64_t v16; // rcx
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rdx
  int32_t *p_param1; // rax
  SceneBlockGroupComp *BlockGroupComp; // rbx
  __int64 v20; // rax
  bool is_by_quit; // [rsp+4Bh] [rbp-105h]
  unsigned int val; // [rsp+4Ch] [rbp-104h] BYREF
  uint32_t settle_wait_time; // [rsp+50h] [rbp-100h]
  uint32_t series_id; // [rsp+54h] [rbp-FCh]
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_begin; // [rsp+58h] [rbp-F8h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_end; // [rsp+60h] [rbp-F0h] BYREF
  const data::DungeonExcelConfig *dungeon_config_ptr; // [rsp+68h] [rbp-E8h]
  std::map<unsigned int,std::weak_ptr<Player>> *__for_range; // [rsp+70h] [rbp-E0h]
  const std::pair<unsigned int const,std::weak_ptr<Player> > *v30; // [rsp+78h] [rbp-D8h]
  std::tuple_element<0,const std::pair<unsigned int const,std::weak_ptr<Player> > >::type *uid; // [rsp+80h] [rbp-D0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::weak_ptr<Player> > >::type *_; // [rsp+88h] [rbp-C8h]
  std::shared_ptr<Config> v33; // [rsp+90h] [rbp-C0h] BYREF
  common::milog::MiLogStream v34; // [rsp+A0h] [rbp-B0h] BYREF
  char v35[144]; // [rsp+C0h] [rbp-90h] BYREF
  DungeonScene::settle::<lambda(Player&)> v36; // 0:rsi.8,8:edx.4
  DungeonScene::settle::<lambda(Player&)>_0 v37; // 0:rsi.8,8:edx.4

  v2 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 10 result:677 64 16 11 evt_ptr:800";
  *(_QWORD *)(v2 + 16) = DungeonScene::settle;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = result;
  common::milog::MiLogStream::create(
    &v34,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/dungeon/dungeon_scene.cpp",
    "settle",
    679);
  val = DungeonScene::getDungeonId(this);
  v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(&v34, &val);
  v6 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v5, (const char (*)[9])" result:");
  common::milog::MiLogStream::operator<<<DungeonResult,(DungeonResult*)0>(v6, (const DungeonResult *)(v2 + 48));
  common::milog::MiLogStream::~MiLogStream(&v34);
  v7 = *(_DWORD *)(v2 + 48);
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_result_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_result_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dungeon_result_);
  }
  this->dungeon_result_ = v7;
  Now = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_settle_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_settle_time_ >> 3)
                                                         + 0x7FFF8000) )
  {
    Now = (_DWORD)this + 2156;
    __asan_report_store4(&this->dungeon_settle_time_);
  }
  this->dungeon_settle_time_ = Now;
  SceneTimeSeconds = Scene::getSceneTimeSeconds((Scene *const)this);
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_settle_scene_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_settle_scene_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dungeon_settle_scene_time_);
  }
  this->dungeon_settle_scene_time_ = SceneTimeSeconds;
  settle_wait_time = 0;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v33);
  p_dungeon_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v33)->design_config.txt_config_mgr.dungeon_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) )
  {
    p_dungeon_config_mgr = (const data::DungeonExcelConfigMgrBase *)&this->dungeon_id_;
    __asan_report_load4(&this->dungeon_id_);
  }
  dungeon_config_ptr = data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(p_dungeon_config_mgr, this->dungeon_id_);
  std::shared_ptr<Config>::~shared_ptr(&v33);
  if ( !dungeon_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v34,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/dungeon_scene.cpp",
      "settle",
      687);
    v11 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
            &v34,
            (const char (*)[42])"findDungeonExcelConfig fails, dungeon_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->dungeon_id_);
    common::milog::MiLogStream::~MiLogStream(&v34);
    v12 = -1;
    goto LABEL_48;
  }
  v13 = *(_DWORD *)(v2 + 48);
  if ( v13 == 1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->settle_countdown_time >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)dungeon_config_ptr + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->settle_countdown_time >> 3)
                                                                         + 0x7FFF8000) )
    {
      __asan_report_load4(&dungeon_config_ptr->settle_countdown_time);
    }
    settle_wait_time = dungeon_config_ptr->settle_countdown_time;
    common::milog::MiLogStream::create(
      &v34,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/dungeon/dungeon_scene.cpp",
      "settle",
      695);
    common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
      &v34,
      (const char (*)[40])"[REVIVIE] settle DUNGEON_RESULT_SUCCEED");
    common::milog::MiLogStream::~MiLogStream(&v34);
    DungeonScene::reviveAllDeathPlayer(this, 1);
  }
  else
  {
    if ( v13 <= 0 || (unsigned int)(v13 - 2) > 1 )
    {
      common::milog::MiLogStream::create(
        &v34,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/dungeon_scene.cpp",
        "settle",
        731);
      v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v34, (const char (*)[16])"invalid result:");
      common::milog::MiLogStream::operator<<<DungeonResult,(DungeonResult*)0>(v15, (const DungeonResult *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v34);
      v12 = -1;
      goto LABEL_48;
    }
    is_by_quit = 0;
    if ( std::map<unsigned int,std::weak_ptr<Player>>::size((const std::map<unsigned int,std::weak_ptr<Player>> *const)&this->baseclass_0[424]) == 1 )
    {
      __for_range = (std::map<unsigned int,std::weak_ptr<Player>> *)&this->baseclass_0[424];
      __for_begin._M_node = std::map<unsigned int,std::weak_ptr<Player>>::begin((std::map<unsigned int,std::weak_ptr<Player>> *const)&this->baseclass_0[424])._M_node;
      __for_end._M_node = std::map<unsigned int,std::weak_ptr<Player>>::end(__for_range)._M_node;
      if ( std::operator!=(&__for_begin, &__for_end) )
      {
        v30 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator*(&__for_begin);
        uid = std::get<0ul,unsigned int const,std::weak_ptr<Player>>(v30);
        _ = (std::tuple_element<1,const std::pair<unsigned int const,std::weak_ptr<Player> > >::type *)std::get<1ul,unsigned int const,std::weak_ptr<Player>>(v30);
        if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(uid);
        }
        PlayerQuitReason = DungeonScene::getPlayerQuitReason(this, *uid);
        if ( PlayerQuitReason <= 0xD && ((1LL << PlayerQuitReason) & 0x2802) != 0 )
          is_by_quit = 1;
      }
    }
    if ( is_by_quit )
    {
      if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->quit_settle_countdown_time >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)dungeon_config_ptr + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->quit_settle_countdown_time >> 3)
                                                                           + 0x7FFF8000) )
      {
        __asan_report_load4(&dungeon_config_ptr->quit_settle_countdown_time);
      }
      settle_wait_time = dungeon_config_ptr->quit_settle_countdown_time;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->fail_settle_countdown_time >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->fail_settle_countdown_time >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&dungeon_config_ptr->fail_settle_countdown_time);
      }
      settle_wait_time = dungeon_config_ptr->fail_settle_countdown_time;
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_settle_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_settle_time_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->dungeon_settle_time_);
  }
  v16 = this->dungeon_settle_time_ + settle_wait_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_close_time_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->dungeon_close_time_);
  this->dungeon_close_time_ = v16;
  std::function<ForeachPolicy ()(Group &)>::function<DungeonScene::settle(DungeonResult)::{lambda(Group &)#1},void,void>(
    (std::function<ForeachPolicy(Group&)> *const)&v34,
    (DungeonScene::settle::<lambda(Group&)>)((((_BYTE)this + 108) & 7) + 3));
  Scene::foreachGroup((Scene *const)this, (std::function<ForeachPolicy(Group&)> *)&v34);
  std::function<ForeachPolicy ()(Group &)>::~function((std::function<ForeachPolicy(Group&)> *const)&v34);
  series_id = 0;
  if ( !std::vector<unsigned int>::empty(&this->exhibition_card_vec_) )
  {
    v36.__series_id = series_id;
    v36.__this = this;
    std::function<ForeachPolicy ()(Player &)>::function<DungeonScene::settle(DungeonResult)::{lambda(Player &)#3},void,void>(
      (std::function<ForeachPolicy(Player&)> *const)&v34,
      v36);
    Scene::foreachPlayer((Scene *const)this, (std::function<ForeachPolicy(Player&)> *)&v34);
    std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v34);
  }
  v37.__result = *(_DWORD *)(v2 + 48);
  v37.__this = this;
  std::function<ForeachPolicy ()(Player &)>::function<DungeonScene::settle(DungeonResult)::{lambda(Player &)#4},void,void>(
    (std::function<ForeachPolicy(Player&)> *const)&v34,
    v37);
  Scene::foreachPlayer((Scene *const)this, (std::function<ForeachPolicy(Player&)> *)&v34);
  std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v34);
  EventUtil::createEvent((data::EventType)(v2 + 64));
  if ( std::operator!=<Event>((const std::shared_ptr<Event> *)(v2 + 64), 0LL) && *(_DWORD *)(v2 + 48) == 1 )
  {
    v17 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    p_param1 = &v17->param1;
    if ( *(_BYTE *)(((unsigned __int64)p_param1 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_param1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_param1 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(p_param1);
    }
    v17->param1 = 1;
  }
  BlockGroupComp = Scene::getBlockGroupComp((Scene *const)this);
  std::shared_ptr<Event>::shared_ptr((std::shared_ptr<Event> *const)&v33, (const std::shared_ptr<Event> *)(v2 + 64));
  SceneBlockGroupComp::broadcastGroupLuaEvent(BlockGroupComp, (EventPtr *)&v33);
  std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)&v33);
  DungeonScene::recordSettleSnapshot(this);
  v12 = 0;
  std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v2 + 64));
LABEL_48:
  v20 = v12;
  if ( v35 == (char *)v2 )
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
  return v20;
};

// Line 737: range 0000000015F9EAD4-0000000015F9EB0D
ForeachPolicy __cdecl DungeonScene::settle(DungeonResult)::{lambda(Group &)#1}::operator()(
        const DungeonScene::settle::<lambda(Group&)> *const __closure,
        Group *group)
{
  ChallengeComp *ChallengeComp; // rax

  ChallengeComp = Group::getChallengeComp(group);
  ChallengeComp::finishUnfinishedChallenges(ChallengeComp, NONE, 0, PlayerLogBodyChallengeFinish_FinishType_EXIT_SIGHT);
  return 0;
};

// Line 749: range 0000000015F9EB0E-0000000015F9EE82
ForeachPolicy __cdecl DungeonScene::settle(DungeonResult)::{lambda(Player &)#2}::operator()(
        const DungeonScene::settle::<lambda(Player&)> *const __closure,
        Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::map<unsigned int,proto::DungeonSettleExhibitionInfo> *p_dungeon_settle_exhibition_info_map; // r14
  PlayerExhibitionComp *ExhibitionComp; // rcx
  PlayerMpComp *MpComp; // rax
  ForeachPolicy result; // eax
  std::map<unsigned int,proto::DungeonSettleExhibitionInfo>::key_type __k; // [rsp+14h] [rbp-CCh] BYREF
  std::vector<ExhibitonCardParam>::iterator __for_begin; // [rsp+18h] [rbp-C8h] BYREF
  std::vector<ExhibitonCardParam>::iterator __for_end; // [rsp+20h] [rbp-C0h] BYREF
  proto::DungeonSettleExhibitionInfo *dungeon_settle_exhibition_info; // [rsp+28h] [rbp-B8h]
  std::vector<ExhibitonCardParam> *__for_range; // [rsp+30h] [rbp-B0h]
  proto::OnlinePlayerInfo *online_player_info; // [rsp+38h] [rbp-A8h]
  const ExhibitonCardParam *param; // [rsp+40h] [rbp-A0h]
  proto::ExhibitionDisplayInfo *card_info; // [rsp+48h] [rbp-98h]
  char v17[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 18 card_param_vec:753";
  *(_QWORD *)(v2 + 16) = DungeonScene::settle(DungeonResult)::{lambda(Player &)#2}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  p_dungeon_settle_exhibition_info_map = &__closure->__this->dungeon_settle_exhibition_info_map_;
  __k = Player::getUid(player);
  dungeon_settle_exhibition_info = std::map<unsigned int,proto::DungeonSettleExhibitionInfo>::operator[](
                                     p_dungeon_settle_exhibition_info_map,
                                     &__k);
  proto::DungeonSettleExhibitionInfo::Clear(dungeon_settle_exhibition_info);
  ExhibitionComp = Player::getExhibitionComp(player);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__series_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&__closure->__series_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&__closure->__series_id);
  }
  PlayerExhibitionComp::getSettleCardVec(
    (std::vector<ExhibitonCardParam> *)(v2 + 32),
    ExhibitionComp,
    __closure->__series_id);
  __for_range = (std::vector<ExhibitonCardParam> *)(v2 + 32);
  __for_begin._M_current = std::vector<ExhibitonCardParam>::begin((std::vector<ExhibitonCardParam> *const)(v2 + 32))._M_current;
  __for_end._M_current = std::vector<ExhibitonCardParam>::end(__for_range)._M_current;
  while ( __gnu_cxx::operator!=<ExhibitonCardParam *,std::vector<ExhibitonCardParam>>(&__for_begin, &__for_end) )
  {
    param = __gnu_cxx::__normal_iterator<ExhibitonCardParam *,std::vector<ExhibitonCardParam>>::operator*(&__for_begin);
    card_info = proto::DungeonSettleExhibitionInfo::add_card_list(dungeon_settle_exhibition_info);
    if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(param);
    }
    proto::ExhibitionDisplayInfo::set_id(card_info, param->card_id);
    if ( *(_BYTE *)(((unsigned __int64)&param->card_param >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->card_param >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&param->card_param);
    }
    proto::ExhibitionDisplayInfo::set_param(card_info, param->card_param);
    __gnu_cxx::__normal_iterator<ExhibitonCardParam *,std::vector<ExhibitonCardParam>>::operator++(&__for_begin);
  }
  online_player_info = proto::DungeonSettleExhibitionInfo::mutable_player_info(dungeon_settle_exhibition_info);
  MpComp = Player::getMpComp(player);
  PlayerMpComp::fillOnlinePlayerInfo(MpComp, online_player_info);
  std::vector<ExhibitonCardParam>::~vector((std::vector<ExhibitonCardParam> *const)(v2 + 32));
  result = FOREACH_CONTINUE;
  if ( v17 == (char *)v2 )
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

// Line 769: range 0000000015F9EE84-0000000015F9F1EC
ForeachPolicy __cdecl DungeonScene::settle(DungeonResult)::{lambda(Player &)#3}::operator()(
        const DungeonScene::settle::<lambda(Player&)> *const __closure,
        Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::map<unsigned int,proto::DungeonSettleExhibitionInfo> *p_dungeon_settle_exhibition_info_map; // r14
  PlayerExhibitionComp *ExhibitionComp; // rcx
  PlayerMpComp *MpComp; // rax
  ForeachPolicy result; // eax
  std::map<unsigned int,proto::DungeonSettleExhibitionInfo>::key_type __k; // [rsp+14h] [rbp-CCh] BYREF
  std::vector<ExhibitonCardParam>::iterator __for_begin; // [rsp+18h] [rbp-C8h] BYREF
  std::vector<ExhibitonCardParam>::iterator __for_end; // [rsp+20h] [rbp-C0h] BYREF
  proto::DungeonSettleExhibitionInfo *dungeon_settle_exhibition_info; // [rsp+28h] [rbp-B8h]
  std::vector<ExhibitonCardParam> *__for_range; // [rsp+30h] [rbp-B0h]
  proto::OnlinePlayerInfo *online_player_info; // [rsp+38h] [rbp-A8h]
  const ExhibitonCardParam *param; // [rsp+40h] [rbp-A0h]
  proto::ExhibitionDisplayInfo *card_info; // [rsp+48h] [rbp-98h]
  char v17[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 18 card_param_vec:773";
  *(_QWORD *)(v2 + 16) = DungeonScene::settle(DungeonResult)::{lambda(Player &)#3}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  p_dungeon_settle_exhibition_info_map = &__closure->__this->dungeon_settle_exhibition_info_map_;
  __k = Player::getUid(player);
  dungeon_settle_exhibition_info = std::map<unsigned int,proto::DungeonSettleExhibitionInfo>::operator[](
                                     p_dungeon_settle_exhibition_info_map,
                                     &__k);
  proto::DungeonSettleExhibitionInfo::Clear(dungeon_settle_exhibition_info);
  ExhibitionComp = Player::getExhibitionComp(player);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  PlayerExhibitionComp::getSettleCardVec(
    (std::vector<ExhibitonCardParam> *)(v2 + 32),
    ExhibitionComp,
    &__closure->__this->exhibition_card_vec_);
  __for_range = (std::vector<ExhibitonCardParam> *)(v2 + 32);
  __for_begin._M_current = std::vector<ExhibitonCardParam>::begin((std::vector<ExhibitonCardParam> *const)(v2 + 32))._M_current;
  __for_end._M_current = std::vector<ExhibitonCardParam>::end(__for_range)._M_current;
  while ( __gnu_cxx::operator!=<ExhibitonCardParam *,std::vector<ExhibitonCardParam>>(&__for_begin, &__for_end) )
  {
    param = __gnu_cxx::__normal_iterator<ExhibitonCardParam *,std::vector<ExhibitonCardParam>>::operator*(&__for_begin);
    card_info = proto::DungeonSettleExhibitionInfo::add_card_list(dungeon_settle_exhibition_info);
    if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(param);
    }
    proto::ExhibitionDisplayInfo::set_id(card_info, param->card_id);
    if ( *(_BYTE *)(((unsigned __int64)&param->card_param >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->card_param >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&param->card_param);
    }
    proto::ExhibitionDisplayInfo::set_param(card_info, param->card_param);
    __gnu_cxx::__normal_iterator<ExhibitonCardParam *,std::vector<ExhibitonCardParam>>::operator++(&__for_begin);
  }
  online_player_info = proto::DungeonSettleExhibitionInfo::mutable_player_info(dungeon_settle_exhibition_info);
  MpComp = Player::getMpComp(player);
  PlayerMpComp::fillOnlinePlayerInfo(MpComp, online_player_info);
  std::vector<ExhibitonCardParam>::~vector((std::vector<ExhibitonCardParam> *const)(v2 + 32));
  result = FOREACH_CONTINUE;
  if ( v17 == (char *)v2 )
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

// Line 788: range 0000000015F9F1EE-0000000015F9F2E5
ForeachPolicy __cdecl DungeonScene::settle(DungeonResult)::{lambda(Player &)#4}::operator()(
        const DungeonScene::settle::<lambda(Player&)>_0 *const __closure,
        Player *player)
{
  common::milog::MiLogStream *v2; // rdx
  PlayerAvatarComp *AvatarComp; // rax
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( DungeonScene::playerSettle(__closure->__this, player) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/dungeon/dungeon_scene.cpp",
      "operator()",
      792);
    v2 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v5,
           (const char (*)[25])"notifySettleResult fails");
    operator<<(v2, player);
    common::milog::MiLogStream::~MiLogStream(&v5);
  }
  else
  {
    AvatarComp = Player::getAvatarComp(player);
    PlayerAvatarComp::triggerCombatEnd(AvatarComp, COMBAT_END_DUNGEON_SETTLE);
  }
  return 0;
};

// Line 816: range 0000000015F9FF02-0000000015FA08E1
int32_t __cdecl DungeonScene::playerSettle(DungeonScene *const this, Player *player)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  PlayerBasicComp *BasicComp; // rax
  DungeonExcelConfigMgr *p_dungeon_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rax
  int32_t v8; // r14d
  uint32_t v9; // eax
  PlayerAvatarComp *AvatarComp; // rax
  PlayerDungeonComp *DungeonComp; // r15
  bool isMpDungeonMode; // r14
  uint32_t OwnerUid; // esi
  PlayerDungeonComp *v14; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // r14
  const std::string *v17; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rcx
  PlayerAvatarComp *v20; // r14
  std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rcx
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rdx
  proto::DungeonSettleNotify *v26; // rcx
  SceneMultistagePlayComp *MultistagePlayComp; // rdi
  int32_t result; // eax
  std::string v29; // [rsp+0h] [rbp-110h]
  char *v30; // [rsp+8h] [rbp-108h]
  Player *playera; // [rsp+10h] [rbp-100h]
  DungeonScene *thisa; // [rsp+18h] [rbp-F8h]
  uint32_t scene_begin_time; // [rsp+20h] [rbp-F0h]
  uint32_t use_time; // [rsp+24h] [rbp-ECh]
  const data::DungeonExcelConfig *dungeon_config_ptr; // [rsp+28h] [rbp-E8h]
  std::shared_ptr<google::protobuf::Message> v36; // [rsp+30h] [rbp-E0h] BYREF
  std::string v37; // [rsp+40h] [rbp-D0h] BYREF
  char v38[176]; // [rsp+60h] [rbp-B0h] BYREF

  *(&v29._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v29._anon_0._M_allocated_capacity = (std::string::size_type)player;
  v2 = (unsigned __int64)v38;
  v29._M_string_length = (std::string::size_type)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 1 10 holder:817 64 16 26 settle_dungeon_log_ptr:838 96 16 14 notify_ptr:853";
  *(_QWORD *)(v2 + 16) = DungeonScene::playerSettle;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  BasicComp = Player::getBasicComp(player);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v37, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0x57Eu, v29);
  std::string::~string(&v37);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v36);
  p_dungeon_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v36)->design_config.txt_config_mgr.dungeon_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->dungeon_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)thisa + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->dungeon_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&thisa->dungeon_id_);
  }
  dungeon_config_ptr = data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(p_dungeon_config_mgr, thisa->dungeon_id_);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v36);
  if ( dungeon_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&thisa->baseclass_0[80] >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    scene_begin_time = *(_QWORD *)&thisa->baseclass_0[80] / 0x3E8uLL;
    if ( *(_BYTE *)(((unsigned __int64)&thisa->dungeon_settle_time_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)thisa + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->dungeon_settle_time_ >> 3)
                                                            + 0x7FFF8000) )
    {
      __asan_report_load4(&thisa->dungeon_settle_time_);
    }
    if ( scene_begin_time >= thisa->dungeon_settle_time_ )
      v9 = 0;
    else
      v9 = thisa->dungeon_settle_time_ - scene_begin_time;
    use_time = v9;
    AvatarComp = Player::getAvatarComp(playera);
    PlayerAvatarComp::onDungeonSettle(AvatarComp);
    if ( DungeonScene::isSettledAndSuccess(thisa) )
    {
      DungeonComp = Player::getDungeonComp(playera);
      isMpDungeonMode = DungeonScene::isMpDungeonMode(thisa);
      OwnerUid = Scene::getOwnerUid((const Scene *const)thisa);
      if ( *(_BYTE *)(((unsigned __int64)&thisa->dungeon_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)thisa + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->dungeon_id_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&thisa->dungeon_id_);
      }
      PlayerDungeonComp::onDungeonSucceed(DungeonComp, thisa->dungeon_id_, OwnerUid, isMpDungeonMode);
    }
    else
    {
      v14 = Player::getDungeonComp(playera);
      if ( *(_BYTE *)(((unsigned __int64)&thisa->dungeon_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)thisa + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->dungeon_id_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&thisa->dungeon_id_);
      }
      PlayerDungeonComp::onDungeonFail(v14, thisa->dungeon_id_);
    }
    common::tools::perf::make_shared<proto_log::PlayerLogBodyDungeonSettle>();
    v15 = std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&thisa->dungeon_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)thisa + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->dungeon_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&thisa->dungeon_id_);
    }
    proto_log::PlayerLogBodyDungeonSettle::set_dungeon_id(v15, thisa->dungeon_id_);
    v16 = std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    v17 = DungeonScene::getTransaction[abi:cxx11](thisa);
    proto_log::PlayerLogBodyDungeonSettle::set_transaction(v16, v17);
    v18 = std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)dungeon_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->type >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4(&dungeon_config_ptr->type);
    }
    proto_log::PlayerLogBodyDungeonSettle::set_dungeon_type(v18, dungeon_config_ptr->type);
    v19 = std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->involve_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->involve_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&dungeon_config_ptr->involve_type);
    }
    proto_log::PlayerLogBodyDungeonSettle::set_dungeon_mp(v19, dungeon_config_ptr->involve_type);
    v20 = Player::getAvatarComp(playera);
    std::function<ForeachPolicy ()(Avatar &)>::function<DungeonScene::playerSettle(Player &)::{lambda(Avatar &)#1},void,void>(
      (std::function<ForeachPolicy(Avatar&)> *const)&v37,
      (DungeonScene::playerSettle::<lambda(Avatar&)>)(v2 + 64));
    PlayerAvatarComp::foreachMyAvatarInSceneTeam(v20, (std::function<ForeachPolicy(Avatar&)> *)&v37);
    std::function<ForeachPolicy ()(Avatar &)>::~function((std::function<ForeachPolicy(Avatar&)> *const)&v37);
    v21 = std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto_log::PlayerLogBodyDungeonSettle::set_use_time(v21, use_time);
    v22 = std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&thisa->dungeon_result_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->dungeon_result_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&thisa->dungeon_result_);
    }
    proto_log::PlayerLogBodyDungeonSettle::set_dungeon_settle_type(v22, thisa->dungeon_result_);
    std::shared_ptr<google::protobuf::Message>::shared_ptr(&v36, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyDungeonSettle,void>(
      (std::shared_ptr<google::protobuf::Message> *const)(v2 + 96),
      (const std::shared_ptr<proto_log::PlayerLogBodyDungeonSettle> *)(v2 + 64));
    Player::printStatLog(playera, (MessagePtr *)(v2 + 96), &v36, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)(v2 + 96));
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v36);
    DungeonScene::composeDungeonSettleNotify((DungeonScene *const)(v2 + 96), (Player *)thisa);
    if ( std::operator==<proto::DungeonSettleNotify>(
           0LL,
           (const std::shared_ptr<proto::DungeonSettleNotify> *)(v2 + 96)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v37,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/dungeon/dungeon_scene.cpp",
        "playerSettle",
        856);
      v23 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
              (common::milog::MiLogStream *const)&v37,
              (const char (*)[45])"composeDungeonSettleNotify fail, dungeon_id:");
      v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &thisa->dungeon_id_);
      v25 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v24, (const char (*)[9])" player:");
      operator<<(v25, playera);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v37);
      v8 = -1;
    }
    else
    {
      if ( std::function<void ()(Player &,DungeonScene &,proto::DungeonSettleNotify &)>::operator bool(&thisa->dungeon_settle_callback_) )
      {
        v26 = std::__shared_ptr_access<proto::DungeonSettleNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::DungeonSettleNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        std::function<void ()(Player &,DungeonScene &,proto::DungeonSettleNotify &)>::operator()(
          &thisa->dungeon_settle_callback_,
          playera,
          thisa,
          v26);
      }
      MultistagePlayComp = Scene::getMultistagePlayComp((Scene *const)thisa);
      if ( *(_BYTE *)(((unsigned __int64)&thisa->dungeon_result_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&thisa->dungeon_result_ >> 3) + 0x7FFF8000) <= 3 )
      {
        MultistagePlayComp = (SceneMultistagePlayComp *)&thisa->dungeon_result_;
        __asan_report_load4(&thisa->dungeon_result_);
      }
      SceneMultistagePlayComp::onDungeonSettle(MultistagePlayComp, playera, thisa->dungeon_result_, use_time);
      std::dynamic_pointer_cast<google::protobuf::Message const,proto::DungeonSettleNotify>((const std::shared_ptr<proto::DungeonSettleNotify> *)&v36);
      v8 = Player::sendMessage(playera, (common::minet::ConstMessagePtr *)&v36, 0LL);
      std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&v36);
    }
    std::shared_ptr<proto::DungeonSettleNotify>::~shared_ptr((std::shared_ptr<proto::DungeonSettleNotify> *const)(v2 + 96));
    std::shared_ptr<proto_log::PlayerLogBodyDungeonSettle>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyDungeonSettle> *const)(v2 + 64));
  }
  else
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v37,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/dungeon_scene.cpp",
      "playerSettle",
      821);
    v7 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           (common::milog::MiLogStream *const)&v37,
           (const char (*)[42])"findDungeonExcelConfig fails, dungeon_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &thisa->dungeon_id_);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v37);
    v8 = -1;
  }
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
  result = v8;
  if ( v30 == (char *)v2 )
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
  return result;
};

// Line 843: range 0000000015F9FE9C-0000000015F9FF01
ForeachPolicy __cdecl DungeonScene::playerSettle(Player &)::{lambda(Avatar &)#1}::operator()(
        const DungeonScene::playerSettle::<lambda(Avatar&)> *const __closure,
        Avatar *avatar)
{
  std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  proto_log::AvatarLog *v3; // rdx

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)__closure->__settle_dungeon_log_ptr);
  v3 = proto_log::PlayerLogBodyDungeonSettle::add_avatar_list(v2);
  Avatar::getAvatarLog(avatar, v3);
  return 0;
};

// Line 872: range 0000000015FA08E2-0000000015FA1372
std::shared_ptr<proto::DungeonSettleNotify> __cdecl DungeonScene::composeDungeonSettleNotify(
        DungeonScene *const this,
        Player *player)
{
  Player *v2; // rdx
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  std::shared_ptr<proto::DungeonSettleNotify> result; // rax
  DungeonExcelConfigMgr *p_dungeon_config_mgr; // rcx
  common::milog::MiLogStream *v9; // rax
  proto::DungeonSettleNotify *v10; // rcx
  proto::DungeonSettleNotify *v11; // rcx
  proto::DungeonSettleNotify *v12; // r14
  bool isSettledAndSuccess; // al
  proto::DungeonSettleNotify *v14; // rcx
  google::protobuf::uint32 v15; // eax
  proto::DungeonSettleNotify *v16; // rcx
  proto::DungeonSettleNotify *v17; // rax
  __gnu_cxx::__normal_iterator<const data::SettleShowType*,std::vector<data::SettleShowType> >::reference v18; // rax
  _DWORD *v19; // rdx
  int v20; // eax
  std::map<data::SettleShowType,unsigned int> *v21; // rax
  std::map<data::SettleShowType,unsigned int>::mapped_type *v22; // rax
  uint32_t *v23; // rdx
  std::map<data::SettleShowType,unsigned int> *v24; // rax
  std::map<data::SettleShowType,unsigned int>::mapped_type *v25; // rax
  uint32_t *v26; // rdx
  proto::DungeonSettleNotify *v27; // rcx
  proto::DungeonSettleNotify *v28; // rax
  google::protobuf::Map<unsigned int,proto::StrengthenPointData> *v29; // rdx
  proto::DungeonSettleNotify *v30; // rax
  Player *playera; // [rsp+8h] [rbp-138h]
  google::protobuf::Map<unsigned int,proto::ParamList>::key_type key; // [rsp+20h] [rbp-120h] BYREF
  uint32_t time_cost; // [rsp+24h] [rbp-11Ch]
  uint32_t scene_begin_time; // [rsp+28h] [rbp-118h]
  uint32_t chest_count; // [rsp+2Ch] [rbp-114h]
  uint32_t now; // [rsp+30h] [rbp-110h]
  uint32_t value; // [rsp+34h] [rbp-10Ch]
  std::vector<data::SettleShowType>::const_iterator __for_begin; // [rsp+38h] [rbp-108h] BYREF
  std::vector<data::SettleShowType>::const_iterator __for_end; // [rsp+40h] [rbp-100h] BYREF
  const data::DungeonExcelConfig *dungeon_config_ptr; // [rsp+48h] [rbp-F8h]
  google::protobuf::Map<unsigned int,proto::ParamList> *settle_show_map; // [rsp+50h] [rbp-F0h]
  const std::vector<data::SettleShowType> *__for_range; // [rsp+58h] [rbp-E8h]
  std::map<unsigned int,proto::DungeonSettleExhibitionInfo> *__for_range_0; // [rsp+60h] [rbp-E0h]
  const std::pair<unsigned int const,proto::DungeonSettleExhibitionInfo> *v44; // [rsp+68h] [rbp-D8h]
  std::tuple_element<0,const std::pair<unsigned int const,proto::DungeonSettleExhibitionInfo> >::type *uid; // [rsp+70h] [rbp-D0h]
  std::tuple_element<1,const std::pair<unsigned int const,proto::DungeonSettleExhibitionInfo> >::type *exhibition_info; // [rsp+78h] [rbp-C8h]
  proto::DungeonSettleExhibitionInfo *proto_exhibition_info; // [rsp+80h] [rbp-C0h]
  proto::ParamList *param_list; // [rsp+88h] [rbp-B8h]
  common::milog::MiLogStream v49; // [rsp+90h] [rbp-B0h] BYREF
  char v50[144]; // [rsp+B0h] [rbp-90h] BYREF

  playera = v2;
  v3 = (unsigned __int64)v50;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 13 show_type:894 64 16 14 notify_ptr:886";
  *(_QWORD *)(v3 + 16) = DungeonScene::composeDungeonSettleNotify;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&player[1].client_device_info_.login_packet_head_.ext_map_.mutex_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&player[1].client_device_info_.login_packet_head_.ext_map_.mutex_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&player[1].client_device_info_.login_packet_head_.ext_map_.mutex_);
  }
  if ( LODWORD(player[1].client_device_info_.login_packet_head_.ext_map_.mutex_.mInternal) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v3 + 64));
    p_dungeon_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64))->design_config.txt_config_mgr.dungeon_config_mgr;
    if ( *(_BYTE *)((((unsigned __int64)&player[1].client_device_info_.login_packet_head_.ext_map_.arena_ + 4) >> 3)
                  + 0x7FFF8000) != 0
      && (char)((((_BYTE)player + 100) & 7) + 3) >= *(_BYTE *)((((unsigned __int64)&player[1].client_device_info_.login_packet_head_.ext_map_.arena_
                                                               + 4) >> 3)
                                                             + 0x7FFF8000) )
    {
      __asan_report_load4((char *)&player[1].client_device_info_.login_packet_head_.ext_map_.arena_ + 4);
    }
    dungeon_config_ptr = data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(
                           p_dungeon_config_mgr,
                           HIDWORD(player[1].client_device_info_.login_packet_head_.ext_map_.arena_));
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 64));
    if ( dungeon_config_ptr )
    {
      common::tools::perf::make_shared<proto::DungeonSettleNotify>();
      v10 = std::__shared_ptr_access<proto::DungeonSettleNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::DungeonSettleNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      if ( *(_BYTE *)((((unsigned __int64)&player[1].client_device_info_.login_packet_head_.ext_map_.arena_ + 4) >> 3)
                    + 0x7FFF8000) != 0
        && (char)((((_BYTE)player + 100) & 7) + 3) >= *(_BYTE *)((((unsigned __int64)&player[1].client_device_info_.login_packet_head_.ext_map_.arena_
                                                                 + 4) >> 3)
                                                               + 0x7FFF8000) )
      {
        __asan_report_load4((char *)&player[1].client_device_info_.login_packet_head_.ext_map_.arena_ + 4);
      }
      proto::DungeonSettleNotify::set_dungeon_id(
        v10,
        HIDWORD(player[1].client_device_info_.login_packet_head_.ext_map_.arena_));
      v11 = std::__shared_ptr_access<proto::DungeonSettleNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::DungeonSettleNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&player[1].client_device_info_.login_packet_head_.ext_map_.mutex_ >> 3)
                    + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&player[1].client_device_info_.login_packet_head_.ext_map_.mutex_ >> 3)
                    + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&player[1].client_device_info_.login_packet_head_.ext_map_.mutex_);
      }
      proto::DungeonSettleNotify::set_result(
        v11,
        (google::protobuf::uint32)player[1].client_device_info_.login_packet_head_.ext_map_.mutex_.mInternal);
      v12 = std::__shared_ptr_access<proto::DungeonSettleNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::DungeonSettleNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      isSettledAndSuccess = DungeonScene::isSettledAndSuccess((const DungeonScene *const)player);
      proto::DungeonSettleNotify::set_is_success(v12, isSettledAndSuccess);
      if ( *(_BYTE *)(((unsigned __int64)&player->session_wtr_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      scene_begin_time = (unsigned __int64)player->session_wtr_._M_ptr / 0x3E8;
      v14 = std::__shared_ptr_access<proto::DungeonSettleNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::DungeonSettleNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      if ( *(_BYTE *)((((unsigned __int64)&player[1].client_device_info_.login_packet_head_.ext_map_.repeated_field_ + 4) >> 3)
                    + 0x7FFF8000) != 0
        && (char)((((_BYTE)player + 108) & 7) + 3) >= *(_BYTE *)((((unsigned __int64)&player[1].client_device_info_.login_packet_head_.ext_map_.repeated_field_
                                                                 + 4) >> 3)
                                                               + 0x7FFF8000) )
      {
        __asan_report_load4((char *)&player[1].client_device_info_.login_packet_head_.ext_map_.repeated_field_ + 4);
      }
      if ( scene_begin_time >= HIDWORD(player[1].client_device_info_.login_packet_head_.ext_map_.repeated_field_) )
        v15 = 0;
      else
        v15 = HIDWORD(player[1].client_device_info_.login_packet_head_.ext_map_.repeated_field_) - scene_begin_time;
      proto::DungeonSettleNotify::set_use_time(v14, v15);
      v16 = std::__shared_ptr_access<proto::DungeonSettleNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::DungeonSettleNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      if ( *(_BYTE *)(((unsigned __int64)(&player[1].client_device_info_.login_packet_head_.ext_map_.impl_.map_.default_enum_value_
                                        + 1) >> 3)
                    + 0x7FFF8000) != 0
        && (char)((((_BYTE)player - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(&player[1].client_device_info_.login_packet_head_.ext_map_.impl_.map_.default_enum_value_
                                                                                   + 1) >> 3)
                                                               + 0x7FFF8000) )
      {
        __asan_report_load4(&player[1].client_device_info_.login_packet_head_.ext_map_.impl_.map_.default_enum_value_ + 1);
      }
      proto::DungeonSettleNotify::set_create_player_uid(
        v16,
        *(&player[1].client_device_info_.login_packet_head_.ext_map_.impl_.map_.default_enum_value_ + 1));
      v17 = std::__shared_ptr_access<proto::DungeonSettleNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::DungeonSettleNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      settle_show_map = proto::DungeonSettleNotify::mutable_settle_show(v17);
      __for_range = &dungeon_config_ptr->settle_shows;
      __for_begin._M_current = std::vector<data::SettleShowType>::begin(&dungeon_config_ptr->settle_shows)._M_current;
      __for_end._M_current = std::vector<data::SettleShowType>::end(&dungeon_config_ptr->settle_shows)._M_current;
      while ( __gnu_cxx::operator!=<data::SettleShowType const*,std::vector<data::SettleShowType>>(
                &__for_begin,
                &__for_end) )
      {
        v18 = __gnu_cxx::__normal_iterator<data::SettleShowType const*,std::vector<data::SettleShowType>>::operator*(&__for_begin);
        v19 = v18;
        if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v18);
        }
        *(_DWORD *)(v3 + 48) = *v19;
        key = *(_DWORD *)(v3 + 48);
        param_list = google::protobuf::Map<unsigned int,proto::ParamList>::operator[](settle_show_map, &key);
        v20 = *(_DWORD *)(v3 + 48);
        if ( v20 == 1 )
        {
          now = common::tools::TimeUtils::getNow();
          time_cost = 0;
          if ( *(_BYTE *)(((unsigned __int64)&player[1].client_device_info_.login_packet_head_.ext_map_.repeated_field_ >> 3)
                        + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&player[1].client_device_info_.login_packet_head_.ext_map_.repeated_field_ >> 3)
                        + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&player[1].client_device_info_.login_packet_head_.ext_map_.repeated_field_);
          }
          if ( now > LODWORD(player[1].client_device_info_.login_packet_head_.ext_map_.repeated_field_) )
            time_cost = now - LODWORD(player[1].client_device_info_.login_packet_head_.ext_map_.repeated_field_);
          proto::ParamList::add_param_list(param_list, time_cost);
        }
        else if ( v20 == 2 )
        {
          key = Player::getUid(playera);
          v21 = std::map<unsigned int,std::map<data::SettleShowType,unsigned int>>::operator[](
                  (std::map<unsigned int,std::map<data::SettleShowType,unsigned int>> *const)&player[1].client_device_info_.login_packet_head_.recv_time_ms_,
                  &key);
          v22 = std::map<data::SettleShowType,unsigned int>::operator[](
                  v21,
                  (const std::map<data::SettleShowType,unsigned int>::key_type *)(v3 + 48));
          v23 = v22;
          if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v22);
          }
          chest_count = *v23;
          proto::ParamList::add_param_list(param_list, chest_count);
          proto::ParamList::add_param_list(param_list, 0);
        }
        else
        {
          key = Player::getUid(playera);
          v24 = std::map<unsigned int,std::map<data::SettleShowType,unsigned int>>::operator[](
                  (std::map<unsigned int,std::map<data::SettleShowType,unsigned int>> *const)&player[1].client_device_info_.login_packet_head_.recv_time_ms_,
                  &key);
          v25 = std::map<data::SettleShowType,unsigned int>::operator[](
                  v24,
                  (const std::map<data::SettleShowType,unsigned int>::key_type *)(v3 + 48));
          v26 = v25;
          if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v25);
          }
          value = *v26;
          proto::ParamList::add_param_list(param_list, value);
        }
        __gnu_cxx::__normal_iterator<data::SettleShowType const*,std::vector<data::SettleShowType>>::operator++(&__for_begin);
      }
      v27 = std::__shared_ptr_access<proto::DungeonSettleNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::DungeonSettleNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&player[1].client_device_info_.login_packet_head_.client_sequence_id_ >> 3)
                    + 0x7FFF8000) )
        __asan_report_load8();
      proto::DungeonSettleNotify::set_close_time(
        v27,
        *(_QWORD *)&player[1].client_device_info_.login_packet_head_.client_sequence_id_);
      if ( !DungeonScene::isSettledAndSuccess((const DungeonScene *const)player) )
      {
        v28 = std::__shared_ptr_access<proto::DungeonSettleNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::DungeonSettleNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        v29 = proto::DungeonSettleNotify::mutable_strengthen_point_data_map(v28);
        DungeonScene::getDungeonStrengthenPointData((DungeonScene *const)player, playera, v29);
      }
      if ( !std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)&player[2].client_device_info_.login_packet_head_.service_app_id_map_.arena_) )
      {
        __for_range_0 = (std::map<unsigned int,proto::DungeonSettleExhibitionInfo> *)&player[2].client_device_info_.login_packet_head_.ext_map_.state_;
        __for_begin._M_current = (const data::SettleShowType *)std::map<unsigned int,proto::DungeonSettleExhibitionInfo>::begin((std::map<unsigned int,proto::DungeonSettleExhibitionInfo> *const)&player[2].client_device_info_.login_packet_head_.ext_map_.state_)._M_node;
        __for_end._M_current = (const data::SettleShowType *)std::map<unsigned int,proto::DungeonSettleExhibitionInfo>::end(__for_range_0)._M_node;
        while ( std::operator!=(
                  (const std::_Rb_tree_iterator<std::pair<unsigned int const,proto::DungeonSettleExhibitionInfo> >::_Self *)&__for_begin,
                  (const std::_Rb_tree_iterator<std::pair<unsigned int const,proto::DungeonSettleExhibitionInfo> >::_Self *)&__for_end) )
        {
          v44 = std::_Rb_tree_iterator<std::pair<unsigned int const,proto::DungeonSettleExhibitionInfo>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,proto::DungeonSettleExhibitionInfo> > *const)&__for_begin);
          uid = std::get<0ul,unsigned int const,proto::DungeonSettleExhibitionInfo>(v44);
          exhibition_info = (std::tuple_element<1,const std::pair<unsigned int const,proto::DungeonSettleExhibitionInfo> >::type *)std::get<1ul,unsigned int const,proto::DungeonSettleExhibitionInfo>(v44);
          v30 = std::__shared_ptr_access<proto::DungeonSettleNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::DungeonSettleNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          proto_exhibition_info = proto::DungeonSettleNotify::add_exhibition_info_list(v30);
          proto::DungeonSettleExhibitionInfo::CopyFrom(proto_exhibition_info, exhibition_info);
          std::_Rb_tree_iterator<std::pair<unsigned int const,proto::DungeonSettleExhibitionInfo>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,proto::DungeonSettleExhibitionInfo> > *const)&__for_begin);
        }
      }
      std::shared_ptr<proto::DungeonSettleNotify>::shared_ptr(
        (std::shared_ptr<proto::DungeonSettleNotify> *const)this,
        (std::shared_ptr<proto::DungeonSettleNotify> *)(v3 + 64));
      std::shared_ptr<proto::DungeonSettleNotify>::~shared_ptr((std::shared_ptr<proto::DungeonSettleNotify> *const)(v3 + 64));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v49,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/dungeon_scene.cpp",
        "composeDungeonSettleNotify",
        882);
      v9 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
             &v49,
             (const char (*)[42])"findDungeonExcelConfig fails, dungeon_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v9,
        (const unsigned int *)&player[1].client_device_info_.login_packet_head_.ext_map_.arena_ + 1);
      common::milog::MiLogStream::~MiLogStream(&v49);
      std::shared_ptr<proto::DungeonSettleNotify>::shared_ptr(
        (std::shared_ptr<proto::DungeonSettleNotify> *const)this,
        0LL);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v49,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/dungeon_scene.cpp",
      "composeDungeonSettleNotify",
      875);
    v6 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           &v49,
           (const char (*)[33])"dungeon not settled, dungeon_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
      v6,
      (const unsigned int *)&player[1].client_device_info_.login_packet_head_.ext_map_.arena_ + 1);
    common::milog::MiLogStream::~MiLogStream(&v49);
    std::shared_ptr<proto::DungeonSettleNotify>::shared_ptr(
      (std::shared_ptr<proto::DungeonSettleNotify> *const)this,
      0LL);
  }
  if ( v50 == (char *)v3 )
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
  result._M_ptr = (std::__shared_ptr<proto::DungeonSettleNotify,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 948: range 0000000015FA186E-0000000015FA250E
void __cdecl DungeonScene::onMonsterDie(DungeonScene *const this, ChangeHpContext *context, Monster *monster)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  RogueDungeonContext *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  Player *v8; // rax
  common::milog::MiLogStream *v9; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  FungusFighterActivity *v11; // r14
  uint32_t EntityId; // eax
  std::__shared_ptr_access<DungeonCondition,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  unsigned __int64 v14; // rax
  void (__fastcall **v15)(unsigned __int64, ChangeHpContext *, Monster *); // rdx
  DungeonExcelConfigMgr *p_dungeon_config_mgr; // rcx
  common::milog::MiLogStream *v17; // rax
  uint32_t monster_die_count; // r14d
  unsigned int *v19; // rax
  uint32_t *v20; // rdx
  _BOOL4 v21; // r14d
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  std::map<unsigned int,unsigned int>::mapped_type *v23; // rax
  unsigned int val; // [rsp+34h] [rbp-1ACh] BYREF
  std::vector<std::shared_ptr<DungeonCondition>>::iterator __for_begin; // [rsp+38h] [rbp-1A8h] BYREF
  std::vector<std::shared_ptr<DungeonCondition>>::iterator __for_end; // [rsp+40h] [rbp-1A0h] BYREF
  const RogueDungeonContext *context_0; // [rsp+48h] [rbp-198h]
  std::vector<std::shared_ptr<DungeonCondition>> *__for_range; // [rsp+50h] [rbp-190h]
  const data::DungeonExcelConfig *dungeon_config_ptr; // [rsp+58h] [rbp-188h]
  google::protobuf::Map<unsigned int,unsigned int> *proto_data_map; // [rsp+60h] [rbp-180h]
  DungeonConditionPtr *cond_ptr; // [rsp+68h] [rbp-178h]
  common::milog::MiLogStream v33; // [rsp+70h] [rbp-170h] BYREF
  char v34[336]; // [rsp+90h] [rbp-150h] BYREF

  v3 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 16 17 creature_ptr:1041 64 16 24 attacker_avatar_ptr:1047 96 16 18 top_owner_ptr:1050 128 1"
                        "6 21 rogue_context_opt:956 160 96 11 notify:1030";
  *(_QWORD *)(v3 + 16) = DungeonScene::onMonsterDie;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862728] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_result_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_result_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->dungeon_result_);
  }
  if ( this->dungeon_result_ == DUNGEON_RESULT_NONE )
  {
    MistTrialDungeonStatProxy::onMonsterDie(&this->mist_trial_stat_proxy_, context, monster);
    if ( DungeonScene::isEnterByRoguelikeActivity(this) )
    {
      *(std::optional<RogueDungeonContext> *)(v3 + 128) = DungeonScene::getDungeonExtraData<RogueDungeonContext>(this);
      if ( !std::optional<RogueDungeonContext>::has_value((const std::optional<RogueDungeonContext> *const)(v3 + 128)) )
      {
        common::milog::MiLogStream::create(
          &v33,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/dungeon/dungeon_scene.cpp",
          "onMonsterDie",
          959);
        common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
          &v33,
          (const char (*)[26])"[ROGUE] opt have no value");
        common::milog::MiLogStream::~MiLogStream(&v33);
        goto LABEL_56;
      }
      v6 = std::optional<RogueDungeonContext>::value((std::optional<RogueDungeonContext> *const)(v3 + 128));
      context_0 = v6;
      std::function<ForeachPolicy ()(Player &)>::function<DungeonScene::onMonsterDie(ChangeHpContext &,Monster &)::{lambda(Player &)#1},void,void>(
        (std::function<ForeachPolicy(Player&)> *const)&v33,
        (DungeonScene::onMonsterDie::<lambda(Player&)>)__PAIR128__((unsigned __int64)v6, (unsigned __int64)this));
      Scene::foreachPlayer((Scene *const)this, (std::function<ForeachPolicy(Player&)> *)&v33);
      std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v33);
    }
    else if ( DungeonScene::isEnterByFungusFighterActivity(this)
           && DungeonScene::getDungeonType(this) == DUNGEON_FUNGUS_FIGHTER_TRAINING )
    {
      Scene::getOwnPlayer((const Scene *const)(v3 + 96));
      if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v3 + 96)) )
      {
        common::milog::MiLogStream::create(
          &v33,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/dungeon/dungeon_scene.cpp",
          "onMonsterDie",
          992);
        v7 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
               &v33,
               (const char (*)[26])"getOwnPlayer fail, scene:");
        common::milog::MiLogStream::operator<<<DungeonScene,(DungeonScene*)0>(v7, this);
        common::milog::MiLogStream::~MiLogStream(&v33);
      }
      else
      {
        v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        Player::getActivityComp(v8);
        PlayerActivityComp::findOpenningActivity<FungusFighterActivity>((PlayerActivityComp *const)(v3 + 128));
        if ( std::operator==<FungusFighterActivity>(0LL, (const std::shared_ptr<FungusFighterActivity> *)(v3 + 128)) )
        {
          common::milog::MiLogStream::create(
            &v33,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/dungeon/dungeon_scene.cpp",
            "onMonsterDie",
            998);
          v9 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                 &v33,
                 (const char (*)[50])"[FungusFighter] cannot find player activity, uid:");
          v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
          val = Player::getUid(v10);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
          common::milog::MiLogStream::~MiLogStream(&v33);
        }
        else
        {
          v11 = std::__shared_ptr_access<FungusFighterActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FungusFighterActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
          EntityId = Entity::getEntityId((const Entity *const)monster);
          FungusFighterActivity::onFungusTrainingDungeonMonsterDie(v11, EntityId);
        }
        std::shared_ptr<FungusFighterActivity>::~shared_ptr((std::shared_ptr<FungusFighterActivity> *const)(v3 + 128));
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 96));
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->monster_die_count_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->monster_die_count_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->monster_die_count_);
    }
    ++this->monster_die_count_;
    std::function<ForeachPolicy ()(Player &)>::function<DungeonScene::onMonsterDie(ChangeHpContext &,Monster &)::{lambda(Player &)#2},void,void>(
      (std::function<ForeachPolicy(Player&)> *const)&v33,
      (DungeonScene::onMonsterDie::<lambda(Player&)>_0)this);
    Scene::foreachPlayer((Scene *const)this, (std::function<ForeachPolicy(Player&)> *)&v33);
    std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v33);
    __for_range = &this->cond_vec_;
    __for_begin._M_current = std::vector<std::shared_ptr<DungeonCondition>>::begin(&this->cond_vec_)._M_current;
    __for_end._M_current = std::vector<std::shared_ptr<DungeonCondition>>::end(__for_range)._M_current;
    while ( __gnu_cxx::operator!=<std::shared_ptr<DungeonCondition> *,std::vector<std::shared_ptr<DungeonCondition>>>(
              &__for_begin,
              &__for_end) )
    {
      cond_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<DungeonCondition> *,std::vector<std::shared_ptr<DungeonCondition>>>::operator*(&__for_begin);
      v13 = std::__shared_ptr_access<DungeonCondition,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonCondition,(__gnu_cxx::_Lock_policy)2,false,false> *const)cond_ptr);
      if ( DungeonCondition::getCondState(v13) == COND_STATE_NONE )
      {
        v14 = (unsigned __int64)std::__shared_ptr_access<DungeonCondition,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonCondition,(__gnu_cxx::_Lock_policy)2,false,false> *const)cond_ptr);
        if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
          v14 = __asan_report_load8();
        v15 = *(void (__fastcall ***)(unsigned __int64, ChangeHpContext *, Monster *))v14;
        if ( *(_BYTE *)((*(_QWORD *)v14 >> 3) + 0x7FFF8000LL) )
          v14 = __asan_report_load8();
        (*v15)(v14, context, monster);
      }
      __gnu_cxx::__normal_iterator<std::shared_ptr<DungeonCondition> *,std::vector<std::shared_ptr<DungeonCondition>>>::operator++(&__for_begin);
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v3 + 128));
    p_dungeon_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128))->design_config.txt_config_mgr.dungeon_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->dungeon_id_);
    }
    dungeon_config_ptr = data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(
                           p_dungeon_config_mgr,
                           this->dungeon_id_);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 128));
    if ( dungeon_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->play_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)dungeon_config_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->play_type >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load4(&dungeon_config_ptr->play_type);
      }
      if ( dungeon_config_ptr->play_type == DUNGEON_PLAY_TYPE_FOGGY_MAZE )
      {
        proto::DungeonDataNotify::DungeonDataNotify((proto::DungeonDataNotify *const)(v3 + 160));
        proto_data_map = proto::DungeonDataNotify::mutable_dungeon_data_map((proto::DungeonDataNotify *const)(v3 + 160));
        if ( *(_BYTE *)(((unsigned __int64)&this->monster_die_count_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->monster_die_count_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->monster_die_count_);
        }
        monster_die_count = this->monster_die_count_;
        val = 2;
        v19 = google::protobuf::Map<unsigned int,unsigned int>::operator[](proto_data_map, &val);
        v20 = v19;
        if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v19);
        }
        *v20 = monster_die_count;
        Scene::notifyAllPlayer<proto::DungeonDataNotify>((Scene *const)this, (proto::DungeonDataNotify *)(v3 + 160), 0);
        proto::DungeonDataNotify::~DungeonDataNotify((proto::DungeonDataNotify *const)(v3 + 160));
      }
      if ( DungeonScene::isEnableFightStatistics(this) )
      {
        std::shared_ptr<Creature>::shared_ptr((std::shared_ptr<Creature> *const)(v3 + 32), &context->attacker_ptr);
        if ( !std::operator==<Creature>(0LL, (const std::shared_ptr<Creature> *)(v3 + 32)) )
        {
          std::dynamic_pointer_cast<Avatar,Creature>((const std::shared_ptr<Creature> *)(v3 + 64));
          if ( !std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v3 + 64))
            || ((std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32)),
                 Creature::findTopOwner((const Creature *const)(v3 + 96)),
                 !std::operator==<Creature>(0LL, (const std::shared_ptr<Creature> *)(v3 + 96)))
              ? (std::dynamic_pointer_cast<Avatar,Creature>((const std::shared_ptr<Creature> *)(v3 + 128)),
                 std::shared_ptr<Avatar>::operator=(
                   (std::shared_ptr<Avatar> *const)(v3 + 64),
                   (std::shared_ptr<Avatar> *)(v3 + 128)),
                 std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 128)),
                 v21 = !std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v3 + 64)))
              : (v21 = 0),
                std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v3 + 96)),
                v21) )
          {
            if ( !std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v3 + 64)) )
            {
              v22 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
              val = Avatar::getAvatarId(v22);
              v23 = std::map<unsigned int,unsigned int>::operator[](&this->fight_statistics_.kill_count_map, &val);
              if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v23);
              }
              ++*v23;
            }
          }
          std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 64));
        }
        std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v3 + 32));
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/dungeon_scene.cpp",
        "onMonsterDie",
        1024);
      v17 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
              &v33,
              (const char (*)[43])"findDungeonExcelConfig failed, dungeon_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &this->dungeon_id_);
      common::milog::MiLogStream::~MiLogStream(&v33);
    }
  }
LABEL_56:
  if ( v34 == (char *)v3 )
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

// Line 963: range 0000000015FA1374-0000000015FA1767
ForeachPolicy __cdecl DungeonScene::onMonsterDie(ChangeHpContext &,Monster &)::{lambda(Player &)#1}::operator()(
        const DungeonScene::onMonsterDie::<lambda(Player&)> *const __closure,
        Player *player_)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // r14
  RoguelikeDungeonActivity *p_context; // rdi
  const RogueDungeonContext *context; // rdx
  common::milog::MiLogStream *v8; // r14
  PlayerWatcherComp *WatcherComp; // rdi
  const RogueDungeonContext *v10; // rdx
  ForeachPolicy result; // eax
  unsigned int val; // [rsp+14h] [rbp-9Ch] BYREF
  RogueStageData *stage_ptr; // [rsp+18h] [rbp-98h]
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 16 activity_ptr:965";
  *(_QWORD *)(v2 + 16) = DungeonScene::onMonsterDie(ChangeHpContext &,Monster &)::{lambda(Player &)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  Player::getActivityComp(player_);
  PlayerActivityComp::findOpenningActivity<RoguelikeDungeonActivity>((PlayerActivityComp *const)(v2 + 32));
  if ( std::operator==<RoguelikeDungeonActivity>(0LL, (const std::shared_ptr<RoguelikeDungeonActivity> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/dungeon/dungeon_scene.cpp",
      "operator()",
      968);
    v5 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v15,
           (const char (*)[42])"[ROGUE] cannot find player activity, uid:");
    val = Player::getUid(player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v15);
  }
  else
  {
    p_context = std::__shared_ptr_access<RoguelikeDungeonActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RoguelikeDungeonActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__context >> 3) + 0x7FFF8000) )
    {
      p_context = (RoguelikeDungeonActivity *)&__closure->__context;
      __asan_report_load8();
    }
    context = __closure->__context;
    if ( *(_BYTE *)(((unsigned __int64)&context->stage_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)context + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&context->stage_id >> 3) + 0x7FFF8000) )
    {
      p_context = (RoguelikeDungeonActivity *)&context->stage_id;
      __asan_report_load4(&context->stage_id);
    }
    stage_ptr = RoguelikeDungeonActivity::findStage(p_context, context->stage_id);
    if ( !stage_ptr )
      goto LABEL_14;
    if ( *(char *)(((unsigned __int64)&stage_ptr->is_in_combat >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&stage_ptr->is_in_combat);
    if ( stage_ptr->is_in_combat )
    {
      RogueStageData::onMonsterDie(stage_ptr);
      WatcherComp = Player::getWatcherComp(player_);
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__context >> 3) + 0x7FFF8000) )
      {
        WatcherComp = (PlayerWatcherComp *)&__closure->__context;
        __asan_report_load8();
      }
      v10 = __closure->__context;
      if ( *(_BYTE *)(((unsigned __int64)&v10->stage_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v10 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->stage_id >> 3) + 0x7FFF8000) )
      {
        WatcherComp = (PlayerWatcherComp *)&v10->stage_id;
        __asan_report_load4(&v10->stage_id);
      }
      PlayerWatcherComp::triggerRogueMonsterDie(WatcherComp, v10->stage_id, 1u, 0);
    }
    else
    {
LABEL_14:
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/dungeon_scene.cpp",
        "operator()",
        974);
      v8 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
             &v15,
             (const char (*)[53])"[ROGUE] stage not found or stage not in combat, uid:");
      val = Player::getUid(player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      common::milog::MiLogStream::~MiLogStream(&v15);
    }
  }
  std::shared_ptr<RoguelikeDungeonActivity>::~shared_ptr((std::shared_ptr<RoguelikeDungeonActivity> *const)(v2 + 32));
  result = FOREACH_CONTINUE;
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

// Line 1009: range 0000000015FA1768-0000000015FA186C
ForeachPolicy __cdecl DungeonScene::onMonsterDie(ChangeHpContext &,Monster &)::{lambda(Player &)#2}::operator()(
        const DungeonScene::onMonsterDie::<lambda(Player&)>_0 *const __closure,
        Player *player_)
{
  DungeonScene *this; // rax
  char v3; // dl
  uint32_t monster_die_count; // ebx
  std::map<unsigned int,std::map<data::SettleShowType,unsigned int>> *p_settle_show_map; // r12
  std::map<data::SettleShowType,unsigned int> *v6; // rax
  std::map<data::SettleShowType,unsigned int>::mapped_type *v7; // rax
  uint32_t *v8; // rdx
  std::map<unsigned int,std::map<data::SettleShowType,unsigned int>>::key_type __k; // [rsp+18h] [rbp-18h] BYREF
  std::map<data::SettleShowType,unsigned int>::key_type v11[5]; // [rsp+1Ch] [rbp-14h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  this = __closure->__this;
  v3 = *(_BYTE *)(((unsigned __int64)&__closure->__this->monster_die_count_ >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
    __asan_report_load4(&__closure->__this->monster_die_count_);
  monster_die_count = this->monster_die_count_;
  p_settle_show_map = &__closure->__this->settle_show_map_;
  __k = Player::getUid(player_);
  v6 = std::map<unsigned int,std::map<data::SettleShowType,unsigned int>>::operator[](p_settle_show_map, &__k);
  v11[0] = SETTLE_SHOW_KILL_MONSTER_COUNT;
  v7 = std::map<data::SettleShowType,unsigned int>::operator[](v6, v11);
  v8 = v7;
  if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v7);
  }
  *v8 = monster_die_count;
  return 0;
};

// Line 1076: range 0000000015FA2510-0000000015FA2650
void __cdecl DungeonScene::onQuestFinish(DungeonScene *const this, uint32_t quest_id)
{
  std::__shared_ptr_access<DungeonCondition,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rdx
  std::vector<std::shared_ptr<DungeonCondition>>::iterator __for_begin; // [rsp+10h] [rbp-20h] BYREF
  std::vector<std::shared_ptr<DungeonCondition>>::iterator __for_end; // [rsp+18h] [rbp-18h] BYREF
  std::vector<std::shared_ptr<DungeonCondition>> *__for_range; // [rsp+20h] [rbp-10h]
  DungeonConditionPtr *cond_ptr; // [rsp+28h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_result_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_result_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->dungeon_result_);
  }
  if ( this->dungeon_result_ == DUNGEON_RESULT_NONE )
  {
    __for_range = &this->cond_vec_;
    __for_begin._M_current = std::vector<std::shared_ptr<DungeonCondition>>::begin(&this->cond_vec_)._M_current;
    __for_end._M_current = std::vector<std::shared_ptr<DungeonCondition>>::end(&this->cond_vec_)._M_current;
    while ( __gnu_cxx::operator!=<std::shared_ptr<DungeonCondition> *,std::vector<std::shared_ptr<DungeonCondition>>>(
              &__for_begin,
              &__for_end) )
    {
      cond_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<DungeonCondition> *,std::vector<std::shared_ptr<DungeonCondition>>>::operator*(&__for_begin);
      v2 = std::__shared_ptr_access<DungeonCondition,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonCondition,(__gnu_cxx::_Lock_policy)2,false,false> *const)cond_ptr);
      if ( DungeonCondition::getCondState(v2) == COND_STATE_NONE )
      {
        v3 = (unsigned __int64)std::__shared_ptr_access<DungeonCondition,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonCondition,(__gnu_cxx::_Lock_policy)2,false,false> *const)cond_ptr);
        if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
          v3 = __asan_report_load8();
        v4 = *(_QWORD *)v3 + 8LL;
        if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
          v3 = __asan_report_load8();
        (*(void (__fastcall **)(unsigned __int64, _QWORD))v4)(v3, quest_id);
      }
      __gnu_cxx::__normal_iterator<std::shared_ptr<DungeonCondition> *,std::vector<std::shared_ptr<DungeonCondition>>>::operator++(&__for_begin);
    }
  }
};

// Line 1088: range 0000000015FA2652-0000000015FA2AD2
int32_t __cdecl DungeonScene::onItemAdd(DungeonScene *const this, Player *player, uint32_t item_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  uint32_t OwnerUid; // r14d
  int32_t v7; // r14d
  ExploreExcelConfigMgr *p_explore_config_mgr; // r14
  uint32_t DungeonId; // eax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  uint32_t SceneComp; // eax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  Scene *v15; // rax
  uint32_t AreaComp; // eax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rdx
  Area *v20; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-D4h] BYREF
  common::milog::MiLogStream v24; // [rsp+30h] [rbp-D0h] BYREF
  char v25[176]; // [rsp+50h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 4 12 area_id:1095 48 4 13 scene_id:1096 64 16 14 scene_ptr:1102 96 16 13 area_ptr:1109";
  *(_QWORD *)(v3 + 16) = DungeonScene::onItemAdd;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -219021312;
  v5[536862723] = -202178560;
  OwnerUid = Scene::getOwnerUid((const Scene *const)this);
  if ( OwnerUid == Player::getUid(player) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v3 + 96));
    p_explore_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96))->design_config.txt_config_mgr.explore_config_mgr;
    DungeonId = DungeonScene::getDungeonId(this);
    *(_DWORD *)(v3 + 32) = ExploreExcelConfigMgr::getDungeonBelongLevel1AreaId(p_explore_config_mgr, DungeonId);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 96));
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v3 + 96));
    v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
    *(_DWORD *)(v3 + 48) = TxtConfigMgr::getDefaultWorldMainSceneId(&v10->design_config.txt_config_mgr);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 96));
    if ( *(_DWORD *)(v3 + 32) )
    {
      SceneComp = (unsigned int)Player::getSceneComp(player);
      PlayerSceneComp::findScene((const PlayerSceneComp *const)(v3 + 64), SceneComp);
      if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 64), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/dungeon/dungeon_scene.cpp",
          "onItemAdd",
          1105);
        v12 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                &v24,
                (const char (*)[23])"findScene failed, uid:");
        val = Player::getUid(player);
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
        v14 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v13, (const char (*)[11])" scene_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v24);
        v7 = -1;
      }
      else
      {
        v15 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        AreaComp = (unsigned int)Scene::getAreaComp(v15);
        SceneAreaComp::getArea((SceneAreaComp *const)(v3 + 96), AreaComp);
        if ( std::operator==<Area>((const std::shared_ptr<Area> *)(v3 + 96), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v24,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/dungeon/dungeon_scene.cpp",
            "onItemAdd",
            1112);
          v17 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                  &v24,
                  (const char (*)[27])"onItemAdd failed, area_id:");
          v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v17,
                  (const unsigned int *)(v3 + 32));
          v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  v18,
                  (const char (*)[16])" dungeon scene:");
          common::milog::MiLogStream::operator<<<DungeonScene,(DungeonScene*)0>(v19, this);
          common::milog::MiLogStream::~MiLogStream(&v24);
          v7 = -1;
        }
        else
        {
          v20 = std::__shared_ptr_access<Area,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Area,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
          Area::onItemAdd(v20, item_id);
          v7 = 0;
        }
        std::shared_ptr<Area>::~shared_ptr((std::shared_ptr<Area> *const)(v3 + 96));
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 64));
    }
    else
    {
      v7 = 0;
    }
  }
  else
  {
    v7 = 0;
  }
  result = v7;
  if ( v25 == (char *)v3 )
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
  return result;
};

// Line 1120: range 0000000015FA2CF4-0000000015FA3467
void __cdecl DungeonScene::onCreatureHurt(
        DungeonScene *const this,
        Creature *attacker,
        Creature *defenser,
        HurtContext *context)
{
  std::shared_ptr<Creature> *v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  Creature *v7; // rdx
  unsigned __int64 v8; // rax
  Creature *v9; // rdx
  unsigned __int64 v10; // rax
  int v11; // eax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::map<unsigned int,float>::mapped_type *v13; // rax
  float v14; // xmm1_4
  _BOOL4 v15; // r14d
  double v16; // xmm0_8
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  unsigned int __x; // [rsp+30h] [rbp-D0h] BYREF
  std::map<unsigned int,float>::key_type __k; // [rsp+34h] [rbp-CCh] BYREF
  std::pair<unsigned int,unsigned int> __p; // [rsp+38h] [rbp-C8h] BYREF
  std::shared_ptr<Creature> __r; // [rsp+40h] [rbp-C0h] BYREF
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+50h] [rbp-B0h] BYREF
  char v25[144]; // [rsp+70h] [rbp-90h] BYREF

  v4 = (std::shared_ptr<Creature> *)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = (std::shared_ptr<Creature> *)v5;
  }
  v4->_M_ptr = (std::__shared_ptr<Creature,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v4->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"2 32 16 24 attacker_avatar_ptr:1168 64 16"
                                                                               " 18 top_owner_ptr:1171";
  v4[1]._M_ptr = (std::__shared_ptr<Creature,(__gnu_cxx::_Lock_policy)2>::element_type *)DungeonScene::onCreatureHurt;
  v6 = (_DWORD *)((unsigned __int64)v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219021312;
  v6[536862722] = -202178560;
  Scene::onCreatureHurt((Scene *const)this, attacker, defenser, context);
  v7 = defenser;
  if ( *(_BYTE *)(((unsigned __int64)defenser >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v8 = *(_QWORD *)defenser->baseclass_0 + 24LL;
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
    v8 = __asan_report_load8();
  if ( (*(unsigned int (__fastcall **)(Creature *))v8)(v7) == 4 )
  {
    std::function<ForeachPolicy ()(Player &)>::function<DungeonScene::onCreatureHurt(Creature &,Creature &,HurtContext &)::{lambda(Player &)#1},void,void>(
      &p_func,
      (DungeonScene::onCreatureHurt::<lambda(Player&)>)__PAIR128__((unsigned __int64)defenser, (unsigned __int64)this));
    Scene::foreachPlayer((Scene *const)this, &p_func);
    std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
  }
  MistTrialDungeonStatProxy::onCreatureHurt(&this->mist_trial_stat_proxy_, attacker, defenser, context);
  if ( DungeonScene::isEnableFightStatistics(this) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&context->reason >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&context->reason >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&context->reason);
    }
    if ( context->reason == CHANGE_HP_SUB_AVATAR || context->reason == CHANGE_HP_SUB_MONSTER )
    {
      v9 = defenser;
      if ( *(_BYTE *)(((unsigned __int64)defenser >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v10 = *(_QWORD *)defenser->baseclass_0 + 24LL;
      if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
        v10 = __asan_report_load8();
      v11 = (*(__int64 (__fastcall **)(Creature *))v10)(v9);
      if ( v11 == 1 )
      {
        toThisPtr<Creature>((Creature *)&__r);
        std::dynamic_pointer_cast<Avatar,Creature>(v4 + 4);
        std::shared_ptr<Creature>::~shared_ptr(&__r);
        if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)&v4[4]) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&p_func,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/dungeon/dungeon_scene.cpp",
            "onCreatureHurt",
            1158);
          common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
            (common::milog::MiLogStream *const)&p_func,
            (const char (*)[28])"defenser_avatar_ptr is null");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_func);
        }
        else
        {
          v12 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v4[4]);
          __k = Avatar::getAvatarId(v12);
          v13 = std::map<unsigned int,float>::operator[](&this->fight_statistics_.take_damage_count_map, &__k);
          if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v13);
          }
          v14 = *v13;
          if ( *(_BYTE *)(((unsigned __int64)&context->final_damage >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)context + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&context->final_damage >> 3)
                                                                   + 0x7FFF8000) )
          {
            __asan_report_load4(&context->final_damage);
          }
          *v13 = context->final_damage + v14;
        }
        std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)&v4[4]);
      }
      else if ( v11 == 2 )
      {
        toThisPtr<Creature>((Creature *)&__r);
        std::dynamic_pointer_cast<Avatar,Creature>(v4 + 2);
        std::shared_ptr<Creature>::~shared_ptr(&__r);
        if ( !std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)&v4[2])
          || ((Creature::findTopOwner((const Creature *const)&v4[4]), !std::operator==<Creature>(0LL, v4 + 4))
            ? (std::dynamic_pointer_cast<Avatar,Creature>(&__r),
               std::shared_ptr<Avatar>::operator=(
                 (std::shared_ptr<Avatar> *const)&v4[2],
                 (std::shared_ptr<Avatar> *)&__r),
               std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)&__r),
               v15 = !std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)&v4[2]))
            : (v15 = 0),
              std::shared_ptr<Creature>::~shared_ptr(v4 + 4),
              v15) )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->fight_statistics_.max_single_damage_pair.second >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fight_statistics_.max_single_damage_pair.second >> 3)
                                                                + 0x7FFF8000) )
          {
            __asan_report_load4(&this->fight_statistics_.max_single_damage_pair.second);
          }
          *(float *)&v16 = (float)(int)this->fight_statistics_.max_single_damage_pair.second;
          if ( *(_BYTE *)(((unsigned __int64)&context->final_damage >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)context + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&context->final_damage >> 3)
                                                                   + 0x7FFF8000) )
          {
            v16 = __asan_report_load4(&context->final_damage);
          }
          if ( context->final_damage > *(float *)&v16 )
          {
            __k = (int)context->final_damage;
            v17 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v4[2]);
            __x = Avatar::getAvatarId(v17);
            __p = std::make_pair<unsigned int,unsigned int>(&__x, &__k);
            std::pair<unsigned int,unsigned int>::operator=(&this->fight_statistics_.max_single_damage_pair, &__p);
          }
        }
        std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)&v4[2]);
      }
    }
  }
  if ( v25 == (char *)v4 )
  {
    *(_QWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v4->_M_ptr = (std::__shared_ptr<Creature,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 1124: range 0000000015FA2AD4-0000000015FA2CF2
ForeachPolicy __cdecl DungeonScene::onCreatureHurt(Creature &,Creature &,HurtContext &)::{lambda(Player &)#1}::operator()(
        const DungeonScene::onCreatureHurt::<lambda(Player&)> *const __closure,
        Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  PlayerTowerComp *TowerComp; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t GadgetId; // eax
  ForeachPolicy result; // eax
  std::shared_ptr<Creature> v9; // [rsp+10h] [rbp-A0h] BYREF
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-90h] BYREF
  char v11[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 15 gadget_ptr:1126";
  *(_QWORD *)(v2 + 16) = DungeonScene::onCreatureHurt(Creature &,Creature &,HurtContext &)::{lambda(Player &)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__defenser >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  toThisPtr<Creature>((Creature *)&v9);
  std::dynamic_pointer_cast<Gadget,Creature>((const std::shared_ptr<Creature> *)(v2 + 32));
  std::shared_ptr<Creature>::~shared_ptr(&v9);
  if ( std::operator==<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/dungeon_scene.cpp",
      "operator()",
      1129);
    common::milog::MiLogStream::operator()(&v10, "gadget nullptr");
    common::milog::MiLogStream::~MiLogStream(&v10);
  }
  else
  {
    TowerComp = Player::getTowerComp(player);
    v6 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    GadgetId = Gadget::getGadgetId(v6);
    PlayerTowerComp::onGadgetHurt(TowerComp, GadgetId);
  }
  std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v2 + 32));
  result = FOREACH_CONTINUE;
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

// Line 1199: range 0000000015FA3468-0000000015FA3B02
void __cdecl DungeonScene::onSkillEvent(
        DungeonScene *const this,
        uint32_t skill_id,
        uint64_t avatar_guid,
        uint32_t avatar_entity_id)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  Player *v9; // rax
  PlayerAvatarComp *AvatarComp; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  uint32_t SkillComp; // eax
  std::__shared_ptr_access<Skill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  uint32_t Uid; // eax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  std::map<unsigned int,unsigned int>::mapped_type *v17; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  std::map<unsigned int,unsigned int>::mapped_type *v19; // rax
  std::map<unsigned int,unsigned int>::key_type __k; // [rsp+28h] [rbp-F8h] BYREF
  SkillType skill_type; // [rsp+2Ch] [rbp-F4h]
  common::milog::MiLogStream v22; // [rsp+30h] [rbp-F0h] BYREF
  char v23[208]; // [rsp+50h] [rbp-D0h] BYREF

  v4 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 32 16 22 entity_avatar_ptr:1200 64 16 15 player_ptr:1207 96 16 15 avatar_ptr:1213 128 16 14 skill_ptr:1226";
  *(_QWORD *)(v4 + 16) = DungeonScene::onSkillEvent;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219021312;
  v6[536862722] = -219021312;
  v6[536862723] = -219021312;
  v6[536862724] = -202178560;
  Scene::findEntity<Avatar>((const Scene *const)(v4 + 32), (uint32_t)this);
  if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v4 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/dungeon_scene.cpp",
      "onSkillEvent",
      1203);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v22, (const char (*)[19])"avatar_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v22);
  }
  else
  {
    v7 = (unsigned __int64)std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load8();
    v8 = *(_QWORD *)v7 + 152LL;
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load8();
    (*(void (__fastcall **)(unsigned __int64, unsigned __int64))v8)(v4 + 64, v7);
    if ( !std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v4 + 64)) )
    {
      v9 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      AvatarComp = Player::getAvatarComp(v9);
      PlayerAvatarComp::findAvatar((const PlayerAvatarComp *const)(v4 + 96), (uint64_t)AvatarComp);
      if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v4 + 96)) )
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/dungeon/dungeon_scene.cpp",
          "onSkillEvent",
          1216);
        common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v22, (const char (*)[19])"avatar_ptr is null");
        common::milog::MiLogStream::~MiLogStream(&v22);
      }
      else if ( std::operator!=<Avatar,Avatar>(
                  (const std::shared_ptr<Avatar> *)(v4 + 96),
                  (const std::shared_ptr<Avatar> *)(v4 + 32)) )
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/dungeon/dungeon_scene.cpp",
          "onSkillEvent",
          1222);
        common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
          &v22,
          (const char (*)[43])"avatar_ptr and entity_avatar_ptr not match");
        common::milog::MiLogStream::~MiLogStream(&v22);
      }
      else
      {
        v11 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
        SkillComp = (unsigned int)Avatar::getSkillComp(v11);
        SkillComp::findSkill((const SkillComp *const)(v4 + 128), SkillComp);
        if ( std::operator==<Skill>(0LL, (const std::shared_ptr<Skill> *)(v4 + 128)) )
        {
          common::milog::MiLogStream::create(
            &v22,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/dungeon/dungeon_scene.cpp",
            "onSkillEvent",
            1229);
          common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v22, (const char (*)[18])"skill_ptr is null");
          common::milog::MiLogStream::~MiLogStream(&v22);
        }
        else
        {
          v13 = std::__shared_ptr_access<Skill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Skill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
          skill_type = Skill::getType(v13);
          if ( skill_type == SKILL_ENERGY )
          {
            v14 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
            Uid = Player::getUid(v14);
            MistTrialDungeonStatProxy::onEnergySkillEvent(&this->mist_trial_stat_proxy_, Uid);
          }
          if ( DungeonScene::isEnableFightStatistics(this) )
          {
            if ( skill_type == SKILL_ENERGY )
            {
              v16 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
              __k = Avatar::getAvatarId(v16);
              v17 = std::map<unsigned int,unsigned int>::operator[](
                      &this->fight_statistics_.energy_skill_count_map,
                      &__k);
              if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v17);
              }
              ++*v17;
            }
            else if ( skill_type == SKILL_SMALL )
            {
              v18 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
              __k = Avatar::getAvatarId(v18);
              v19 = std::map<unsigned int,unsigned int>::operator[](
                      &this->fight_statistics_.normal_skill_count_map,
                      &__k);
              if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v19);
              }
              ++*v19;
            }
          }
        }
        std::shared_ptr<Skill>::~shared_ptr((std::shared_ptr<Skill> *const)(v4 + 128));
      }
      std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v4 + 96));
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 64));
  }
  std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v4 + 32));
  if ( v23 == (char *)v4 )
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
};

// Line 1257: range 0000000015FA3B04-0000000015FA40FB
__int64 __fastcall DungeonScene::onPlayerRevive(
        DungeonScene *const this,
        uint32_t uid,
        uint32_t point_id,
        uint32_t p,
        uint32_t die_type)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  std::map<unsigned int,unsigned int>::mapped_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  unsigned int v16; // r14d
  uint32_t v17; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rdx
  uint32_t *p_uid; // rax
  std::remove_reference<std::string&>::type *v20; // r14
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  int32_t v22; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rdx
  int32_t *p_param1; // rax
  int32_t v25; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  int32_t v27; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rdx
  int32_t *p_param3; // rax
  SceneBlockGroupComp *BlockGroupComp; // r14
  __int64 result; // rax
  std::shared_ptr<Event> p_event_ptr; // [rsp+20h] [rbp-100h] BYREF
  char v36[240]; // [rsp+30h] [rbp-F0h] BYREF

  v5 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(192LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "6 32 4 8 uid:1256 48 4 13 point_id:1256 64 4 6 p:1256 80 4 13 die_type:1256 96 16 14 event_ptr:1"
                        "263 128 32 16 source_name:1269";
  *(_QWORD *)(v5 + 16) = DungeonScene::onPlayerRevive;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556924;
  v7[536862722] = -234556924;
  v7[536862723] = -219021312;
  v7[536862725] = -202116109;
  *(_DWORD *)(v5 + 32) = uid;
  *(_DWORD *)(v5 + 48) = point_id;
  *(_DWORD *)(v5 + 64) = p;
  *(_DWORD *)(v5 + 80) = die_type;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_result_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_result_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->dungeon_result_);
  }
  if ( this->dungeon_result_ == DUNGEON_RESULT_NONE )
  {
    v8 = std::map<unsigned int,unsigned int>::operator[](
           &this->revive_count_map_,
           (const std::map<unsigned int,unsigned int>::key_type *)(v5 + 32));
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v8);
    }
    ++*v8;
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v5 + 128),
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/dungeon/dungeon_scene.cpp",
    "onPlayerRevive",
    1262);
  v9 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
         (common::milog::MiLogStream *const)(v5 + 128),
         (const char (*)[20])"onPlayerRevive uid:");
  v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v5 + 32));
  v11 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v10, (const char (*)[11])" point_id:");
  v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v5 + 48));
  v13 = common::milog::MiLogStream::operator<<<char [4],(char *[4])0>(v12, (const char (*)[4])" p:");
  v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v5 + 64));
  v15 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v14, (const char (*)[11])" die_type:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v5 + 80));
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 128));
  EventUtil::createEvent((data::EventType)(v5 + 96));
  if ( std::operator==<Event>((const std::shared_ptr<Event> *)(v5 + 96), 0LL) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v5 + 128),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/dungeon_scene.cpp",
      "onPlayerRevive",
      1266);
    common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
      (common::milog::MiLogStream *const)(v5 + 128),
      (const char (*)[41])"createEvent(EVENT_DUNGEON_REVIVE) failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 128));
    v16 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->dungeon_id_);
    }
    common::tools::StringUtils::numToStr<unsigned int>((std::string *)(v5 + 128), this->dungeon_id_);
    v17 = *(_DWORD *)(v5 + 32);
    v18 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
    p_uid = &v18->uid;
    if ( *(_BYTE *)(((unsigned __int64)p_uid >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_uid >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(p_uid);
    }
    v18->uid = v17;
    v20 = std::move<std::string &>((std::string *)(v5 + 128));
    v21 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
    std::string::operator=(&v21->source_name, v20);
    v22 = *(_DWORD *)(v5 + 64);
    v23 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
    p_param1 = &v23->param1;
    if ( *(_BYTE *)(((unsigned __int64)p_param1 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_param1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_param1 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(p_param1);
    }
    v23->param1 = v22;
    v25 = *(_DWORD *)(v5 + 48);
    v26 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
    if ( *(_BYTE *)(((unsigned __int64)&v26->param2 >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v26->param2 >> 3) + 0x7FFF8000) <= 3 )
    {
      v26 = (std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v26->param2);
    }
    v26->param2 = v25;
    v27 = *(_DWORD *)(v5 + 80);
    v28 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
    p_param3 = &v28->param3;
    if ( *(_BYTE *)(((unsigned __int64)p_param3 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_param3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_param3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(p_param3);
    }
    v28->param3 = v27;
    BlockGroupComp = Scene::getBlockGroupComp((Scene *const)this);
    std::shared_ptr<Event>::shared_ptr(&p_event_ptr, (const std::shared_ptr<Event> *)(v5 + 96));
    SceneBlockGroupComp::broadcastGroupLuaEvent(BlockGroupComp, &p_event_ptr);
    std::shared_ptr<Event>::~shared_ptr(&p_event_ptr);
    v16 = 0;
    std::string::~string((void *)(v5 + 128));
  }
  std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v5 + 96));
  result = v16;
  if ( v36 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8014) = 0;
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

// Line 1281: range 0000000015FA40FC-0000000015FA449C
int32_t __cdecl DungeonScene::onAvatarSlipDie(
        DungeonScene *const this,
        uint32_t uid,
        uint32_t point_id,
        uint32_t p,
        uint32_t die_type)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rdx
  uint32_t *p_uid; // rax
  std::remove_reference<std::string&>::type *v10; // r14
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rdx
  int32_t *p_param1; // rax
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rdx
  int32_t *p_param3; // rax
  SceneBlockGroupComp *BlockGroupComp; // r14
  int32_t result; // eax
  std::shared_ptr<Event> p_event_ptr; // [rsp+20h] [rbp-C0h] BYREF
  char v23[176]; // [rsp+30h] [rbp-B0h] BYREF

  v5 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(128LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 32 16 14 event_ptr:1282 64 32 16 source_name:1285";
  *(_QWORD *)(v5 + 16) = DungeonScene::onAvatarSlipDie;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -219021312;
  v7[536862723] = -202116109;
  EventUtil::createEvent((data::EventType)(v5 + 32));
  if ( std::operator!=<Event>((const std::shared_ptr<Event> *)(v5 + 32), 0LL) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->dungeon_id_);
    }
    common::tools::StringUtils::numToStr<unsigned int>((std::string *)(v5 + 64), this->dungeon_id_);
    v8 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 32));
    p_uid = &v8->uid;
    if ( *(_BYTE *)(((unsigned __int64)p_uid >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_uid >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(p_uid);
    }
    v8->uid = uid;
    v10 = std::move<std::string &>((std::string *)(v5 + 64));
    v11 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 32));
    std::string::operator=(&v11->source_name, v10);
    v12 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 32));
    p_param1 = &v12->param1;
    if ( *(_BYTE *)(((unsigned __int64)p_param1 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_param1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_param1 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(p_param1);
    }
    v12->param1 = p;
    v14 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&v14->param2 >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v14->param2 >> 3) + 0x7FFF8000) <= 3 )
    {
      v14 = (std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v14->param2);
    }
    v14->param2 = point_id;
    v15 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 32));
    p_param3 = &v15->param3;
    if ( *(_BYTE *)(((unsigned __int64)p_param3 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_param3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_param3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(p_param3);
    }
    v15->param3 = die_type;
    BlockGroupComp = Scene::getBlockGroupComp((Scene *const)this);
    std::shared_ptr<Event>::shared_ptr(&p_event_ptr, (const std::shared_ptr<Event> *)(v5 + 32));
    SceneBlockGroupComp::broadcastGroupLuaEvent(BlockGroupComp, &p_event_ptr);
    std::shared_ptr<Event>::~shared_ptr(&p_event_ptr);
    std::string::~string((void *)(v5 + 64));
  }
  std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v5 + 32));
  result = 0;
  if ( v23 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1298: range 0000000015FA449E-0000000015FA4630
__int64 __fastcall DungeonScene::getPlayerReviveCount(DungeonScene *const this, uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::pointer v5; // rdx
  unsigned int *p_second; // rax
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self __y; // [rsp+18h] [rbp-88h] BYREF
  char v9[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 8 uid:1297 64 8 7 it:1299";
  *(_QWORD *)(v2 + 16) = DungeonScene::getPlayerReviveCount;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = uid;
  *(std::map<unsigned int,unsigned int>::iterator *)(v2 + 64) = std::map<unsigned int,unsigned int>::find(
                                                                  &this->revive_count_map_,
                                                                  (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,unsigned int>::end(&this->revive_count_map_)._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 64),
         &__y) )
  {
    v5 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 64));
    p_second = &v5->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    result = v5->second;
  }
  else
  {
    result = 0LL;
  }
  if ( v9 == (char *)v2 )
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

// Line 1306: range 0000000015FA4632-0000000015FA4743
uint32_t __cdecl DungeonScene::getLeftReviveCount(DungeonScene *const this)
{
  common::milog::MiLogStream *v1; // rax
  uint32_t all_revive_count; // [rsp+14h] [rbp-3Ch]
  const data::DungeonExcelConfig *dungeon_config_ptr; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v5; // [rsp+20h] [rbp-30h] BYREF

  dungeon_config_ptr = DungeonScene::getDungeonConfig(this);
  if ( dungeon_config_ptr )
  {
    all_revive_count = DungeonScene::getAllPlayerReviveCount(this);
    if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->revive_max_count >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->revive_max_count >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&dungeon_config_ptr->revive_max_count);
    }
    if ( all_revive_count >= dungeon_config_ptr->revive_max_count )
      return 0;
    else
      return dungeon_config_ptr->revive_max_count - all_revive_count;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/dungeon_scene.cpp",
      "getLeftReviveCount",
      1310);
    v1 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(&v5, (const char (*)[43])off_25AB3840);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &this->dungeon_id_);
    common::milog::MiLogStream::~MiLogStream(&v5);
    return 0;
  }
};

// Line 1318: range 0000000015FA4744-0000000015FA4899
uint32_t __cdecl DungeonScene::getAllPlayerReviveCount(DungeonScene *const this)
{
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::reference v1; // rax
  std::pair<unsigned int const,unsigned int> *v2; // rdx
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *v3; // rax
  uint32_t count; // [rsp+1Ch] [rbp-34h]
  std::map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-30h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_end; // [rsp+28h] [rbp-28h] BYREF
  std::map<unsigned int,unsigned int> *__for_range; // [rsp+30h] [rbp-20h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *uid; // [rsp+38h] [rbp-18h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *revive_count; // [rsp+40h] [rbp-10h]
  std::pair<unsigned int const,unsigned int> __in; // [rsp+48h] [rbp-8h] BYREF

  count = 0;
  __for_range = &this->revive_count_map_;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->revive_count_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(&this->revive_count_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v1 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    v2 = v1;
    if ( ((unsigned __int8)v1 & 7) >= *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v1->second + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v1 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v1->second + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(v1, 8LL);
    }
    __in = *v2;
    uid = std::get<0ul,unsigned int const,unsigned int>(&__in);
    v3 = std::get<1ul,unsigned int const,unsigned int>(&__in);
    revive_count = v3;
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v3);
    }
    count += *revive_count;
    std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
  return count;
};

// Line 1328: range 0000000015FA489A-0000000015FA49B4
void __fastcall DungeonScene::forceSetPlayerReviveCount(DungeonScene *const this, uint32_t uid, uint32_t count)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::map<unsigned int,unsigned int>::mapped_type *v6; // rax
  _DWORD *v7; // rdx
  char v9[96]; // [rsp+10h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 8 uid:1327";
  *(_QWORD *)(v3 + 16) = DungeonScene::forceSetPlayerReviveCount;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = uid;
  v6 = std::map<unsigned int,unsigned int>::operator[](
         &this->revive_count_map_,
         (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 32));
  v7 = v6;
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v6);
  }
  *v7 = count;
  if ( v9 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1334: range 0000000015FA49B6-0000000015FA4AC1
void __fastcall DungeonScene::clearPlayerRecord(DungeonScene *const this, uint32_t uid)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 8 uid:1333";
  *(_QWORD *)(v2 + 16) = DungeonScene::clearPlayerRecord;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = uid;
  std::map<unsigned int,unsigned int>::erase(
    &this->revive_count_map_,
    (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 32));
  std::map<unsigned int,std::map<data::SettleShowType,unsigned int>>::erase(
    &this->settle_show_map_,
    (const std::map<unsigned int,std::map<data::SettleShowType,unsigned int>>::key_type *)(v2 + 32));
  std::map<unsigned int,unsigned int>::erase(
    &this->player_all_avatar_die_time_map_,
    (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 32));
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

// Line 1342: range 0000000015FA4AC2-0000000015FA4E92
__int64 __fastcall DungeonScene::forcePlayerQuit(DungeonScene *const this, uint32_t uid)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  unsigned int v6; // r14d
  Player *v7; // rax
  bool v8; // r14
  common::milog::MiLogStream *v9; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  Player *v12; // rax
  PlayerDungeonComp *DungeonComp; // rax
  common::milog::MiLogStream *v14; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  __int64 result; // rax
  std::shared_ptr<Scene> __a; // [rsp+10h] [rbp-D0h] BYREF
  std::shared_ptr<DungeonScene> __b; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v19; // [rsp+30h] [rbp-B0h] BYREF
  char v20[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 8 uid:1341 64 16 15 player_ptr:1343";
  *(_QWORD *)(v2 + 16) = DungeonScene::forcePlayerQuit;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = uid;
  Scene::findPlayer((const Scene *const)(v2 + 64), (uint32_t)this);
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/dungeon_scene.cpp",
      "forcePlayerQuit",
      1346);
    v5 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
           &v19,
           (const char (*)[23])"findPlayer fails, uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v19);
    v6 = -1;
  }
  else
  {
    toThisPtr<DungeonScene>((DungeonScene *)&__b);
    v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    Player::getSceneComp(v7);
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)&__a);
    v8 = std::operator!=<Scene,DungeonScene>(&__a, &__b);
    std::shared_ptr<Scene>::~shared_ptr(&__a);
    std::shared_ptr<DungeonScene>::~shared_ptr(&__b);
    if ( v8 )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/dungeon/dungeon_scene.cpp",
        "forcePlayerQuit",
        1351);
      v9 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
             &v19,
             (const char (*)[31])"player is not in this dungeon!");
      v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      v11 = operator<<(v9, v10);
      common::milog::MiLogStream::operator<<<DungeonScene,(DungeonScene*)0>(v11, this);
      common::milog::MiLogStream::~MiLogStream(&v19);
      v6 = -1;
    }
    else
    {
      v12 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      DungeonComp = Player::getDungeonComp(v12);
      if ( PlayerDungeonComp::quitCurDungeon(DungeonComp, DUNGEON_QUIT_REASON_GM) )
      {
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/dungeon/dungeon_scene.cpp",
          "forcePlayerQuit",
          1356);
        v14 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                &v19,
                (const char (*)[21])"quitCurDungeon fails");
        v15 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        operator<<(v14, v15);
        common::milog::MiLogStream::~MiLogStream(&v19);
        v6 = -1;
      }
      else
      {
        v6 = 0;
      }
    }
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
  result = v6;
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
  return result;
};

// Line 1364: range 0000000015FA5126-0000000015FA518E
int32_t __cdecl DungeonScene::forceAllPlayerQuit(DungeonScene *const this)
{
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+10h] [rbp-30h] BYREF

  std::function<ForeachPolicy ()(Player &)>::function<DungeonScene::forceAllPlayerQuit(void)::{lambda(Player &)#1},void,void>(
    &p_func,
    (DungeonScene::forceAllPlayerQuit::<lambda(Player&)>)this);
  Scene::foreachPlayer((Scene *const)this, &p_func);
  std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
  return 0;
};

// Line 1365: range 0000000015FA4E94-0000000015FA5125
ForeachPolicy __cdecl DungeonScene::forceAllPlayerQuit(void)::{lambda(Player &)#1}::operator()(
        const DungeonScene::forceAllPlayerQuit::<lambda(Player&)> *const __closure,
        Player *player)
{
  bool v2; // bl
  common::milog::MiLogStream *v3; // rdx
  common::milog::MiLogStream *v4; // rcx
  DungeonScene *this; // rax
  char v7; // dl
  PlayerDungeonComp *DungeonComp; // rax
  common::milog::MiLogStream *v9; // rdx
  proto_log::DungeonQuitReason quit_reason; // [rsp+1Ch] [rbp-54h]
  std::shared_ptr<Scene> __a; // [rsp+20h] [rbp-50h] BYREF
  std::shared_ptr<DungeonScene> __b; // [rsp+30h] [rbp-40h] BYREF
  common::milog::MiLogStream v13; // [rsp+40h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  toThisPtr<DungeonScene>((DungeonScene *)&__b);
  Player::getSceneComp(player);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)&__a);
  v2 = std::operator!=<Scene,DungeonScene>(&__a, &__b);
  std::shared_ptr<Scene>::~shared_ptr(&__a);
  std::shared_ptr<DungeonScene>::~shared_ptr(&__b);
  if ( v2 )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/dungeon/dungeon_scene.cpp",
      "operator()",
      1369);
    v3 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v13,
           (const char (*)[31])"player is not in this dungeon!");
    v4 = operator<<(v3, player);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::milog::MiLogStream::operator<<<DungeonScene,(DungeonScene*)0>(v4, __closure->__this);
    common::milog::MiLogStream::~MiLogStream(&v13);
    return 0;
  }
  else
  {
    quit_reason = DUNGEON_QUIT_REASON_TIMEOUT;
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v7 = *(_BYTE *)(((unsigned __int64)&__closure->__this->dungeon_result_ >> 3) + 0x7FFF8000);
    if ( v7 != 0 && v7 <= 3 )
      __asan_report_load4(&__closure->__this->dungeon_result_);
    if ( this->dungeon_result_ == DUNGEON_RESULT_SUCCEED )
      quit_reason = DUNGEON_QUIT_REASON_SUCC_TIMEOUT;
    DungeonComp = Player::getDungeonComp(player);
    if ( PlayerDungeonComp::quitCurDungeon(DungeonComp, quit_reason) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/dungeon_scene.cpp",
        "operator()",
        1378);
      v9 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
             &v13,
             (const char (*)[21])"quitCurDungeon fails");
      operator<<(v9, player);
      common::milog::MiLogStream::~MiLogStream(&v13);
    }
    return 0;
  }
};

// Line 1386: range 0000000015FA5190-0000000015FA520F
uint32_t __cdecl DungeonScene::getAllowEnterPlayerCount(DungeonScene *const this)
{
  uint32_t count; // [rsp+1Ch] [rbp-4h]

  if ( DungeonSceneTeam::isEnterByCandidateTeam(&this->dungeon_scene_team_) )
  {
    count = DungeonSceneTeam::getCandidatePlayerMapSize(&this->dungeon_scene_team_);
  }
  else if ( DungeonScene::isEnterByCharAmusementActivity(this) )
  {
    count = std::set<unsigned int>::size(&this->team_uid_set_);
  }
  else
  {
    count = 1;
  }
  if ( count )
    return count;
  else
    return 1;
};

// Line 1407: range 0000000015FA5210-0000000015FA522F
bool __cdecl DungeonScene::isMpDungeonMode(DungeonScene *const this)
{
  return DungeonScene::getAllowEnterPlayerCount(this) > 1;
};

// Line 1413: range 0000000015FA5230-0000000015FA5281
SceneTeamPtr __cdecl DungeonScene::findSceneTeam(DungeonScene *const this)
{
  SceneTeamPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = DungeonSceneTeam::getSceneTeam((DungeonSceneTeam *const)this);
  result._M_ptr = (std::__shared_ptr<SceneTeam,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1418: range 0000000015FA5282-0000000015FA556D
int32_t __cdecl DungeonScene::addChatInfo(
        DungeonScene *const this,
        uint32_t channel_id,
        const proto::ChatInfo *chat_info)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int32_t v6; // r14d
  Player *v7; // rax
  World *v8; // rax
  proto::ChatInfo *v9; // rdx
  int32_t result; // eax
  char v12[208]; // [rsp+20h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 16 15 player_ptr:1419 64 16 14 world_ptr:1425 96 32 11 notify:1432";
  *(_QWORD *)(v3 + 16) = DungeonScene::addChatInfo;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -219021312;
  v5[536862724] = -202116109;
  Scene::getOwnPlayer((const Scene *const)(v3 + 32));
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v3 + 32)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 96),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/dungeon_scene.cpp",
      "addChatInfo",
      1422);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
      (common::milog::MiLogStream *const)(v3 + 96),
      (const char (*)[19])"getOwnPlayer fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
    v6 = -1;
  }
  else
  {
    v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    Player::getSceneComp(v7);
    PlayerSceneComp::getCurWorld((const PlayerSceneComp *const)(v3 + 64));
    if ( std::operator!=<World>((const std::shared_ptr<World> *)(v3 + 64), 0LL) )
    {
      v8 = std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      v6 = World::addChatInfo(v8, channel_id, chat_info);
    }
    else
    {
      proto::PlayerChatNotify::PlayerChatNotify((proto::PlayerChatNotify *const)(v3 + 96));
      proto::PlayerChatNotify::set_channel_id((proto::PlayerChatNotify *const)(v3 + 96), channel_id);
      v9 = proto::PlayerChatNotify::mutable_chat_info((proto::PlayerChatNotify *const)(v3 + 96));
      proto::ChatInfo::operator=(v9, chat_info);
      Scene::notifyAllPlayer<proto::PlayerChatNotify>((Scene *const)this, (proto::PlayerChatNotify *)(v3 + 96), 0);
      v6 = 0;
      proto::PlayerChatNotify::~PlayerChatNotify((proto::PlayerChatNotify *const)(v3 + 96));
    }
    std::shared_ptr<World>::~shared_ptr((std::shared_ptr<World> *const)(v3 + 64));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
  result = v6;
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
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

// Line 1441: range 0000000015FA556E-0000000015FA5597
proto_log::ChangeSceneTeamReason __cdecl DungeonScene::getChangeSceneTeamReason(DungeonScene *const this)
{
  if ( DungeonScene::isMpDungeonMode(this) )
    return 9;
  else
    return 8;
};

// Line 1454: range 0000000015FA5598-0000000015FA55DA
bool __cdecl DungeonScene::isInMpMode(DungeonScene *const this)
{
  DungeonSceneTeam *DungeonSceneTeam; // rax
  bool is_mp; // [rsp+1Fh] [rbp-1h]

  is_mp = Scene::isInMpMode((Scene *const)this);
  if ( !is_mp )
  {
    DungeonSceneTeam = DungeonScene::getDungeonSceneTeam(this);
    return DungeonSceneTeam::isInMpMode(DungeonSceneTeam);
  }
  return is_mp;
};

// Line 1465: range 0000000015FA55DC-0000000015FA5A2D
void __cdecl DungeonScene::resetDungeon(DungeonScene *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  uint32_t Now; // esi
  const std::shared_ptr<DungeonCondition> *v5; // rax
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdx
  std::vector<std::shared_ptr<DungeonCondition>>::iterator __for_begin; // [rsp+18h] [rbp-78h] BYREF
  std::vector<std::shared_ptr<DungeonCondition>>::iterator __for_end; // [rsp+20h] [rbp-70h] BYREF
  std::vector<std::shared_ptr<DungeonCondition>> *__for_range; // [rsp+28h] [rbp-68h]
  char v11[96]; // [rsp+30h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 13 cond_ptr:1470";
  *(_QWORD *)(v1 + 16) = DungeonScene::resetDungeon;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  Now = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_begin_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_begin_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dungeon_begin_time_);
  }
  this->dungeon_begin_time_ = Now;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_result_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_result_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dungeon_result_);
  }
  this->dungeon_result_ = DUNGEON_RESULT_NONE;
  std::map<unsigned int,unsigned int>::clear(&this->activated_way_point_map_);
  std::map<unsigned int,unsigned int>::clear(&this->activated_slip_revive_map_);
  __for_range = &this->cond_vec_;
  __for_begin._M_current = std::vector<std::shared_ptr<DungeonCondition>>::begin(&this->cond_vec_)._M_current;
  __for_end._M_current = std::vector<std::shared_ptr<DungeonCondition>>::end(&this->cond_vec_)._M_current;
  while ( __gnu_cxx::operator!=<std::shared_ptr<DungeonCondition> *,std::vector<std::shared_ptr<DungeonCondition>>>(
            &__for_begin,
            &__for_end) )
  {
    v5 = __gnu_cxx::__normal_iterator<std::shared_ptr<DungeonCondition> *,std::vector<std::shared_ptr<DungeonCondition>>>::operator*(&__for_begin);
    std::shared_ptr<DungeonCondition>::shared_ptr((std::shared_ptr<DungeonCondition> *const)(v1 + 32), v5);
    v6 = (unsigned __int64)std::__shared_ptr_access<DungeonCondition,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonCondition,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      v6 = __asan_report_load8();
    v7 = *(_QWORD *)v6 + 40LL;
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      v6 = __asan_report_load8();
    (*(void (__fastcall **)(unsigned __int64))v7)(v6);
    std::shared_ptr<DungeonCondition>::~shared_ptr((std::shared_ptr<DungeonCondition> *const)(v1 + 32));
    __gnu_cxx::__normal_iterator<std::shared_ptr<DungeonCondition> *,std::vector<std::shared_ptr<DungeonCondition>>>::operator++(&__for_begin);
  }
  std::map<unsigned int,std::map<data::SettleShowType,unsigned int>>::clear(&this->settle_show_map_);
  std::map<unsigned int,unsigned int>::clear(&this->revive_count_map_);
  std::map<unsigned int,unsigned int>::clear(&this->player_all_avatar_die_time_map_);
  DungeonScene::removeDropTrifle(this);
  std::map<unsigned int,proto::GroupBin>::clear(&this->group_bin_map_);
  DungeonFightStatistic::clear(&this->fight_statistics_);
  if ( *(_BYTE *)(((unsigned __int64)&this->monster_die_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->monster_die_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->monster_die_count_);
  }
  this->monster_die_count_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->tower_last_count_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->tower_last_count_time_ms_);
  this->tower_last_count_time_ms_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->tower_total_count_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->tower_total_count_time_ms_);
  this->tower_total_count_time_ms_ = 0LL;
  if ( *(char *)(((unsigned __int64)&this->enable_fight_statistics_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->enable_fight_statistics_);
  this->enable_fight_statistics_ = 0;
  if ( *(char *)(((unsigned __int64)&this->is_reset_ban_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_reset_ban_);
  this->is_reset_ban_ = 1;
  std::map<unsigned int,proto::DungeonSettleExhibitionInfo>::clear(&this->dungeon_settle_exhibition_info_map_);
  if ( v11 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1492: range 0000000015FA5A2E-0000000015FA5DC9
void __cdecl DungeonScene::removeDropTrifle(DungeonScene *const this)
{
  unsigned __int64 p_M_end_of_storage; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  char v4; // r15
  bool v5; // r14
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v6; // rax
  uint32_t *v7; // rdx
  std::unordered_map<unsigned int,std::shared_ptr<Entity>>::iterator __for_begin; // [rsp+18h] [rbp-F8h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<Entity>>::iterator __for_end; // [rsp+20h] [rbp-F0h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<Entity>> *__for_range; // [rsp+28h] [rbp-E8h]
  std::vector<unsigned int> *__for_range_0; // [rsp+30h] [rbp-E0h]
  const std::pair<unsigned int const,std::shared_ptr<Entity> > *v12; // [rsp+38h] [rbp-D8h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<Entity> > >::type *entity_id; // [rsp+40h] [rbp-D0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Entity> > >::type *entity_ptr; // [rsp+48h] [rbp-C8h]
  EcsBase<Gadget,GadgetCompBase,28> v15; // [rsp+50h] [rbp-C0h] BYREF

  p_M_end_of_storage = (unsigned __int64)&v15.comp_vec_._M_impl._M_end_of_storage;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      p_M_end_of_storage = v2;
  }
  *(_QWORD *)p_M_end_of_storage = 1102416563LL;
  *(_QWORD *)(p_M_end_of_storage + 8) = "2 32 16 15 gadget_ptr:1496 64 24 22 trifle_entity_vec:1493";
  *(_QWORD *)(p_M_end_of_storage + 16) = DungeonScene::removeDropTrifle;
  v3 = (_DWORD *)(p_M_end_of_storage >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -218103808;
  v3[536862723] = -202116109;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(p_M_end_of_storage + 64));
  __for_range = (std::unordered_map<unsigned int,std::shared_ptr<Entity>> *)&this->baseclass_0[256];
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Entity>>::begin((std::unordered_map<unsigned int,std::shared_ptr<Entity>> *const)&this->baseclass_0[256])._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Entity>>::end((std::unordered_map<unsigned int,std::shared_ptr<Entity>> *const)&this->baseclass_0[256])._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<Entity>>,false>(
            &__for_begin,
            &__for_end) )
  {
    v12 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Entity>>,false,false>::operator*(&__for_begin);
    entity_id = std::get<0ul,unsigned int const,std::shared_ptr<Entity>>(v12);
    entity_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Entity> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<Entity>>(v12);
    std::dynamic_pointer_cast<Gadget,Entity>((const std::shared_ptr<Entity> *)(p_M_end_of_storage + 32));
    v4 = 0;
    v5 = 0;
    if ( std::operator!=<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(p_M_end_of_storage + 32)) )
    {
      std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_end_of_storage + 32));
      EcsBase<Gadget,GadgetCompBase,28u>::findComp<TrifleComp>(&v15);
      v4 = 1;
      if ( std::operator!=<TrifleComp>(0LL, (const std::shared_ptr<TrifleComp> *)&v15) )
        v5 = 1;
    }
    if ( v4 )
      std::shared_ptr<TrifleComp>::~shared_ptr((std::shared_ptr<TrifleComp> *const)&v15);
    if ( v5 )
      std::vector<unsigned int>::emplace_back<unsigned int const&>(
        (std::vector<unsigned int> *const)(p_M_end_of_storage + 64),
        entity_id,
        entity_id);
    std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(p_M_end_of_storage + 32));
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Entity>>,false,false>::operator++(&__for_begin);
  }
  __for_range_0 = (std::vector<unsigned int> *)(p_M_end_of_storage + 64);
  __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Entity> >,false>::__node_type *)std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(p_M_end_of_storage + 64))._M_current;
  __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Entity> >,false>::__node_type *)std::vector<unsigned int>::end(__for_range_0)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
            (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin,
            (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_end) )
  {
    v6 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    Scene::delEntity((Scene *const)this, *v7, &VisionContext::miss_context);
    __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(p_M_end_of_storage + 64));
  if ( &v15.comp_vec_._M_impl._M_end_of_storage == (std::_Vector_base<std::pair<unsigned int,std::shared_ptr<GadgetCompBase> >>::pointer *)p_M_end_of_storage )
  {
    *(_QWORD *)((p_M_end_of_storage >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((p_M_end_of_storage >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)p_M_end_of_storage = 1172321806LL;
    *(_QWORD *)((p_M_end_of_storage >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_end_of_storage >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1510: range 0000000015FA5DCA-0000000015FA5DEC
bool __cdecl DungeonScene::isLeader(DungeonScene *const this, uint32_t player_uid)
{
  return player_uid == Scene::getOwnerUid((const Scene *const)this);
};

// Line 1515: range 0000000015FA5DEE-0000000015FA650C
void __cdecl DungeonScene::notifyDungeonData(DungeonScene *const this, Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  DungeonExcelConfigMgr *p_dungeon_config_mgr; // rcx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r13
  std::__shared_ptr_access<proto::DungeonDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  uint32_t monster_die_count; // r14d
  unsigned int *v13; // rax
  uint32_t *v14; // rdx
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::reference v15; // rax
  std::pair<unsigned int const,unsigned int> *v16; // rdx
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *v17; // rax
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type v18; // r14d
  unsigned int *v19; // rax
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *v20; // rdx
  unsigned int val; // [rsp+1Ch] [rbp-F4h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_begin_0; // [rsp+20h] [rbp-F0h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_end_0; // [rsp+28h] [rbp-E8h] BYREF
  std::vector<std::shared_ptr<DungeonCondition>> *__for_range; // [rsp+30h] [rbp-E0h]
  const data::DungeonExcelConfig *dungeon_config_ptr; // [rsp+38h] [rbp-D8h]
  google::protobuf::Map<unsigned int,unsigned int> *dungeon_data_map; // [rsp+40h] [rbp-D0h]
  std::map<unsigned int,unsigned int> *__for_range_0; // [rsp+48h] [rbp-C8h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *dungeon_data_type; // [rsp+50h] [rbp-C0h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *level_config_id; // [rsp+58h] [rbp-B8h]
  DungeonConditionPtr *cond_ptr; // [rsp+60h] [rbp-B0h]
  std::pair<unsigned int const,unsigned int> __for_end; // [rsp+68h] [rbp-A8h] BYREF
  std::shared_ptr<const google::protobuf::Message> v32; // [rsp+70h] [rbp-A0h] BYREF
  common::milog::MiLogStream v33; // [rsp+80h] [rbp-90h] BYREF
  char v34[112]; // [rsp+A0h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 15 notify_ptr:1532";
  *(_QWORD *)(v2 + 16) = DungeonScene::notifyDungeonData;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  __for_range = &this->cond_vec_;
  __for_end_0._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::vector<std::shared_ptr<DungeonCondition>>::begin(&this->cond_vec_)._M_current;
  __for_end = (std::pair<unsigned int const,unsigned int>)std::vector<std::shared_ptr<DungeonCondition>>::end(&this->cond_vec_)._M_current;
  while ( __gnu_cxx::operator!=<std::shared_ptr<DungeonCondition> *,std::vector<std::shared_ptr<DungeonCondition>>>(
            (const __gnu_cxx::__normal_iterator<std::shared_ptr<DungeonCondition>*,std::vector<std::shared_ptr<DungeonCondition>> > *)&__for_end_0,
            (const __gnu_cxx::__normal_iterator<std::shared_ptr<DungeonCondition>*,std::vector<std::shared_ptr<DungeonCondition>> > *)&__for_end) )
  {
    cond_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<DungeonCondition> *,std::vector<std::shared_ptr<DungeonCondition>>>::operator*((const __gnu_cxx::__normal_iterator<std::shared_ptr<DungeonCondition>*,std::vector<std::shared_ptr<DungeonCondition>> > *const)&__for_end_0);
    v5 = (unsigned __int64)std::__shared_ptr_access<DungeonCondition,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonCondition,(__gnu_cxx::_Lock_policy)2,false,false> *const)cond_ptr);
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      v5 = __asan_report_load8();
    v6 = *(_QWORD *)v5 + 56LL;
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      v5 = __asan_report_load8();
    (*(void (__fastcall **)(unsigned __int64, Player *))v6)(v5, player);
    __gnu_cxx::__normal_iterator<std::shared_ptr<DungeonCondition> *,std::vector<std::shared_ptr<DungeonCondition>>>::operator++((__gnu_cxx::__normal_iterator<std::shared_ptr<DungeonCondition>*,std::vector<std::shared_ptr<DungeonCondition>> > *const)&__for_end_0);
  }
  DungeonScene::notifyActivatedWayPoints(this, player);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v32);
  p_dungeon_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v32)->design_config.txt_config_mgr.dungeon_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->dungeon_id_);
  }
  dungeon_config_ptr = data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(p_dungeon_config_mgr, this->dungeon_id_);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v32);
  if ( dungeon_config_ptr )
  {
    common::tools::perf::make_shared<proto::DungeonDataNotify>();
    v11 = std::__shared_ptr_access<proto::DungeonDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::DungeonDataNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    dungeon_data_map = proto::DungeonDataNotify::mutable_dungeon_data_map(v11);
    if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->play_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)dungeon_config_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->play_type >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4(&dungeon_config_ptr->play_type);
    }
    if ( dungeon_config_ptr->play_type == DUNGEON_PLAY_TYPE_FOGGY_MAZE )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->monster_die_count_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->monster_die_count_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->monster_die_count_);
      }
      monster_die_count = this->monster_die_count_;
      val = 2;
      v13 = google::protobuf::Map<unsigned int,unsigned int>::operator[](dungeon_data_map, &val);
      v14 = v13;
      if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v13);
      }
      *v14 = monster_die_count;
    }
    __for_range_0 = &this->level_config_id_map_;
    __for_begin_0._M_node = std::map<unsigned int,unsigned int>::begin(&this->level_config_id_map_)._M_node;
    __for_end_0._M_node = std::map<unsigned int,unsigned int>::end(__for_range_0)._M_node;
    while ( std::operator!=(&__for_begin_0, &__for_end_0) )
    {
      v15 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin_0);
      v16 = v15;
      if ( ((unsigned __int8)v15 & 7) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&v15->second + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v15 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v15->second + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(v15, 8LL);
      }
      __for_end = *v16;
      dungeon_data_type = std::get<0ul,unsigned int const,unsigned int>(&__for_end);
      v17 = std::get<1ul,unsigned int const,unsigned int>(&__for_end);
      level_config_id = v17;
      if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v17);
      }
      v18 = *level_config_id;
      if ( *(_BYTE *)(((unsigned __int64)dungeon_data_type >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)dungeon_data_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dungeon_data_type >> 3)
                                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(dungeon_data_type);
      }
      val = *dungeon_data_type;
      v19 = google::protobuf::Map<unsigned int,unsigned int>::operator[](dungeon_data_map, &val);
      v20 = v19;
      if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v19);
      }
      *v20 = v18;
      std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin_0);
    }
    std::dynamic_pointer_cast<google::protobuf::Message const,proto::DungeonDataNotify>((const std::shared_ptr<proto::DungeonDataNotify> *)&v32);
    Player::sendMessage(player, &v32, 0LL);
    std::shared_ptr<google::protobuf::Message const>::~shared_ptr(&v32);
    std::shared_ptr<proto::DungeonDataNotify>::~shared_ptr((std::shared_ptr<proto::DungeonDataNotify> *const)(v2 + 32));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/dungeon_scene.cpp",
      "notifyDungeonData",
      1528);
    v8 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v33,
           (const char (*)[43])"findDungeonExcelConfig failed, dungeon_id:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->dungeon_id_);
    v10 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v9, (const char (*)[6])" uid:");
    val = Player::getUid(player);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
    common::milog::MiLogStream::~MiLogStream(&v33);
  }
  if ( v34 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1548: range 0000000015FA655C-0000000015FA65BF
void __cdecl DungeonScene::notifyDungeonDataToAll(DungeonScene *const this)
{
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+10h] [rbp-30h] BYREF

  std::function<ForeachPolicy ()(Player &)>::function<DungeonScene::notifyDungeonDataToAll(void)::{lambda(Player &)#1},void,void>(
    &p_func,
    (DungeonScene::notifyDungeonDataToAll::<lambda(Player&)>)this);
  Scene::foreachPlayer((Scene *const)this, &p_func);
  std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
};

// Line 1549: range 0000000015FA650E-0000000015FA655B
ForeachPolicy __cdecl DungeonScene::notifyDungeonDataToAll(void)::{lambda(Player &)#1}::operator()(
        const DungeonScene::notifyDungeonDataToAll::<lambda(Player&)> *const __closure,
        Player *player)
{
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  DungeonScene::notifyDungeonData(__closure->__this, player);
  return 0;
};

// Line 1558: range 0000000015FA665E-0000000015FA67C0
void __cdecl DungeonScene::relaxTimeRestriction(DungeonScene *const this, uint32_t relax_secs)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rdx
  std::vector<std::shared_ptr<DungeonCondition>>::iterator __for_begin; // [rsp+10h] [rbp-50h] BYREF
  std::vector<std::shared_ptr<DungeonCondition>>::iterator __for_end; // [rsp+18h] [rbp-48h] BYREF
  std::vector<std::shared_ptr<DungeonCondition>> *__for_range; // [rsp+20h] [rbp-40h]
  std::shared_ptr<DungeonCondition> *cond_ptr; // [rsp+28h] [rbp-38h]
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+30h] [rbp-30h] BYREF

  if ( relax_secs )
  {
    __for_range = &this->cond_vec_;
    __for_begin._M_current = std::vector<std::shared_ptr<DungeonCondition>>::begin(&this->cond_vec_)._M_current;
    __for_end._M_current = std::vector<std::shared_ptr<DungeonCondition>>::end(&this->cond_vec_)._M_current;
    while ( __gnu_cxx::operator!=<std::shared_ptr<DungeonCondition> *,std::vector<std::shared_ptr<DungeonCondition>>>(
              &__for_begin,
              &__for_end) )
    {
      cond_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<DungeonCondition> *,std::vector<std::shared_ptr<DungeonCondition>>>::operator*(&__for_begin);
      if ( !std::operator==<DungeonCondition>(cond_ptr, 0LL) )
      {
        v2 = (unsigned __int64)std::__shared_ptr_access<DungeonCondition,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonCondition,(__gnu_cxx::_Lock_policy)2,false,false> *const)cond_ptr);
        if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
          v2 = __asan_report_load8();
        v3 = *(_QWORD *)v2 + 48LL;
        if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
          v2 = __asan_report_load8();
        if ( !(*(unsigned int (__fastcall **)(unsigned __int64, _QWORD))v3)(v2, relax_secs) )
        {
          std::function<ForeachPolicy ()(Player &)>::function<DungeonScene::relaxTimeRestriction(unsigned int)::{lambda(Player &)#1},void,void>(
            &p_func,
            (DungeonScene::relaxTimeRestriction::<lambda(Player&)>)cond_ptr);
          Scene::foreachPlayer((Scene *const)this, &p_func);
          std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
        }
      }
      __gnu_cxx::__normal_iterator<std::shared_ptr<DungeonCondition> *,std::vector<std::shared_ptr<DungeonCondition>>>::operator++(&__for_begin);
    }
  }
};

// Line 1575: range 0000000015FA65C0-0000000015FA665D
ForeachPolicy __cdecl DungeonScene::relaxTimeRestriction(unsigned int)::{lambda(Player &)#1}::operator()(
        const DungeonScene::relaxTimeRestriction::<lambda(Player&)> *const __closure,
        Player *player)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rdx

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = (unsigned __int64)std::__shared_ptr_access<DungeonCondition,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonCondition,(__gnu_cxx::_Lock_policy)2,false,false> *const)__closure->__cond_ptr);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8();
  v3 = *(_QWORD *)v2 + 56LL;
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, Player *))v3)(v2, player);
  return 0;
};

// Line 1585: range 0000000015FA67C2-0000000015FA6838
void __cdecl DungeonScene::onAvatarHeal(DungeonScene *const this, uint32_t add_hp, Avatar *avatar)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_result_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_result_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->dungeon_result_);
  }
  if ( this->dungeon_result_ == DUNGEON_RESULT_NONE )
    MistTrialDungeonStatProxy::onAvatarHeal(&this->mist_trial_stat_proxy_, add_hp, avatar);
};

// Line 1592: range 0000000015FA683A-0000000015FA68AE
void __cdecl DungeonScene::onGagdetStateChange(DungeonScene *const this, uint32_t gadget_id, uint32_t state)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_result_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_result_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->dungeon_result_);
  }
  if ( this->dungeon_result_ == DUNGEON_RESULT_NONE )
    MistTrialDungeonStatProxy::onGagdetStateChange(&this->mist_trial_stat_proxy_, gadget_id, state);
};

// Line 1599: range 0000000015FA68B0-0000000015FA6927
void __cdecl DungeonScene::onMonsterDelWeapon(DungeonScene *const this, Monster *monster, uint32_t weapon_gadget_id)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_result_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_result_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->dungeon_result_);
  }
  if ( this->dungeon_result_ == DUNGEON_RESULT_NONE )
    MistTrialDungeonStatProxy::onMonsterDelWeapon(&this->mist_trial_stat_proxy_, monster, weapon_gadget_id);
};

// Line 1606: range 0000000015FA6928-0000000015FA69E0
void __cdecl DungeonScene::onMonsterTriggerElementReaction(
        DungeonScene *const this,
        CreaturePtr *p_attacker_ptr,
        data::ElementReactionType reaction_type)
{
  std::shared_ptr<Creature> v4; // [rsp+20h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_result_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_result_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->dungeon_result_);
  }
  if ( this->dungeon_result_ == DUNGEON_RESULT_NONE )
  {
    std::shared_ptr<Creature>::shared_ptr(&v4, p_attacker_ptr);
    MistTrialDungeonStatProxy::onMonsterTriggerElementReaction(&this->mist_trial_stat_proxy_, &v4, reaction_type);
    std::shared_ptr<Creature>::~shared_ptr(&v4);
  }
};

// Line 1614: range 0000000015FA69E2-0000000015FA6B4A
void __cdecl DungeonScene::onChallengeFinish(DungeonScene *const this, uint32_t challenge_index, bool is_success)
{
  std::__shared_ptr_access<DungeonCondition,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx
  std::vector<std::shared_ptr<DungeonCondition>>::iterator __for_begin; // [rsp+10h] [rbp-20h] BYREF
  std::vector<std::shared_ptr<DungeonCondition>>::iterator __for_end; // [rsp+18h] [rbp-18h] BYREF
  std::vector<std::shared_ptr<DungeonCondition>> *__for_range; // [rsp+20h] [rbp-10h]
  DungeonConditionPtr *cond_ptr; // [rsp+28h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_result_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_result_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->dungeon_result_);
  }
  if ( this->dungeon_result_ == DUNGEON_RESULT_NONE )
  {
    __for_range = &this->cond_vec_;
    __for_begin._M_current = std::vector<std::shared_ptr<DungeonCondition>>::begin(&this->cond_vec_)._M_current;
    __for_end._M_current = std::vector<std::shared_ptr<DungeonCondition>>::end(&this->cond_vec_)._M_current;
    while ( __gnu_cxx::operator!=<std::shared_ptr<DungeonCondition> *,std::vector<std::shared_ptr<DungeonCondition>>>(
              &__for_begin,
              &__for_end) )
    {
      cond_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<DungeonCondition> *,std::vector<std::shared_ptr<DungeonCondition>>>::operator*(&__for_begin);
      v3 = std::__shared_ptr_access<DungeonCondition,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonCondition,(__gnu_cxx::_Lock_policy)2,false,false> *const)cond_ptr);
      if ( DungeonCondition::getCondState(v3) == COND_STATE_NONE )
      {
        v4 = (unsigned __int64)std::__shared_ptr_access<DungeonCondition,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonCondition,(__gnu_cxx::_Lock_policy)2,false,false> *const)cond_ptr);
        if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
          v4 = __asan_report_load8();
        v5 = *(_QWORD *)v4 + 24LL;
        if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
          v4 = __asan_report_load8();
        (*(void (__fastcall **)(unsigned __int64, _QWORD, bool))v5)(v4, challenge_index, is_success);
      }
      __gnu_cxx::__normal_iterator<std::shared_ptr<DungeonCondition> *,std::vector<std::shared_ptr<DungeonCondition>>>::operator++(&__for_begin);
    }
    MistTrialDungeonStatProxy::onChallengeFinish(&this->mist_trial_stat_proxy_, challenge_index, is_success);
  }
};

// Line 1627: range 0000000015FA6B4C-0000000015FA6C9A
void __cdecl DungeonScene::onMultistagePlayEnd(
        DungeonScene *const this,
        uint32_t group_id,
        uint32_t play_index,
        bool is_success)
{
  std::__shared_ptr_access<DungeonCondition,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  std::vector<std::shared_ptr<DungeonCondition>>::iterator __for_begin; // [rsp+20h] [rbp-20h] BYREF
  std::vector<std::shared_ptr<DungeonCondition>>::iterator __for_end; // [rsp+28h] [rbp-18h] BYREF
  std::vector<std::shared_ptr<DungeonCondition>> *__for_range; // [rsp+30h] [rbp-10h]
  DungeonConditionPtr *cond_ptr; // [rsp+38h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_result_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_result_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->dungeon_result_);
  }
  if ( this->dungeon_result_ == DUNGEON_RESULT_NONE )
  {
    __for_range = &this->cond_vec_;
    __for_begin._M_current = std::vector<std::shared_ptr<DungeonCondition>>::begin(&this->cond_vec_)._M_current;
    __for_end._M_current = std::vector<std::shared_ptr<DungeonCondition>>::end(&this->cond_vec_)._M_current;
    while ( __gnu_cxx::operator!=<std::shared_ptr<DungeonCondition> *,std::vector<std::shared_ptr<DungeonCondition>>>(
              &__for_begin,
              &__for_end) )
    {
      cond_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<DungeonCondition> *,std::vector<std::shared_ptr<DungeonCondition>>>::operator*(&__for_begin);
      v4 = std::__shared_ptr_access<DungeonCondition,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonCondition,(__gnu_cxx::_Lock_policy)2,false,false> *const)cond_ptr);
      if ( DungeonCondition::getCondState(v4) == COND_STATE_NONE )
      {
        v5 = (unsigned __int64)std::__shared_ptr_access<DungeonCondition,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonCondition,(__gnu_cxx::_Lock_policy)2,false,false> *const)cond_ptr);
        if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
          v5 = __asan_report_load8();
        v6 = *(_QWORD *)v5 + 32LL;
        if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
          v5 = __asan_report_load8();
        (*(void (__fastcall **)(unsigned __int64, _QWORD, _QWORD, bool))v6)(v5, group_id, play_index, is_success);
      }
      __gnu_cxx::__normal_iterator<std::shared_ptr<DungeonCondition> *,std::vector<std::shared_ptr<DungeonCondition>>>::operator++(&__for_begin);
    }
  }
};

// Line 1638: range 0000000015FA6C9C-0000000015FA6DDF
void __cdecl DungeonScene::onSettleTimer(DungeonScene *const this, uint64_t scene_time_ms)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rdx
  std::vector<std::shared_ptr<DungeonCondition>>::iterator __for_begin; // [rsp+20h] [rbp-20h] BYREF
  std::vector<std::shared_ptr<DungeonCondition>>::iterator __for_end; // [rsp+28h] [rbp-18h] BYREF
  std::vector<std::shared_ptr<DungeonCondition>> *__for_range; // [rsp+30h] [rbp-10h]
  DungeonConditionPtr *cond_ptr; // [rsp+38h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_result_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_result_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->dungeon_result_);
  }
  if ( this->dungeon_result_ == DUNGEON_RESULT_NONE )
  {
    __for_range = &this->cond_vec_;
    __for_begin._M_current = std::vector<std::shared_ptr<DungeonCondition>>::begin(&this->cond_vec_)._M_current;
    __for_end._M_current = std::vector<std::shared_ptr<DungeonCondition>>::end(&this->cond_vec_)._M_current;
    while ( __gnu_cxx::operator!=<std::shared_ptr<DungeonCondition> *,std::vector<std::shared_ptr<DungeonCondition>>>(
              &__for_begin,
              &__for_end) )
    {
      cond_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<DungeonCondition> *,std::vector<std::shared_ptr<DungeonCondition>>>::operator*(&__for_begin);
      v2 = (unsigned __int64)std::__shared_ptr_access<DungeonCondition,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonCondition,(__gnu_cxx::_Lock_policy)2,false,false> *const)cond_ptr);
      if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
        v2 = __asan_report_load8();
      v3 = *(_QWORD *)v2 + 16LL;
      if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
        v2 = __asan_report_load8();
      (*(void (__fastcall **)(unsigned __int64, _QWORD))v3)(v2, (unsigned int)(scene_time_ms / 0x3E8));
      __gnu_cxx::__normal_iterator<std::shared_ptr<DungeonCondition> *,std::vector<std::shared_ptr<DungeonCondition>>>::operator++(&__for_begin);
    }
  }
};

// Line 1651: range 0000000015FA6E46-0000000015FA7697
void __fastcall DungeonScene::playerLeave(DungeonScene *const this, __int32 uid)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  DungeonResult DungeonResult; // eax
  DungeonExcelConfigMgr *p_dungeon_config_mgr; // rcx
  common::milog::MiLogStream *v9; // rax
  Player *v10; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonQuit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonQuit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  const std::string *v14; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonQuit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonQuit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rcx
  Player *v17; // rax
  PlayerAvatarComp *AvatarComp; // r14
  std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonQuit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // r14
  google::protobuf::uint32 PlayerQuitReason; // eax
  Player *v21; // r14
  Player *v22; // rax
  PlayerMpComp *MpComp; // rax
  Player *v24; // rax
  PlayerMechanicusComp *MechanicusComp; // rax
  Player *v26; // rax
  PlayerCustomDungeonComp *CustomDungeonComp; // rax
  Player *v28; // rax
  PlayerGCGComp *GCGComp; // rax
  common::milog::MiLogStream *v30; // rax
  DungeonSceneTeam *DungeonSceneTeam; // rax
  std::string v32; // [rsp+0h] [rbp-110h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-F0h] BYREF
  std::shared_ptr<google::protobuf::Message> v34; // [rsp+30h] [rbp-E0h] BYREF
  common::milog::MiLogStream v35; // [rsp+40h] [rbp-D0h] BYREF
  char v36[176]; // [rsp+60h] [rbp-B0h] BYREF

  v32._M_string_length = (std::string::size_type)this;
  HIDWORD(v32._M_dataplus._M_p) = uid;
  v2 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 1 11 holder:1689 48 4 8 uid:1650 64 16 15 player_ptr:1652 96 16 25 quit_dungeon_log_ptr:1690";
  *(_QWORD *)(v2 + 16) = DungeonScene::playerLeave;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556927;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  *(_DWORD *)(v2 + 48) = uid;
  Scene::findPlayer((const Scene *const)(v2 + 64), (uint32_t)this);
  if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v2 + 64), 0LL) )
  {
    if ( DungeonScene::getDungeonResult(this) == DUNGEON_RESULT_NONE
      && Scene::isLastPlayer((const Scene *const)this, *(_DWORD *)(v2 + 48)) )
    {
      DungeonScene::settle(this, DUNGEON_RESULT_CANCEL);
    }
    v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( !Player::isConnected(v6) )
    {
      DungeonScene::setPlayerQuitReason(this, *(_DWORD *)(v2 + 48), 5u);
    }
    else if ( !DungeonScene::getPlayerQuitReason(this, *(_DWORD *)(v2 + 48)) )
    {
      HIDWORD(v32._anon_0._M_allocated_capacity) = 0;
      DungeonResult = DungeonScene::getDungeonResult(this);
      if ( DungeonResult == DUNGEON_RESULT_SUCCEED )
      {
        HIDWORD(v32._anon_0._M_allocated_capacity) = 12;
        DungeonScene::setPlayerQuitReason(this, *(_DWORD *)(v2 + 48), 0xCu);
      }
      else if ( DungeonResult <= DUNGEON_RESULT_NONE || (unsigned int)(DungeonResult - 2) > 1 )
      {
        DungeonScene::setPlayerQuitReason(this, *(_DWORD *)(v2 + 48), 0);
      }
      else
      {
        HIDWORD(v32._anon_0._M_allocated_capacity) = 13;
        DungeonScene::setPlayerQuitReason(this, *(_DWORD *)(v2 + 48), 0xDu);
      }
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v34);
    p_dungeon_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v34)->design_config.txt_config_mgr.dungeon_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->dungeon_id_);
    }
    *(&v32._anon_0._M_allocated_capacity + 1) = (std::string::size_type)data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(
                                                                          p_dungeon_config_mgr,
                                                                          this->dungeon_id_);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v34);
    if ( !*(&v32._anon_0._M_allocated_capacity + 1) )
    {
      common::milog::MiLogStream::create(
        &v35,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/dungeon_scene.cpp",
        "playerLeave",
        1685);
      v9 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
             &v35,
             (const char (*)[42])"findDungeonExcelConfig fails, dungeon_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->dungeon_id_);
      common::milog::MiLogStream::~MiLogStream(&v35);
      goto LABEL_33;
    }
    v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    BasicComp = Player::getBasicComp(v10);
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v35, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32), 0x57Au, v32);
    std::string::~string(&v35);
    common::tools::perf::make_shared<proto_log::PlayerLogBodyDungeonQuit>();
    v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonQuit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonQuit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    if ( *(_BYTE *)(((v32._M_string_length + 2148) >> 3) + 0x7FFF8000) != 0
      && (char)(((LOBYTE(v32._M_string_length) + 100) & 7) + 3) >= *(_BYTE *)(((v32._M_string_length + 2148) >> 3)
                                                                            + 0x7FFF8000) )
    {
      __asan_report_load4(v32._M_string_length + 2148);
    }
    proto_log::PlayerLogBodyDungeonQuit::set_dungeon_id(v12, *(_DWORD *)(v32._M_string_length + 2148));
    v13 = std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonQuit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonQuit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    v14 = DungeonScene::getTransaction[abi:cxx11]((DungeonScene *const)v32._M_string_length);
    proto_log::PlayerLogBodyDungeonQuit::set_transaction(v13, v14);
    v15 = std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonQuit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonQuit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    if ( *(_BYTE *)(((*(&v32._anon_0._M_allocated_capacity + 1) + 12) >> 3) + 0x7FFF8000) != 0
      && (char)(((v32._anon_0._M_local_buf[8] + 12) & 7) + 3) >= *(_BYTE *)(((*(&v32._anon_0._M_allocated_capacity + 1)
                                                                            + 12) >> 3)
                                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(*(&v32._anon_0._M_allocated_capacity + 1) + 12);
    }
    proto_log::PlayerLogBodyDungeonQuit::set_dungeon_type(
      v15,
      *(_DWORD *)(*(&v32._anon_0._M_allocated_capacity + 1) + 12));
    v16 = std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonQuit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonQuit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    if ( *(_BYTE *)(((*(&v32._anon_0._M_allocated_capacity + 1) + 40) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((*(&v32._anon_0._M_allocated_capacity + 1) + 40) >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(*(&v32._anon_0._M_allocated_capacity + 1) + 40);
    }
    proto_log::PlayerLogBodyDungeonQuit::set_dungeon_mp(
      v16,
      *(_DWORD *)(*(&v32._anon_0._M_allocated_capacity + 1) + 40));
    v17 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    AvatarComp = Player::getAvatarComp(v17);
    std::function<ForeachPolicy ()(Avatar &)>::function<DungeonScene::playerLeave(unsigned int)::{lambda(Avatar &)#1},void,void>(
      (std::function<ForeachPolicy(Avatar&)> *const)&v35,
      (DungeonScene::playerLeave::<lambda(Avatar&)>)(v2 + 96));
    PlayerAvatarComp::foreachMyAvatarInSceneTeam(AvatarComp, (std::function<ForeachPolicy(Avatar&)> *)&v35);
    std::function<ForeachPolicy ()(Avatar &)>::~function((std::function<ForeachPolicy(Avatar&)> *const)&v35);
    v19 = std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonQuit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonQuit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    PlayerQuitReason = DungeonScene::getPlayerQuitReason(
                         (DungeonScene *const)v32._M_string_length,
                         *(_DWORD *)(v2 + 48));
    proto_log::PlayerLogBodyDungeonQuit::set_reason(v19, PlayerQuitReason);
    v21 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    std::shared_ptr<google::protobuf::Message>::shared_ptr(&v34, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyDungeonQuit,void>(
      &p_body_ptr,
      (const std::shared_ptr<proto_log::PlayerLogBodyDungeonQuit> *)(v2 + 96));
    Player::printStatLog(v21, &p_body_ptr, &v34, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v34);
    v22 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    MpComp = Player::getMpComp(v22);
    PlayerMpComp::onLeaveDungeonScene(MpComp, (DungeonScene *)v32._M_string_length);
    v24 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    MechanicusComp = Player::getMechanicusComp(v24);
    PlayerMechanicusComp::onLeaveDungeon(MechanicusComp, (DungeonScene *)v32._M_string_length);
    v26 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    CustomDungeonComp = Player::getCustomDungeonComp(v26);
    PlayerCustomDungeonComp::onLeaveDungeon(CustomDungeonComp, (DungeonScene *)v32._M_string_length);
    v28 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    GCGComp = Player::getGCGComp(v28);
    PlayerGCGComp::onLeaveDungeon(GCGComp, (DungeonScene *)v32._M_string_length);
    std::shared_ptr<proto_log::PlayerLogBodyDungeonQuit>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyDungeonQuit> *const)(v2 + 96));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/dungeon_scene.cpp",
      "playerLeave",
      1712);
    v30 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
            &v35,
            (const char (*)[21])"player is null. uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v35);
  }
  Scene::playerLeave((Scene *const)v32._M_string_length, *(_DWORD *)(v2 + 48));
  DungeonSceneTeam = DungeonScene::getDungeonSceneTeam((DungeonScene *const)v32._M_string_length);
  DungeonSceneTeam::playerLeave(DungeonSceneTeam, *(_DWORD *)(v2 + 48));
  DungeonScene::tryChangeOwner((DungeonScene *const)v32._M_string_length);
LABEL_33:
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
  if ( v36 == (char *)v2 )
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

// Line 1696: range 0000000015FA6DE0-0000000015FA6E45
ForeachPolicy __cdecl DungeonScene::playerLeave(unsigned int)::{lambda(Avatar &)#1}::operator()(
        const DungeonScene::playerLeave::<lambda(Avatar&)> *const __closure,
        Avatar *avatar)
{
  std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonQuit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  proto_log::AvatarLog *v3; // rdx

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonQuit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonQuit,(__gnu_cxx::_Lock_policy)2,false,false> *const)__closure->__quit_dungeon_log_ptr);
  v3 = proto_log::PlayerLogBodyDungeonQuit::add_avatar_list(v2);
  Avatar::getAvatarLog(avatar, v3);
  return 0;
};

// Line 1724: range 0000000015FA7698-0000000015FA792F
std::string *__cdecl DungeonScene::createTransaction[abi:cxx11](
        std::string *retstr,
        uint32_t dungeon_id,
        uint32_t owner_uid)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // r14
  time_t Now; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  char v15[560]; // [rsp+10h] [rbp-230h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(512LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 48 392 7 ss:1726";
  *(_QWORD *)(v3 + 16) = DungeonScene::createTransaction[abi:cxx11];
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862733] = -218103808;
  v5[536862734] = -202116109;
  v5[536862735] = -202116109;
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v3 + 48);
  v6 = std::ostream::operator<<(v3 + 64, dungeon_id);
  v7 = std::operator<<<std::char_traits<char>>(v6, "-");
  v8 = std::ostream::operator<<(v7, owner_uid);
  v9 = std::operator<<<std::char_traits<char>>(v8, "-");
  Now = common::tools::TimeUtils::getNow();
  v11 = std::ostream::operator<<(v9, Now);
  v12 = std::operator<<<std::char_traits<char>>(v11, "-");
  std::ostream::operator<<(v12, ++DungeonScene::createTransaction[abi:cxx11](unsigned int,unsigned int)::transaction_id);
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::str(retstr, v3 + 48);
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream(v3 + 48);
  if ( v15 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8034) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF803C) = 0;
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
  }
  return retstr;
};

// Line 1733: range 0000000015FA7930-0000000015FA7A15
uint32_t __cdecl DungeonScene::getGroupInitWorldLevel(DungeonScene *const this)
{
  DungeonExcelConfigMgr *p_dungeon_config_mgr; // rbx
  uint32_t DungeonId; // eax
  const data::DungeonExcelConfig *dungeon_config_ptr; // [rsp+18h] [rbp-28h]
  std::shared_ptr<Config> v5[2]; // [rsp+20h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v5);
  p_dungeon_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v5)->design_config.txt_config_mgr.dungeon_config_mgr;
  DungeonId = DungeonScene::getDungeonId(this);
  dungeon_config_ptr = data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(p_dungeon_config_mgr, DungeonId);
  std::shared_ptr<Config>::~shared_ptr(v5);
  if ( !dungeon_config_ptr )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->is_dynamic_level >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)dungeon_config_ptr + 20) & 7) >= *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->is_dynamic_level >> 3)
                                                                    + 0x7FFF8000) )
  {
    __asan_report_load1(&dungeon_config_ptr->is_dynamic_level);
  }
  if ( dungeon_config_ptr->is_dynamic_level )
    return DungeonScene::getCreatedWorldLevel(this);
  else
    return 0;
};

// Line 1744: range 0000000015FA7A16-0000000015FA7A2F
uint32_t __cdecl DungeonScene::getGroupInitWorldLevelLimit(DungeonScene *const this)
{
  return DungeonScene::getCreatedWorldLevelLimit(this);
};

// Line 1751: range 0000000015FA7A30-0000000015FA7A49
uint32_t __cdecl DungeonScene::getGroupInitMpPlayerNum(DungeonScene *const this)
{
  return DungeonScene::getAllowEnterPlayerCount(this);
};

// Line 1756: range 0000000015FA800C-0000000015FA843D
__int64 __fastcall DungeonScene::reviveAllDeathPlayer(DungeonScene *const this, char is_need_transfer)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  __int64 result; // rax
  __int64 n; // rax
  __int64 v8; // rax
  std::vector<DummyPointScriptConfig>::size_type v9; // r14
  DungeonScene::reviveAllDeathPlayer::<lambda(Player&)> v10; // [rsp-40h] [rbp-1B0h]
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-150h] BYREF
  DungeonScene::reviveAllDeathPlayer::<lambda(Player&)> __f; // [rsp+40h] [rbp-130h]
  char v13[240]; // [rsp+80h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 48 1 23 is_use_dummy_point:1765 64 1 21 is_need_transfer:1755 80 4 10 index:1767 96 8 22 scrip"
                        "t_config_ptr:1757 128 12 15 revive_pos:1763 160 12 15 revive_rot:1764";
  *(_QWORD *)(v2 + 16) = DungeonScene::reviveAllDeathPlayer;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556927;
  v4[536862723] = -218959360;
  v4[536862724] = -219020288;
  v4[536862725] = -202177536;
  *(_BYTE *)(v2 + 64) = is_need_transfer;
  *(_QWORD *)(v2 + 96) = Scene::getScriptConfig((const Scene *const)this);
  if ( *(_QWORD *)(v2 + 96) )
  {
    n = *(_QWORD *)(v2 + 96);
    if ( ((n - 52) & 7) >= *(_BYTE *)(((unsigned __int64)(n + 204) >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)(n + 204) >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)(((unsigned __int64)(n + 215) >> 3) + 0x7FFF8000) != 0
      && ((n - 41) & 7) >= *(_BYTE *)(((unsigned __int64)(n + 215) >> 3) + 0x7FFF8000) )
    {
      n = __asan_report_load_n(n + 204, 12LL);
    }
    *(_QWORD *)(v2 + 128) = *(_QWORD *)(n + 204);
    *(_DWORD *)(v2 + 136) = *(_DWORD *)(n + 212);
    v8 = *(_QWORD *)(v2 + 96);
    if ( *(char *)(((unsigned __int64)(v8 + 216) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((unsigned __int64)(v8 + 227) >> 3) + 0x7FFF8000) != 0
      && ((v8 - 29) & 7) >= *(_BYTE *)(((unsigned __int64)(v8 + 227) >> 3) + 0x7FFF8000) )
    {
      v8 = __asan_report_load_n(v8 + 216, 12LL);
    }
    *(_QWORD *)(v2 + 160) = *(_QWORD *)(v8 + 216);
    *(_DWORD *)(v2 + 168) = *(_DWORD *)(v8 + 224);
    v9 = std::vector<DummyPointScriptConfig>::size((const std::vector<DummyPointScriptConfig> *const)(*(_QWORD *)(v2 + 96) + 240LL));
    *(_BYTE *)(v2 + 48) = v9 >= Scene::getPlayerCount((const Scene *const)this);
    *(_DWORD *)(v2 + 80) = 0;
    __f.__is_need_transfer = (bool *)(v2 + 64);
    __f.__is_use_dummy_point = (bool *)(v2 + 48);
    __f.__dungeon_scene = this;
    __f.__script_config_ptr = (const SceneScriptConfig **)(v2 + 96);
    __f.__index = (uint32_t *)(v2 + 80);
    __f.__revive_pos = (Vector3 *)(v2 + 128);
    __f.__revive_rot = (Vector3 *)(v2 + 160);
    v10.__revive_rot = (Vector3 *)(v2 + 160);
    v10.__revive_pos = (Vector3 *)(v2 + 128);
    v10.__index = (uint32_t *)(v2 + 80);
    v10.__script_config_ptr = (const SceneScriptConfig **)(v2 + 96);
    v10.__dungeon_scene = this;
    v10.__is_use_dummy_point = (bool *)(v2 + 48);
    v10.__is_need_transfer = (bool *)(v2 + 64);
    std::function<ForeachPolicy ()(Player &)>::function<DungeonScene::reviveAllDeathPlayer(bool)::{lambda(Player &)#1},void,void>(
      (std::function<ForeachPolicy(Player&)> *const)&v11,
      v10);
    Scene::foreachPlayer((Scene *const)this, (std::function<ForeachPolicy(Player&)> *)&v11);
    std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v11);
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/dungeon_scene.cpp",
      "reviveAllDeathPlayer",
      1760);
    v5 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(&v11, (const char (*)[38])off_25AB3EC0);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->dungeon_id_);
    common::milog::MiLogStream::~MiLogStream(&v11);
    result = 0xFFFFFFFFLL;
  }
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
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

// Line 1768: range 0000000015FA7A4A-0000000015FA800B
ForeachPolicy __cdecl DungeonScene::reviveAllDeathPlayer(bool)::{lambda(Player &)#1}::operator()(
        const DungeonScene::reviveAllDeathPlayer::<lambda(Player&)> *const __closure,
        Player *player)
{
  PlayerAvatarComp *AvatarComp; // rax
  bool *is_need_transfer; // rdx
  PlayerDungeonComp *DungeonComp; // rax
  common::milog::MiLogStream *v6; // rdx
  bool *is_use_dummy_point; // rdx
  PlayerDungeonComp *v8; // r12
  unsigned __int64 script_config_ptr; // rax
  const std::vector<DummyPointScriptConfig> *p_index; // rdi
  uint32_t *index; // rdx
  Vector3 *p_rot; // rbx
  unsigned __int64 v13; // rax
  const std::vector<DummyPointScriptConfig> *v14; // rdi
  uint32_t *v15; // rdx
  std::vector<DummyPointScriptConfig>::const_reference v16; // rsi
  common::milog::MiLogStream *v17; // rdx
  uint32_t *v18; // rax
  PlayerDungeonComp *p_revive_rot; // rdi
  Vector3 *revive_rot; // rcx
  Vector3 *revive_pos; // rdx
  common::milog::MiLogStream *v22; // rdx
  common::milog::MiLogStream v25; // [rsp+10h] [rbp-30h] BYREF

  AvatarComp = Player::getAvatarComp(player);
  if ( !PlayerAvatarComp::isAllAvatarDead(AvatarComp) )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  is_need_transfer = __closure->__is_need_transfer;
  if ( *(_BYTE *)(((unsigned __int64)__closure->__is_need_transfer >> 3) + 0x7FFF8000) != 0
    && ((__int64)__closure->__is_need_transfer & 7) >= *(_BYTE *)(((unsigned __int64)__closure->__is_need_transfer >> 3)
                                                                + 0x7FFF8000) )
  {
    __asan_report_load1(__closure->__is_need_transfer);
  }
  if ( !*is_need_transfer )
  {
    DungeonComp = Player::getDungeonComp(player);
    if ( PlayerDungeonComp::revivePlayer(DungeonComp) )
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/dungeon_scene.cpp",
        "operator()",
        1779);
      v6 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
             &v25,
             (const char (*)[19])"revivePlayer fails");
      operator<<(v6, player);
      common::milog::MiLogStream::~MiLogStream(&v25);
    }
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__is_use_dummy_point >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    is_use_dummy_point = __closure->__is_use_dummy_point;
    if ( *(_BYTE *)(((unsigned __int64)is_use_dummy_point >> 3) + 0x7FFF8000) != 0
      && ((__int64)__closure->__is_use_dummy_point & 7) >= *(_BYTE *)(((unsigned __int64)is_use_dummy_point >> 3)
                                                                    + 0x7FFF8000) )
    {
      __asan_report_load1(__closure->__is_use_dummy_point);
    }
    if ( *is_use_dummy_point )
    {
      v8 = Player::getDungeonComp(player);
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__script_config_ptr >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      script_config_ptr = (unsigned __int64)__closure->__script_config_ptr;
      if ( *(_BYTE *)((script_config_ptr >> 3) + 0x7FFF8000) )
        script_config_ptr = __asan_report_load8();
      p_index = (const std::vector<DummyPointScriptConfig> *)(*(_QWORD *)script_config_ptr + 240LL);
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__index >> 3) + 0x7FFF8000) )
      {
        p_index = (const std::vector<DummyPointScriptConfig> *)&__closure->__index;
        __asan_report_load8();
      }
      index = __closure->__index;
      if ( *(_BYTE *)(((unsigned __int64)index >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)index & 7) + 3) >= *(_BYTE *)(((unsigned __int64)index >> 3) + 0x7FFF8000) )
      {
        p_index = (const std::vector<DummyPointScriptConfig> *)__closure->__index;
        __asan_report_load4(p_index);
      }
      p_rot = &std::vector<DummyPointScriptConfig>::operator[](p_index, *index)->rot;
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__script_config_ptr >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v13 = (unsigned __int64)__closure->__script_config_ptr;
      if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
        v13 = __asan_report_load8();
      v14 = (const std::vector<DummyPointScriptConfig> *)(*(_QWORD *)v13 + 240LL);
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__index >> 3) + 0x7FFF8000) )
      {
        v14 = (const std::vector<DummyPointScriptConfig> *)&__closure->__index;
        __asan_report_load8();
      }
      v15 = __closure->__index;
      if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
      {
        v14 = (const std::vector<DummyPointScriptConfig> *)__closure->__index;
        __asan_report_load4(v14);
      }
      v16 = std::vector<DummyPointScriptConfig>::operator[](v14, *v15);
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__dungeon_scene >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( PlayerDungeonComp::reviveAndTransferPlayer(
             v8,
             __closure->__dungeon_scene,
             &v16->pos,
             p_rot,
             ENTER_REASON_DUNGEON_REPLAY) )
      {
        common::milog::MiLogStream::create(
          &v25,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/dungeon/dungeon_scene.cpp",
          "operator()",
          1790);
        v17 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                &v25,
                (const char (*)[30])"reviveAndTransferPlayer fails");
        operator<<(v17, player);
        common::milog::MiLogStream::~MiLogStream(&v25);
      }
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__index >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v18 = __closure->__index;
      if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(__closure->__index);
      }
      ++*v18;
    }
    else
    {
      p_revive_rot = Player::getDungeonComp(player);
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__revive_rot >> 3) + 0x7FFF8000) )
      {
        p_revive_rot = (PlayerDungeonComp *)&__closure->__revive_rot;
        __asan_report_load8();
      }
      revive_rot = __closure->__revive_rot;
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__revive_pos >> 3) + 0x7FFF8000) )
      {
        p_revive_rot = (PlayerDungeonComp *)&__closure->__revive_pos;
        __asan_report_load8();
      }
      revive_pos = __closure->__revive_pos;
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__dungeon_scene >> 3) + 0x7FFF8000) )
      {
        p_revive_rot = (PlayerDungeonComp *)&__closure->__dungeon_scene;
        __asan_report_load8();
      }
      if ( PlayerDungeonComp::reviveAndTransferPlayer(
             p_revive_rot,
             __closure->__dungeon_scene,
             revive_pos,
             revive_rot,
             ENTER_REASON_DUNGEON_REPLAY) )
      {
        common::milog::MiLogStream::create(
          &v25,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/dungeon/dungeon_scene.cpp",
          "operator()",
          1799);
        v22 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                &v25,
                (const char (*)[30])"reviveAndTransferPlayer fails");
        operator<<(v22, player);
        common::milog::MiLogStream::~MiLogStream(&v25);
      }
    }
  }
  return 0;
};

// Line 1808: range 0000000015FA843E-0000000015FA85F3
void __fastcall DungeonScene::setPlayerQuitReason(DungeonScene *const this, uint32_t uid, uint32_t reason)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v6; // rax
  _DWORD *v7; // rdx
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> __y; // [rsp+18h] [rbp-98h] BYREF
  char v10[144]; // [rsp+20h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 8 uid:1807 64 8 7 it:1809";
  *(_QWORD *)(v3 + 16) = DungeonScene::setPlayerQuitReason;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = uid;
  *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                            &this->player_quit_reason_map_,
                                                                            (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v3 + 48));
  __y._M_cur = std::unordered_map<unsigned int,unsigned int>::end(&this->player_quit_reason_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,unsigned int>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v3 + 64),
         &__y) )
  {
    v6 = std::unordered_map<unsigned int,unsigned int>::operator[](
           &this->player_quit_reason_map_,
           (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v3 + 48));
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v6);
    }
    *v7 = reason;
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
};

// Line 1817: range 0000000015FA85F4-0000000015FA8807
__int64 __fastcall DungeonScene::getPlayerQuitReason(DungeonScene *const this, uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v5; // rdx
  unsigned int *p_second; // rax
  DungeonResult dungeon_result; // eax
  __int64 result; // rax
  uint32_t player_quit_reason; // [rsp+14h] [rbp-8Ch]
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> __y; // [rsp+18h] [rbp-88h] BYREF
  char v11[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 8 uid:1816 64 8 7 it:1818";
  *(_QWORD *)(v2 + 16) = DungeonScene::getPlayerQuitReason;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = uid;
  *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                            &this->player_quit_reason_map_,
                                                                            (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  __y._M_cur = std::unordered_map<unsigned int,unsigned int>::end(&this->player_quit_reason_map_)._M_cur;
  if ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 64),
         &__y) )
  {
    v5 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 64));
    p_second = &v5->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    player_quit_reason = v5->second;
    if ( player_quit_reason == 11 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_result_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->dungeon_result_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->dungeon_result_);
      }
      dungeon_result = this->dungeon_result_;
      if ( dungeon_result == DUNGEON_RESULT_SUCCEED )
      {
        player_quit_reason = 12;
      }
      else if ( dungeon_result == DUNGEON_RESULT_FAIL )
      {
        player_quit_reason = 13;
      }
    }
    result = player_quit_reason;
  }
  else
  {
    result = 0LL;
  }
  if ( v11 == (char *)v2 )
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

// Line 1842: range 0000000015FA8808-0000000015FA88DA
void __fastcall DungeonScene::resetPlayerQuitReason(DungeonScene *const this, uint32_t uid)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 8 uid:1841";
  *(_QWORD *)(v2 + 16) = DungeonScene::resetPlayerQuitReason;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = uid;
  std::unordered_map<unsigned int,unsigned int>::erase(
    &this->player_quit_reason_map_,
    (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 32));
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

// Line 1847: range 0000000015FA88DC-0000000015FA8B3D
std::pair<Vector3,Vector3> *__cdecl DungeonScene::getBornPoint(
        std::pair<Vector3,Vector3> *retstr,
        DungeonScene *const this)
{
  common::milog::MiLogStream *v2; // rbx
  unsigned __int64 v3; // rax
  unsigned __int64 dungeon_born_point_idx; // rbx
  unsigned int val; // [rsp+14h] [rbp-4Ch] BYREF
  size_t idx; // [rsp+18h] [rbp-48h]
  const SceneScriptConfig *config_ptr; // [rsp+20h] [rbp-40h]
  const DummyPointScriptConfig *point_config; // [rsp+28h] [rbp-38h]
  common::milog::MiLogStream v10; // [rsp+30h] [rbp-30h] BYREF

  config_ptr = Scene::getScriptConfig((const Scene *const)this);
  if ( config_ptr )
  {
    if ( std::vector<DummyPointScriptConfig>::empty(&config_ptr->born_point_vec) )
    {
      std::make_pair<Vector3 const&,Vector3 const&>(retstr, &config_ptr->born_pos, &config_ptr->born_rot);
    }
    else
    {
      idx = 0LL;
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v3 = *(_QWORD *)this->baseclass_0 + 392LL;
      if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
        v3 = __asan_report_load8();
      if ( (*(unsigned __int8 (__fastcall **)(DungeonScene *const))v3)(this) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_born_point_idx_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->dungeon_born_point_idx_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->dungeon_born_point_idx_);
        }
        dungeon_born_point_idx = this->dungeon_born_point_idx_;
        idx = dungeon_born_point_idx % std::vector<DummyPointScriptConfig>::size(&config_ptr->born_point_vec);
        if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_born_point_idx_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->dungeon_born_point_idx_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->dungeon_born_point_idx_);
        }
        ++this->dungeon_born_point_idx_;
      }
      point_config = std::vector<DummyPointScriptConfig>::operator[](&config_ptr->born_point_vec, idx);
      std::make_pair<Vector3 const&,Vector3 const&>(retstr, &point_config->pos, &point_config->rot);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/dungeon_scene.cpp",
      "getBornPoint",
      1851);
    v2 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
           &v10,
           (const char (*)[40])"fail to find script_config, dungeon_id:");
    val = DungeonScene::getDungeonId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    common::milog::MiLogStream::~MiLogStream(&v10);
    std::pair<Vector3,Vector3>::pair<Vector3,Vector3,true>(retstr);
  }
  return retstr;
};

// Line 1872: range 0000000015FA8B3E-0000000015FA8F51
__int64 __fastcall DungeonScene::tryAddLevelConfigBeforeNotify(
        DungeonScene *const this,
        uint32_t dungeon_data_type,
        uint32_t level_config_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  __int64 result; // rax
  common::milog::MiLogStream *v7; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  SceneEntity *v12; // rax
  int v13; // r14d
  std::map<unsigned int,unsigned int>::mapped_type *v14; // rax
  _DWORD *v15; // rdx
  std::vector<data::DungeonLevelEntityConfig>::const_iterator __for_begin; // [rsp+18h] [rbp-E8h] BYREF
  std::vector<data::DungeonLevelEntityConfig>::const_iterator __for_end; // [rsp+20h] [rbp-E0h] BYREF
  const std::vector<data::DungeonLevelEntityConfig> *level_config_vec_ptr; // [rsp+28h] [rbp-D8h]
  const std::vector<data::DungeonLevelEntityConfig> *__for_range; // [rsp+30h] [rbp-D0h]
  const data::DungeonLevelEntityConfig *level_config; // [rsp+38h] [rbp-C8h]
  std::shared_ptr<Config> v22; // [rsp+40h] [rbp-C0h] BYREF
  common::milog::MiLogStream v23; // [rsp+50h] [rbp-B0h] BYREF
  char v24[144]; // [rsp+70h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 22 dungeon_data_type:1871 64 4 20 level_config_id:1871";
  *(_QWORD *)(v3 + 16) = DungeonScene::tryAddLevelConfigBeforeNotify;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 48) = dungeon_data_type;
  *(_DWORD *)(v3 + 64) = level_config_id;
  if ( *(_DWORD *)(v3 + 64) )
  {
    if ( std::operator==<SceneEntity>(0LL, (const std::shared_ptr<SceneEntity> *)&this->baseclass_0[88]) )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/dungeon_scene.cpp",
        "tryAddLevelConfigBeforeNotify",
        1879);
      v7 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
             &v23,
             (const char (*)[34])"scene_entity_ptr_ is null, scene:");
      common::milog::MiLogStream::operator<<<DungeonScene,(DungeonScene*)0>(v7, this);
      common::milog::MiLogStream::~MiLogStream(&v23);
      result = 0xFFFFFFFFLL;
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v22);
      v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22);
      level_config_vec_ptr = DungeonExcelConfigMgr::findDungeonLevelConfigVec(
                               &v8->design_config.txt_config_mgr.dungeon_config_mgr,
                               *(_DWORD *)(v3 + 64));
      std::shared_ptr<Config>::~shared_ptr(&v22);
      if ( level_config_vec_ptr )
      {
        __for_range = level_config_vec_ptr;
        __for_begin._M_current = std::vector<data::DungeonLevelEntityConfig>::begin(level_config_vec_ptr)._M_current;
        __for_end._M_current = std::vector<data::DungeonLevelEntityConfig>::end(level_config_vec_ptr)._M_current;
        while ( __gnu_cxx::operator!=<data::DungeonLevelEntityConfig const*,std::vector<data::DungeonLevelEntityConfig>>(
                  &__for_begin,
                  &__for_end) )
        {
          level_config = __gnu_cxx::__normal_iterator<data::DungeonLevelEntityConfig const*,std::vector<data::DungeonLevelEntityConfig>>::operator*(&__for_begin);
          v12 = std::__shared_ptr_access<SceneEntity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneEntity,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->baseclass_0[88]);
          SceneEntity::addInitLevelConfig(v12, &level_config->level_config_name);
          __gnu_cxx::__normal_iterator<data::DungeonLevelEntityConfig const*,std::vector<data::DungeonLevelEntityConfig>>::operator++(&__for_begin);
        }
        v13 = *(_DWORD *)(v3 + 64);
        v14 = std::map<unsigned int,unsigned int>::operator[](
                &this->level_config_id_map_,
                (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 48));
        v15 = v14;
        if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v14);
        }
        *v15 = v13;
        result = 0LL;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v23,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/dungeon/dungeon_scene.cpp",
          "tryAddLevelConfigBeforeNotify",
          1885);
        v9 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
               &v23,
               (const char (*)[49])"findDungeonLevelConfigVec fail, level_config_id:");
        v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v9,
                (const unsigned int *)(v3 + 64));
        v11 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v10, (const char (*)[8])" scene:");
        common::milog::MiLogStream::operator<<<DungeonScene,(DungeonScene*)0>(v11, this);
        common::milog::MiLogStream::~MiLogStream(&v23);
        result = 0xFFFFFFFFLL;
      }
    }
  }
  else
  {
    result = 0LL;
  }
  if ( v24 == (char *)v3 )
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

// Line 1898: range 0000000015FA8F52-0000000015FA8FC6
void __cdecl DungeonScene::setChallengeLeftTime(
        DungeonScene *const this,
        const std::pair<unsigned int,unsigned int> *challenge_pair,
        uint32_t left_time)
{
  std::map<std::pair<unsigned int,unsigned int>,unsigned int>::mapped_type *v4; // rax
  uint32_t *v5; // rdx

  v4 = std::map<std::pair<unsigned int,unsigned int>,unsigned int>::operator[](
         &this->challenge_left_time_map_,
         challenge_pair);
  v5 = v4;
  if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v4);
  }
  *v5 = left_time;
};

// Line 1903: range 0000000015FA8FC8-0000000015FA91D1
bool __cdecl DungeonScene::getChallengeLeftTime(
        const DungeonScene *const this,
        uint32_t challenge_index,
        uint32_t *left_time)
{
  uint32_t *v3; // rax
  uint32_t *v4; // rdx
  uint32_t v5; // ecx
  uint32_t v6; // ecx
  bool is_find; // [rsp+2Fh] [rbp-31h]
  std::map<std::pair<unsigned int,unsigned int>,unsigned int>::const_iterator __for_begin; // [rsp+30h] [rbp-30h] BYREF
  std::map<std::pair<unsigned int,unsigned int>,unsigned int>::const_iterator __for_end; // [rsp+38h] [rbp-28h] BYREF
  const std::map<std::pair<unsigned int,unsigned int>,unsigned int> *__for_range; // [rsp+40h] [rbp-20h]
  const std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> *v13; // [rsp+48h] [rbp-18h]
  std::tuple_element<0,const std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> >::type *challenge_pair; // [rsp+50h] [rbp-10h]
  std::tuple_element<1,const std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> >::type *time; // [rsp+58h] [rbp-8h]

  is_find = 0;
  __for_range = &this->challenge_left_time_map_;
  __for_begin._M_node = std::map<std::pair<unsigned int,unsigned int>,unsigned int>::begin(&this->challenge_left_time_map_)._M_node;
  __for_end._M_node = std::map<std::pair<unsigned int,unsigned int>,unsigned int>::end(&this->challenge_left_time_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v13 = std::_Rb_tree_const_iterator<std::pair<std::pair const<unsigned int,unsigned int>,unsigned int>>::operator*(&__for_begin);
    challenge_pair = std::get<0ul,std::pair<unsigned int,unsigned int> const,unsigned int>(v13);
    time = (std::tuple_element<1,const std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> >::type *)std::get<1ul,std::pair<unsigned int,unsigned int> const,unsigned int>(v13);
    if ( *(_BYTE *)(((unsigned __int64)&challenge_pair->second >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)challenge_pair + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&challenge_pair->second >> 3)
                                                                   + 0x7FFF8000) )
    {
      __asan_report_load4(&challenge_pair->second);
    }
    if ( challenge_index == challenge_pair->second )
    {
      if ( is_find )
      {
        v3 = (uint32_t *)std::min<unsigned int>(left_time, time);
        v4 = v3;
        if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v3);
        }
        v5 = *v4;
        if ( *(_BYTE *)(((unsigned __int64)left_time >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)left_time & 7) + 3) >= *(_BYTE *)(((unsigned __int64)left_time >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(left_time);
        }
        *left_time = v5;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)time >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)time & 7) + 3) >= *(_BYTE *)(((unsigned __int64)time >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(time);
        }
        v6 = *time;
        if ( *(_BYTE *)(((unsigned __int64)left_time >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)left_time & 7) + 3) >= *(_BYTE *)(((unsigned __int64)left_time >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(left_time);
        }
        *left_time = v6;
      }
      is_find = 1;
    }
    std::_Rb_tree_const_iterator<std::pair<std::pair const<unsigned int,unsigned int>,unsigned int>>::operator++(&__for_begin);
  }
  return is_find;
};

// Line 1924: range 0000000015FA91D2-0000000015FA9612
int32_t __cdecl DungeonScene::saveGroupToBin(DungeonScene *const this, GroupPtr *p_group_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // rbx
  int32_t v5; // r14d
  SceneBlockGroupComp *BlockGroupComp; // r14
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint32_t GroupId; // eax
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // rax
  proto::GroupBin *v14; // r14
  proto::GroupBin *v15; // rax
  int32_t result; // eax
  common::milog::MiLogStream v17; // [rsp+10h] [rbp-370h] BYREF
  char v18[848]; // [rsp+30h] [rbp-350h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(800LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 13 group_id:1938 64 600 14 group_bin:1939";
  *(_QWORD *)(v2 + 16) = DungeonScene::saveGroupToBin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862740] = -218103808;
  v4[536862741] = -202116109;
  v4[536862742] = -202116109;
  v4[536862743] = -202116109;
  v4[536862744] = -202116109;
  if ( std::operator==<Group>(p_group_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/dungeon/dungeon_scene.cpp",
      "saveGroupToBin",
      1927);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v17, (const char (*)[18])"group ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v17);
    v5 = -1;
  }
  else
  {
    BlockGroupComp = Scene::getBlockGroupComp((Scene *const)this);
    v7 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_group_ptr);
    GroupId = Group::getGroupId(v7);
    if ( SceneBlockGroupComp::isGroupDelayUnregister(BlockGroupComp, GroupId) )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/dungeon/dungeon_scene.cpp",
        "saveGroupToBin",
        1934);
      v9 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_group_ptr);
      v10 = common::milog::MiLogStream::operator<<<Group,(Group*)0>(&v17, v9);
      common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v10, (const char (*)[36])off_25AB4260);
      common::milog::MiLogStream::~MiLogStream(&v17);
      v5 = 0;
    }
    else
    {
      v11 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_group_ptr);
      *(_DWORD *)(v2 + 48) = Group::getGroupId(v11);
      proto::GroupBin::GroupBin((proto::GroupBin *const)(v2 + 64));
      v12 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_group_ptr);
      if ( Group::toBin(v12, (proto::GroupBin *)(v2 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v17,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/dungeon/dungeon_scene.cpp",
          "saveGroupToBin",
          1942);
        v13 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                &v17,
                (const char (*)[35])"group_ptr->toBin failed, group_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v17);
        v5 = -1;
      }
      else
      {
        v14 = std::move<proto::GroupBin &>((proto::GroupBin *)(v2 + 64));
        v15 = std::map<unsigned int,proto::GroupBin>::operator[](
                &this->group_bin_map_,
                (const std::map<unsigned int,proto::GroupBin>::key_type *)(v2 + 48));
        proto::GroupBin::operator=(v15, v14);
        v5 = 0;
      }
      proto::GroupBin::~GroupBin((proto::GroupBin *const)(v2 + 64));
    }
  }
  result = v5;
  if ( v18 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8050) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8058) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8060) = 0;
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8060) = -168430091;
  }
  return result;
};

// Line 1950: range 0000000015FA9614-0000000015FA980E
std::pair<int,proto::GroupBin*> __fastcall DungeonScene::findGroupBin(DungeonScene *const this, uint32_t group_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::pair<int,std::nullptr_t> v5; // rax
  int __x; // [rsp+14h] [rbp-ACh] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,proto::GroupBin> >::_Self __y; // [rsp+18h] [rbp-A8h] BYREF
  std::pair<int,std::nullptr_t> __p; // [rsp+20h] [rbp-A0h] BYREF
  std::pair<int,proto::GroupBin*> v9; // [rsp+30h] [rbp-90h] BYREF
  char v10[128]; // [rsp+40h] [rbp-80h] BYREF
  std::pair<int,proto::GroupBin*> result; // 0:eax.4,8:rdx.8

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 13 group_id:1949 64 8 9 iter:1951";
  *(_QWORD *)(v2 + 16) = DungeonScene::findGroupBin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = group_id;
  *(std::map<unsigned int,proto::GroupBin>::iterator *)(v2 + 64) = std::map<unsigned int,proto::GroupBin>::find(
                                                                     &this->group_bin_map_,
                                                                     (const std::map<unsigned int,proto::GroupBin>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,proto::GroupBin>::end(&this->group_bin_map_)._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,proto::GroupBin> >::_Self *)(v2 + 64),
         &__y) )
  {
    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,proto::GroupBin> >::_Base_ptr)&std::_Rb_tree_iterator<std::pair<unsigned int const,proto::GroupBin>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,proto::GroupBin> > *const)(v2 + 64))->second;
    __x = 0;
    result.first = std::make_pair<int,proto::GroupBin *>(&__x, (proto::GroupBin **)&__y).first;
  }
  else
  {
    __y._M_node = 0LL;
    __x = 0;
    v5 = std::make_pair<int,decltype(nullptr)>(&__x, &__y);
    __p.first = v5.first;
    __p.second = v5.second;
    std::pair<int,proto::GroupBin *>::pair<int,decltype(nullptr),true>(&v9, &__p);
    result.first = v9.first;
  }
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
  *(_QWORD *)&result.first = (unsigned int)result.first;
  return result;
};

// Line 1960: range 0000000015FA9810-0000000015FA98E6
__int64 __fastcall DungeonScene::clearGroupBin(DungeonScene *const this, uint32_t group_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  __int64 result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 group_id:1959";
  *(_QWORD *)(v2 + 16) = DungeonScene::clearGroupBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = group_id;
  std::map<unsigned int,proto::GroupBin>::erase(
    &this->group_bin_map_,
    (const std::map<unsigned int,proto::GroupBin>::key_type *)(v2 + 32));
  result = 0LL;
  if ( v6 == (char *)v2 )
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

// Line 1967: range 0000000015FA98E8-0000000015FA9E1F
void __cdecl DungeonScene::countPlayerAvatarsByElementType(
        DungeonScene *const this,
        Player *player,
        std::unordered_map<data::ElementType,unsigned int> *element_count_map)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<SceneTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // r14
  uint32_t Uid; // eax
  common::milog::MiLogStream *v8; // r14
  unsigned __int64 v9; // rax
  PlayerAvatarComp *AvatarComp; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::unordered_map<data::ElementType,unsigned int>::mapped_type *v15; // rax
  unsigned int val; // [rsp+24h] [rbp-14Ch] BYREF
  std::vector<long unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-148h] BYREF
  std::vector<long unsigned int>::iterator __for_end; // [rsp+30h] [rbp-140h] BYREF
  std::vector<long unsigned int> *__for_range; // [rsp+38h] [rbp-138h]
  std::vector<long unsigned int> __x; // [rsp+40h] [rbp-130h] BYREF
  common::milog::MiLogStream v22; // [rsp+60h] [rbp-110h] BYREF
  char v23[240]; // [rsp+80h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 8 16 avatar_guid:1979 64 16 19 scene_team_ptr:1969 96 16 15 avatar_ptr:1981 128 24 15 avatar_vec:1968";
  *(_QWORD *)(v3 + 16) = DungeonScene::countPlayerAvatarsByElementType;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -218103808;
  v5[536862725] = -202116109;
  std::vector<unsigned long>::vector((std::vector<long unsigned int> *const)(v3 + 128));
  DungeonScene::getDungeonSceneTeam(this);
  DungeonSceneTeam::getSceneTeam((DungeonSceneTeam *const)(v3 + 64));
  if ( std::operator!=<SceneTeam>((const std::shared_ptr<SceneTeam> *)(v3 + 64), 0LL) )
  {
    v6 = std::__shared_ptr_access<SceneTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    Uid = Player::getUid(player);
    SceneTeam::getAvatarGuidVec(&__x, v6, Uid);
    std::vector<unsigned long>::operator=((std::vector<long unsigned int> *const)(v3 + 128), &__x);
    std::vector<unsigned long>::~vector(&__x);
  }
  if ( std::vector<unsigned long>::empty((const std::vector<long unsigned int> *const)(v3 + 128)) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/dungeon/dungeon_scene.cpp",
      "countPlayerAvatarsByElementType",
      1976);
    v8 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(&v22, (const char (*)[36])off_25AB4420);
    val = Player::getUid(player);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v22);
  }
  else
  {
    __for_range = (std::vector<long unsigned int> *)(v3 + 128);
    __for_begin._M_current = std::vector<unsigned long>::begin((std::vector<long unsigned int> *const)(v3 + 128))._M_current;
    __for_end._M_current = std::vector<unsigned long>::end((std::vector<long unsigned int> *const)(v3 + 128))._M_current;
    while ( __gnu_cxx::operator!=<unsigned long *,std::vector<unsigned long>>(&__for_begin, &__for_end) )
    {
      v9 = (unsigned __int64)__gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>::operator*(&__for_begin);
      if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
        v9 = __asan_report_load8();
      *(_QWORD *)(v3 + 32) = *(_QWORD *)v9;
      AvatarComp = Player::getAvatarComp(player);
      PlayerAvatarComp::findAvatar((const PlayerAvatarComp *const)(v3 + 96), (uint64_t)AvatarComp);
      if ( std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v3 + 96), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/dungeon/dungeon_scene.cpp",
          "countPlayerAvatarsByElementType",
          1984);
        v11 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                &v22,
                (const char (*)[32])"findAvatar failed, avatar_guid:");
        v12 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                v11,
                (const unsigned __int64 *)(v3 + 32));
        v13 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v12, (const char (*)[6])" uid:");
        val = Player::getUid(player);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
        common::milog::MiLogStream::~MiLogStream(&v22);
      }
      else
      {
        v14 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        val = Avatar::getCurElementType(v14);
        v15 = std::unordered_map<data::ElementType,unsigned int>::operator[](
                element_count_map,
                (std::unordered_map<data::ElementType,unsigned int>::key_type *)&val);
        if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v15);
        }
        ++*v15;
      }
      std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 96));
      __gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>::operator++(&__for_begin);
    }
  }
  std::shared_ptr<SceneTeam>::~shared_ptr((std::shared_ptr<SceneTeam> *const)(v3 + 64));
  std::vector<unsigned long>::~vector((std::vector<long unsigned int> *const)(v3 + 128));
  if ( v23 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1993: range 0000000015FA9EB2-0000000015FAAAC9
void __cdecl DungeonScene::getDungeonStrengthenPointData(
        DungeonScene *const this,
        Player *player,
        google::protobuf::Map<unsigned int,proto::StrengthenPointData> *proto_point_data_map)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  StrengthenExcelConfigMgr *p_strengthen_config_mgr; // rcx
  PlayerTowerComp *TowerComp; // rax
  PlayerTowerComp *v8; // rax
  unsigned __int64 v9; // rax
  PlayerAvatarComp *AvatarComp; // rax
  PlayerMpComp *MpComp; // rax
  unsigned __int64 v12; // rax
  common::milog::MiLogStream *v13; // rdx
  int v14; // r14d
  SceneTeam *v15; // r14
  const std::shared_ptr<Avatar> *v16; // rax
  common::milog::MiLogStream *v17; // rdx
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  common::milog::MiLogStream *v19; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r14
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  unsigned int v25; // r14d
  std::map<data::StrengthenPointType,unsigned int>::mapped_type *v26; // rax
  unsigned int *v27; // rdx
  SelectType v28; // r14d
  std::map<data::StrengthenPointType,unsigned int>::mapped_type *v29; // rax
  SelectType *v30; // rdx
  std::map<data::StrengthenPointType,unsigned int>::mapped_type *v31; // rax
  google::protobuf::uint32 *v32; // rdx
  std::vector<std::shared_ptr<Avatar>>::iterator __for_begin_1; // [rsp+20h] [rbp-1E0h] BYREF
  std::vector<std::shared_ptr<Avatar>>::iterator __for_end_1; // [rsp+28h] [rbp-1D8h] BYREF
  std::vector<data::StrengthBaseScoreConfig>::const_iterator __for_begin; // [rsp+30h] [rbp-1D0h] BYREF
  std::vector<data::StrengthBaseScoreConfig>::const_iterator __for_begin_0; // [rsp+38h] [rbp-1C8h] BYREF
  std::vector<data::StrengthBaseScoreConfig>::const_iterator __for_end; // [rsp+40h] [rbp-1C0h] BYREF
  const data::StrengthenBasePointExcelConfig *base_point_config_ptr; // [rsp+48h] [rbp-1B8h]
  const TowerCurLevelRecord *tower_cur_level_record; // [rsp+50h] [rbp-1B0h]
  const std::vector<TowerTeam> *__for_range; // [rsp+58h] [rbp-1A8h]
  const TowerTeam *tower_team; // [rsp+60h] [rbp-1A0h]
  const std::vector<long unsigned int> *__for_range_0; // [rsp+68h] [rbp-198h]
  uint64_t guid; // [rsp+70h] [rbp-190h]
  const std::vector<data::StrengthBaseScoreConfig> *base_score_config_vec; // [rsp+78h] [rbp-188h]
  std::vector<std::shared_ptr<Avatar>> *__for_range_1; // [rsp+80h] [rbp-180h]
  const std::vector<data::StrengthBaseScoreConfig> *__for_range_3; // [rsp+88h] [rbp-178h]
  const data::StrengthBaseScoreConfig *score_config_0; // [rsp+90h] [rbp-170h]
  proto::StrengthenPointData *proto_point_data; // [rsp+98h] [rbp-168h]
  const std::vector<data::StrengthBaseScoreConfig> *__for_range_2; // [rsp+A0h] [rbp-160h]
  const data::StrengthBaseScoreConfig *score_config; // [rsp+A8h] [rbp-158h]
  common::milog::MiLogStream v52; // [rsp+B0h] [rbp-150h] BYREF
  char v53[304]; // [rsp+D0h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v53;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 4 9 type:2047 64 4 10 point:2048 80 16 15 avatar_ptr:2038 112 24 15 avatar_vec:2001 176 48 "
                        "38 total_avatar_strengthen_point_map:2037";
  *(_QWORD *)(v3 + 16) = DungeonScene::getDungeonStrengthenPointData;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = 61956;
  v5[536862723] = 62194;
  v5[536862724] = -218959360;
  v5[536862725] = 62194;
  v5[536862727] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 80));
  p_strengthen_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80))->design_config.txt_config_mgr.strengthen_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->dungeon_id_);
  }
  base_point_config_ptr = data::StrengthenExcelConfigMgrBase::findStrengthenBasePointExcelConfig(
                            p_strengthen_config_mgr,
                            this->dungeon_id_);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 80));
  if ( base_point_config_ptr )
  {
    std::vector<std::shared_ptr<Avatar>>::vector((std::vector<std::shared_ptr<Avatar>> *const)(v3 + 112));
    TowerComp = Player::getTowerComp(player);
    if ( PlayerTowerComp::isInTowerLevel(TowerComp) )
    {
      v8 = Player::getTowerComp(player);
      tower_cur_level_record = PlayerTowerComp::getTowerCurLevelRecord(v8);
      __for_range = &tower_cur_level_record->tower_team_vec;
      __for_end_1._M_current = (std::shared_ptr<Avatar> *)std::vector<TowerTeam>::begin(&tower_cur_level_record->tower_team_vec)._M_current;
      __for_begin._M_current = (const data::StrengthBaseScoreConfig *)std::vector<TowerTeam>::end(&tower_cur_level_record->tower_team_vec)._M_current;
      while ( __gnu_cxx::operator!=<TowerTeam const*,std::vector<TowerTeam>>(
                (const __gnu_cxx::__normal_iterator<const TowerTeam*,std::vector<TowerTeam> > *)&__for_end_1,
                (const __gnu_cxx::__normal_iterator<const TowerTeam*,std::vector<TowerTeam> > *)&__for_begin) )
      {
        tower_team = __gnu_cxx::__normal_iterator<TowerTeam const*,std::vector<TowerTeam>>::operator*((const __gnu_cxx::__normal_iterator<const TowerTeam*,std::vector<TowerTeam> > *const)&__for_end_1);
        __for_range_0 = &tower_team->mirror_avatar_guid_vec;
        __for_begin_0._M_current = (const data::StrengthBaseScoreConfig *)std::vector<unsigned long>::begin(&tower_team->mirror_avatar_guid_vec)._M_current;
        __for_end._M_current = (const data::StrengthBaseScoreConfig *)std::vector<unsigned long>::end(__for_range_0)._M_current;
        while ( __gnu_cxx::operator!=<unsigned long const*,std::vector<unsigned long>>(
                  (const __gnu_cxx::__normal_iterator<long unsigned int const*,std::vector<long unsigned int> > *)&__for_begin_0,
                  (const __gnu_cxx::__normal_iterator<long unsigned int const*,std::vector<long unsigned int> > *)&__for_end) )
        {
          v9 = (unsigned __int64)__gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>::operator*((const __gnu_cxx::__normal_iterator<long unsigned int const*,std::vector<long unsigned int> > *const)&__for_begin_0);
          if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
            v9 = __asan_report_load8();
          guid = *(_QWORD *)v9;
          AvatarComp = Player::getAvatarComp(player);
          PlayerAvatarComp::findAvatar((const PlayerAvatarComp *const)(v3 + 80), (uint64_t)AvatarComp);
          if ( std::operator!=<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v3 + 80)) )
            std::vector<std::shared_ptr<Avatar>>::push_back(
              (std::vector<std::shared_ptr<Avatar>> *const)(v3 + 112),
              (const std::vector<std::shared_ptr<Avatar>>::value_type *)(v3 + 80));
          std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 80));
          __gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>::operator++((__gnu_cxx::__normal_iterator<long unsigned int const*,std::vector<long unsigned int> > *const)&__for_begin_0);
        }
        __gnu_cxx::__normal_iterator<TowerTeam const*,std::vector<TowerTeam>>::operator++((__gnu_cxx::__normal_iterator<const TowerTeam*,std::vector<TowerTeam> > *const)&__for_end_1);
      }
    }
    else
    {
      MpComp = Player::getMpComp(player);
      if ( PlayerMpComp::isInMpMode(MpComp) )
        goto LABEL_53;
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v12 = *(_QWORD *)this->baseclass_0 + 280LL;
      if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
        v12 = __asan_report_load8();
      (*(void (__fastcall **)(unsigned __int64, DungeonScene *const))v12)(v3 + 80, this);
      if ( std::operator==<SceneTeam>(0LL, (const std::shared_ptr<SceneTeam> *)(v3 + 80)) )
      {
        common::milog::MiLogStream::create(
          &v52,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/dungeon/dungeon_scene.cpp",
          "getDungeonStrengthenPointData",
          2022);
        v13 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                &v52,
                (const char (*)[35])"findSceneTeam fail, dungeon_scene:");
        common::milog::MiLogStream::operator<<<DungeonScene,(DungeonScene*)0>(v13, this);
        common::milog::MiLogStream::~MiLogStream(&v52);
        v14 = 0;
      }
      else
      {
        v15 = std::__shared_ptr_access<SceneTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
        std::function<ForeachPolicy ()(Avatar &)>::function<DungeonScene::getDungeonStrengthenPointData(Player &,google::protobuf::Map<unsigned int,proto::StrengthenPointData> &)::{lambda(Avatar &)#1},void,void>(
          (std::function<ForeachPolicy(Avatar&)> *const)&v52,
          (DungeonScene::getDungeonStrengthenPointData::<lambda(Avatar&)>)(v3 + 112));
        SceneTeam::foreachAvatar(v15, (std::function<ForeachPolicy(Avatar&)> *)&v52);
        std::function<ForeachPolicy ()(Avatar &)>::~function((std::function<ForeachPolicy(Avatar&)> *const)&v52);
        v14 = 1;
      }
      std::shared_ptr<SceneTeam>::~shared_ptr((std::shared_ptr<SceneTeam> *const)(v3 + 80));
      if ( v14 != 1 )
        goto LABEL_53;
    }
    base_score_config_vec = &base_point_config_ptr->base_scores;
    std::map<data::StrengthenPointType,unsigned int>::map((std::map<data::StrengthenPointType,unsigned int> *const)(v3 + 176));
    __for_range_1 = (std::vector<std::shared_ptr<Avatar>> *)(v3 + 112);
    __for_begin_1._M_current = std::vector<std::shared_ptr<Avatar>>::begin((std::vector<std::shared_ptr<Avatar>> *const)(v3 + 112))._M_current;
    __for_end_1._M_current = std::vector<std::shared_ptr<Avatar>>::end(__for_range_1)._M_current;
    while ( __gnu_cxx::operator!=<std::shared_ptr<Avatar> *,std::vector<std::shared_ptr<Avatar>>>(
              &__for_begin_1,
              &__for_end_1) )
    {
      v16 = __gnu_cxx::__normal_iterator<std::shared_ptr<Avatar> *,std::vector<std::shared_ptr<Avatar>>>::operator*(&__for_begin_1);
      std::shared_ptr<Avatar>::shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 80), v16);
      if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v3 + 80)) )
      {
        common::milog::MiLogStream::create(
          &v52,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/dungeon/dungeon_scene.cpp",
          "getDungeonStrengthenPointData",
          2042);
        v17 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                &v52,
                (const char (*)[35])"avatar_ptr is null! dungeon_scene:");
        common::milog::MiLogStream::operator<<<DungeonScene,(DungeonScene*)0>(v17, this);
        common::milog::MiLogStream::~MiLogStream(&v52);
      }
      else
      {
        __for_range_2 = base_score_config_vec;
        __for_begin._M_current = std::vector<data::StrengthBaseScoreConfig>::begin(base_score_config_vec)._M_current;
        __for_begin_0._M_current = std::vector<data::StrengthBaseScoreConfig>::end(__for_range_2)._M_current;
        while ( __gnu_cxx::operator!=<data::StrengthBaseScoreConfig const*,std::vector<data::StrengthBaseScoreConfig>>(
                  &__for_begin,
                  &__for_begin_0) )
        {
          score_config = __gnu_cxx::__normal_iterator<data::StrengthBaseScoreConfig const*,std::vector<data::StrengthBaseScoreConfig>>::operator*(&__for_begin);
          if ( *(_BYTE *)(((unsigned __int64)&score_config->strengthen_point_type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&score_config->strengthen_point_type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&score_config->strengthen_point_type);
          }
          *(_DWORD *)(v3 + 48) = score_config->strengthen_point_type;
          v18 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
          *(_DWORD *)(v3 + 64) = Avatar::getStrengthenPoint(v18, *(data::StrengthenPointType *)(v3 + 48));
          common::milog::MiLogStream::create(
            &v52,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/dungeon/dungeon_scene.cpp",
            "getDungeonStrengthenPointData",
            2049);
          v19 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(&v52, (const char (*)[8])"avatar:");
          v20 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
          v21 = common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v19, v20);
          v22 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v21, (const char (*)[7])" type:");
          __for_end._M_current = (const data::StrengthBaseScoreConfig *)data::enumValToStr((data::StrengthenPointType)*(_DWORD *)(v3 + 48));
          v23 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(
                  v22,
                  (const char *const *)&__for_end);
          v24 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v23, (const char (*)[8])" point:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v3 + 64));
          common::milog::MiLogStream::~MiLogStream(&v52);
          v25 = *(_DWORD *)(v3 + 64);
          v26 = std::map<data::StrengthenPointType,unsigned int>::operator[](
                  (std::map<data::StrengthenPointType,unsigned int> *const)(v3 + 176),
                  (const std::map<data::StrengthenPointType,unsigned int>::key_type *)(v3 + 48));
          v27 = v26;
          if ( *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v26 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v26);
          }
          v28 = SAFE_ADD<unsigned int,unsigned int>(*v27, v25);
          v29 = std::map<data::StrengthenPointType,unsigned int>::operator[](
                  (std::map<data::StrengthenPointType,unsigned int> *const)(v3 + 176),
                  (const std::map<data::StrengthenPointType,unsigned int>::key_type *)(v3 + 48));
          v30 = v29;
          if ( *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v29 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(v29);
          }
          *v30 = v28;
          __gnu_cxx::__normal_iterator<data::StrengthBaseScoreConfig const*,std::vector<data::StrengthBaseScoreConfig>>::operator++(&__for_begin);
        }
      }
      std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 80));
      __gnu_cxx::__normal_iterator<std::shared_ptr<Avatar> *,std::vector<std::shared_ptr<Avatar>>>::operator++(&__for_begin_1);
    }
    __for_range_3 = base_score_config_vec;
    __for_begin_0._M_current = std::vector<data::StrengthBaseScoreConfig>::begin(base_score_config_vec)._M_current;
    __for_end._M_current = std::vector<data::StrengthBaseScoreConfig>::end(__for_range_3)._M_current;
    while ( __gnu_cxx::operator!=<data::StrengthBaseScoreConfig const*,std::vector<data::StrengthBaseScoreConfig>>(
              &__for_begin_0,
              &__for_end) )
    {
      score_config_0 = __gnu_cxx::__normal_iterator<data::StrengthBaseScoreConfig const*,std::vector<data::StrengthBaseScoreConfig>>::operator*(&__for_begin_0);
      if ( *(_BYTE *)(((unsigned __int64)&score_config_0->strengthen_point_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&score_config_0->strengthen_point_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&score_config_0->strengthen_point_type);
      }
      *(_DWORD *)(v3 + 64) = score_config_0->strengthen_point_type;
      proto_point_data = google::protobuf::Map<unsigned int,proto::StrengthenPointData>::operator[](
                           proto_point_data_map,
                           (const google::protobuf::Map<unsigned int,proto::StrengthenPointData>::key_type *)(v3 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&score_config_0->base_score >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)score_config_0 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&score_config_0->base_score >> 3)
                                                                      + 0x7FFF8000) )
      {
        __asan_report_load4(&score_config_0->base_score);
      }
      proto::StrengthenPointData::set_base_point(proto_point_data, score_config_0->base_score);
      v31 = std::map<data::StrengthenPointType,unsigned int>::operator[](
              (std::map<data::StrengthenPointType,unsigned int> *const)(v3 + 176),
              &score_config_0->strengthen_point_type);
      v32 = v31;
      if ( *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v31 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v31);
      }
      proto::StrengthenPointData::set_cur_point(proto_point_data, *v32);
      __gnu_cxx::__normal_iterator<data::StrengthBaseScoreConfig const*,std::vector<data::StrengthBaseScoreConfig>>::operator++(&__for_begin_0);
    }
    std::map<data::StrengthenPointType,unsigned int>::~map((std::map<data::StrengthenPointType,unsigned int> *const)(v3 + 176));
LABEL_53:
    std::vector<std::shared_ptr<Avatar>>::~vector((std::vector<std::shared_ptr<Avatar>> *const)(v3 + 112));
  }
  if ( v53 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF801C) = 0;
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

// Line 2025: range 0000000015FA9E20-0000000015FA9EB0
ForeachPolicy __cdecl DungeonScene::getDungeonStrengthenPointData(Player &,google::protobuf::Map<unsigned int,proto::StrengthenPointData> &)::{lambda(Avatar &)#1}::operator()(
        const DungeonScene::getDungeonStrengthenPointData::<lambda(Avatar&)> *const __closure,
        Avatar *avatar)
{
  std::vector<std::shared_ptr<Avatar>> *avatar_vec; // rbx
  std::vector<std::shared_ptr<Avatar>>::value_type __x; // [rsp+10h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  avatar_vec = __closure->__avatar_vec;
  toThisPtr<Avatar>((Avatar *)&__x);
  std::vector<std::shared_ptr<Avatar>>::push_back(avatar_vec, &__x);
  std::shared_ptr<Avatar>::~shared_ptr(&__x);
  return 0;
};

// Line 2062: range 0000000015FAAACA-0000000015FAAC34
void __cdecl DungeonScene::recordSettleSnapshot(DungeonScene *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::__shared_ptr_access<SceneTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  std::unordered_map<unsigned int,std::vector<long unsigned int>> v5; // [rsp+10h] [rbp-A0h] BYREF
  char v6[96]; // [rsp+50h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 19 scene_team_ptr:2063";
  *(_QWORD *)(v1 + 16) = DungeonScene::recordSettleSnapshot;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  DungeonSceneTeam::getSceneTeam((DungeonSceneTeam *const)(v1 + 32));
  if ( std::operator!=<SceneTeam>((const std::shared_ptr<SceneTeam> *)(v1 + 32), 0LL) )
  {
    v4 = std::__shared_ptr_access<SceneTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    SceneTeam::getPlayerAvatarGuidMap(&v5, v4);
    std::unordered_map<unsigned int,std::vector<unsigned long>>::operator=(
      &this->settle_snapshot_.settle_team_avatar_map,
      &v5);
    std::unordered_map<unsigned int,std::vector<unsigned long>>::~unordered_map(&v5);
  }
  std::shared_ptr<SceneTeam>::~shared_ptr((std::shared_ptr<SceneTeam> *const)(v1 + 32));
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 2073: range 0000000015FAAC36-0000000015FAAFFE
void __fastcall DungeonScene::onPlayerAllAvatarDie(DungeonScene *const this, uint32_t uid)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::map<unsigned int,unsigned int>::mapped_type *v6; // rax
  _DWORD *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  uint32_t v13; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rdx
  uint32_t *p_uid; // rax
  std::remove_reference<std::string >::type *v16; // r14
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  SceneBlockGroupComp *BlockGroupComp; // r14
  std::shared_ptr<Event> p_event_ptr; // [rsp+10h] [rbp-C0h] BYREF
  common::milog::MiLogStream v20; // [rsp+20h] [rbp-B0h] BYREF
  char v21[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 8 now:2074 48 4 8 uid:2072 64 16 14 event_ptr:2077";
  *(_QWORD *)(v2 + 16) = DungeonScene::onPlayerAllAvatarDie;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = uid;
  *(_DWORD *)(v2 + 32) = common::tools::TimeUtils::getNow();
  v5 = *(_DWORD *)(v2 + 32);
  v6 = std::map<unsigned int,unsigned int>::operator[](
         &this->player_all_avatar_die_time_map_,
         (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v7 = v6;
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v6);
  }
  *v7 = v5;
  common::milog::MiLogStream::create(
    &v20,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/dungeon/dungeon_scene.cpp",
    "onPlayerAllAvatarDie",
    2076);
  v8 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
         &v20,
         (const char (*)[37])"Dungeon player all avatar die, uid: ");
  v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
  v10 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v9, (const char (*)[9])" ,time: ");
  v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 32));
  v12 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v11, (const char (*)[15])" ,dungeon_id: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->dungeon_id_);
  common::milog::MiLogStream::~MiLogStream(&v20);
  EventUtil::createEvent((data::EventType)(v2 + 64));
  if ( std::operator!=<Event>(0LL, (const std::shared_ptr<Event> *)(v2 + 64)) )
  {
    v13 = *(_DWORD *)(v2 + 48);
    v14 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    p_uid = &v14->uid;
    if ( *(_BYTE *)(((unsigned __int64)p_uid >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_uid >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(p_uid);
    }
    v14->uid = v13;
    if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->dungeon_id_);
    }
    common::tools::StringUtils::numToStr<unsigned int>((std::string *)&v20, this->dungeon_id_);
    v16 = std::move<std::string>((std::string *)&v20);
    v17 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    std::string::operator=(&v17->source_name, v16);
    std::string::~string(&v20);
    BlockGroupComp = Scene::getBlockGroupComp((Scene *const)this);
    std::shared_ptr<Event>::shared_ptr(&p_event_ptr, (const std::shared_ptr<Event> *)(v2 + 64));
    SceneBlockGroupComp::broadcastGroupLuaEvent(BlockGroupComp, &p_event_ptr);
    std::shared_ptr<Event>::~shared_ptr(&p_event_ptr);
  }
  std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v2 + 64));
  if ( v21 == (char *)v2 )
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

// Line 2087: range 0000000015FAB000-0000000015FAB192
__int64 __fastcall DungeonScene::getPlayerAllAvatarDieTime(const DungeonScene *const this, uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v5; // rdx
  unsigned int *p_second; // rax
  __int64 result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self __y; // [rsp+18h] [rbp-88h] BYREF
  char v9[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 8 uid:2086 64 8 9 iter:2088";
  *(_QWORD *)(v2 + 16) = DungeonScene::getPlayerAllAvatarDieTime;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = uid;
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::map<unsigned int,unsigned int>::find(
                                                                        &this->player_all_avatar_die_time_map_,
                                                                        (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,unsigned int>::end(&this->player_all_avatar_die_time_map_)._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 64),
         &__y) )
  {
    v5 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 64));
    p_second = &v5->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    result = v5->second;
  }
  else
  {
    result = 0LL;
  }
  if ( v9 == (char *)v2 )
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

// Line 2097: range 0000000015FAB194-0000000015FAB5A7
__int64 __fastcall DungeonScene::isPlayerReviveInCd(DungeonScene *const this, uint32_t uid, uint32_t revive_time)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  const data::DungeonExcelConfig *dungeon_config_ptr; // [rsp+18h] [rbp-A8h]
  common::milog::MiLogStream v17; // [rsp+20h] [rbp-A0h] BYREF
  char v18[128]; // [rsp+40h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 13 die_time:2098 48 4 8 uid:2096 64 4 16 revive_time:2096";
  *(_QWORD *)(v3 + 16) = DungeonScene::isPlayerReviveInCd;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 48) = uid;
  *(_DWORD *)(v3 + 64) = revive_time;
  *(_DWORD *)(v3 + 32) = DungeonScene::getPlayerAllAvatarDieTime(this, *(_DWORD *)(v3 + 48));
  if ( *(_DWORD *)(v3 + 32) )
  {
    dungeon_config_ptr = DungeonScene::getDungeonConfig(this);
    if ( dungeon_config_ptr )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/dungeon/dungeon_scene.cpp",
        "isPlayerReviveInCd",
        2113);
      v9 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
             &v17,
             (const char (*)[30])"check player revive cd, uid: ");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 48));
      v11 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v10, (const char (*)[13])" ,die_time: ");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 32));
      v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v12, (const char (*)[16])" ,revive_time: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 64));
      common::milog::MiLogStream::~MiLogStream(&v17);
      if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->revive_interval_time >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)dungeon_config_ptr + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->revive_interval_time >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load4(&dungeon_config_ptr->revive_interval_time);
      }
      if ( *(_DWORD *)(v3 + 32) + dungeon_config_ptr->revive_interval_time <= *(_DWORD *)(v3 + 64) )
      {
        result = 0LL;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v17,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/dungeon/dungeon_scene.cpp",
          "isPlayerReviveInCd",
          2116);
        v14 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                &v17,
                (const char (*)[27])"player revive in cd, uid: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v17);
        result = 1LL;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/dungeon_scene.cpp",
        "isPlayerReviveInCd",
        2109);
      v8 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(&v17, (const char (*)[43])off_25AB3840);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->dungeon_id_);
      common::milog::MiLogStream::~MiLogStream(&v17);
      result = 1LL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/dungeon_scene.cpp",
      "isPlayerReviveInCd",
      2102);
    v6 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v17, (const char (*)[21])off_25AB4960);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v17);
    result = 0LL;
  }
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

// Line 2124: range 0000000015FAB63C-0000000015FAB836
bool __cdecl DungeonScene::isAllAvatarDead(DungeonScene *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  unsigned __int64 v4; // rax
  SceneTeam *v5; // r14
  char v6; // r14
  bool result; // al
  std::function<ForeachPolicy(Avatar&)> p_func; // [rsp+10h] [rbp-B0h] BYREF
  char v9[144]; // [rsp+30h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 16 is_all_dead:2125 64 16 19 scene_team_ptr:2126";
  *(_QWORD *)(v1 + 16) = DungeonScene::isAllAvatarDead;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -202178560;
  *(_BYTE *)(v1 + 48) = 1;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v4 = *(_QWORD *)this->baseclass_0 + 280LL;
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    v4 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, DungeonScene *const))v4)(v1 + 64, this);
  if ( std::operator!=<SceneTeam>(0LL, (const std::shared_ptr<SceneTeam> *)(v1 + 64)) )
  {
    v5 = std::__shared_ptr_access<SceneTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    std::function<ForeachPolicy ()(Avatar &)>::function<DungeonScene::isAllAvatarDead(void)::{lambda(Avatar &)#1},void,void>(
      &p_func,
      (DungeonScene::isAllAvatarDead::<lambda(Avatar&)>)(v1 + 48));
    SceneTeam::foreachAvatar(v5, &p_func);
    std::function<ForeachPolicy ()(Avatar &)>::~function(&p_func);
  }
  v6 = *(_BYTE *)(v1 + 48);
  std::shared_ptr<SceneTeam>::~shared_ptr((std::shared_ptr<SceneTeam> *const)(v1 + 64));
  result = v6;
  if ( v9 == (char *)v1 )
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
  return result;
};

// Line 2129: range 0000000015FAB5A8-0000000015FAB63A
ForeachPolicy __cdecl DungeonScene::isAllAvatarDead(void)::{lambda(Avatar &)#1}::operator()(
        const DungeonScene::isAllAvatarDead::<lambda(Avatar&)> *const __closure,
        Avatar *avatar)
{
  bool *is_all_dead; // rdx

  if ( Creature::getLifeState(avatar) != LIFE_ALIVE )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  is_all_dead = __closure->__is_all_dead;
  if ( *(_BYTE *)(((unsigned __int64)__closure->__is_all_dead >> 3) + 0x7FFF8000) != 0
    && ((__int64)__closure->__is_all_dead & 7) >= *(_BYTE *)(((unsigned __int64)__closure->__is_all_dead >> 3)
                                                           + 0x7FFF8000) )
  {
    __asan_report_store1(__closure->__is_all_dead);
  }
  *is_all_dead = 0;
  return 1;
};

// Line 2144: range 0000000015FAB838-0000000015FAB960
void __cdecl DungeonScene::registerDungeonInitEnterSceneAvatarCallback(
        DungeonScene *const this,
        DungeonInitEnterSceneAvatarCallback *p_init_enter_scene_avatar_callback)
{
  common::milog::MiLogStream *v2; // rax
  std::logic_error *exception; // rdi
  common::milog::MiLogStream v4; // [rsp+10h] [rbp-30h] BYREF

  if ( std::function<int ()(DungeonScene &,std::vector<std::shared_ptr<Avatar>> &,std::shared_ptr<Avatar>&)>::operator bool(&this->init_enter_scene_avatar_callback_) )
  {
    common::milog::MiLogStream::create(
      &v4,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/dungeon/dungeon_scene.cpp",
      "registerDungeonInitEnterSceneAvatarCallback",
      2147);
    v2 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(
           &v4,
           (const char (*)[65])"init_enter_scene_avatar_callback already registered, dungeon_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->dungeon_id_);
    common::milog::MiLogStream::~MiLogStream(&v4);
    exception = (std::logic_error *)__cxa_allocate_exception(0x10uLL);
    std::logic_error::logic_error(exception, "init_enter_scene_avatar_callback already registered");
    __asan_handle_no_return();
    _cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::logic_error,
      (void (__fastcall *)(void *))&std::logic_error::~logic_error);
  }
  std::function<int ()(DungeonScene &,std::vector<std::shared_ptr<Avatar>> &,std::shared_ptr<Avatar>&)>::operator=(
    &this->init_enter_scene_avatar_callback_,
    p_init_enter_scene_avatar_callback);
};

// Line 2158: range 0000000015FAB962-0000000015FABA36
int32_t __cdecl DungeonScene::registerDungeonSettleCallback(
        DungeonScene *const this,
        DungeonSettleCallback *p_dungeon_settle_callback)
{
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream v4; // [rsp+10h] [rbp-30h] BYREF

  if ( std::function<void ()(Player &,DungeonScene &,proto::DungeonSettleNotify &)>::operator bool(&this->dungeon_settle_callback_) )
  {
    common::milog::MiLogStream::create(
      &v4,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/dungeon/dungeon_scene.cpp",
      "registerDungeonSettleCallback",
      2161);
    v2 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
           &v4,
           (const char (*)[56])"dungeon_settle_callback already registered, dungeon_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->dungeon_id_);
    common::milog::MiLogStream::~MiLogStream(&v4);
    return -1;
  }
  else
  {
    std::function<void ()(Player &,DungeonScene &,proto::DungeonSettleNotify &)>::operator=(
      &this->dungeon_settle_callback_,
      p_dungeon_settle_callback);
    return 0;
  }
};

// Line 2169: range 0000000015FABA38-0000000015FABB0C
int32_t __cdecl DungeonScene::registerChallengeSettleCallback(
        DungeonScene *const this,
        ChallengeSettleCallback *p_challenge_settle_callback)
{
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream v4; // [rsp+10h] [rbp-30h] BYREF

  if ( std::function<void ()(Player &,DungeonScene &,Challenge &,proto::DungeonChallengeFinishNotify &)>::operator bool(&this->challenge_settle_callback_) )
  {
    common::milog::MiLogStream::create(
      &v4,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/dungeon/dungeon_scene.cpp",
      "registerChallengeSettleCallback",
      2172);
    v2 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
           &v4,
           (const char (*)[58])"challenge_settle_callback already registered, dungeon_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->dungeon_id_);
    common::milog::MiLogStream::~MiLogStream(&v4);
    return -1;
  }
  else
  {
    std::function<void ()(Player &,DungeonScene &,Challenge &,proto::DungeonChallengeFinishNotify &)>::operator=(
      &this->challenge_settle_callback_,
      p_challenge_settle_callback);
    return 0;
  }
};

// Line 2180: range 0000000015FABB0E-0000000015FABBBD
int32_t __cdecl DungeonScene::enableMistTrialStat(
        DungeonScene *const this,
        const std::vector<unsigned int> *mist_trial_watcher_list)
{
  common::milog::MiLogStream v3; // [rsp+10h] [rbp-30h] BYREF

  if ( !MistTrialDungeonStatProxy::init(&this->mist_trial_stat_proxy_, mist_trial_watcher_list) )
    return 0;
  common::milog::MiLogStream::create(
    &v3,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/dungeon/dungeon_scene.cpp",
    "enableMistTrialStat",
    2183);
  common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(&v3, (const char (*)[25])"[MIST_TRIAL] init failed");
  common::milog::MiLogStream::~MiLogStream(&v3);
  return -1;
};

// Line 2190: range 0000000015FABBBE-0000000015FABBEC
uint32_t __cdecl DungeonScene::getMistTrialStatValue(DungeonScene *const this, uint32_t uid, uint32_t stat_id)
{
  return MistTrialDungeonStatProxy::getStatValue(&this->mist_trial_stat_proxy_, uid, stat_id);
};

// Line 2195: range 0000000015FABBEE-0000000015FABC1E
int32_t __cdecl DungeonScene::getMistTrialStatValueMap(
        DungeonScene *const this,
        uint32_t uid,
        std::unordered_map<unsigned int,unsigned int> *stat_map)
{
  return MistTrialDungeonStatProxy::getStatMap(&this->mist_trial_stat_proxy_, uid, stat_map);
};

// Line 2200: range 0000000015FABC20-0000000015FABD1C
bool __cdecl DungeonScene::isEnterBySumoActivity(DungeonScene *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  bool result; // al
  char v5[128]; // [rsp+10h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 24 21 sumo_context_opt:2201";
  *(_QWORD *)(v1 + 16) = DungeonScene::isEnterBySumoActivity;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218103808;
  v3[536862722] = -202116109;
  DungeonScene::getDungeonExtraData<SumoDungeonContext>((std::optional<SumoDungeonContext> *)(v1 + 32), this);
  result = std::optional<SumoDungeonContext>::has_value((const std::optional<SumoDungeonContext> *const)(v1 + 32));
  if ( v5 == (char *)v1 )
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
  return result;
};

// Line 2206: range 0000000015FABD1E-0000000015FABDF1
bool __cdecl DungeonScene::isEnterByRoguelikeActivity(DungeonScene *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  bool result; // al
  char v5[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 22 rogue_context_opt:2207";
  *(_QWORD *)(v1 + 16) = DungeonScene::isEnterByRoguelikeActivity;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  *(std::optional<RogueDungeonContext> *)(v1 + 32) = DungeonScene::getDungeonExtraData<RogueDungeonContext>(this);
  result = std::optional<RogueDungeonContext>::has_value((const std::optional<RogueDungeonContext> *const)(v1 + 32));
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

// Line 2212: range 0000000015FABDF2-0000000015FABE0B
bool __cdecl DungeonScene::isEnterByMistTrialActivity(DungeonScene *const this)
{
  return DungeonScene::isDungeonExtraDataOfType<MistTrialDungeonContext>(this);
};

// Line 2217: range 0000000015FABE0C-0000000015FABECC
void __cdecl DungeonScene::onPlayerPostEnterScene(DungeonScene *const this, uint32_t uid)
{
  std::less<unsigned int> __comp; // [rsp+1Ah] [rbp-56h] BYREF
  std::allocator<unsigned int> __a; // [rsp+1Bh] [rbp-55h] BYREF
  std::initializer_list<unsigned int> __l; // [rsp+1Ch] [rbp-54h] BYREF

  LODWORD(__l._M_array) = uid;
  std::allocator<unsigned int>::allocator(&__a);
  std::set<unsigned int>::set(
    (std::set<unsigned int> *const)((char *)&__l._M_array + 4),
    (std::initializer_list<unsigned int>)__PAIR128__(1LL, &__l),
    &__comp,
    &__a);
  DungeonScene::notifyReviseLevel(this, (const std::set<unsigned int> *)((char *)&__l._M_array + 4));
  std::set<unsigned int>::~set((std::set<unsigned int> *const)((char *)&__l._M_array + 4));
  std::allocator<unsigned int>::~allocator(&__a);
};

// Line 2222: range 0000000015FABECE-0000000015FAC017
bool __cdecl DungeonScene::isEnterByPotionActivity(DungeonScene *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  bool has_value; // r14
  bool result; // al
  char v6[304]; // [rsp+10h] [rbp-130h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(256LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 48 144 23 potion_context_opt:2223";
  *(_QWORD *)(v1 + 16) = DungeonScene::isEnterByPotionActivity;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862726] = -202116109;
  v3[536862727] = -202116109;
  DungeonScene::getDungeonExtraData<PotionDungeonContext>((std::optional<PotionDungeonContext> *)(v1 + 48), this);
  has_value = std::optional<PotionDungeonContext>::has_value((const std::optional<PotionDungeonContext> *const)(v1 + 48));
  std::optional<PotionDungeonContext>::~optional((std::optional<PotionDungeonContext> *const)(v1 + 48));
  result = has_value;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2228: range 0000000015FAC018-0000000015FAC16B
bool __cdecl DungeonScene::isEnterByCrystalLinkActivity(DungeonScene *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // rbx
  bool has_value; // r14
  bool result; // al
  char v6[336]; // [rsp+10h] [rbp-150h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(288LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 184 29 crystal_link_context_opt:2229";
  *(_QWORD *)(v1 + 16) = DungeonScene::isEnterByCrystalLinkActivity;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862726] = -218103808;
  v3[536862727] = -202116109;
  v3[536862728] = -202116109;
  DungeonScene::getDungeonExtraData<CrystalLinkDungeonContext>(
    (std::optional<CrystalLinkDungeonContext> *)(v1 + 32),
    this);
  has_value = std::optional<CrystalLinkDungeonContext>::has_value((const std::optional<CrystalLinkDungeonContext> *const)(v1 + 32));
  std::optional<CrystalLinkDungeonContext>::~optional((std::optional<CrystalLinkDungeonContext> *const)(v1 + 32));
  result = has_value;
  if ( v6 == (char *)v1 )
  {
    *(_DWORD *)((v1 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 2234: range 0000000015FAC16C-0000000015FAC248
bool __cdecl DungeonScene::isEnterByRogueDiaryActivity(DungeonScene *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  bool result; // al
  char v5[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 12 16 context_opt:2235";
  *(_QWORD *)(v1 + 16) = DungeonScene::isEnterByRogueDiaryActivity;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202177536;
  *(std::optional<RogueDiaryDungeonContext> *)(v1 + 32) = DungeonScene::getDungeonExtraData<RogueDiaryDungeonContext>(this);
  result = std::optional<RogueDiaryDungeonContext>::has_value((const std::optional<RogueDiaryDungeonContext> *const)(v1 + 32));
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

// Line 2240: range 0000000015FAC24A-0000000015FAC37A
bool __cdecl DungeonScene::isEnterByInstableSprayActivity(DungeonScene *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  bool has_value; // r14
  bool result; // al
  char v6[208]; // [rsp+10h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 48 80 16 context_opt:2241";
  *(_QWORD *)(v1 + 16) = DungeonScene::isEnterByInstableSprayActivity;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862724] = -202116109;
  DungeonScene::getDungeonExtraData<InstableSprayDungeonContext>(
    (std::optional<InstableSprayDungeonContext> *)(v1 + 48),
    this);
  has_value = std::optional<InstableSprayDungeonContext>::has_value((const std::optional<InstableSprayDungeonContext> *const)(v1 + 48));
  std::optional<InstableSprayDungeonContext>::~optional((std::optional<InstableSprayDungeonContext> *const)(v1 + 48));
  result = has_value;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 2246: range 0000000015FAC37C-0000000015FAC458
bool __cdecl DungeonScene::isEnterByMuqadasPotionActivity(DungeonScene *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  bool result; // al
  char v5[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 12 31 muqadas_potion_context_opt:2247";
  *(_QWORD *)(v1 + 16) = DungeonScene::isEnterByMuqadasPotionActivity;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202177536;
  *(std::optional<MuqadasPotionDungeonContext> *)(v1 + 32) = DungeonScene::getDungeonExtraData<MuqadasPotionDungeonContext>(this);
  result = std::optional<MuqadasPotionDungeonContext>::has_value((const std::optional<MuqadasPotionDungeonContext> *const)(v1 + 32));
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

// Line 2252: range 0000000015FAC45A-0000000015FAC5A3
bool __cdecl DungeonScene::isEnterByFungusFighterActivity(DungeonScene *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  bool has_value; // r14
  bool result; // al
  char v6[304]; // [rsp+10h] [rbp-130h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(256LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 48 144 31 fungus_fighter_context_opt:2253";
  *(_QWORD *)(v1 + 16) = DungeonScene::isEnterByFungusFighterActivity;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862726] = -202116109;
  v3[536862727] = -202116109;
  DungeonScene::getDungeonExtraData<FungusFighterDungeonContext>(
    (std::optional<FungusFighterDungeonContext> *)(v1 + 48),
    this);
  has_value = std::optional<FungusFighterDungeonContext>::has_value((const std::optional<FungusFighterDungeonContext> *const)(v1 + 48));
  std::optional<FungusFighterDungeonContext>::~optional((std::optional<FungusFighterDungeonContext> *const)(v1 + 48));
  result = has_value;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2258: range 0000000015FAC5A4-0000000015FAC5D8
bool __cdecl DungeonScene::isEnterByCharAmusementActivity(DungeonScene *const this)
{
  const std::type_info *v1; // rax

  v1 = std::any::type(&this->dungeon_extra_data_);
  return std::type_info::operator==(v1, (const std::type_info *)&`typeinfo for'CharAmusementDungeonContext);
};

// Line 2263: range 0000000015FAC5DA-0000000015FAC60E
bool __cdecl DungeonScene::isEnterByBrickBreakerActivity(DungeonScene *const this)
{
  const std::type_info *v1; // rax

  v1 = std::any::type(&this->dungeon_extra_data_);
  return std::type_info::operator==(v1, (const std::type_info *)&`typeinfo for'BrickBreakerDungeonContext);
};

// Line 2268: range 0000000015FAC610-0000000015FAC644
bool __cdecl DungeonScene::isEnterByDuelHeartActivity(DungeonScene *const this)
{
  const std::type_info *v1; // rax

  v1 = std::any::type(&this->dungeon_extra_data_);
  return std::type_info::operator==(v1, (const std::type_info *)&`typeinfo for'DuelHeartDungeonContext);
};

// Line 2273: range 0000000015FAC646-0000000015FAC67A
bool __cdecl DungeonScene::isEnterByTeamChainActivity(DungeonScene *const this)
{
  const std::type_info *v1; // rax

  v1 = std::any::type(&this->dungeon_extra_data_);
  return std::type_info::operator==(v1, (const std::type_info *)&`typeinfo for'TeamChainDungeonContext);
};

// Line 2278: range 0000000015FAC67C-0000000015FAC8B7
void __cdecl DungeonScene::notifyReviseLevel(DungeonScene *const this, const std::set<unsigned int> *uid_set)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  uint32_t DungeonReviseLevel; // eax
  ScenePtr p_scene_ptr; // [rsp+10h] [rbp-90h] BYREF
  char v7[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 11 notify:2279";
  *(_QWORD *)(v2 + 16) = DungeonScene::notifyReviseLevel;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  proto::DungeonReviseLevelNotify::DungeonReviseLevelNotify((proto::DungeonReviseLevelNotify *const)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->dungeon_id_);
  }
  proto::DungeonReviseLevelNotify::set_dungeon_id((proto::DungeonReviseLevelNotify *const)(v2 + 32), this->dungeon_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->revise_level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->revise_level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->revise_level_);
  }
  proto::DungeonReviseLevelNotify::set_revise_level(
    (proto::DungeonReviseLevelNotify *const)(v2 + 32),
    this->revise_level_);
  toThisPtr<Scene>((Scene *)&p_scene_ptr);
  DungeonReviseLevel = AbilityComp::getDungeonReviseLevel(&p_scene_ptr);
  proto::DungeonReviseLevelNotify::set_scene_level(
    (proto::DungeonReviseLevelNotify *const)(v2 + 32),
    DungeonReviseLevel);
  std::shared_ptr<Scene>::~shared_ptr(&p_scene_ptr);
  Scene::notifyToSpecificPlayer<proto::DungeonReviseLevelNotify>(
    (Scene *const)this,
    (proto::DungeonReviseLevelNotify *)(v2 + 32),
    uid_set);
  proto::DungeonReviseLevelNotify::~DungeonReviseLevelNotify((proto::DungeonReviseLevelNotify *const)(v2 + 32));
  if ( v7 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
};
