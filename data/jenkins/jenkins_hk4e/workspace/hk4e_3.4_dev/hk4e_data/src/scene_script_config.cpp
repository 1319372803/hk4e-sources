// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/scene_script_config.cpp

// Line 21: range 000000000CD0C622-000000000CD0C9DF
void __cdecl SceneScriptConfig::SceneScriptConfig(SceneScriptConfig *const this, HK4EDesignConfig *design_config)
{
  __int64 v2; // rsi

  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->oneoff_gather_point_type_count_map_);
  std::map<std::pair<unsigned int,unsigned int>,unsigned int>::map(&this->oneoff_gather_group_config_to_point_type_map_);
  std::unordered_map<unsigned int,std::set<std::pair<unsigned int,unsigned int>>>::unordered_map(&this->oneoff_gather_point_type_to_group_config_set_map_);
  Vector2::Vector2(&this->begin_pos, 0.0, 0.0);
  Vector2::Vector2(&this->size, 0.0, 0.0);
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->scene_id, design_config);
  }
  this->scene_id = 0;
  Vector2::Vector2(&this->grid_anchor_pos, 0.0, 0.0);
  Vector2::Vector2(&this->grid_map_begin_pos, 0.0, 0.0);
  Vector2::Vector2(&this->grid_map_size, 0.0, 0.0);
  Vector3::Vector3(&this->born_pos, 0.0, 0.0, 0.0);
  Vector3::Vector3(&this->born_rot, 0.0, 0.0, 0.0);
  v2 = (((_BYTE)this - 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->die_y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->die_y >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->die_y, v2);
  }
  this->die_y = -100.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->city_id, v2);
  }
  this->city_id = 0;
  std::vector<DummyPointScriptConfig>::vector(&this->born_point_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->config >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->config, v2);
  this->config = design_config;
  if ( *(_BYTE *)(((unsigned __int64)&this->next_pool_monster_config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->next_pool_monster_config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->next_pool_monster_config_id, v2);
  }
  this->next_pool_monster_config_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->room_show_scene_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->room_show_scene_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->room_show_scene_id, (((_BYTE)this + 20) & 7u) + 3);
  }
  this->room_show_scene_id = 0;
  Vector3::Vector3(&this->room_show_pos, 0.0, 0.0, 0.0);
  Vector3::Vector3(&this->room_show_rot, 0.0, 0.0, 0.0);
  std::unordered_map<std::string,DummyPointScriptConfig>::unordered_map(&this->dummy_point_config_map);
  std::unordered_map<unsigned int,DummyPointScriptConfig>::unordered_map(&this->new_dummy_point_config_map);
  std::unordered_map<unsigned int,BlockScriptConfig>::unordered_map(&this->block_config_map);
  std::unordered_map<unsigned int,GroupInfoScriptConfig>::unordered_map(&this->group_info_map);
  std::unordered_map<unsigned int,GroupScriptConfig>::unordered_map(&this->group_config_map);
  std::shared_ptr<LuaScript>::shared_ptr(&this->script_ptr);
  std::vector<std::shared_ptr<Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig>>>>::vector(&this->static_group_load_mesh_vec);
  std::unordered_map<unsigned int,std::vector<unsigned int>>::unordered_map(&this->activity_group_vec_map);
  std::unordered_map<unsigned int,std::map<unsigned int,MonsterScriptConfig>>::unordered_map(&this->monster_pool_map);
  std::vector<unsigned int>::vector(&this->sort_dynamic_group_vec);
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::unordered_map(&this->region_vision_type_exclude_set_map);
  std::unordered_map<data::EventType,unsigned int>::unordered_map(&this->dungeon_broadcast_evt_group_count_map);
};

// Line 28: range 000000000CD0C9E0-000000000CD0E6D3
int32_t __cdecl SceneScriptConfig::checkScene(const SceneScriptConfig *const this)
{
  int32_t v1; // r14d
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  void *p_born_pos; // rsi
  common::milog::MiLogStream *v6; // rax
  Vector3 *v7; // rsi
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  __int64 v11; // rsi
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  SceneExcelConfigMgr *p_scene_config_mgr; // rcx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  DungeonExcelConfigMgr *p_dungeon_config_mgr; // rcx
  uint32_t *scene_id; // rsi
  unsigned int *v19; // rax
  int *v20; // rdx
  int v21; // ecx
  char v22; // al
  char v23; // al
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  int v26; // eax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  char *v31; // rsi
  unsigned int first; // ecx
  char v33; // al
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  const unsigned int *area_id; // rsi
  char v45; // al
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // rax
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // rdx
  common::milog::MiLogStream *v65; // rax
  common::milog::MiLogStream *v67; // [rsp+0h] [rbp-500h]
  common::milog::MiLogStream *v68; // [rsp+0h] [rbp-500h]
  int32_t ret; // [rsp+14h] [rbp-4ECh]
  std::vector<DummyPointScriptConfig> *__for_range; // [rsp+18h] [rbp-4E8h]
  const data::SceneExcelConfig *scene_config; // [rsp+20h] [rbp-4E0h]
  const std::set<unsigned int> *set_ptr; // [rsp+28h] [rbp-4D8h]
  data::DungeonExcelConfig *dungeon_config_ptr; // [rsp+38h] [rbp-4C8h]
  std::unordered_map<unsigned int,GroupInfoScriptConfig> *__for_range_1; // [rsp+40h] [rbp-4C0h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,GroupInfoScriptConfig>,false,false>::reference p; // [rsp+48h] [rbp-4B8h]
  const GroupScriptConfig *group_script_config_ptr; // [rsp+58h] [rbp-4A8h]
  const std::unordered_map<unsigned int,MonsterPoolScriptConfig> *__for_range_2; // [rsp+68h] [rbp-498h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,MonsterPoolScriptConfig>,false,false>::reference v78; // [rsp+70h] [rbp-490h]
  std::tuple_element<0,std::pair<unsigned int const,MonsterPoolScriptConfig> >::type *pool_id; // [rsp+78h] [rbp-488h]
  const DummyPointScriptConfig *config; // [rsp+88h] [rbp-478h]
  char v81[1136]; // [rsp+90h] [rbp-470h] BYREF

  v2 = (unsigned __int64)v81;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1088LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "22 32 4 13 dungeon_id:58 48 4 11 group_id:81 64 8 14 __for_begin:35 96 8 12 __for_end:35 128 8 1"
                        "4 __for_begin:58 160 8 12 __for_end:58 192 8 14 __for_begin:79 224 8 12 __for_end:79 256 8 15 __"
                        "for_begin:113 288 8 13 __for_end:113 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 51"
                        "2 32 9 <unknown> 576 32 9 <unknown> 640 32 9 <unknown> 704 32 9 <unknown> 768 32 9 <unknown> 832"
                        " 32 9 <unknown> 896 32 9 <unknown> 960 32 9 <unknown> 1024 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = SceneScriptConfig::checkScene;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -218959360;
  v4[536862727] = -218959360;
  v4[536862728] = -218959360;
  v4[536862729] = -218959360;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862737] = -218959118;
  v4[536862739] = -218959118;
  v4[536862741] = -218959118;
  v4[536862743] = -218959118;
  v4[536862745] = -218959118;
  v4[536862747] = -218959118;
  v4[536862749] = -218959118;
  v4[536862751] = -218959118;
  v4[536862753] = -202116109;
  ret = 0;
  p_born_pos = &this->born_pos;
  if ( !SceneScriptConfig::isPosValid(this, &this->born_pos) )
  {
    if ( *(char *)(((v2 + 320) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 320, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 320),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene_script_config.cpp",
      "checkScene",
      32);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 320),
           (const char (*)[16])"[CONFIG_ERROR] ");
    v67 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v6, (const char (*)[10])byte_1A180F80);
    v7 = &this->born_pos;
    if ( *(char *)(((v2 + 384) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) )
    {
      v7 = (Vector3 *)32;
      __asan_report_store_n(v2 + 384, 32LL);
    }
    Vector3::toString[abi:cxx11]((std::string *)(v2 + 384), v7);
    v8 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v67, (const std::string *)(v2 + 384));
    v9 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v8, (const char (*)[36])byte_1A180FC0);
    p_born_pos = &this->scene_id;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->scene_id);
    std::string::~string((void *)(v2 + 384));
    *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
    *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
    ret = -1;
  }
  __for_range = &this->born_point_vec;
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, p_born_pos);
  *(std::vector<DummyPointScriptConfig>::const_iterator *)(v2 + 64) = std::vector<DummyPointScriptConfig>::begin(__for_range);
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, p_born_pos);
  *(std::vector<DummyPointScriptConfig>::const_iterator *)(v2 + 96) = std::vector<DummyPointScriptConfig>::end(__for_range);
  while ( __gnu_cxx::operator!=<DummyPointScriptConfig const*,std::vector<DummyPointScriptConfig>>(
            (const __gnu_cxx::__normal_iterator<const DummyPointScriptConfig*,std::vector<DummyPointScriptConfig> > *)(v2 + 64),
            (const __gnu_cxx::__normal_iterator<const DummyPointScriptConfig*,std::vector<DummyPointScriptConfig> > *)(v2 + 96)) )
  {
    config = __gnu_cxx::__normal_iterator<DummyPointScriptConfig const*,std::vector<DummyPointScriptConfig>>::operator*((const __gnu_cxx::__normal_iterator<const DummyPointScriptConfig*,std::vector<DummyPointScriptConfig> > *const)(v2 + 64));
    if ( !SceneScriptConfig::isPosValid(this, &config->pos) )
    {
      *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 448) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 448, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 448),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene_script_config.cpp",
        "checkScene",
        39);
      v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 448),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v68 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v10, (const char (*)[10])byte_1A180F80);
      *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
      v11 = (__int64)config;
      if ( *(char *)(((v2 + 512) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) )
      {
        v11 = 32LL;
        __asan_report_store_n(v2 + 512, 32LL);
      }
      Vector3::toString[abi:cxx11]((std::string *)(v2 + 512), (const Vector3 *const)v11);
      v12 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v68, (const std::string *)(v2 + 512));
      v13 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v12, (const char (*)[36])byte_1A180FC0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &this->scene_id);
      std::string::~string((void *)(v2 + 512));
      *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
      *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    __gnu_cxx::__normal_iterator<DummyPointScriptConfig const*,std::vector<DummyPointScriptConfig>>::operator++((__gnu_cxx::__normal_iterator<const DummyPointScriptConfig*,std::vector<DummyPointScriptConfig> > *const)(v2 + 64));
  }
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)(((unsigned __int64)&this->config >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->config);
  p_scene_config_mgr = &this->config->txt_config_mgr.scene_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->scene_id);
  }
  scene_config = data::SceneExcelConfigMgrBase::findSceneExcelConfig(p_scene_config_mgr, this->scene_id);
  if ( scene_config )
  {
    if ( *(_BYTE *)(((unsigned __int64)&scene_config->type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)scene_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&scene_config->type >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&scene_config->type);
    }
    if ( scene_config->type == SCENE_ROOM )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->room_show_scene_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->room_show_scene_id >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(&this->room_show_scene_id);
      }
      if ( !this->room_show_scene_id )
      {
        *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 576) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 607) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 607) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 576, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 576),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/scene_script_config.cpp",
          "checkScene",
          49);
        v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 576),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v16 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(v15, (const char (*)[55])byte_1A181020);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &this->scene_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 576));
        *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->config >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->config);
  p_dungeon_config_mgr = &this->config->txt_config_mgr.dungeon_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->scene_id);
  }
  scene_id = (uint32_t *)this->scene_id;
  set_ptr = DungeonExcelConfigMgr::findDungeonSetBySceneId(p_dungeon_config_mgr, (uint32_t)scene_id);
  if ( !set_ptr )
    goto LABEL_74;
  *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 128, scene_id);
  *(std::set<unsigned int>::iterator *)(v2 + 128) = std::set<unsigned int>::begin(set_ptr);
  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 160, scene_id);
  *(std::set<unsigned int>::iterator *)(v2 + 160) = std::set<unsigned int>::end(set_ptr);
  while ( 1 )
  {
    scene_id = (uint32_t *)(v2 + 160);
    if ( !std::operator!=(
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v2 + 128),
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v2 + 160)) )
    {
      v26 = 1;
      goto LABEL_73;
    }
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 4;
    v19 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)(v2 + 128));
    v20 = (int *)v19;
    if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v19);
    }
    v21 = *v20;
    v22 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
    if ( v22 != 0 && v22 <= 3 )
    {
      LOBYTE(scene_id) = v22 != 0;
      __asan_report_store4(v2 + 32, scene_id);
    }
    *(_DWORD *)(v2 + 32) = v21;
    if ( *(_BYTE *)(((unsigned __int64)&this->config >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->config);
    dungeon_config_ptr = data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(
                           &this->config->txt_config_mgr.dungeon_config_mgr,
                           *(_DWORD *)(v2 + 32));
    if ( !dungeon_config_ptr )
      break;
    if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->involve_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->involve_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&dungeon_config_ptr->involve_type);
    }
    if ( dungeon_config_ptr->involve_type == INVOLVE_ONLY_SINGLE )
      goto LABEL_63;
    if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->state_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)dungeon_config_ptr - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->state_type >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4(&dungeon_config_ptr->state_type);
    }
    if ( dungeon_config_ptr->state_type != DUNGEON_STATE_RELEASE
      || std::vector<DummyPointScriptConfig>::size(&this->born_point_vec) > 3 )
    {
LABEL_63:
      v23 = 0;
    }
    else
    {
      v23 = 1;
    }
    if ( v23 )
    {
      *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 640) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 671) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 671) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 640, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 640),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene_script_config.cpp",
        "checkScene",
        68);
      v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 640),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v25 = common::milog::MiLogStream::operator<<<char [71],(char *[71])0>(v24, (const char (*)[71])byte_1A181080);
      scene_id = &this->scene_id;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &this->scene_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 640));
      *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = -117901064;
      v1 = -1;
      v26 = 0;
      goto LABEL_73;
    }
    std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)(v2 + 128));
  }
  *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v2 + 704) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 735) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 735) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 704, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v2 + 704),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/scene_script_config.cpp",
    "checkScene",
    74);
  v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v2 + 704),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v28 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(v27, (const char (*)[48])byte_1A181100);
  v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, (const unsigned int *)(v2 + 32));
  v30 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v29, (const char (*)[15])byte_1A181160);
  scene_id = &this->scene_id;
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, &this->scene_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 704));
  *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = -117901064;
  v1 = -1;
  v26 = 0;
LABEL_73:
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
  if ( v26 == 1 )
  {
LABEL_74:
    __for_range_1 = &this->group_info_map;
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 192, scene_id);
    *(std::unordered_map<unsigned int,GroupInfoScriptConfig>::const_iterator *)(v2 + 192) = std::unordered_map<unsigned int,GroupInfoScriptConfig>::begin(__for_range_1);
    *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 224, scene_id);
    *(std::unordered_map<unsigned int,GroupInfoScriptConfig>::const_iterator *)(v2 + 224) = std::unordered_map<unsigned int,GroupInfoScriptConfig>::end(__for_range_1);
    while ( 1 )
    {
      v31 = (char *)(v2 + 224);
      if ( !std::__detail::operator!=<std::pair<unsigned int const,GroupInfoScriptConfig>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GroupInfoScriptConfig>,false> *)(v2 + 192),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GroupInfoScriptConfig>,false> *)(v2 + 224)) )
        break;
      p = std::__detail::_Node_const_iterator<std::pair<unsigned int const,GroupInfoScriptConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,GroupInfoScriptConfig>,false,false> *const)(v2 + 192));
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(p);
      }
      first = p->first;
      v33 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
      if ( v33 != 0 && v33 <= 3 )
      {
        LOBYTE(v31) = v33 != 0;
        __asan_report_store4(v2 + 48, v31);
      }
      *(_DWORD *)(v2 + 48) = first;
      group_script_config_ptr = SceneScriptConfig::findGroupScriptConfig(this, *(_DWORD *)(v2 + 48));
      if ( group_script_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->config >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->config);
        if ( GroupScriptConfig::checkGroup(group_script_config_ptr, this->config, this, &p->second) )
        {
          *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 832) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 863) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 863) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 832, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 832),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/scene_script_config.cpp",
            "checkScene",
            91);
          v38 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 832),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v39 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v38, (const char (*)[29])byte_1A1811E0);
          v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v39,
                  (const unsigned int *)(v2 + 48));
          v41 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v40, (const char (*)[11])" block_id:");
          v42 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v41,
                  &group_script_config_ptr->block_id);
          v43 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v42, (const char (*)[12])", scene_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v43, &this->scene_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 832));
          *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
      }
      else
      {
        *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 768) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 799) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 799) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 768, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 768),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/scene_script_config.cpp",
          "checkScene",
          86);
        v34 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 768),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v35 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v34, (const char (*)[26])byte_1A1811A0);
        v36 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v35,
                (const unsigned int *)(v2 + 48));
        v37 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v36, (const char (*)[12])", scene_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, &this->scene_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 768));
        *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      area_id = (const unsigned int *)((((_BYTE)p + 28) & 7u) + 3);
      if ( *(_BYTE *)(((unsigned __int64)&p->second.area_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)p + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p->second.area_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&p->second.area_id);
      }
      if ( !p->second.area_id )
        goto LABEL_101;
      if ( *(_BYTE *)(((unsigned __int64)&this->config >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->config);
      area_id = (const unsigned int *)p->second.area_id;
      if ( WorldAreaExcelConfigMgr::findFirstLevelWorldAreaConfig(
             &this->config->txt_config_mgr.world_area_config_mgr,
             (uint32_t)area_id) )
      {
LABEL_101:
        v45 = 0;
      }
      else
      {
        v45 = 1;
      }
      if ( v45 )
      {
        *(_DWORD *)(((v2 + 896) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 896) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 927) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 927) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 896, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 896),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/scene_script_config.cpp",
          "checkScene",
          98);
        v46 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 896),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v47 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v46, (const char (*)[11])"scene_id: ");
        v48 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v47, &this->scene_id);
        v49 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v48, (const char (*)[12])" group_id: ");
        v50 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v49,
                (const unsigned int *)(v2 + 48));
        v51 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v50, (const char (*)[25])byte_1A181260);
        v52 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v51, &p->second.area_id);
        area_id = (const unsigned int *)byte_1A1812A0;
        common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v52, (const char (*)[10])byte_1A1812A0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 896));
        *(_DWORD *)(((v2 + 896) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v2 + 48);
      if ( *(_DWORD *)(v2 + 48) <= 0x2710u )
      {
        *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 960) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 991) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 991) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 960, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 960),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/scene_script_config.cpp",
          "checkScene",
          105);
        v53 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 960),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v54 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v53, (const char (*)[11])"scene_id: ");
        v55 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v54, &this->scene_id);
        v56 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v55, (const char (*)[12])" group_id: ");
        v57 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v56,
                (const unsigned int *)(v2 + 48));
        v58 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v57, (const char (*)[5])" <= ");
        area_id = &SceneScriptConfig::max_pattern_group_id;
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
          v58,
          &SceneScriptConfig::max_pattern_group_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 960));
        *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      if ( group_script_config_ptr )
      {
        __for_range_2 = &group_script_config_ptr->monster_pool_map;
        *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 256, area_id);
        *(std::unordered_map<unsigned int,MonsterPoolScriptConfig>::const_iterator *)(v2 + 256) = std::unordered_map<unsigned int,MonsterPoolScriptConfig>::begin(__for_range_2);
        *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 288, area_id);
        *(std::unordered_map<unsigned int,MonsterPoolScriptConfig>::const_iterator *)(v2 + 288) = std::unordered_map<unsigned int,MonsterPoolScriptConfig>::end(__for_range_2);
        while ( std::__detail::operator!=<std::pair<unsigned int const,MonsterPoolScriptConfig>,false>(
                  (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,MonsterPoolScriptConfig>,false> *)(v2 + 256),
                  (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,MonsterPoolScriptConfig>,false> *)(v2 + 288)) )
        {
          v78 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,MonsterPoolScriptConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,MonsterPoolScriptConfig>,false,false> *const)(v2 + 256));
          pool_id = std::get<0ul,unsigned int const,MonsterPoolScriptConfig>(v78);
          std::get<1ul,unsigned int const,MonsterPoolScriptConfig>(v78);
          if ( !std::unordered_map<unsigned int,std::map<unsigned int,MonsterScriptConfig>>::count(
                  &this->monster_pool_map,
                  pool_id) )
          {
            *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 1024) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 1055) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 1055) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 1024, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 1024),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/scene_script_config.cpp",
              "checkScene",
              117);
            v59 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 1024),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v60 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v59, (const char (*)[11])"scene_id: ");
            v61 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v60, &this->scene_id);
            v62 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v61,
                    (const char (*)[12])" group_id: ");
            v63 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v62,
                    (const unsigned int *)(v2 + 48));
            v64 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                    v63,
                    (const char (*)[19])" monster_pool_id: ");
            v65 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v64, pool_id);
            common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v65, (const char (*)[24])byte_1A181360);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1024));
            *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
          std::__detail::_Node_const_iterator<std::pair<unsigned int const,MonsterPoolScriptConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,MonsterPoolScriptConfig>,false,false> *const)(v2 + 256));
        }
        *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
      }
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      std::__detail::_Node_const_iterator<std::pair<unsigned int const,GroupInfoScriptConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,GroupInfoScriptConfig>,false,false> *const)(v2 + 192));
    }
    v1 = ret;
  }
  if ( v81 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8080) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 136) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1088LL, v81);
  }
  return v1;
};

// Line 128: range 000000000CD0E6D4-000000000CD0F7D6
int32_t __cdecl SceneScriptConfig::rewriteScene(SceneScriptConfig *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  const GroupInfoScriptConfig *GroupInfoConfig; // rdi
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  const char *p_life_cycle_vec; // rsi
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  std::vector<unsigned int>::size_type v21; // rax
  unsigned int *M_current; // r14
  std::vector<unsigned int>::iterator v23; // rax
  SceneExcelConfigMgr *p_scene_config_mgr; // rcx
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+10h] [rbp-2E0h]
  data::SceneType scene_type; // [rsp+14h] [rbp-2DCh]
  std::unordered_map<unsigned int,GroupScriptConfig> *__for_range; // [rsp+18h] [rbp-2D8h]
  std::unordered_map<unsigned int,GroupInfoScriptConfig> *__for_range_0; // [rsp+20h] [rbp-2D0h]
  std::unordered_map<unsigned int,GroupScriptConfig> *__for_range_1; // [rsp+28h] [rbp-2C8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,GroupScriptConfig>,false,false>::reference v35; // [rsp+30h] [rbp-2C0h]
  uint32_t *group_id_1; // [rsp+38h] [rbp-2B8h]
  std::tuple_element<1,std::pair<unsigned int const,GroupScriptConfig> >::type *group_script_config_0; // [rsp+40h] [rbp-2B0h]
  const GroupInfoScriptConfig *group_info_config_ptr; // [rsp+48h] [rbp-2A8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,GroupInfoScriptConfig>,false,false>::reference v39; // [rsp+50h] [rbp-2A0h]
  const unsigned int *group_id_0; // [rsp+58h] [rbp-298h]
  std::tuple_element<1,std::pair<unsigned int const,GroupInfoScriptConfig> >::type *group_info_config; // [rsp+60h] [rbp-290h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,GroupScriptConfig>,false,false>::reference __in; // [rsp+68h] [rbp-288h]
  uint32_t *group_id; // [rsp+70h] [rbp-280h]
  GroupScriptConfig *group_script_config; // [rsp+78h] [rbp-278h]
  char v45[624]; // [rsp+80h] [rbp-270h] BYREF

  v2 = (unsigned __int64)v45;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "12 32 8 15 __for_begin:130 64 8 13 __for_end:130 96 8 15 __for_begin:139 128 8 13 __for_end:139 "
                        "160 8 9 <unknown> 192 8 15 __for_begin:174 224 8 13 __for_end:174 256 32 9 <unknown> 320 32 9 <u"
                        "nknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = SceneScriptConfig::rewriteScene;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -218959360;
  v4[536862727] = -218959360;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862737] = -202116109;
  ret = 0;
  __for_range = &this->group_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<unsigned int,GroupScriptConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,GroupScriptConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<unsigned int,GroupScriptConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,GroupScriptConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 64);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,GroupScriptConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GroupScriptConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GroupScriptConfig>,false> *)(v2 + 64)) )
      break;
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,GroupScriptConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,GroupScriptConfig>,false,false> *const)(v2 + 32));
    group_id = std::get<0ul,unsigned int const,GroupScriptConfig>(__in);
    group_script_config = std::get<1ul,unsigned int const,GroupScriptConfig>(__in);
    if ( *(_BYTE *)(((unsigned __int64)group_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)group_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)group_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(group_id);
    }
    GroupInfoConfig = SceneScriptConfig::findGroupInfoConfig(this, *group_id);
    if ( *(_BYTE *)(((unsigned __int64)&this->config >> 3) + 0x7FFF8000) )
    {
      GroupInfoConfig = (const GroupInfoScriptConfig *)&this->config;
      __asan_report_load8(&this->config);
    }
    if ( GroupScriptConfig::rewriteGroup(group_script_config, this->config, GroupInfoConfig, this) )
    {
      *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 256) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 256, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 256),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene_script_config.cpp",
        "rewriteScene",
        134);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 256),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v7, (const char (*)[29])byte_1A181500);
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, group_id);
      v10 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v9, (const char (*)[12])", scene_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->scene_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,GroupScriptConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,GroupScriptConfig>,false,false> *const)(v2 + 32));
  }
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  __for_range_0 = &this->group_info_map;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v5);
  *(std::unordered_map<unsigned int,GroupInfoScriptConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,GroupInfoScriptConfig>::begin(__for_range_0);
  *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 128, v5);
  *(std::unordered_map<unsigned int,GroupInfoScriptConfig>::iterator *)(v2 + 128) = std::unordered_map<unsigned int,GroupInfoScriptConfig>::end(__for_range_0);
  while ( 1 )
  {
    p_life_cycle_vec = (const char *)(v2 + 128);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,GroupInfoScriptConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GroupInfoScriptConfig>,false> *)(v2 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GroupInfoScriptConfig>,false> *)(v2 + 128)) )
      break;
    v39 = std::__detail::_Node_iterator<std::pair<unsigned int const,GroupInfoScriptConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,GroupInfoScriptConfig>,false,false> *const)(v2 + 96));
    group_id_0 = std::get<0ul,unsigned int const,GroupInfoScriptConfig>(v39);
    group_info_config = std::get<1ul,unsigned int const,GroupInfoScriptConfig>(v39);
    if ( std::vector<GroupLifeConfig>::size(&group_info_config->life_cycle_vec) )
    {
      p_life_cycle_vec = (const char *)&group_info_config->life_cycle_vec;
      if ( SceneScriptConfig::mergeGroupLifeCycle(this, &group_info_config->life_cycle_vec) )
      {
        *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 320) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 320, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 320),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/scene_script_config.cpp",
          "rewriteScene",
          144);
        v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 320),
                (const char (*)[16])"[CONFIG_ERROR] ");
        p_life_cycle_vec = "mergeGroupLifeCycle failed";
        common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
          v13,
          (const char (*)[27])"mergeGroupLifeCycle failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
        *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    if ( *(char *)(((unsigned __int64)&group_info_config->is_dynamic_load >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&group_info_config->is_dynamic_load, p_life_cycle_vec, &group_info_config->is_dynamic_load);
    if ( group_info_config->is_dynamic_load && !std::vector<GroupLifeConfig>::empty(&group_info_config->life_cycle_vec) )
    {
      *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 384) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 384, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 384),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene_script_config.cpp",
        "rewriteScene",
        149);
      v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 384),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v16 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v15, (const char (*)[11])"group_id: ");
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, group_id_0);
      p_life_cycle_vec = " is dynamic load, not life_cycle not empty!";
      common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
        v17,
        (const char (*)[44])" is dynamic load, not life_cycle not empty!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
      *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    if ( *(char *)(((unsigned __int64)&group_info_config->is_dynamic_load >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&group_info_config->is_dynamic_load, p_life_cycle_vec, &group_info_config->is_dynamic_load);
    if ( group_info_config->is_dynamic_load )
      std::vector<unsigned int>::push_back(&this->sort_dynamic_group_vec, group_id_0);
    std::__detail::_Node_iterator<std::pair<unsigned int const,GroupInfoScriptConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,GroupInfoScriptConfig>,false,false> *const)(v2 + 96));
  }
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
  if ( std::vector<unsigned int>::size(&this->sort_dynamic_group_vec) )
  {
    *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 448) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 448, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 448),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene_script_config.cpp",
      "rewriteScene",
      159);
    v18 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
            (common::milog::MiLogStream *const)(v2 + 448),
            (const char (*)[10])"scene_id:");
    v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &this->scene_id);
    v20 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
            v19,
            (const char (*)[30])" sort_dynamic_group_vec size:");
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    v21 = std::vector<unsigned int>::size(&this->sort_dynamic_group_vec);
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      v21 = __asan_report_store8(v2 + 160, " sort_dynamic_group_vec size:");
    *(_QWORD *)(v2 + 160) = v21;
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v20, (const unsigned __int64 *)(v2 + 160));
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
    *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
    M_current = std::vector<unsigned int>::end(&this->sort_dynamic_group_vec)._M_current;
    v23._M_current = std::vector<unsigned int>::begin(&this->sort_dynamic_group_vec)._M_current;
    std::sort<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>>(
      v23,
      (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current);
    if ( *(_BYTE *)(((unsigned __int64)&this->config >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->config);
    p_scene_config_mgr = &this->config->txt_config_mgr.scene_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->scene_id);
    }
    p_life_cycle_vec = (const char *)this->scene_id;
    scene_type = SceneExcelConfigMgr::getSceneTypeBySceneId(p_scene_config_mgr, (uint32_t)p_life_cycle_vec);
    if ( !SceneExcelConfigMgr::isPlayerScene(scene_type) )
    {
      ret = -1;
      *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 512) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 512, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 512),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene_script_config.cpp",
        "rewriteScene",
        167);
      v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 512),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v26 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v25, (const char (*)[10])"scene_id:");
      v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &this->scene_id);
      p_life_cycle_vec = byte_1A181620;
      common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v27, (const char (*)[24])byte_1A181620);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
      *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->config >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->config);
  if ( HK4EDesignConfig::isCreateStaticMesh(this->config) )
  {
    __for_range_1 = &this->group_config_map;
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 192, p_life_cycle_vec);
    *(std::unordered_map<unsigned int,GroupScriptConfig>::iterator *)(v2 + 192) = std::unordered_map<unsigned int,GroupScriptConfig>::begin(__for_range_1);
    *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 224, p_life_cycle_vec);
    *(std::unordered_map<unsigned int,GroupScriptConfig>::iterator *)(v2 + 224) = std::unordered_map<unsigned int,GroupScriptConfig>::end(__for_range_1);
    while ( std::__detail::operator!=<std::pair<unsigned int const,GroupScriptConfig>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GroupScriptConfig>,false> *)(v2 + 192),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GroupScriptConfig>,false> *)(v2 + 224)) )
    {
      v35 = std::__detail::_Node_iterator<std::pair<unsigned int const,GroupScriptConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,GroupScriptConfig>,false,false> *const)(v2 + 192));
      group_id_1 = std::get<0ul,unsigned int const,GroupScriptConfig>(v35);
      group_script_config_0 = std::get<1ul,unsigned int const,GroupScriptConfig>(v35);
      if ( *(_BYTE *)(((unsigned __int64)group_id_1 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)group_id_1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)group_id_1 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(group_id_1);
      }
      group_info_config_ptr = SceneScriptConfig::findGroupInfoConfig(this, *group_id_1);
      if ( group_info_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->config >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->config);
        SceneScriptConfig::calGroupLoadGrid(this, this->config, group_info_config_ptr, group_script_config_0);
        if ( *(_BYTE *)(((unsigned __int64)&this->config >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->config);
        SceneScriptConfig::calOneoffGatherPointTypeGrid(
          this,
          this->config,
          group_info_config_ptr,
          group_script_config_0);
      }
      std::__detail::_Node_iterator<std::pair<unsigned int const,GroupScriptConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,GroupScriptConfig>,false,false> *const)(v2 + 192));
    }
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
  }
  if ( SceneScriptConfig::checkGadget(this) )
    ret = -1;
  result = ret;
  if ( v45 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
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
  }
  return result;
};

// Line 195: range 000000000CD0F7D8-000000000CD113B2
int32_t __cdecl SceneScriptConfig::checkGadget(SceneScriptConfig *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  uint32_t *p_point_type; // rax
  float *v7; // rax
  int *v8; // rdx
  char v9; // cl
  Vector3 *p_pos; // rsi
  int v11; // xmm0_4
  float *v12; // rax
  int *v13; // rdx
  char v14; // cl
  float *p_z; // rsi
  int v16; // xmm0_4
  float *v17; // rax
  int *v18; // rdx
  char v19; // cl
  Vector3 *v20; // rsi
  int v21; // xmm0_4
  float *v22; // rax
  int *v23; // rdx
  char v24; // cl
  float *v25; // rsi
  int v26; // xmm0_4
  GadgetExcelConfigMgr *p_gadget_config_mgr; // rcx
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rdx
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rdx
  TxtConfigMgr *p_txt_config_mgr; // rsi
  double v35; // xmm0_8
  double v36; // xmm0_8
  common::milog::MiLogStream *v37; // rdx
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // r14
  std::unordered_map<unsigned int,MonsterScriptConfig>::size_type v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // r14
  std::vector<SuiteScriptConfig>::size_type v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rdx
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // rax
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // r14
  std::unordered_map<unsigned int,MonsterScriptConfig>::size_type v64; // rax
  common::milog::MiLogStream *v65; // rax
  common::milog::MiLogStream *v66; // r14
  std::vector<SuiteScriptConfig>::size_type v67; // rax
  common::milog::MiLogStream *v68; // rax
  common::milog::MiLogStream *v69; // rax
  common::milog::MiLogStream *v70; // rax
  common::milog::MiLogStream *v71; // rax
  common::milog::MiLogStream *v72; // rax
  common::milog::MiLogStream *v73; // rax
  common::milog::MiLogStream *v74; // rax
  common::milog::MiLogStream *v75; // rax
  common::milog::MiLogStream *v76; // rax
  common::milog::MiLogStream *v77; // rax
  common::milog::MiLogStream *v78; // rax
  common::milog::MiLogStream *v79; // rax
  common::milog::MiLogStream *v80; // rdx
  common::milog::MiLogStream *v81; // rax
  common::milog::MiLogStream *v82; // rax
  common::milog::MiLogStream *v83; // rax
  common::milog::MiLogStream *v84; // r14
  std::unordered_map<unsigned int,MonsterScriptConfig>::size_type v85; // rax
  common::milog::MiLogStream *v86; // rax
  common::milog::MiLogStream *v87; // r14
  std::vector<SuiteScriptConfig>::size_type v88; // rax
  common::milog::MiLogStream *v89; // rax
  common::milog::MiLogStream *v90; // rax
  common::milog::MiLogStream *v91; // rax
  common::milog::MiLogStream *v92; // rax
  common::milog::MiLogStream *v93; // rax
  common::milog::MiLogStream *v94; // rax
  common::milog::MiLogStream *v95; // rax
  common::milog::MiLogStream *v96; // rdx
  common::milog::MiLogStream *v97; // rax
  common::milog::MiLogStream *v98; // rax
  common::milog::MiLogStream *v99; // rax
  common::milog::MiLogStream *v100; // r14
  std::unordered_map<unsigned int,MonsterScriptConfig>::size_type v101; // rax
  common::milog::MiLogStream *v102; // rax
  common::milog::MiLogStream *v103; // r14
  std::vector<SuiteScriptConfig>::size_type v104; // rax
  common::milog::MiLogStream *v105; // rax
  common::milog::MiLogStream *v106; // rax
  common::milog::MiLogStream *v107; // rax
  common::milog::MiLogStream *v108; // rax
  common::milog::MiLogStream *v109; // rax
  common::milog::MiLogStream *v110; // rax
  bool is_vision_valid; // [rsp+1Fh] [rbp-3C1h]
  int32_t ret; // [rsp+20h] [rbp-3C0h]
  data::VisionLevelType vision_range_level; // [rsp+24h] [rbp-3BCh]
  std::unordered_map<unsigned int,GroupScriptConfig> *__for_range; // [rsp+28h] [rbp-3B8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,GroupScriptConfig>,false,false>::reference __in; // [rsp+30h] [rbp-3B0h]
  const unsigned int *group_id; // [rsp+38h] [rbp-3A8h]
  std::tuple_element<1,std::pair<unsigned int const,GroupScriptConfig> >::type *group_script_config; // [rsp+40h] [rbp-3A0h]
  std::unordered_map<unsigned int,GadgetScriptConfig> *__for_range_0; // [rsp+48h] [rbp-398h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false>::reference v120; // [rsp+50h] [rbp-390h]
  const unsigned int *config_id; // [rsp+58h] [rbp-388h]
  std::tuple_element<1,std::pair<unsigned int const,GadgetScriptConfig> >::type *gadget_config; // [rsp+60h] [rbp-380h]
  char v123[880]; // [rsp+70h] [rbp-370h] BYREF

  v2 = (unsigned __int64)v123;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(832LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "23 32 4 14 gadget_num:200 48 4 9 min_x:201 64 4 9 min_z:202 80 4 9 max_x:203 96 4 9 max_z:204 11"
                        "2 4 17 gadget_vision:205 128 8 15 __for_begin:197 160 8 13 __for_end:197 192 8 15 __for_begin:20"
                        "6 224 8 13 __for_end:206 256 8 9 <unknown> 288 8 9 <unknown> 320 8 9 <unknown> 352 8 9 <unknown>"
                        " 384 8 9 <unknown> 416 8 9 <unknown> 448 8 9 <unknown> 480 8 9 <unknown> 512 32 9 <unknown> 576 "
                        "32 9 <unknown> 640 32 9 <unknown> 704 32 9 <unknown> 768 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = SceneScriptConfig::checkGadget;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -234556924;
  v4[536862723] = -234556924;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -218959360;
  v4[536862727] = -218959360;
  v4[536862728] = -218959360;
  v4[536862729] = -218959360;
  v4[536862730] = -218959360;
  v4[536862731] = -218959360;
  v4[536862732] = -218959360;
  v4[536862733] = -218959360;
  v4[536862734] = -218959360;
  v4[536862735] = -218959360;
  v4[536862737] = -218959118;
  v4[536862739] = -218959118;
  v4[536862741] = -218959118;
  v4[536862743] = -218959118;
  v4[536862745] = -202116109;
  ret = 0;
  __for_range = &this->group_config_map;
  if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 128, v1);
  *(std::unordered_map<unsigned int,GroupScriptConfig>::iterator *)(v2 + 128) = std::unordered_map<unsigned int,GroupScriptConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 160, v1);
  *(std::unordered_map<unsigned int,GroupScriptConfig>::iterator *)(v2 + 160) = std::unordered_map<unsigned int,GroupScriptConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 160);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,GroupScriptConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GroupScriptConfig>,false> *)(v2 + 128),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GroupScriptConfig>,false> *)(v2 + 160)) )
      break;
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,GroupScriptConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,GroupScriptConfig>,false,false> *const)(v2 + 128));
    group_id = std::get<0ul,unsigned int const,GroupScriptConfig>(__in);
    group_script_config = std::get<1ul,unsigned int const,GroupScriptConfig>(__in);
    is_vision_valid = 1;
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v2 + 32, v5);
    *(_DWORD *)(v2 + 32) = 0;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v2 + 48, v5);
    *(_DWORD *)(v2 + 48) = 2139095039;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v2 + 64, v5);
    *(_DWORD *)(v2 + 64) = 2139095039;
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v2 + 80, v5);
    *(_DWORD *)(v2 + 80) = -8388609;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v2 + 96, v5);
    *(_DWORD *)(v2 + 96) = -8388609;
    *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v2 + 112, v5);
    *(_DWORD *)(v2 + 112) = 0;
    __for_range_0 = &group_script_config->gadget_config_map;
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 192, v5);
    *(std::unordered_map<unsigned int,GadgetScriptConfig>::iterator *)(v2 + 192) = std::unordered_map<unsigned int,GadgetScriptConfig>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 224, v5);
    *(std::unordered_map<unsigned int,GadgetScriptConfig>::iterator *)(v2 + 224) = std::unordered_map<unsigned int,GadgetScriptConfig>::end(__for_range_0);
    while ( std::__detail::operator!=<std::pair<unsigned int const,GadgetScriptConfig>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GadgetScriptConfig>,false> *)(v2 + 192),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GadgetScriptConfig>,false> *)(v2 + 224)) )
    {
      v120 = std::__detail::_Node_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false> *const)(v2 + 192));
      config_id = std::get<0ul,unsigned int const,GadgetScriptConfig>(v120);
      gadget_config = std::get<1ul,unsigned int const,GadgetScriptConfig>(v120);
      p_point_type = &gadget_config->point_type;
      if ( *(_BYTE *)(((unsigned __int64)p_point_type >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_point_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_point_type >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4(p_point_type);
      }
      if ( gadget_config->point_type )
      {
        if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v2 + 32);
        ++*(_DWORD *)(v2 + 32);
        p_pos = &gadget_config->pos;
        v7 = (float *)std::min<float>((const float *)(v2 + 48), &gadget_config->pos.x);
        v8 = (int *)v7;
        v9 = *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000);
        LOBYTE(p_pos) = v9 != 0;
        if ( v9 != 0 && (char)(((unsigned __int8)v7 & 7) + 3) >= v9 )
          __asan_report_load4(v7);
        v11 = *v8;
        if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v2 + 48, p_pos);
        *(_DWORD *)(v2 + 48) = v11;
        p_z = &gadget_config->pos.z;
        v12 = (float *)std::min<float>((const float *)(v2 + 64), &gadget_config->pos.z);
        v13 = (int *)v12;
        v14 = *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000);
        LOBYTE(p_z) = v14 != 0;
        if ( v14 != 0 && (char)(((unsigned __int8)v12 & 7) + 3) >= v14 )
          __asan_report_load4(v12);
        v16 = *v13;
        if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v2 + 64, p_z);
        *(_DWORD *)(v2 + 64) = v16;
        v20 = &gadget_config->pos;
        v17 = (float *)std::max<float>((const float *)(v2 + 80), &gadget_config->pos.x);
        v18 = (int *)v17;
        v19 = *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000);
        LOBYTE(v20) = v19 != 0;
        if ( v19 != 0 && (char)(((unsigned __int8)v17 & 7) + 3) >= v19 )
          __asan_report_load4(v17);
        v21 = *v18;
        if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v2 + 80, v20);
        *(_DWORD *)(v2 + 80) = v21;
        v25 = &gadget_config->pos.z;
        v22 = (float *)std::max<float>((const float *)(v2 + 96), &gadget_config->pos.z);
        v23 = (int *)v22;
        v24 = *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000);
        LOBYTE(v25) = v24 != 0;
        if ( v24 != 0 && (char)(((unsigned __int8)v22 & 7) + 3) >= v24 )
          __asan_report_load4(v22);
        v26 = *v23;
        if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v2 + 96, v25);
        *(_DWORD *)(v2 + 96) = v26;
        if ( *(_BYTE *)(((unsigned __int64)&this->config >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->config);
        p_gadget_config_mgr = &this->config->txt_config_mgr.gadget_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&gadget_config->gadget_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)gadget_config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gadget_config->gadget_id >> 3)
                                                                      + 0x7FFF8000) )
        {
          __asan_report_load4(&gadget_config->gadget_id);
        }
        if ( data::GadgetExcelConfigMgrBase::findGadgetExcelConfig(p_gadget_config_mgr, gadget_config->gadget_id) )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->config >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->config);
          p_txt_config_mgr = &this->config->txt_config_mgr;
          vision_range_level = GadgetScriptConfig::getVisionLevel(gadget_config, p_txt_config_mgr);
          if ( vision_range_level == VISION_LEVEL_LITTLE_REMOTE
            || vision_range_level == VISION_LEVEL_REMOTE
            || vision_range_level == VISION_LEVEL_SUPER )
          {
            is_vision_valid = 0;
            if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_store4(v2 + 112, p_txt_config_mgr);
            *(_DWORD *)(v2 + 112) = vision_range_level;
          }
        }
        else
        {
          *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 512) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 512, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 512),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/scene_script_config.cpp",
            "checkGadget",
            219);
          v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 512),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v29 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                  v28,
                  (const char (*)[40])"findGadgetExcelConfig fails. gadget_id:");
          v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, &gadget_config->gadget_id);
          v31 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v30, (const char (*)[12])", group_id:");
          v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, group_id);
          v33 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v32, (const char (*)[13])", config_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, config_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
          *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
      }
      std::__detail::_Node_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false> *const)(v2 + 192));
    }
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
    if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v2 + 32);
    if ( *(_DWORD *)(v2 + 32) > 0x32u )
    {
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v2 + 80);
      LODWORD(v35) = *(_DWORD *)(v2 + 80);
      if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
        v35 = __asan_report_load4(v2 + 48);
      if ( (float)(*(float *)&v35 - *(float *)(v2 + 48)) > 300.0 )
        goto LABEL_79;
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v2 + 96);
      LODWORD(v36) = *(_DWORD *)(v2 + 96);
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
        v36 = __asan_report_load4(v2 + 64);
      if ( (float)(*(float *)&v36 - *(float *)(v2 + 64)) > 300.0 )
      {
LABEL_79:
        if ( *(_BYTE *)(((unsigned __int64)&group_script_config->block_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&group_script_config->block_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&group_script_config->block_id);
        }
        if ( group_script_config->block_id <= 0xC80 )
        {
          *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 640) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 671) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 671) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 640, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 640),
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/scene_script_config.cpp",
            "checkGadget",
            254);
          v59 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 640),
                  (const char (*)[16])" gadget group: ");
          v60 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v59, group_id);
          v61 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v60, (const char (*)[13])" gadget_num:");
          v62 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v61,
                  (const unsigned int *)(v2 + 32));
          v63 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v62, (const char (*)[10])" monster:");
          *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
          v64 = std::unordered_map<unsigned int,MonsterScriptConfig>::size(&group_script_config->monster_config_map);
          if ( *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) )
            v64 = __asan_report_store8(v2 + 320, " monster:");
          *(_QWORD *)(v2 + 320) = v64;
          v65 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                  v63,
                  (const unsigned __int64 *)(v2 + 320));
          v66 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v65, (const char (*)[8])" suite:");
          *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
          v67 = std::vector<SuiteScriptConfig>::size(&group_script_config->suite_config_vec);
          if ( *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) )
            v67 = __asan_report_store8(v2 + 352, " suite:");
          *(_QWORD *)(v2 + 352) = v67;
          v68 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                  v66,
                  (const unsigned __int64 *)(v2 + 352));
          v69 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  v68,
                  (const char (*)[16])" version_level:");
          v70 = common::milog::MiLogStream::operator<<<data::VisionLevelType,(data::VisionLevelType*)0>(
                  v69,
                  &group_script_config->max_vision_range_level);
          v71 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v70, (const char (*)[11])" grid_num:");
          v72 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v71,
                  &group_script_config->grid_num);
          v73 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v72, (const char (*)[8])" min_x:");
          v74 = common::milog::MiLogStream::operator<<<float,(float *)0>(v73, (const float *)(v2 + 48));
          v75 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v74, (const char (*)[8])" min_z:");
          v76 = common::milog::MiLogStream::operator<<<float,(float *)0>(v75, (const float *)(v2 + 64));
          v77 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v76, (const char (*)[8])" max_x:");
          v78 = common::milog::MiLogStream::operator<<<float,(float *)0>(v77, (const float *)(v2 + 80));
          v79 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v78, (const char (*)[8])" max_z:");
          common::milog::MiLogStream::operator<<<float,(float *)0>(v79, (const float *)(v2 + 96));
          *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = -8;
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 640));
          *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = -117901064;
        }
        else
        {
          ret = -1;
          *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 576) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 607) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 607) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 576, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 576),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/scene_script_config.cpp",
            "checkGadget",
            241);
          v37 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 576),
                  (const char (*)[16])" gadget group: ");
          v38 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, group_id);
          v39 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v38, (const char (*)[13])" gadget_num:");
          v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v39,
                  (const unsigned int *)(v2 + 32));
          v41 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v40, (const char (*)[10])" monster:");
          *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
          v42 = std::unordered_map<unsigned int,MonsterScriptConfig>::size(&group_script_config->monster_config_map);
          if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) )
            v42 = __asan_report_store8(v2 + 256, " monster:");
          *(_QWORD *)(v2 + 256) = v42;
          v43 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                  v41,
                  (const unsigned __int64 *)(v2 + 256));
          v44 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v43, (const char (*)[8])" suite:");
          *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
          v45 = std::vector<SuiteScriptConfig>::size(&group_script_config->suite_config_vec);
          if ( *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) )
            v45 = __asan_report_store8(v2 + 288, " suite:");
          *(_QWORD *)(v2 + 288) = v45;
          v46 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                  v44,
                  (const unsigned __int64 *)(v2 + 288));
          v47 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  v46,
                  (const char (*)[16])" version_level:");
          v48 = common::milog::MiLogStream::operator<<<data::VisionLevelType,(data::VisionLevelType*)0>(
                  v47,
                  &group_script_config->max_vision_range_level);
          v49 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v48, (const char (*)[11])" grid_num:");
          v50 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v49,
                  &group_script_config->grid_num);
          v51 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v50, (const char (*)[8])" min_x:");
          v52 = common::milog::MiLogStream::operator<<<float,(float *)0>(v51, (const float *)(v2 + 48));
          v53 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v52, (const char (*)[8])" min_z:");
          v54 = common::milog::MiLogStream::operator<<<float,(float *)0>(v53, (const float *)(v2 + 64));
          v55 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v54, (const char (*)[8])" max_x:");
          v56 = common::milog::MiLogStream::operator<<<float,(float *)0>(v55, (const float *)(v2 + 80));
          v57 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v56, (const char (*)[8])" max_z:");
          v58 = common::milog::MiLogStream::operator<<<float,(float *)0>(v57, (const float *)(v2 + 96));
          common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(v58, (const char (*)[46])byte_1A181B60);
          *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 576));
          *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = -117901064;
        }
      }
      if ( !is_vision_valid )
      {
        if ( *(_BYTE *)(((unsigned __int64)&group_script_config->block_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&group_script_config->block_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&group_script_config->block_id);
        }
        if ( group_script_config->block_id <= 0xC80 )
        {
          *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 768) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 799) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 799) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 768, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 768),
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/scene_script_config.cpp",
            "checkGadget",
            281);
          v96 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 768),
                  (const char (*)[16])" gadget group: ");
          v97 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v96, group_id);
          v98 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v97, (const char (*)[13])" gadget_num:");
          v99 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v98,
                  (const unsigned int *)(v2 + 32));
          v100 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v99, (const char (*)[10])" monster:");
          *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
          v101 = std::unordered_map<unsigned int,MonsterScriptConfig>::size(&group_script_config->monster_config_map);
          if ( *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) )
            v101 = __asan_report_store8(v2 + 448, " monster:");
          *(_QWORD *)(v2 + 448) = v101;
          v102 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                   v100,
                   (const unsigned __int64 *)(v2 + 448));
          v103 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v102, (const char (*)[8])" suite:");
          *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
          v104 = std::vector<SuiteScriptConfig>::size(&group_script_config->suite_config_vec);
          if ( *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) )
            v104 = __asan_report_store8(v2 + 480, " suite:");
          *(_QWORD *)(v2 + 480) = v104;
          v105 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                   v103,
                   (const unsigned __int64 *)(v2 + 480));
          v106 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                   v105,
                   (const char (*)[16])" version_level:");
          v107 = common::milog::MiLogStream::operator<<<data::VisionLevelType,(data::VisionLevelType*)0>(
                   v106,
                   &group_script_config->max_vision_range_level);
          v108 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v107, (const char (*)[11])" grid_num:");
          v109 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                   v108,
                   &group_script_config->grid_num);
          v110 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                   v109,
                   (const char (*)[22])" gadget vision_level:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v110, (const unsigned int *)(v2 + 112));
          *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = -8;
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 768));
          *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = -117901064;
        }
        else
        {
          ret = -1;
          *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 704) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 735) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 735) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 704, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 704),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/scene_script_config.cpp",
            "checkGadget",
            271);
          v80 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 704),
                  (const char (*)[16])" gadget group: ");
          v81 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v80, group_id);
          v82 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v81, (const char (*)[13])" gadget_num:");
          v83 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v82,
                  (const unsigned int *)(v2 + 32));
          v84 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v83, (const char (*)[10])" monster:");
          *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
          v85 = std::unordered_map<unsigned int,MonsterScriptConfig>::size(&group_script_config->monster_config_map);
          if ( *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) )
            v85 = __asan_report_store8(v2 + 384, " monster:");
          *(_QWORD *)(v2 + 384) = v85;
          v86 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                  v84,
                  (const unsigned __int64 *)(v2 + 384));
          v87 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v86, (const char (*)[8])" suite:");
          *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
          v88 = std::vector<SuiteScriptConfig>::size(&group_script_config->suite_config_vec);
          if ( *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) )
            v88 = __asan_report_store8(v2 + 416, " suite:");
          *(_QWORD *)(v2 + 416) = v88;
          v89 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                  v87,
                  (const unsigned __int64 *)(v2 + 416));
          v90 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  v89,
                  (const char (*)[16])" version_level:");
          v91 = common::milog::MiLogStream::operator<<<data::VisionLevelType,(data::VisionLevelType*)0>(
                  v90,
                  &group_script_config->max_vision_range_level);
          v92 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v91, (const char (*)[11])" grid_num:");
          v93 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v92,
                  &group_script_config->grid_num);
          v94 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  v93,
                  (const char (*)[22])" gadget vision_level:");
          v95 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v94,
                  (const unsigned int *)(v2 + 112));
          common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(v95, (const char (*)[37])byte_1A181C00);
          *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = -8;
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 704));
          *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = -117901064;
        }
      }
    }
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,GroupScriptConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,GroupScriptConfig>,false,false> *const)(v2 + 128));
  }
  if ( v123 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8060) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 104) & 0xFFFFFFF8) >> 3));
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return ret;
};

// Line 295: range 000000000CD114F6-000000000CD11E80
int32_t __cdecl SceneScriptConfig::mergeGroupLifeCycle(
        SceneScriptConfig *const this,
        std::vector<GroupLifeConfig> *life_cycle_vec)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  GroupLifeConfig *M_current; // r14
  std::vector<GroupLifeConfig>::iterator v6; // rax
  GroupLifeConfig *v7; // rsi
  SceneScriptConfig::mergeGroupLifeCycle::<lambda(const GroupLifeConfig&, const GroupLifeConfig&)> v8; // dl
  int32_t result; // eax
  std::vector<GroupLifeConfig>::reference v10; // rdx
  char v11; // cl
  common::milog::MiLogStream *v12; // rax
  __int64 v13; // rsi
  bool v14; // al
  __gnu_cxx::__normal_iterator<GroupLifeConfig*,std::vector<GroupLifeConfig> >::pointer v15; // rax
  uint32_t *v16; // rdx
  uint32_t v17; // r14d
  __gnu_cxx::__normal_iterator<GroupLifeConfig*,std::vector<GroupLifeConfig> >::pointer v18; // rdx
  uint32_t *p_to_hour; // rax
  __gnu_cxx::__normal_iterator<GroupLifeConfig*,std::vector<GroupLifeConfig> >::reference v20; // r14
  __gnu_cxx::__normal_iterator<GroupLifeConfig*,std::vector<GroupLifeConfig> >::reference v21; // rax
  _QWORD *v22; // rdx
  __gnu_cxx::__normal_iterator<GroupLifeConfig*,std::vector<GroupLifeConfig> >::pointer v23; // rax
  uint32_t *v24; // rdx
  uint32_t v25; // r14d
  __gnu_cxx::__normal_iterator<GroupLifeConfig*,std::vector<GroupLifeConfig> >::pointer v26; // rdx
  char v27; // cl
  __gnu_cxx::__normal_iterator<GroupLifeConfig*,std::vector<GroupLifeConfig> >::pointer v28; // rdx
  uint32_t *v29; // rax
  uint32_t to_hour; // r14d
  __gnu_cxx::__normal_iterator<GroupLifeConfig*,std::vector<GroupLifeConfig> >::pointer v31; // rdx
  char v32; // cl
  char v33; // al
  __gnu_cxx::__normal_iterator<GroupLifeConfig*,std::vector<GroupLifeConfig> >::pointer v34; // rdx
  uint32_t *v35; // rax
  uint32_t v36; // r14d
  __gnu_cxx::__normal_iterator<GroupLifeConfig*,std::vector<GroupLifeConfig> >::pointer v37; // rdx
  char v38; // cl
  char v40[400]; // [rsp+10h] [rbp-190h] BYREF

  v2 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "9 48 1 12 cmp_func:296 64 8 7 cur:312 96 8 8 iter:313 128 8 9 <unknown> 160 8 9 <unknown> 192 8 "
                        "9 <unknown> 224 8 9 <unknown> 256 8 9 <unknown> 288 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = SceneScriptConfig::mergeGroupLifeCycle;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -218959360;
  v4[536862727] = -218959360;
  v4[536862728] = -218959360;
  v4[536862730] = -202116109;
  M_current = std::vector<GroupLifeConfig>::end(life_cycle_vec)._M_current;
  v6._M_current = std::vector<GroupLifeConfig>::begin(life_cycle_vec)._M_current;
  v7 = M_current;
  std::sort<__gnu_cxx::__normal_iterator<GroupLifeConfig *,std::vector<GroupLifeConfig>>,SceneScriptConfig::mergeGroupLifeCycle(std::vector<GroupLifeConfig>&)::{lambda(GroupLifeConfig const&,GroupLifeConfig const&)#1}>(
    v6,
    (__gnu_cxx::__normal_iterator<GroupLifeConfig*,std::vector<GroupLifeConfig> >)M_current,
    v8);
  if ( std::vector<GroupLifeConfig>::size(life_cycle_vec) )
  {
    v10 = std::vector<GroupLifeConfig>::back(life_cycle_vec);
    v11 = *(_BYTE *)(((unsigned __int64)&v10->to_hour >> 3) + 0x7FFF8000);
    LOBYTE(v7) = v11 != 0;
    if ( v11 != 0 && (char)((((_BYTE)v10 + 4) & 7) + 3) >= v11 )
      __asan_report_load4(&v10->to_hour);
    if ( v10->to_hour <= 0x18 )
    {
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 64, v7);
      *(std::vector<GroupLifeConfig>::iterator *)(v2 + 64) = std::vector<GroupLifeConfig>::begin(life_cycle_vec);
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 96, v7);
      v13 = 1LL;
      *(__gnu_cxx::__normal_iterator<GroupLifeConfig*,std::vector<GroupLifeConfig> > *)(v2 + 96) = __gnu_cxx::__normal_iterator<GroupLifeConfig *,std::vector<GroupLifeConfig>>::operator+(
                                                                                                     (const __gnu_cxx::__normal_iterator<GroupLifeConfig*,std::vector<GroupLifeConfig> > *const)(v2 + 64),
                                                                                                     1LL);
      while ( 1 )
      {
        *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 128, v13);
        *(std::vector<GroupLifeConfig>::iterator *)(v2 + 128) = std::vector<GroupLifeConfig>::end(life_cycle_vec);
        v13 = v2 + 128;
        v14 = __gnu_cxx::operator<<GroupLifeConfig *,std::vector<GroupLifeConfig>>(
                (const __gnu_cxx::__normal_iterator<GroupLifeConfig*,std::vector<GroupLifeConfig> > *)(v2 + 96),
                (const __gnu_cxx::__normal_iterator<GroupLifeConfig*,std::vector<GroupLifeConfig> > *)(v2 + 128));
        *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
        if ( !v14 )
          break;
        v15 = __gnu_cxx::__normal_iterator<GroupLifeConfig *,std::vector<GroupLifeConfig>>::operator->((const __gnu_cxx::__normal_iterator<GroupLifeConfig*,std::vector<GroupLifeConfig> > *const)(v2 + 96));
        v16 = (uint32_t *)v15;
        if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v15);
        }
        v17 = *v16;
        v18 = __gnu_cxx::__normal_iterator<GroupLifeConfig *,std::vector<GroupLifeConfig>>::operator->((const __gnu_cxx::__normal_iterator<GroupLifeConfig*,std::vector<GroupLifeConfig> > *const)(v2 + 64));
        p_to_hour = &v18->to_hour;
        if ( *(_BYTE *)(((unsigned __int64)p_to_hour >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_to_hour & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_to_hour >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(p_to_hour);
        }
        if ( v17 <= v18->to_hour )
        {
          v23 = __gnu_cxx::__normal_iterator<GroupLifeConfig *,std::vector<GroupLifeConfig>>::operator->((const __gnu_cxx::__normal_iterator<GroupLifeConfig*,std::vector<GroupLifeConfig> > *const)(v2 + 96));
          v24 = (uint32_t *)v23;
          if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v23);
          }
          v25 = *v24;
          v26 = __gnu_cxx::__normal_iterator<GroupLifeConfig *,std::vector<GroupLifeConfig>>::operator->((const __gnu_cxx::__normal_iterator<GroupLifeConfig*,std::vector<GroupLifeConfig> > *const)(v2 + 64));
          v27 = *(_BYTE *)(((unsigned __int64)&v26->to_hour >> 3) + 0x7FFF8000);
          LOBYTE(v13) = v27 != 0;
          if ( v27 != 0 && (char)((((_BYTE)v26 + 4) & 7) + 3) >= v27 )
            __asan_report_load4(&v26->to_hour);
          if ( v25 > v26->to_hour )
            goto LABEL_42;
          v28 = __gnu_cxx::__normal_iterator<GroupLifeConfig *,std::vector<GroupLifeConfig>>::operator->((const __gnu_cxx::__normal_iterator<GroupLifeConfig*,std::vector<GroupLifeConfig> > *const)(v2 + 96));
          v29 = &v28->to_hour;
          if ( *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v29 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v29);
          }
          to_hour = v28->to_hour;
          v31 = __gnu_cxx::__normal_iterator<GroupLifeConfig *,std::vector<GroupLifeConfig>>::operator->((const __gnu_cxx::__normal_iterator<GroupLifeConfig*,std::vector<GroupLifeConfig> > *const)(v2 + 64));
          v32 = *(_BYTE *)(((unsigned __int64)&v31->to_hour >> 3) + 0x7FFF8000);
          LOBYTE(v13) = v32 != 0;
          if ( v32 != 0 && (char)((((_BYTE)v31 + 4) & 7) + 3) >= v32 )
            __asan_report_load4(&v31->to_hour);
          if ( to_hour <= v31->to_hour )
LABEL_42:
            v33 = 0;
          else
            v33 = 1;
          if ( v33 )
          {
            v34 = __gnu_cxx::__normal_iterator<GroupLifeConfig *,std::vector<GroupLifeConfig>>::operator->((const __gnu_cxx::__normal_iterator<GroupLifeConfig*,std::vector<GroupLifeConfig> > *const)(v2 + 96));
            v35 = &v34->to_hour;
            if ( *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v35 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v35);
            }
            v36 = v34->to_hour;
            v37 = __gnu_cxx::__normal_iterator<GroupLifeConfig *,std::vector<GroupLifeConfig>>::operator->((const __gnu_cxx::__normal_iterator<GroupLifeConfig*,std::vector<GroupLifeConfig> > *const)(v2 + 64));
            v38 = *(_BYTE *)(((unsigned __int64)&v37->to_hour >> 3) + 0x7FFF8000);
            LOBYTE(v13) = v38 != 0;
            if ( v38 != 0 && (char)((((_BYTE)v37 + 4) & 7) + 3) >= v38 )
              __asan_report_store4(&v37->to_hour, v13);
            v37->to_hour = v36;
          }
        }
        else
        {
          __gnu_cxx::__normal_iterator<GroupLifeConfig *,std::vector<GroupLifeConfig>>::operator++((__gnu_cxx::__normal_iterator<GroupLifeConfig*,std::vector<GroupLifeConfig> > *const)(v2 + 64));
          v13 = v2 + 96;
          if ( __gnu_cxx::operator!=<GroupLifeConfig *,std::vector<GroupLifeConfig>>(
                 (const __gnu_cxx::__normal_iterator<GroupLifeConfig*,std::vector<GroupLifeConfig> > *)(v2 + 64),
                 (const __gnu_cxx::__normal_iterator<GroupLifeConfig*,std::vector<GroupLifeConfig> > *)(v2 + 96)) )
          {
            v20 = __gnu_cxx::__normal_iterator<GroupLifeConfig *,std::vector<GroupLifeConfig>>::operator*((const __gnu_cxx::__normal_iterator<GroupLifeConfig*,std::vector<GroupLifeConfig> > *const)(v2 + 96));
            v21 = __gnu_cxx::__normal_iterator<GroupLifeConfig *,std::vector<GroupLifeConfig>>::operator*((const __gnu_cxx::__normal_iterator<GroupLifeConfig*,std::vector<GroupLifeConfig> > *const)(v2 + 64));
            v22 = v21;
            if ( ((unsigned __int8)v21 & 7) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000)
              && *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
              || *(_BYTE *)((((unsigned __int64)&v21->to_hour + 3) >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)v21 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v21->to_hour + 3) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v21, 8LL);
            }
            v13 = ((_DWORD)v20 + 7) & 7;
            if ( ((unsigned __int8)v20 & 7) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000)
              && *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
              || *(_BYTE *)((((unsigned __int64)&v20->to_hour + 3) >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)v20 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v20->to_hour + 3) >> 3) + 0x7FFF8000) )
            {
              v13 = 8LL;
              __asan_report_load_n(v20, 8LL);
            }
            *v22 = *v20;
          }
        }
        __gnu_cxx::__normal_iterator<GroupLifeConfig *,std::vector<GroupLifeConfig>>::operator++((__gnu_cxx::__normal_iterator<GroupLifeConfig*,std::vector<GroupLifeConfig> > *const)(v2 + 96));
      }
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 192, v13);
      *(std::vector<GroupLifeConfig>::iterator *)(v2 + 192) = std::vector<GroupLifeConfig>::end(life_cycle_vec);
      __gnu_cxx::__normal_iterator<GroupLifeConfig const*,std::vector<GroupLifeConfig>>::__normal_iterator<GroupLifeConfig*>(
        (__gnu_cxx::__normal_iterator<const GroupLifeConfig*,std::vector<GroupLifeConfig> > *const)(v2 + 256),
        (const __gnu_cxx::__normal_iterator<GroupLifeConfig*,std::vector<GroupLifeConfig> > *)(v2 + 192));
      *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 160, v2 + 192);
      *(__gnu_cxx::__normal_iterator<GroupLifeConfig*,std::vector<GroupLifeConfig> > *)(v2 + 160) = __gnu_cxx::__normal_iterator<GroupLifeConfig *,std::vector<GroupLifeConfig>>::operator+((const __gnu_cxx::__normal_iterator<GroupLifeConfig*,std::vector<GroupLifeConfig> > *const)(v2 + 64), 1LL);
      __gnu_cxx::__normal_iterator<GroupLifeConfig const*,std::vector<GroupLifeConfig>>::__normal_iterator<GroupLifeConfig*>(
        (__gnu_cxx::__normal_iterator<const GroupLifeConfig*,std::vector<GroupLifeConfig> > *const)(v2 + 224),
        (const __gnu_cxx::__normal_iterator<GroupLifeConfig*,std::vector<GroupLifeConfig> > *)(v2 + 160));
      if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
        __asan_report_load8(v2 + 224);
      if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) )
        __asan_report_load8(v2 + 256);
      std::vector<GroupLifeConfig>::erase(
        life_cycle_vec,
        *(std::vector<GroupLifeConfig>::const_iterator *)(v2 + 224),
        *(std::vector<GroupLifeConfig>::const_iterator *)(v2 + 256));
      result = 0;
    }
    else
    {
      if ( *(char *)(((v2 + 288) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 288, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 288),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene_script_config.cpp",
        "mergeGroupLifeCycle",
        308);
      v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 288),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v12, (const char (*)[27])byte_1A181D60);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = -1;
    }
  }
  else
  {
    result = 0;
  }
  if ( v40 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};

// Line 296: range 000000000CD113B4-000000000CD114F5
bool __cdecl SceneScriptConfig::mergeGroupLifeCycle(std::vector<GroupLifeConfig> &)::{lambda(GroupLifeConfig const&,GroupLifeConfig const&)#1}::operator()(
        const SceneScriptConfig::mergeGroupLifeCycle::<lambda(const GroupLifeConfig&, const GroupLifeConfig&)> *const __closure,
        const GroupLifeConfig *lhs,
        const GroupLifeConfig *rhs)
{
  uint32_t from_hour; // ecx
  uint32_t to_hour; // ecx

  if ( *(_BYTE *)(((unsigned __int64)lhs >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)lhs & 7) + 3) >= *(_BYTE *)(((unsigned __int64)lhs >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(lhs);
  }
  from_hour = lhs->from_hour;
  if ( *(_BYTE *)(((unsigned __int64)rhs >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)rhs & 7) + 3) >= *(_BYTE *)(((unsigned __int64)rhs >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(rhs);
  }
  if ( from_hour < rhs->from_hour )
    return 1;
  if ( lhs->from_hour != rhs->from_hour )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&lhs->to_hour >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)lhs + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&lhs->to_hour >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&lhs->to_hour);
  }
  to_hour = lhs->to_hour;
  if ( *(_BYTE *)(((unsigned __int64)&rhs->to_hour >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rhs + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->to_hour >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&rhs->to_hour);
  }
  return to_hour < rhs->to_hour;
};

// Line 336: range 000000000CD11E82-000000000CD13B68
bool __cdecl SceneScriptConfig::isPosValid(const SceneScriptConfig *const this, const Vector3 *pos)
{
  common::milog::MiLogStream *v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  double z; // xmm2_8
  double y; // xmm1_8
  bool result; // al
  float x; // xmm1_4
  common::milog::MiLogStream *p_z; // rdi
  double v10; // xmm6_8
  double v11; // xmm5_8
  double v12; // xmm4_8
  double v13; // xmm3_8
  uint32_t v14; // ecx
  double v15; // xmm2_8
  double v16; // xmm1_8
  double v17; // xmm0_8
  float v18; // xmm2_4
  common::milog::MiLogStream *p_scene_id; // rdi
  double v20; // xmm6_8
  double v21; // xmm5_8
  double v22; // xmm4_8
  double v23; // xmm3_8
  uint32_t v24; // ecx
  double v25; // xmm2_8
  double v26; // xmm1_8
  float v27; // xmm1_4
  common::milog::MiLogStream *p_begin_pos; // rdi
  double v29; // xmm6_8
  double v30; // xmm5_8
  double v31; // xmm4_8
  double v32; // xmm3_8
  uint32_t v33; // ecx
  double v34; // xmm2_8
  double v35; // xmm1_8
  double v36; // xmm0_8
  float v37; // xmm2_4
  common::milog::MiLogStream *p_size; // rdi
  double v39; // xmm6_8
  double v40; // xmm5_8
  double v41; // xmm4_8
  double v42; // xmm3_8
  uint32_t v43; // ecx
  double v44; // xmm2_8
  double v45; // xmm1_8
  float v46; // xmm1_4
  common::milog::MiLogStream *p_y; // rdi
  double v48; // xmm7_8
  double v49; // xmm6_8
  double v50; // xmm5_8
  double v51; // xmm4_8
  double v52; // xmm3_8
  uint32_t v53; // ecx
  double v54; // xmm2_8
  double v55; // xmm1_8
  common::milog::MiLogStream *p_die_y; // rdi
  double die_y; // xmm7_8
  double v59; // xmm6_8
  double v60; // xmm5_8
  double v61; // xmm4_8
  double v62; // xmm3_8
  uint32_t scene_id; // ecx
  double v64; // xmm2_8
  double v65; // xmm1_8
  char v67[512]; // [rsp+10h] [rbp-200h] BYREF

  v2 = (common::milog::MiLogStream *)v67;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(480LL);
    if ( v3 )
      v2 = (common::milog::MiLogStream *)v3;
  }
  v2->log_ = (common::milog::MiLog *)1102416563;
  v2->ostr_ptr_._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)"7 32 32 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown>";
  v2->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)SceneScriptConfig::isPosValid;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -202116109;
  if ( !Vector3::isValid(pos) )
  {
    if ( *(char *)(((unsigned __int64)&v2[1] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[1].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 95) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[1].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[1], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 1,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene_script_config.cpp",
      "isPosValid",
      340);
    if ( *(_BYTE *)(((unsigned __int64)&pos->z >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)pos + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pos->z >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&pos->z);
    }
    z = pos->z;
    if ( *(_BYTE *)(((unsigned __int64)&pos->y >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)pos + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pos->y >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&pos->y);
    }
    y = pos->y;
    if ( *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)pos & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(pos);
    }
    common::milog::MiLogStream::operator()(v2 + 1, "pos(%g,%g,%g) invalid", pos->x, y, z);
    common::milog::MiLogStream::~MiLogStream(v2 + 1);
    result = 0;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)pos & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(pos);
    }
    x = pos->x;
    if ( *(_BYTE *)(((unsigned __int64)&this->begin_pos >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->begin_pos >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->begin_pos);
    }
    if ( this->begin_pos.x < x )
    {
      if ( *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)pos & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(pos);
      }
      *(float *)&v17 = pos->x;
      if ( *(_BYTE *)(((unsigned __int64)&this->begin_pos >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->begin_pos >> 3) + 0x7FFF8000) <= 3 )
      {
        v17 = __asan_report_load4(&this->begin_pos);
      }
      v18 = this->begin_pos.x;
      if ( *(_BYTE *)(((unsigned __int64)&this->size >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->size >> 3) + 0x7FFF8000) <= 3 )
      {
        v17 = __asan_report_load4(&this->size);
      }
      if ( *(float *)&v17 < (float)(this->size.x + v18) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&pos->z >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)pos + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pos->z >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&pos->z);
        }
        v27 = pos->z;
        if ( *(_BYTE *)(((unsigned __int64)&this->begin_pos.y >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->begin_pos.y >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->begin_pos.y);
        }
        if ( this->begin_pos.y < v27 )
        {
          if ( *(_BYTE *)(((unsigned __int64)&pos->z >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)pos + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pos->z >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(&pos->z);
          }
          *(float *)&v36 = pos->z;
          if ( *(_BYTE *)(((unsigned __int64)&this->begin_pos.y >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->begin_pos.y >> 3)
                                                                + 0x7FFF8000) )
          {
            v36 = __asan_report_load4(&this->begin_pos.y);
          }
          v37 = this->begin_pos.y;
          if ( *(_BYTE *)(((unsigned __int64)&this->size.y >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->size.y >> 3) + 0x7FFF8000) )
          {
            v36 = __asan_report_load4(&this->size.y);
          }
          if ( *(float *)&v36 < (float)(this->size.y + v37) )
          {
            if ( *(_BYTE *)(((unsigned __int64)&pos->y >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)pos + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pos->y >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(&pos->y);
            }
            v46 = pos->y;
            if ( *(_BYTE *)(((unsigned __int64)&this->die_y >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->die_y >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(&this->die_y);
            }
            if ( this->die_y < v46 )
            {
              if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&this->scene_id);
              }
              if ( this->scene_id == 3 && operator==(pos, &Vector3::zero) )
              {
                if ( *(char *)(((unsigned __int64)&v2[13] >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)((((unsigned __int64)&v2[13].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
                  && (((unsigned __int8)v2 - 96 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[13].ostr_ + 7) >> 3)
                                                                       + 0x7FFF8000) )
                {
                  __asan_report_store_n(&v2[13], 32LL);
                }
                common::milog::MiLogStream::create(
                  v2 + 13,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/scene_script_config.cpp",
                  "isPosValid",
                  383);
                p_die_y = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            v2 + 13,
                            (const char (*)[16])"[CONFIG_ERROR] ");
                if ( *(_BYTE *)(((unsigned __int64)&this->die_y >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->die_y >> 3)
                                                                      + 0x7FFF8000) )
                {
                  p_die_y = (common::milog::MiLogStream *)&this->die_y;
                  __asan_report_load4(&this->die_y);
                }
                die_y = this->die_y;
                if ( *(_BYTE *)(((unsigned __int64)&this->size.y >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->size.y >> 3)
                                                                      + 0x7FFF8000) )
                {
                  p_die_y = (common::milog::MiLogStream *)&this->size.y;
                  __asan_report_load4(&this->size.y);
                }
                v59 = this->size.y;
                if ( *(_BYTE *)(((unsigned __int64)&this->size >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&this->size >> 3) + 0x7FFF8000) <= 3 )
                {
                  p_die_y = (common::milog::MiLogStream *)&this->size;
                  __asan_report_load4(&this->size);
                }
                v60 = this->size.x;
                if ( *(_BYTE *)(((unsigned __int64)&this->begin_pos.y >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->begin_pos.y >> 3)
                                                                      + 0x7FFF8000) )
                {
                  p_die_y = (common::milog::MiLogStream *)&this->begin_pos.y;
                  __asan_report_load4(&this->begin_pos.y);
                }
                v61 = this->begin_pos.y;
                if ( *(_BYTE *)(((unsigned __int64)&this->begin_pos >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&this->begin_pos >> 3) + 0x7FFF8000) <= 3 )
                {
                  p_die_y = (common::milog::MiLogStream *)&this->begin_pos;
                  __asan_report_load4(&this->begin_pos);
                }
                v62 = this->begin_pos.x;
                if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) <= 3 )
                {
                  p_die_y = (common::milog::MiLogStream *)&this->scene_id;
                  __asan_report_load4(&this->scene_id);
                }
                scene_id = this->scene_id;
                if ( *(_BYTE *)(((unsigned __int64)&pos->z >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)pos + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pos->z >> 3) + 0x7FFF8000) )
                {
                  p_die_y = (common::milog::MiLogStream *)&pos->z;
                  __asan_report_load4(&pos->z);
                }
                v64 = pos->z;
                if ( *(_BYTE *)(((unsigned __int64)&pos->y >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)pos + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pos->y >> 3) + 0x7FFF8000) )
                {
                  p_die_y = (common::milog::MiLogStream *)&pos->y;
                  __asan_report_load4(&pos->y);
                }
                v65 = pos->y;
                if ( *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)pos & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) )
                {
                  p_die_y = (common::milog::MiLogStream *)pos;
                  __asan_report_load4(pos);
                }
                common::milog::MiLogStream::operator()(
                  p_die_y,
                  "pos(%g,%g,%g) is not in scene(%d), begion_pos(%g,%g) size(%g,%g) die_y:%g",
                  pos->x,
                  v65,
                  v64,
                  scene_id,
                  v62,
                  v61,
                  v60,
                  v59,
                  die_y);
                common::milog::MiLogStream::~MiLogStream(v2 + 13);
                result = 0;
              }
              else
              {
                result = 1;
              }
            }
            else
            {
              if ( *(char *)(((unsigned __int64)&v2[11] >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)((((unsigned __int64)&v2[11].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
                && (((unsigned __int8)v2 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[11].ostr_ + 7) >> 3)
                                                                 + 0x7FFF8000) )
              {
                __asan_report_store_n(&v2[11], 32LL);
              }
              common::milog::MiLogStream::create(
                v2 + 11,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/scene_script_config.cpp",
                "isPosValid",
                375);
              p_y = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      v2 + 11,
                      (const char (*)[16])"[CONFIG_ERROR] ");
              if ( *(_BYTE *)(((unsigned __int64)&this->die_y >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->die_y >> 3) + 0x7FFF8000) )
              {
                p_y = (common::milog::MiLogStream *)&this->die_y;
                __asan_report_load4(&this->die_y);
              }
              v48 = this->die_y;
              if ( *(_BYTE *)(((unsigned __int64)&this->size.y >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->size.y >> 3) + 0x7FFF8000) )
              {
                p_y = (common::milog::MiLogStream *)&this->size.y;
                __asan_report_load4(&this->size.y);
              }
              v49 = this->size.y;
              if ( *(_BYTE *)(((unsigned __int64)&this->size >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&this->size >> 3) + 0x7FFF8000) <= 3 )
              {
                p_y = (common::milog::MiLogStream *)&this->size;
                __asan_report_load4(&this->size);
              }
              v50 = this->size.x;
              if ( *(_BYTE *)(((unsigned __int64)&this->begin_pos.y >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->begin_pos.y >> 3)
                                                                    + 0x7FFF8000) )
              {
                p_y = (common::milog::MiLogStream *)&this->begin_pos.y;
                __asan_report_load4(&this->begin_pos.y);
              }
              v51 = this->begin_pos.y;
              if ( *(_BYTE *)(((unsigned __int64)&this->begin_pos >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&this->begin_pos >> 3) + 0x7FFF8000) <= 3 )
              {
                p_y = (common::milog::MiLogStream *)&this->begin_pos;
                __asan_report_load4(&this->begin_pos);
              }
              v52 = this->begin_pos.x;
              if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) <= 3 )
              {
                p_y = (common::milog::MiLogStream *)&this->scene_id;
                __asan_report_load4(&this->scene_id);
              }
              v53 = this->scene_id;
              if ( *(_BYTE *)(((unsigned __int64)&pos->z >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)pos + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pos->z >> 3) + 0x7FFF8000) )
              {
                p_y = (common::milog::MiLogStream *)&pos->z;
                __asan_report_load4(&pos->z);
              }
              v54 = pos->z;
              if ( *(_BYTE *)(((unsigned __int64)&pos->y >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)pos + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pos->y >> 3) + 0x7FFF8000) )
              {
                p_y = (common::milog::MiLogStream *)&pos->y;
                __asan_report_load4(&pos->y);
              }
              v55 = pos->y;
              if ( *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)pos & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) )
              {
                p_y = (common::milog::MiLogStream *)pos;
                __asan_report_load4(pos);
              }
              common::milog::MiLogStream::operator()(
                p_y,
                "pos(%g,%g,%g) is not in scene(%d), begion_pos(%g,%g) size(%g,%g) die_y:%g",
                pos->x,
                v55,
                v54,
                v53,
                v52,
                v51,
                v50,
                v49,
                v48);
              common::milog::MiLogStream::~MiLogStream(v2 + 11);
              result = 0;
            }
          }
          else
          {
            if ( *(char *)(((unsigned __int64)&v2[9] >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)((((unsigned __int64)&v2[9].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)v2 - 32 + 95) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[9].ostr_ + 7) >> 3)
                                                                   + 0x7FFF8000) )
            {
              __asan_report_store_n(&v2[9], 32LL);
            }
            common::milog::MiLogStream::create(
              v2 + 9,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/scene_script_config.cpp",
              "isPosValid",
              368);
            p_size = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                       v2 + 9,
                       (const char (*)[16])"[CONFIG_ERROR] ");
            if ( *(_BYTE *)(((unsigned __int64)&this->size.y >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->size.y >> 3) + 0x7FFF8000) )
            {
              p_size = (common::milog::MiLogStream *)&this->size.y;
              __asan_report_load4(&this->size.y);
            }
            v39 = this->size.y;
            if ( *(_BYTE *)(((unsigned __int64)&this->size >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->size >> 3) + 0x7FFF8000) <= 3 )
            {
              p_size = (common::milog::MiLogStream *)&this->size;
              __asan_report_load4(&this->size);
            }
            v40 = this->size.x;
            if ( *(_BYTE *)(((unsigned __int64)&this->begin_pos.y >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->begin_pos.y >> 3)
                                                                  + 0x7FFF8000) )
            {
              p_size = (common::milog::MiLogStream *)&this->begin_pos.y;
              __asan_report_load4(&this->begin_pos.y);
            }
            v41 = this->begin_pos.y;
            if ( *(_BYTE *)(((unsigned __int64)&this->begin_pos >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->begin_pos >> 3) + 0x7FFF8000) <= 3 )
            {
              p_size = (common::milog::MiLogStream *)&this->begin_pos;
              __asan_report_load4(&this->begin_pos);
            }
            v42 = this->begin_pos.x;
            if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) <= 3 )
            {
              p_size = (common::milog::MiLogStream *)&this->scene_id;
              __asan_report_load4(&this->scene_id);
            }
            v43 = this->scene_id;
            if ( *(_BYTE *)(((unsigned __int64)&pos->z >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)pos + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pos->z >> 3) + 0x7FFF8000) )
            {
              p_size = (common::milog::MiLogStream *)&pos->z;
              __asan_report_load4(&pos->z);
            }
            v44 = pos->z;
            if ( *(_BYTE *)(((unsigned __int64)&pos->y >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)pos + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pos->y >> 3) + 0x7FFF8000) )
            {
              p_size = (common::milog::MiLogStream *)&pos->y;
              __asan_report_load4(&pos->y);
            }
            v45 = pos->y;
            if ( *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)pos & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) )
            {
              p_size = (common::milog::MiLogStream *)pos;
              __asan_report_load4(pos);
            }
            common::milog::MiLogStream::operator()(
              p_size,
              "pos(%g,%g,%g) is not in scene(%d), begion_pos(%g,%g) size(%g,%g)",
              pos->x,
              v45,
              v44,
              v43,
              v42,
              v41,
              v40,
              v39);
            common::milog::MiLogStream::~MiLogStream(v2 + 9);
            result = 0;
          }
        }
        else
        {
          if ( *(char *)(((unsigned __int64)&v2[7] >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)((((unsigned __int64)&v2[7].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)v2 - 32 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[7].ostr_ + 7) >> 3)
                                                                 + 0x7FFF8000) )
          {
            __asan_report_store_n(&v2[7], 32LL);
          }
          common::milog::MiLogStream::create(
            v2 + 7,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/scene_script_config.cpp",
            "isPosValid",
            361);
          p_begin_pos = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          v2 + 7,
                          (const char (*)[16])"[CONFIG_ERROR] ");
          if ( *(_BYTE *)(((unsigned __int64)&this->size.y >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->size.y >> 3) + 0x7FFF8000) )
          {
            p_begin_pos = (common::milog::MiLogStream *)&this->size.y;
            __asan_report_load4(&this->size.y);
          }
          v29 = this->size.y;
          if ( *(_BYTE *)(((unsigned __int64)&this->size >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->size >> 3) + 0x7FFF8000) <= 3 )
          {
            p_begin_pos = (common::milog::MiLogStream *)&this->size;
            __asan_report_load4(&this->size);
          }
          v30 = this->size.x;
          if ( *(_BYTE *)(((unsigned __int64)&this->begin_pos.y >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->begin_pos.y >> 3)
                                                                + 0x7FFF8000) )
          {
            p_begin_pos = (common::milog::MiLogStream *)&this->begin_pos.y;
            __asan_report_load4(&this->begin_pos.y);
          }
          v31 = this->begin_pos.y;
          if ( *(_BYTE *)(((unsigned __int64)&this->begin_pos >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->begin_pos >> 3) + 0x7FFF8000) <= 3 )
          {
            p_begin_pos = (common::milog::MiLogStream *)&this->begin_pos;
            __asan_report_load4(&this->begin_pos);
          }
          v32 = this->begin_pos.x;
          if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) <= 3 )
          {
            p_begin_pos = (common::milog::MiLogStream *)&this->scene_id;
            __asan_report_load4(&this->scene_id);
          }
          v33 = this->scene_id;
          if ( *(_BYTE *)(((unsigned __int64)&pos->z >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)pos + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pos->z >> 3) + 0x7FFF8000) )
          {
            p_begin_pos = (common::milog::MiLogStream *)&pos->z;
            __asan_report_load4(&pos->z);
          }
          v34 = pos->z;
          if ( *(_BYTE *)(((unsigned __int64)&pos->y >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)pos + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pos->y >> 3) + 0x7FFF8000) )
          {
            p_begin_pos = (common::milog::MiLogStream *)&pos->y;
            __asan_report_load4(&pos->y);
          }
          v35 = pos->y;
          if ( *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)pos & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) )
          {
            p_begin_pos = (common::milog::MiLogStream *)pos;
            __asan_report_load4(pos);
          }
          common::milog::MiLogStream::operator()(
            p_begin_pos,
            "pos(%g,%g,%g) is not in scene(%d), begion_pos(%g,%g) size(%g,%g)",
            pos->x,
            v35,
            v34,
            v33,
            v32,
            v31,
            v30,
            v29);
          common::milog::MiLogStream::~MiLogStream(v2 + 7);
          result = 0;
        }
      }
      else
      {
        if ( *(char *)(((unsigned __int64)&v2[5] >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)((((unsigned __int64)&v2[5].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)v2 - 96 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[5].ostr_ + 7) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(&v2[5], 32LL);
        }
        common::milog::MiLogStream::create(
          v2 + 5,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/scene_script_config.cpp",
          "isPosValid",
          354);
        p_scene_id = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                       v2 + 5,
                       (const char (*)[16])"[CONFIG_ERROR] ");
        if ( *(_BYTE *)(((unsigned __int64)&this->size.y >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->size.y >> 3) + 0x7FFF8000) )
        {
          p_scene_id = (common::milog::MiLogStream *)&this->size.y;
          __asan_report_load4(&this->size.y);
        }
        v20 = this->size.y;
        if ( *(_BYTE *)(((unsigned __int64)&this->size >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->size >> 3) + 0x7FFF8000) <= 3 )
        {
          p_scene_id = (common::milog::MiLogStream *)&this->size;
          __asan_report_load4(&this->size);
        }
        v21 = this->size.x;
        if ( *(_BYTE *)(((unsigned __int64)&this->begin_pos.y >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->begin_pos.y >> 3) + 0x7FFF8000) )
        {
          p_scene_id = (common::milog::MiLogStream *)&this->begin_pos.y;
          __asan_report_load4(&this->begin_pos.y);
        }
        v22 = this->begin_pos.y;
        if ( *(_BYTE *)(((unsigned __int64)&this->begin_pos >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->begin_pos >> 3) + 0x7FFF8000) <= 3 )
        {
          p_scene_id = (common::milog::MiLogStream *)&this->begin_pos;
          __asan_report_load4(&this->begin_pos);
        }
        v23 = this->begin_pos.x;
        if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) <= 3 )
        {
          p_scene_id = (common::milog::MiLogStream *)&this->scene_id;
          __asan_report_load4(&this->scene_id);
        }
        v24 = this->scene_id;
        if ( *(_BYTE *)(((unsigned __int64)&pos->z >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)pos + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pos->z >> 3) + 0x7FFF8000) )
        {
          p_scene_id = (common::milog::MiLogStream *)&pos->z;
          __asan_report_load4(&pos->z);
        }
        v25 = pos->z;
        if ( *(_BYTE *)(((unsigned __int64)&pos->y >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)pos + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pos->y >> 3) + 0x7FFF8000) )
        {
          p_scene_id = (common::milog::MiLogStream *)&pos->y;
          __asan_report_load4(&pos->y);
        }
        v26 = pos->y;
        if ( *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)pos & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) )
        {
          p_scene_id = (common::milog::MiLogStream *)pos;
          __asan_report_load4(pos);
        }
        common::milog::MiLogStream::operator()(
          p_scene_id,
          "pos(%g,%g,%g) is not in scene(%d), begion_pos(%g,%g) size(%g,%g)",
          pos->x,
          v26,
          v25,
          v24,
          v23,
          v22,
          v21,
          v20);
        common::milog::MiLogStream::~MiLogStream(v2 + 5);
        result = 0;
      }
    }
    else
    {
      if ( *(char *)(((unsigned __int64)&v2[3] >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&v2[3].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v2 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[3].ostr_ + 7) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(&v2[3], 32LL);
      }
      common::milog::MiLogStream::create(
        v2 + 3,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene_script_config.cpp",
        "isPosValid",
        347);
      p_z = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              v2 + 3,
              (const char (*)[16])"[CONFIG_ERROR] ");
      if ( *(_BYTE *)(((unsigned __int64)&this->size.y >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->size.y >> 3) + 0x7FFF8000) )
      {
        p_z = (common::milog::MiLogStream *)&this->size.y;
        __asan_report_load4(&this->size.y);
      }
      v10 = this->size.y;
      if ( *(_BYTE *)(((unsigned __int64)&this->size >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->size >> 3) + 0x7FFF8000) <= 3 )
      {
        p_z = (common::milog::MiLogStream *)&this->size;
        __asan_report_load4(&this->size);
      }
      v11 = this->size.x;
      if ( *(_BYTE *)(((unsigned __int64)&this->begin_pos.y >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->begin_pos.y >> 3) + 0x7FFF8000) )
      {
        p_z = (common::milog::MiLogStream *)&this->begin_pos.y;
        __asan_report_load4(&this->begin_pos.y);
      }
      v12 = this->begin_pos.y;
      if ( *(_BYTE *)(((unsigned __int64)&this->begin_pos >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->begin_pos >> 3) + 0x7FFF8000) <= 3 )
      {
        p_z = (common::milog::MiLogStream *)&this->begin_pos;
        __asan_report_load4(&this->begin_pos);
      }
      v13 = this->begin_pos.x;
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) <= 3 )
      {
        p_z = (common::milog::MiLogStream *)&this->scene_id;
        __asan_report_load4(&this->scene_id);
      }
      v14 = this->scene_id;
      if ( *(_BYTE *)(((unsigned __int64)&pos->z >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)pos + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pos->z >> 3) + 0x7FFF8000) )
      {
        p_z = (common::milog::MiLogStream *)&pos->z;
        __asan_report_load4(&pos->z);
      }
      v15 = pos->z;
      if ( *(_BYTE *)(((unsigned __int64)&pos->y >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)pos + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pos->y >> 3) + 0x7FFF8000) )
      {
        p_z = (common::milog::MiLogStream *)&pos->y;
        __asan_report_load4(&pos->y);
      }
      v16 = pos->y;
      if ( *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)pos & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) )
      {
        p_z = (common::milog::MiLogStream *)pos;
        __asan_report_load4(pos);
      }
      common::milog::MiLogStream::operator()(
        p_z,
        "pos(%g,%g,%g) is not in scene(%d), begion_pos(%g,%g) size(%g,%g)",
        pos->x,
        v16,
        v15,
        v14,
        v13,
        v12,
        v11,
        v10);
      common::milog::MiLogStream::~MiLogStream(v2 + 3);
      result = 0;
    }
  }
  if ( v67 == (char *)v2 )
  {
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8028) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8030) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8038) = 0;
  }
  else
  {
    v2->log_ = (common::milog::MiLog *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8038) = -168430091;
  }
  return result;
};

// Line 391: range 000000000CD13B6A-000000000CD13D2B
const BlockScriptConfig *__fastcall SceneScriptConfig::findBlockScriptConfig(
        const SceneScriptConfig *const this,
        __int64 block_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,BlockScriptConfig> *p_block_config_map; // rdx
  std::unordered_map<unsigned int,BlockScriptConfig> *v6; // rdx
  bool v7; // al
  const BlockScriptConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 12 block_id:390 64 8 6 it:392 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = SceneScriptConfig::findBlockScriptConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = block_id;
  p_block_config_map = &this->block_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, block_id);
  *(std::unordered_map<unsigned int,BlockScriptConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,BlockScriptConfig>::find(
                                                                                       p_block_config_map,
                                                                                       (const std::unordered_map<unsigned int,BlockScriptConfig>::key_type *)(v2 + 48));
  v6 = &this->block_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,BlockScriptConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,BlockScriptConfig>::end(v6);
  v7 = std::__detail::operator!=<std::pair<unsigned int const,BlockScriptConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,BlockScriptConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,BlockScriptConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,BlockScriptConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,BlockScriptConfig>,false,false> *const)(v2 + 64))->second;
  else
    result = 0LL;
  if ( v9 == (char *)v2 )
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

// Line 399: range 000000000CD13D2C-000000000CD13EED
const GroupInfoScriptConfig *__fastcall SceneScriptConfig::findGroupInfoConfig(
        const SceneScriptConfig *const this,
        __int64 group_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,GroupInfoScriptConfig> *p_group_info_map; // rdx
  std::unordered_map<unsigned int,GroupInfoScriptConfig> *v6; // rdx
  bool v7; // al
  const GroupInfoScriptConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 12 group_id:398 64 8 6 it:400 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = SceneScriptConfig::findGroupInfoConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = group_id;
  p_group_info_map = &this->group_info_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, group_id);
  *(std::unordered_map<unsigned int,GroupInfoScriptConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,GroupInfoScriptConfig>::find(
                                                                                           p_group_info_map,
                                                                                           (const std::unordered_map<unsigned int,GroupInfoScriptConfig>::key_type *)(v2 + 48));
  v6 = &this->group_info_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,GroupInfoScriptConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,GroupInfoScriptConfig>::end(v6);
  v7 = std::__detail::operator!=<std::pair<unsigned int const,GroupInfoScriptConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GroupInfoScriptConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GroupInfoScriptConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,GroupInfoScriptConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,GroupInfoScriptConfig>,false,false> *const)(v2 + 64))->second;
  else
    result = 0LL;
  if ( v9 == (char *)v2 )
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

// Line 407: range 000000000CD13EEE-000000000CD140AF
const GroupScriptConfig *__fastcall SceneScriptConfig::findGroupScriptConfig(
        const SceneScriptConfig *const this,
        __int64 group_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,GroupScriptConfig> *p_group_config_map; // rdx
  std::unordered_map<unsigned int,GroupScriptConfig> *v6; // rdx
  bool v7; // al
  const GroupScriptConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 12 group_id:406 64 8 6 it:408 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = SceneScriptConfig::findGroupScriptConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = group_id;
  p_group_config_map = &this->group_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, group_id);
  *(std::unordered_map<unsigned int,GroupScriptConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,GroupScriptConfig>::find(
                                                                                       p_group_config_map,
                                                                                       (const std::unordered_map<unsigned int,GroupScriptConfig>::key_type *)(v2 + 48));
  v6 = &this->group_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,GroupScriptConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,GroupScriptConfig>::end(v6);
  v7 = std::__detail::operator!=<std::pair<unsigned int const,GroupScriptConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GroupScriptConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GroupScriptConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,GroupScriptConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,GroupScriptConfig>,false,false> *const)(v2 + 64))->second;
  else
    result = 0LL;
  if ( v9 == (char *)v2 )
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

// Line 415: range 000000000CD140B0-000000000CD14BE9
const DummyPointScriptConfig *__cdecl SceneScriptConfig::findDummyPointScriptConfig(
        const SceneScriptConfig *const this,
        std::string *p_name)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 v5; // rsi
  DummyPointScriptConfig *p_second; // r14
  char *v9; // rdi
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  int v12; // eax
  uint32_t scene_id; // ecx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  __int64 v18; // r8
  char *v19; // rdi
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  std::unordered_map<unsigned int,DummyPointScriptConfig> *p_new_dummy_point_config_map; // rdx
  std::unordered_map<unsigned int,DummyPointScriptConfig> *v23; // rdx
  bool v24; // al
  std::unordered_map<std::string,DummyPointScriptConfig> *p_dummy_point_config_map; // rdx
  std::unordered_map<std::string,DummyPointScriptConfig> *v26; // rdx
  bool v27; // al
  const DummyPointScriptConfig *result; // rax
  size_t start_pos; // [rsp+10h] [rbp-240h]
  size_t end_pos; // [rsp+18h] [rbp-238h]
  char v33[560]; // [rsp+20h] [rbp-230h] BYREF

  v2 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(512LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "11 32 4 17 name_scene_id:433 48 4 18 dummy_point_id:452 64 8 6 it:458 96 8 9 <unknown> 128 8 6 i"
                        "t:467 160 8 9 <unknown> 192 32 16 scene_id_str:432 256 32 9 <unknown> 320 32 9 <unknown> 384 32 "
                        "22 dummy_point_id_str:451 448 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = SceneScriptConfig::findDummyPointScriptConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -202116109;
  v5 = 91LL;
  if ( common::tools::StringUtils::isStartsWith(p_name, 91)
    && (v5 = 93LL, common::tools::StringUtils::isEndsWith(p_name, 93)) )
  {
    start_pos = std::string::find(p_name, "_", 0LL);
    end_pos = std::string::find(p_name, ":", 0LL);
    if ( start_pos == -1LL || end_pos == -1LL || end_pos < start_pos )
    {
      p_second = 0LL;
    }
    else if ( (unsigned __int64)std::string::size(p_name) <= 1 || start_pos <= 1 )
    {
      p_second = 0LL;
    }
    else
    {
      v9 = (char *)(start_pos - 1);
      if ( *(char *)(((v2 + 192) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) )
      {
        v9 = (char *)(v2 + 192);
        __asan_report_store_n(v2 + 192, 32LL);
      }
      std::string::substr(v2 + 192, p_name, 1LL, v9);
      if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 32, p_name);
      *(_DWORD *)(v2 + 32) = 0;
      if ( common::tools::StringUtils::strToNum<unsigned int>(
             (const std::string *)(v2 + 192),
             (unsigned int *)(v2 + 32),
             1) )
      {
        if ( *(char *)(((v2 + 256) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 256, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 256),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene_script_config.cpp",
          "findDummyPointScriptConfig",
          436);
        v10 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                (common::milog::MiLogStream *const)(v2 + 256),
                (const char (*)[15])"scene_id_str: ");
        v11 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, (const std::string *)(v2 + 192));
        common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v11, (const char (*)[16])" strToNum fails");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
        *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
        p_second = 0LL;
      }
      else
      {
        v12 = *(unsigned __int8 *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000);
        if ( (_BYTE)v12 != 0 && (char)v12 <= 3 )
          __asan_report_load4(&this->scene_id);
        scene_id = this->scene_id;
        if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v2 + 32);
        if ( scene_id == *(_DWORD *)(v2 + 32) )
        {
          if ( std::string::size(p_name) <= start_pos + 1 || end_pos <= start_pos + 1 )
          {
            p_second = 0LL;
          }
          else
          {
            v18 = end_pos - start_pos - 1;
            v19 = (char *)(start_pos + 1);
            if ( *(char *)(((v2 + 384) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) )
            {
              v19 = (char *)(v2 + 384);
              __asan_report_store_n(v2 + 384, 32LL);
            }
            std::string::substr(v2 + 384, p_name, v19, v18);
            if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_store4(v2 + 48, p_name);
            *(_DWORD *)(v2 + 48) = 0;
            if ( common::tools::StringUtils::strToNum<unsigned int>(
                   (const std::string *)(v2 + 384),
                   (unsigned int *)(v2 + 48),
                   1) )
            {
              if ( *(char *)(((v2 + 448) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 448, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 448),
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/scene_script_config.cpp",
                "findDummyPointScriptConfig",
                455);
              v20 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                      (common::milog::MiLogStream *const)(v2 + 448),
                      (const char (*)[21])"dummy_point_id_str: ");
              v21 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                      v20,
                      (const std::string *)(v2 + 384));
              common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                v21,
                (const char (*)[16])" strToNum fails");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
              *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
              p_second = 0LL;
            }
            else
            {
              p_new_dummy_point_config_map = &this->new_dummy_point_config_map;
              if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
                __asan_report_store8(v2 + 64, v2 + 48);
              *(std::unordered_map<unsigned int,DummyPointScriptConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,DummyPointScriptConfig>::find(p_new_dummy_point_config_map, (const std::unordered_map<unsigned int,DummyPointScriptConfig>::key_type *)(v2 + 48));
              v23 = &this->new_dummy_point_config_map;
              if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
                __asan_report_store8(v2 + 96, v2 + 48);
              *(std::unordered_map<unsigned int,DummyPointScriptConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,DummyPointScriptConfig>::end(v23);
              v24 = std::__detail::operator!=<std::pair<unsigned int const,DummyPointScriptConfig>,false>(
                      (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,DummyPointScriptConfig>,false> *)(v2 + 64),
                      (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,DummyPointScriptConfig>,false> *)(v2 + 96));
              *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
              if ( v24 )
                p_second = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,DummyPointScriptConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,DummyPointScriptConfig>,false,false> *const)(v2 + 64))->second;
              else
                p_second = 0LL;
            }
            std::string::~string((void *)(v2 + 384));
          }
        }
        else
        {
          if ( *(char *)(((v2 + 320) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 320, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 320),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene_script_config.cpp",
            "findDummyPointScriptConfig",
            441);
          v14 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                  (common::milog::MiLogStream *const)(v2 + 320),
                  (const char (*)[49])"name_scene_id not equal scene_id, name_scene_id:");
          v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v14,
                  (const unsigned int *)(v2 + 32));
          v16 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v15, (const char (*)[12])", scene_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &this->scene_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
          *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
          p_second = 0LL;
        }
      }
      std::string::~string((void *)(v2 + 192));
    }
  }
  else
  {
    p_dummy_point_config_map = &this->dummy_point_config_map;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, v5);
    *(std::unordered_map<std::string,DummyPointScriptConfig>::const_iterator *)(v2 + 128) = std::unordered_map<std::string,DummyPointScriptConfig>::find(
                                                                                              p_dummy_point_config_map,
                                                                                              p_name);
    v26 = &this->dummy_point_config_map;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, p_name);
    *(std::unordered_map<std::string,DummyPointScriptConfig>::const_iterator *)(v2 + 160) = std::unordered_map<std::string,DummyPointScriptConfig>::end(v26);
    v27 = std::__detail::operator!=<std::pair<std::string const,DummyPointScriptConfig>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,DummyPointScriptConfig>,true> *)(v2 + 128),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,DummyPointScriptConfig>,true> *)(v2 + 160));
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v27 )
      p_second = &std::__detail::_Node_const_iterator<std::pair<std::string const,DummyPointScriptConfig>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,DummyPointScriptConfig>,false,true> *const)(v2 + 128))->second;
    else
      p_second = 0LL;
  }
  result = p_second;
  if ( v33 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF801C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF802C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF803C) = 0;
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
  }
  return result;
};

// Line 475: range 000000000CD14BEA-000000000CD15357
int32_t __cdecl SceneScriptConfig::initStaticGroupLoadMesh(SceneScriptConfig *const this)
{
  int32_t v1; // r14d
  __int128 v2; // xmm0
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  _BOOL4 v8; // eax
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  common::milog::MiLogStream *v12; // rax
  int v13; // r15d
  std::vector<std::shared_ptr<Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig> > >> *p_static_group_load_mesh_vec; // rcx
  std::shared_ptr<Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig> > > *v15; // rax
  int32_t result; // eax
  signed int grid_width; // [rsp+1Ch] [rbp-124h]
  int length; // [rsp+20h] [rbp-120h]
  size_t index; // [rsp+28h] [rbp-118h]
  char v20[272]; // [rsp+30h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 16 vision_level:479 64 16 30 static_group_load_mesh_ptr:488 96 32 9 <unknown> 160 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = SceneScriptConfig::initStaticGroupLoadMesh;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862724] = -218959118;
  v5[536862726] = -202116109;
  std::vector<std::shared_ptr<Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig>>>>::resize(
    &this->static_group_load_mesh_vec,
    6uLL);
  for ( index = 0LL; index <= 3; ++index )
  {
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v3 + 48, (unsigned int)index);
    *(_DWORD *)(v3 + 48) = index;
    if ( *(_BYTE *)(((unsigned __int64)&this->config >> 3) + 0x7FFF8000) )
      *(double *)&v2 = __asan_report_load8(&this->config);
    grid_width = HK4EDesignConfig::findGridWidth(this->config, (data::VisionLevelType)*(_DWORD *)(v3 + 48));
    if ( grid_width )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->grid_map_size >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->grid_map_size >> 3) + 0x7FFF8000) )
      {
        *(double *)&v2 = __asan_report_load4(&this->grid_map_size);
      }
      *(float *)&v2 = (float)((float)grid_width + this->grid_map_size.x) - 1.0;
      v9 = v2;
      *(float *)&v9 = *(float *)&v2 / (float)grid_width;
      v10 = v9;
      length = (int)*(float *)&v9;
      if ( *(_BYTE *)(((unsigned __int64)&this->grid_map_size.y >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->grid_map_size.y >> 3) + 0x7FFF8000) <= 3 )
      {
        *(double *)&v10 = __asan_report_load4(&this->grid_map_size.y);
      }
      *(float *)&v10 = (float)((float)grid_width + this->grid_map_size.y) - 1.0;
      v11 = v10;
      *(float *)&v11 = *(float *)&v10 / (float)grid_width;
      v2 = v11;
      *(_WORD *)(((v3 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v3 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig>>::createMesh(
        (std::shared_ptr<Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig> > > *)(v3 + 64),
        length,
        (int)*(float *)&v11);
      if ( std::operator==<Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig>>>(
             0LL,
             (const std::shared_ptr<Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig> > > *)(v3 + 64)) )
      {
        *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 160) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) )
        {
          *(double *)&v2 = __asan_report_store_n(v3 + 160, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 160),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/scene_script_config.cpp",
          "initStaticGroupLoadMesh",
          491);
        v12 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                (common::milog::MiLogStream *const)(v3 + 160),
                (const char (*)[30])"create mesh failed, scene_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->scene_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
        *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = -117901064;
        v1 = -1;
        v13 = 0;
      }
      else
      {
        p_static_group_load_mesh_vec = &this->static_group_load_mesh_vec;
        if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
          *(double *)&v2 = __asan_report_load4(v3 + 48);
        v15 = std::vector<std::shared_ptr<Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig>>>>::operator[](
                p_static_group_load_mesh_vec,
                *(unsigned int *)(v3 + 48));
        std::shared_ptr<Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig>>>::operator=(
          v15,
          (const std::shared_ptr<Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig> > > *)(v3 + 64));
        v13 = 1;
      }
      std::shared_ptr<Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig>>>::~shared_ptr((std::shared_ptr<Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig> > > *const)(v3 + 64));
      v8 = v13 == 1;
    }
    else
    {
      *(_DWORD *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 96) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 127) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 127) >> 3) + 0x7FFF8000) )
      {
        *(double *)&v2 = __asan_report_store_n(v3 + 96, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 96),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene_script_config.cpp",
        "initStaticGroupLoadMesh",
        483);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
             v6,
             (const char (*)[32])"grid width is zero,vision_type:");
      common::milog::MiLogStream::operator<<<data::VisionLevelType,(data::VisionLevelType*)0>(
        v7,
        (const data::VisionLevelType *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
      *(_DWORD *)(((v3 + 96) >> 3) + 0x7FFF8000) = -117901064;
      v1 = -1;
      v8 = 0;
    }
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_WORD *)(((v3 + 64) >> 3) + 0x7FFF8000) = -1800;
    if ( !v8 )
      goto LABEL_31;
  }
  v1 = 0;
LABEL_31:
  result = v1;
  if ( v20 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
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
  return result;
};

// Line 502: range 000000000CD15358-000000000CD155C6
const SceneScriptConfig *__fastcall SceneScriptConfig::getStaticGroupMeshPtr(
        const SceneScriptConfig *const this,
        const std::vector<std::shared_ptr<Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig> > >> *vision_level,
        int a3)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  const std::shared_ptr<Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig> > > *v7; // rax
  char v10[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 16 vision_level:501 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = SceneScriptConfig::getStaticGroupMeshPtr;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862723] = -202116109;
  *(_DWORD *)(v3 + 48) = a3;
  if ( std::vector<std::shared_ptr<Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig>>>>::size(vision_level + 25) > *(int *)(v3 + 48) )
  {
    v7 = std::vector<std::shared_ptr<Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig>>>>::operator[](
           vision_level + 25,
           *(unsigned int *)(v3 + 48));
    std::shared_ptr<Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig>>>::shared_ptr(
      (std::shared_ptr<Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig> > > *const)this,
      v7);
  }
  else
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene_script_config.cpp",
      "getStaticGroupMeshPtr",
      505);
    v6 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[39])"vision level is too large,vision_type:");
    common::milog::MiLogStream::operator<<<data::VisionLevelType,(data::VisionLevelType*)0>(
      v6,
      (const data::VisionLevelType *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    *(_DWORD *)(((v3 + 64) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig>>>::shared_ptr(
      (std::shared_ptr<Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig> > > *const)this,
      0LL);
  }
  if ( v10 == (char *)v3 )
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
  return this;
};

// Line 512: range 000000000CD155C8-000000000CD159C2
// local variable allocation has failed, the output may be wrong!
uint32_t __cdecl SceneScriptConfig::getGridLoadRange(
        const SceneScriptConfig *const this,
        data::VisionLevelType vision_range_level,
        data::VisionLevelType grid_width_level)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  int VisionRange; // edx
  char v7; // al
  __int64 v8; // rsi
  int GridWidth; // edx
  char v10; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  unsigned int v16; // ecx
  uint32_t result; // eax
  int grid_load_range; // [rsp+1Ch] [rbp-A4h]
  char v20[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 16 vision_range:513 48 4 14 grid_width:514 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = SceneScriptConfig::getGridLoadRange;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->config >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->config);
  *(_QWORD *)&vision_range_level = (unsigned int)vision_range_level;
  VisionRange = HK4EDesignConfig::findVisionRange(this->config, vision_range_level);
  v7 = *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(vision_range_level) = v7 != 0;
    __asan_report_store4(v3 + 32, *(_QWORD *)&vision_range_level);
  }
  *(_DWORD *)(v3 + 32) = VisionRange;
  if ( *(_BYTE *)(((unsigned __int64)&this->config >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->config);
  v8 = (unsigned int)grid_width_level;
  GridWidth = HK4EDesignConfig::findGridWidth(this->config, grid_width_level);
  v10 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(v8) = v10 != 0;
    __asan_report_store4(v3 + 48, v8);
  }
  *(_DWORD *)(v3 + 48) = GridWidth;
  grid_load_range = 0;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v3 + 32);
  if ( *(_DWORD *)(v3 + 32) && *(_DWORD *)(v3 + 48) )
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v3 + 32);
    v16 = *(_DWORD *)(v3 + 32);
    if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v3 + 48);
    grid_load_range = (int)std::ceil<unsigned int>(v16 / *(_DWORD *)(v3 + 48));
  }
  else
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene_script_config.cpp",
      "getGridLoadRange",
      519);
    v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 64),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v12 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v11, (const char (*)[14])"vision_range:");
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 32));
    v14 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v13, (const char (*)[13])" grid_width:");
    v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v15, (const char (*)[9])" is zero");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
  }
  if ( !grid_load_range )
    grid_load_range = 1;
  result = grid_load_range;
  if ( v20 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 531: range 000000000CD159C4-000000000CD15E7A
__int64 __fastcall SceneScriptConfig::getCoordinate(
        const SceneScriptConfig *const this,
        data::VisionLevelType vision_level,
        Vector2 pos)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  double v9; // xmm0_8
  double v10; // xmm0_8
  signed int grid_width; // [rsp+24h] [rbp-10Ch]
  int coord_x; // [rsp+28h] [rbp-108h]
  char v13[256]; // [rsp+30h] [rbp-100h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 4 16 vision_level:530 64 8 9 <unknown> 96 8 9 <unknown> 128 8 7 pos:530 160 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = SceneScriptConfig::getCoordinate;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862726] = -202116109;
  *(_DWORD *)(v3 + 48) = vision_level;
  *(Vector2 *)(v3 + 128) = pos;
  if ( *(_BYTE *)(((unsigned __int64)&this->config >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->config);
  grid_width = HK4EDesignConfig::findGridWidth(this->config, (data::VisionLevelType)*(_DWORD *)(v3 + 48));
  if ( grid_width )
  {
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) != 0
      && (char)(((v3 + 0x80) & 7) + 3) >= *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v3 + 128);
    }
    LODWORD(v9) = *(_DWORD *)(v3 + 128);
    if ( *(_BYTE *)(((unsigned __int64)&this->grid_map_begin_pos >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->grid_map_begin_pos >> 3)
                                                          + 0x7FFF8000) )
    {
      v9 = __asan_report_load4(&this->grid_map_begin_pos);
    }
    coord_x = (int)(float)((float)(*(float *)&v9 - this->grid_map_begin_pos.x) / (float)grid_width);
    if ( *(_BYTE *)(((v3 + 132) >> 3) + 0x7FFF8000) != 0
      && (char)(((v3 - 124) & 7) + 3) >= *(_BYTE *)(((v3 + 132) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v3 + 132);
    }
    LODWORD(v10) = *(_DWORD *)(v3 + 132);
    if ( *(_BYTE *)(((unsigned __int64)&this->grid_map_begin_pos.y >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->grid_map_begin_pos.y >> 3) + 0x7FFF8000) <= 3 )
    {
      v10 = __asan_report_load4(&this->grid_map_begin_pos.y);
    }
    Coordinate::Coordinate(
      (Coordinate *const)(v3 + 96),
      coord_x,
      (int)(float)((float)(*(float *)&v10 - this->grid_map_begin_pos.y) / (float)grid_width));
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 96);
    result = *(_QWORD *)(v3 + 96);
  }
  else
  {
    if ( *(char *)(((v3 + 160) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 160, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 160),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene_script_config.cpp",
      "getCoordinate",
      535);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v3 + 160),
           (const char (*)[16])"[CONFIG_ERROR] ");
    v7 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           v6,
           (const char (*)[33])"grid_width is zero,vision_level:");
    common::milog::MiLogStream::operator<<<data::VisionLevelType,(data::VisionLevelType*)0>(
      v7,
      (const data::VisionLevelType *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
    *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = -117901064;
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 0;
    Coordinate::Coordinate((Coordinate *const)(v3 + 64), 0, 0);
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 64);
    result = *(_QWORD *)(v3 + 64);
  }
  if ( v13 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
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
  return result;
};

// Line 545: range 000000000CD15E7C-000000000CD160E6
__int64 __fastcall SceneScriptConfig::isCoordinateChanged(
        const SceneScriptConfig *const this,
        Vector2 last_pos,
        Vector2 new_pos,
        char *a4)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  bool v7; // al
  __int64 result; // rax
  size_t index; // [rsp+28h] [rbp-C8h]
  char v10[192]; // [rsp+30h] [rbp-C0h] BYREF
  Vector2 v11; // 0:xmm0_8.8
  Vector2 v12; // 0:xmm0_8.8

  v4 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 32 8 9 <unknown> 64 8 9 <unknown> 96 8 12 last_pos:544 128 8 11 new_pos:544";
  *(_QWORD *)(v4 + 16) = SceneScriptConfig::isCoordinateChanged;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -202116352;
  *(Vector2 *)(v4 + 96) = last_pos;
  *(Vector2 *)(v4 + 128) = new_pos;
  for ( index = 0LL; index <= 1; ++index )
  {
    *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 64, a4);
    v11 = *(Vector2 *)(v4 + 128);
    *(_QWORD *)(v4 + 64) = SceneScriptConfig::getCoordinate(this, (data::VisionLevelType)index, v11);
    *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 32, (unsigned int)index);
    v12 = *(Vector2 *)(v4 + 96);
    *(_QWORD *)(v4 + 32) = SceneScriptConfig::getCoordinate(this, (data::VisionLevelType)index, v12);
    a4 = (char *)(v4 + 64);
    v7 = operator!=((const Coordinate *)(v4 + 32), (const Coordinate *)(v4 + 64));
    *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( v7 )
    {
      result = 1LL;
      goto LABEL_14;
    }
  }
  result = 0LL;
LABEL_14:
  if ( v10 == (char *)v4 )
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

// Line 559: range 000000000CD160E8-000000000CD161CE
uint32_t __fastcall SceneScriptConfig::fillGroupToLoadMesh(
        SceneScriptConfig *const this,
        uint32_t group_id,
        data::VisionLevelType vision_level,
        Coordinate coord,
        uint32_t load_range)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // r12
  uint32_t result; // eax
  char v12[96]; // [rsp+20h] [rbp-60h] BYREF
  Coordinate v13; // 0:rcx.8
  Coordinate v14; // 0:r8.8

  v5 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_0(64LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 8 9 coord:558";
  *(_QWORD *)(v5 + 16) = SceneScriptConfig::fillGroupToLoadMesh;
  v7 = v5 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202116352;
  *(Coordinate *)(v5 + 32) = coord;
  v13 = *(Coordinate *)(v5 + 32);
  v14 = v13;
  result = SceneScriptConfig::fillGroupToLoadMesh(this, group_id, vision_level, v13, v14, load_range);
  if ( v12 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 564: range 000000000CD161D0-000000000CD16603
__int64 __fastcall SceneScriptConfig::fillGroupToLoadMesh(
        SceneScriptConfig *const this,
        uint32_t group_id,
        int vision_level,
        Coordinate coord_left,
        Coordinate coord_right,
        uint32_t load_range)
{
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  uint32_t v9; // r14d
  Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig> > *v10; // rax
  std::vector<unsigned int>::reference v11; // rax
  _DWORD *v12; // rdx
  char v13; // al
  __int64 result; // rax
  uint32_t total_grid; // [rsp+30h] [rbp-F0h]
  signed int x; // [rsp+34h] [rbp-ECh]
  signed int y; // [rsp+38h] [rbp-E8h]
  SceneGridConfig *grid_config_ptr; // [rsp+40h] [rbp-E0h]
  char v23[208]; // [rsp+50h] [rbp-D0h] BYREF

  v6 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_2(160LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "4 48 4 12 group_id:563 64 8 14 coord_left:563 96 8 15 coord_right:563 128 16 30 static_group_load_mesh_ptr:566";
  *(_QWORD *)(v6 + 16) = SceneScriptConfig::fillGroupToLoadMesh;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234556943;
  v8[536862722] = -218959360;
  v8[536862723] = -218959360;
  v8[536862724] = -202178560;
  *(_DWORD *)(v6 + 48) = group_id;
  *(Coordinate *)(v6 + 64) = coord_left;
  *(Coordinate *)(v6 + 96) = coord_right;
  total_grid = 0;
  if ( *(_WORD *)(((v6 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  SceneScriptConfig::getStaticGroupMeshPtr(
    (const SceneScriptConfig *const)(v6 + 128),
    (const std::vector<std::shared_ptr<Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig> > >> *)this,
    vision_level);
  if ( std::operator==<Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig>>>(
         (const std::shared_ptr<Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig> > > *)(v6 + 128),
         0LL) )
  {
    v9 = 0;
  }
  else
  {
    if ( *(_BYTE *)(((v6 + 64) >> 3) + 0x7FFF8000) != 0
      && (char)(((v6 + 64) & 7) + 3) >= *(_BYTE *)(((v6 + 64) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6 + 64);
    }
    for ( x = *(_DWORD *)(v6 + 64) - load_range; ; ++x )
    {
      if ( *(_BYTE *)(((v6 + 96) >> 3) + 0x7FFF8000) != 0
        && (char)(((v6 + 96) & 7) + 3) >= *(_BYTE *)(((v6 + 96) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v6 + 96);
      }
      if ( x > (int)(*(_DWORD *)(v6 + 96) + load_range) )
        break;
      if ( *(_BYTE *)(((v6 + 68) >> 3) + 0x7FFF8000) != 0
        && (char)(((v6 + 68) & 7) + 3) >= *(_BYTE *)(((v6 + 68) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v6 + 68);
      }
      for ( y = *(_DWORD *)(v6 + 68) - load_range; ; ++y )
      {
        if ( *(_BYTE *)(((v6 + 100) >> 3) + 0x7FFF8000) != 0
          && (char)(((v6 + 100) & 7) + 3) >= *(_BYTE *)(((v6 + 100) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v6 + 100);
        }
        if ( y > (int)(*(_DWORD *)(v6 + 100) + load_range) )
          break;
        v10 = std::__shared_ptr_access<Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 128));
        grid_config_ptr = Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig>>::getGrid(v10, x, y);
        if ( grid_config_ptr )
        {
          if ( std::vector<unsigned int>::empty(&grid_config_ptr->group_id_vec) )
            goto LABEL_25;
          v11 = std::vector<unsigned int>::back(&grid_config_ptr->group_id_vec);
          v12 = v11;
          if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v11);
          }
          if ( *v12 == *(_DWORD *)(v6 + 48) )
            v13 = 0;
          else
LABEL_25:
            v13 = 1;
          if ( v13 )
          {
            std::vector<unsigned int>::push_back(
              &grid_config_ptr->group_id_vec,
              (const std::vector<unsigned int>::value_type *)(v6 + 48));
            ++total_grid;
          }
        }
      }
    }
    v9 = total_grid;
  }
  std::shared_ptr<Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig>>>::~shared_ptr((std::shared_ptr<Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig> > > *const)(v6 + 128));
  result = v9;
  if ( v23 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 595: range 000000000CD16604-000000000CD182E3
void __cdecl SceneScriptConfig::calGroupLoadGrid(
        SceneScriptConfig *const this,
        HK4EDesignConfig *config,
        const GroupInfoScriptConfig *info_config,
        GroupScriptConfig *script_config)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  uint32_t group_id; // ecx
  char v8; // al
  __int64 v9; // rsi
  uint32_t Mesh; // ecx
  char v11; // dl
  std::tuple_element<0,std::pair<unsigned int const,MonsterScriptConfig> >::type *v12; // rsi
  data::MonsterExcelConfigMgrBase *p_monster_config_mgr; // rcx
  uint32_t *p_monster_id; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rdx
  int v21; // edx
  data::VisionLevelType VisionLevel; // ecx
  uint32_t v23; // edi
  uint32_t v24; // ecx
  char v25; // dl
  int v26; // edx
  char *v27; // rsi
  uint32_t v28; // edi
  uint32_t v29; // esi
  uint32_t v30; // ecx
  std::tuple_element<0,std::pair<unsigned int const,GadgetScriptConfig> >::type *v31; // rsi
  data::GadgetExcelConfigMgrBase *p_gadget_config_mgr; // rcx
  uint32_t *p_gadget_id; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rdx
  int v40; // edx
  data::VisionLevelType v41; // ecx
  uint32_t v42; // edi
  uint32_t v43; // ecx
  char v44; // dl
  int v45; // edx
  data::RegionShape *p_shape; // rax
  __int64 v47; // rsi
  double v48; // xmm0_8
  double v49; // xmm0_8
  uint32_t v50; // esi
  int v51; // ecx
  HK4EDesignConfig *configa; // [rsp+10h] [rbp-450h]
  float x_size; // [rsp+2Ch] [rbp-434h]
  float z_size; // [rsp+30h] [rbp-430h]
  int grid_width_level; // [rsp+34h] [rbp-42Ch]
  uint32_t vs; // [rsp+40h] [rbp-420h]
  uint32_t vs_1; // [rsp+48h] [rbp-418h]
  uint32_t vs_0; // [rsp+4Ch] [rbp-414h]
  std::unordered_map<unsigned int,MonsterScriptConfig> *__for_range; // [rsp+50h] [rbp-410h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,MonsterScriptConfig>,false,false>::reference v63; // [rsp+58h] [rbp-408h]
  std::tuple_element<0,std::pair<unsigned int const,MonsterScriptConfig> >::type *config_id; // [rsp+60h] [rbp-400h]
  std::tuple_element<1,const std::pair<unsigned int const,MonsterScriptConfig> >::type *monster_config; // [rsp+68h] [rbp-3F8h]
  std::unordered_map<unsigned int,NpcScriptConfig> *__for_range_0; // [rsp+78h] [rbp-3E8h]
  std::unordered_map<unsigned int,GadgetScriptConfig> *__for_range_1; // [rsp+80h] [rbp-3E0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false>::reference v68; // [rsp+88h] [rbp-3D8h]
  std::tuple_element<0,std::pair<unsigned int const,GadgetScriptConfig> >::type *config_id_1; // [rsp+90h] [rbp-3D0h]
  std::tuple_element<1,const std::pair<unsigned int const,GadgetScriptConfig> >::type *gadget_config; // [rsp+98h] [rbp-3C8h]
  std::unordered_map<unsigned int,RegionScriptConfig> *__for_range_2; // [rsp+A8h] [rbp-3B8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,RegionScriptConfig>,false,false>::reference v72; // [rsp+B0h] [rbp-3B0h]
  std::tuple_element<1,const std::pair<unsigned int const,RegionScriptConfig> >::type *region_config; // [rsp+C0h] [rbp-3A0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,NpcScriptConfig>,false,false>::reference v74; // [rsp+C8h] [rbp-398h]
  std::tuple_element<1,const std::pair<unsigned int const,NpcScriptConfig> >::type *npc_config; // [rsp+D8h] [rbp-388h]
  char v76[896]; // [rsp+E0h] [rbp-380h] BYREF
  Coordinate v77; // 0:rcx.8
  Coordinate v78; // 0:rcx.8
  Coordinate v79; // 0:rcx.8
  Coordinate v80; // 0:rcx.8
  Coordinate v81; // 0:rcx.8
  Coordinate v82; // 0:r8.8
  Vector2 v83; // 0:xmm0_8.8
  Vector2 v84; // 0:xmm0_8.8
  Vector2 v85; // 0:xmm0_8.8
  Vector2 v86; // 0:xmm0_8.8
  Vector2 v87; // 0:xmm0_8.8
  Vector2 v88; // 0:xmm0_8.8

  configa = config;
  v4 = (unsigned __int64)v76;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(864LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "24 48 4 12 group_id:597 64 8 9 coord:603 96 8 9 <unknown> 128 8 15 __for_begin:606 160 8 13 __fo"
                        "r_end:606 192 8 17 monster_coord:617 224 8 9 <unknown> 256 8 15 __for_begin:621 288 8 13 __for_e"
                        "nd:621 320 8 13 npc_coord:624 352 8 9 <unknown> 384 8 15 __for_begin:628 416 8 13 __for_end:628 "
                        "448 8 16 gadget_coord:639 480 8 9 <unknown> 512 8 15 __for_begin:643 544 8 13 __for_end:643 576 "
                        "8 14 left_coord:665 608 8 9 <unknown> 640 8 15 right_coord:666 672 8 9 <unknown> 704 12 13 group"
                        "_pos:596 736 32 9 <unknown> 800 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = SceneScriptConfig::calGroupLoadGrid;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -218959360;
  v6[536862725] = -218959360;
  v6[536862726] = -218959360;
  v6[536862727] = -218959360;
  v6[536862728] = -218959360;
  v6[536862729] = -218959360;
  v6[536862730] = -218959360;
  v6[536862731] = -218959360;
  v6[536862732] = -218959360;
  v6[536862733] = -218959360;
  v6[536862734] = -218959360;
  v6[536862735] = -218959360;
  v6[536862736] = -218959360;
  v6[536862737] = -218959360;
  v6[536862738] = -218959360;
  v6[536862739] = -218959360;
  v6[536862740] = -218959360;
  v6[536862741] = -218959360;
  v6[536862742] = -219020288;
  v6[536862744] = -218959118;
  v6[536862746] = -202116109;
  if ( *(char *)(((v4 + 704) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v4 + 715) >> 3) + 0x7FFF8000) != 0
    && (char)((v4 - 53) & 7) >= *(_BYTE *)(((v4 + 715) >> 3) + 0x7FFF8000) )
  {
    config = (HK4EDesignConfig *)12;
    __asan_report_store_n(v4 + 704, 12LL);
  }
  if ( *(char *)(((unsigned __int64)&info_config->pos >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&info_config->pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)info_config + 19) & 7) >= *(_BYTE *)((((unsigned __int64)&info_config->pos.z + 3) >> 3)
                                                             + 0x7FFF8000) )
  {
    config = (HK4EDesignConfig *)12;
    __asan_report_load_n(&info_config->pos, 12LL);
  }
  *(_QWORD *)(v4 + 704) = *(_QWORD *)&info_config->pos.x;
  *(float *)(v4 + 712) = info_config->pos.z;
  if ( *(_BYTE *)(((unsigned __int64)info_config >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)info_config >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(info_config);
  }
  group_id = info_config->group_id;
  v8 = *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000);
  if ( v8 != 0 && v8 <= 3 )
  {
    LOBYTE(config) = v8 != 0;
    __asan_report_store4(v4 + 48, config);
  }
  *(_DWORD *)(v4 + 48) = group_id;
  if ( *(_BYTE *)(((unsigned __int64)&script_config->max_vision_range_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&script_config->max_vision_range_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&script_config->max_vision_range_level);
  }
  grid_width_level = script_config->max_vision_range_level;
  Vector2::Vector2((Vector2 *const)(v4 + 96), (const Vector3 *)(v4 + 704));
  if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 64, v4 + 704);
  if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v4 + 96);
  v83 = *(Vector2 *)(v4 + 96);
  *(_QWORD *)(v4 + 64) = SceneScriptConfig::getCoordinate(this, (data::VisionLevelType)grid_width_level, v83);
  *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v4 + 48);
  v9 = *(unsigned int *)(v4 + 48);
  if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v4 + 64);
  v77 = *(Coordinate *)(v4 + 64);
  Mesh = SceneScriptConfig::fillGroupToLoadMesh(this, v9, (data::VisionLevelType)grid_width_level, v77, 1u);
  v11 = *(_BYTE *)(((unsigned __int64)&script_config->grid_num >> 3) + 0x7FFF8000);
  LOBYTE(v9) = v11 != 0;
  if ( v11 != 0 && (char)((((_BYTE)script_config - 52) & 7) + 3) >= v11 )
    __asan_report_load4(&script_config->grid_num);
  script_config->grid_num += Mesh;
  __for_range = &script_config->monster_config_map;
  *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 128, v9);
  *(std::unordered_map<unsigned int,MonsterScriptConfig>::iterator *)(v4 + 128) = std::unordered_map<unsigned int,MonsterScriptConfig>::begin(__for_range);
  *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 160, v9);
  *(std::unordered_map<unsigned int,MonsterScriptConfig>::iterator *)(v4 + 160) = std::unordered_map<unsigned int,MonsterScriptConfig>::end(__for_range);
  while ( 1 )
  {
    v12 = (std::tuple_element<0,std::pair<unsigned int const,MonsterScriptConfig> >::type *)(v4 + 160);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,MonsterScriptConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,MonsterScriptConfig>,false> *)(v4 + 128),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,MonsterScriptConfig>,false> *)(v4 + 160)) )
      break;
    v63 = std::__detail::_Node_iterator<std::pair<unsigned int const,MonsterScriptConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,MonsterScriptConfig>,false,false> *const)(v4 + 128));
    config_id = std::get<0ul,unsigned int const,MonsterScriptConfig>(v63);
    monster_config = (std::tuple_element<1,const std::pair<unsigned int const,MonsterScriptConfig> >::type *)std::get<1ul,unsigned int const,MonsterScriptConfig>(v63);
    p_monster_config_mgr = &configa->txt_config_mgr.monster_config_mgr;
    p_monster_id = &monster_config->monster_id;
    if ( *(_BYTE *)(((unsigned __int64)p_monster_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_monster_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_monster_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_monster_id);
    }
    if ( data::MonsterExcelConfigMgrBase::findMonsterExcelConfig(p_monster_config_mgr, monster_config->monster_id) )
    {
      VisionLevel = MonsterScriptConfig::getVisionLevel(monster_config, &configa->txt_config_mgr);
      vs = SceneScriptConfig::getGridLoadRange(this, VisionLevel, (data::VisionLevelType)grid_width_level);
      *(_BYTE *)(((v4 + 192) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v4 + 224) >> 3) + 0x7FFF8000) = 0;
      Vector2::Vector2((Vector2 *const)(v4 + 224), &monster_config->pos);
      if ( *(_BYTE *)(((v4 + 192) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v4 + 192, &monster_config->pos);
      if ( *(_BYTE *)(((v4 + 224) >> 3) + 0x7FFF8000) )
        __asan_report_load8(v4 + 224);
      v84 = *(Vector2 *)(v4 + 224);
      *(_QWORD *)(v4 + 192) = SceneScriptConfig::getCoordinate(this, (data::VisionLevelType)grid_width_level, v84);
      *(_BYTE *)(((v4 + 224) >> 3) + 0x7FFF8000) = -8;
      v23 = vs + 1;
      if ( *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) <= 3 )
      {
        v23 = v4 + 48;
        __asan_report_load4(v4 + 48);
      }
      v12 = (std::tuple_element<0,std::pair<unsigned int const,MonsterScriptConfig> >::type *)*(unsigned int *)(v4 + 48);
      if ( *(_BYTE *)(((v4 + 192) >> 3) + 0x7FFF8000) )
      {
        v23 = v4 + 192;
        __asan_report_load8(v4 + 192);
      }
      v78 = *(Coordinate *)(v4 + 192);
      v24 = SceneScriptConfig::fillGroupToLoadMesh(
              this,
              (uint32_t)v12,
              (data::VisionLevelType)grid_width_level,
              v78,
              v23);
      v25 = *(_BYTE *)(((unsigned __int64)&script_config->grid_num >> 3) + 0x7FFF8000);
      LOBYTE(v12) = v25 != 0;
      if ( v25 != 0 && (char)((((_BYTE)script_config - 52) & 7) + 3) >= v25 )
        __asan_report_load4(&script_config->grid_num);
      script_config->grid_num += v24;
      v21 = 1;
    }
    else
    {
      *(_DWORD *)(((v4 + 736) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v4 + 736) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 767) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 1) & 7) >= *(_BYTE *)(((v4 + 767) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 736, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 736),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene_script_config.cpp",
        "calGroupLoadGrid",
        612);
      v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v4 + 736),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v16 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
              v15,
              (const char (*)[42])"findMonsterExcelConfig fails. monster_id:");
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &monster_config->monster_id);
      v18 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v17, (const char (*)[12])", group_id:");
      v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v4 + 48));
      v20 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v19, (const char (*)[13])", config_id:");
      v12 = config_id;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, config_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 736));
      *(_DWORD *)(((v4 + 736) >> 3) + 0x7FFF8000) = -117901064;
      v21 = 0;
    }
    *(_BYTE *)(((v4 + 192) >> 3) + 0x7FFF8000) = -8;
    if ( v21 != 1 )
    {
      v26 = 0;
      goto LABEL_51;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,MonsterScriptConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,MonsterScriptConfig>,false,false> *const)(v4 + 128));
  }
  v26 = 1;
LABEL_51:
  *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = -8;
  if ( v26 == 1 )
  {
    __for_range_0 = &script_config->npc_config_map;
    *(_BYTE *)(((v4 + 256) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v4 + 256) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 256, v12);
    *(std::unordered_map<unsigned int,NpcScriptConfig>::iterator *)(v4 + 256) = std::unordered_map<unsigned int,NpcScriptConfig>::begin(__for_range_0);
    *(_BYTE *)(((v4 + 288) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v4 + 288) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 288, v12);
    *(std::unordered_map<unsigned int,NpcScriptConfig>::iterator *)(v4 + 288) = std::unordered_map<unsigned int,NpcScriptConfig>::end(__for_range_0);
    while ( 1 )
    {
      v27 = (char *)(v4 + 288);
      if ( !std::__detail::operator!=<std::pair<unsigned int const,NpcScriptConfig>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,NpcScriptConfig>,false> *)(v4 + 256),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,NpcScriptConfig>,false> *)(v4 + 288)) )
        break;
      v74 = std::__detail::_Node_iterator<std::pair<unsigned int const,NpcScriptConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,NpcScriptConfig>,false,false> *const)(v4 + 256));
      std::get<0ul,unsigned int const,NpcScriptConfig>(v74);
      npc_config = (std::tuple_element<1,const std::pair<unsigned int const,NpcScriptConfig> >::type *)std::get<1ul,unsigned int const,NpcScriptConfig>(v74);
      vs_0 = SceneScriptConfig::getGridLoadRange(this, VISION_LEVEL_NORMAL, (data::VisionLevelType)grid_width_level);
      *(_BYTE *)(((v4 + 320) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v4 + 352) >> 3) + 0x7FFF8000) = 0;
      Vector2::Vector2((Vector2 *const)(v4 + 352), &npc_config->pos);
      if ( *(_BYTE *)(((v4 + 320) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v4 + 320, &npc_config->pos);
      if ( *(_BYTE *)(((v4 + 352) >> 3) + 0x7FFF8000) )
        __asan_report_load8(v4 + 352);
      v85 = *(Vector2 *)(v4 + 352);
      *(_QWORD *)(v4 + 320) = SceneScriptConfig::getCoordinate(this, (data::VisionLevelType)grid_width_level, v85);
      *(_BYTE *)(((v4 + 352) >> 3) + 0x7FFF8000) = -8;
      v28 = vs_0 + 1;
      if ( *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) <= 3 )
      {
        v28 = v4 + 48;
        __asan_report_load4(v4 + 48);
      }
      v29 = *(_DWORD *)(v4 + 48);
      if ( *(_BYTE *)(((v4 + 320) >> 3) + 0x7FFF8000) )
      {
        v28 = v4 + 320;
        __asan_report_load8(v4 + 320);
      }
      v79 = *(Coordinate *)(v4 + 320);
      v30 = SceneScriptConfig::fillGroupToLoadMesh(this, v29, (data::VisionLevelType)grid_width_level, v79, v28);
      if ( *(_BYTE *)(((unsigned __int64)&script_config->grid_num >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)script_config - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&script_config->grid_num >> 3)
                                                                     + 0x7FFF8000) )
      {
        __asan_report_load4(&script_config->grid_num);
      }
      script_config->grid_num += v30;
      *(_BYTE *)(((v4 + 320) >> 3) + 0x7FFF8000) = -8;
      std::__detail::_Node_iterator<std::pair<unsigned int const,NpcScriptConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,NpcScriptConfig>,false,false> *const)(v4 + 256));
    }
    *(_BYTE *)(((v4 + 256) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v4 + 288) >> 3) + 0x7FFF8000) = -8;
    __for_range_1 = &script_config->gadget_config_map;
    *(_BYTE *)(((v4 + 384) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v4 + 384) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 384, v27);
    *(std::unordered_map<unsigned int,GadgetScriptConfig>::iterator *)(v4 + 384) = std::unordered_map<unsigned int,GadgetScriptConfig>::begin(__for_range_1);
    *(_BYTE *)(((v4 + 416) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v4 + 416) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 416, v27);
    *(std::unordered_map<unsigned int,GadgetScriptConfig>::iterator *)(v4 + 416) = std::unordered_map<unsigned int,GadgetScriptConfig>::end(__for_range_1);
    while ( 1 )
    {
      v31 = (std::tuple_element<0,std::pair<unsigned int const,GadgetScriptConfig> >::type *)(v4 + 416);
      if ( !std::__detail::operator!=<std::pair<unsigned int const,GadgetScriptConfig>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GadgetScriptConfig>,false> *)(v4 + 384),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GadgetScriptConfig>,false> *)(v4 + 416)) )
        break;
      v68 = std::__detail::_Node_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false> *const)(v4 + 384));
      config_id_1 = std::get<0ul,unsigned int const,GadgetScriptConfig>(v68);
      gadget_config = (std::tuple_element<1,const std::pair<unsigned int const,GadgetScriptConfig> >::type *)std::get<1ul,unsigned int const,GadgetScriptConfig>(v68);
      p_gadget_config_mgr = &configa->txt_config_mgr.gadget_config_mgr;
      p_gadget_id = &gadget_config->gadget_id;
      if ( *(_BYTE *)(((unsigned __int64)p_gadget_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_gadget_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_gadget_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_gadget_id);
      }
      if ( data::GadgetExcelConfigMgrBase::findGadgetExcelConfig(p_gadget_config_mgr, gadget_config->gadget_id) )
      {
        v41 = GadgetScriptConfig::getVisionLevel(gadget_config, &configa->txt_config_mgr);
        vs_1 = SceneScriptConfig::getGridLoadRange(this, v41, (data::VisionLevelType)grid_width_level);
        *(_BYTE *)(((v4 + 448) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v4 + 480) >> 3) + 0x7FFF8000) = 0;
        Vector2::Vector2((Vector2 *const)(v4 + 480), &gadget_config->pos);
        if ( *(_BYTE *)(((v4 + 448) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v4 + 448, &gadget_config->pos);
        if ( *(_BYTE *)(((v4 + 480) >> 3) + 0x7FFF8000) )
          __asan_report_load8(v4 + 480);
        v86 = *(Vector2 *)(v4 + 480);
        *(_QWORD *)(v4 + 448) = SceneScriptConfig::getCoordinate(this, (data::VisionLevelType)grid_width_level, v86);
        *(_BYTE *)(((v4 + 480) >> 3) + 0x7FFF8000) = -8;
        v42 = vs_1 + 1;
        if ( *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) <= 3 )
        {
          v42 = v4 + 48;
          __asan_report_load4(v4 + 48);
        }
        v31 = (std::tuple_element<0,std::pair<unsigned int const,GadgetScriptConfig> >::type *)*(unsigned int *)(v4 + 48);
        if ( *(_BYTE *)(((v4 + 448) >> 3) + 0x7FFF8000) )
        {
          v42 = v4 + 448;
          __asan_report_load8(v4 + 448);
        }
        v80 = *(Coordinate *)(v4 + 448);
        v43 = SceneScriptConfig::fillGroupToLoadMesh(
                this,
                (uint32_t)v31,
                (data::VisionLevelType)grid_width_level,
                v80,
                v42);
        v44 = *(_BYTE *)(((unsigned __int64)&script_config->grid_num >> 3) + 0x7FFF8000);
        LOBYTE(v31) = v44 != 0;
        if ( v44 != 0 && (char)((((_BYTE)script_config - 52) & 7) + 3) >= v44 )
          __asan_report_load4(&script_config->grid_num);
        script_config->grid_num += v43;
        v40 = 1;
      }
      else
      {
        *(_DWORD *)(((v4 + 800) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v4 + 800) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 831) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 + 63) & 7) >= *(_BYTE *)(((v4 + 831) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 800, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 800),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/scene_script_config.cpp",
          "calGroupLoadGrid",
          634);
        v34 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v4 + 800),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v35 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                v34,
                (const char (*)[40])"findGadgetExcelConfig fails. gadget_id:");
        v36 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, &gadget_config->gadget_id);
        v37 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v36, (const char (*)[12])", group_id:");
        v38 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v37,
                (const unsigned int *)(v4 + 48));
        v39 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v38, (const char (*)[13])", config_id:");
        v31 = config_id_1;
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, config_id_1);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 800));
        *(_DWORD *)(((v4 + 800) >> 3) + 0x7FFF8000) = -117901064;
        v40 = 0;
      }
      *(_BYTE *)(((v4 + 448) >> 3) + 0x7FFF8000) = -8;
      if ( v40 != 1 )
      {
        v45 = 0;
        goto LABEL_96;
      }
      std::__detail::_Node_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false> *const)(v4 + 384));
    }
    v45 = 1;
LABEL_96:
    *(_BYTE *)(((v4 + 384) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v4 + 416) >> 3) + 0x7FFF8000) = -8;
    if ( v45 == 1 )
    {
      __for_range_2 = &script_config->region_config_map;
      *(_BYTE *)(((v4 + 512) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v4 + 512) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v4 + 512, v31);
      *(std::unordered_map<unsigned int,RegionScriptConfig>::iterator *)(v4 + 512) = std::unordered_map<unsigned int,RegionScriptConfig>::begin(__for_range_2);
      *(_BYTE *)(((v4 + 544) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v4 + 544) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v4 + 544, v31);
      *(std::unordered_map<unsigned int,RegionScriptConfig>::iterator *)(v4 + 544) = std::unordered_map<unsigned int,RegionScriptConfig>::end(__for_range_2);
      while ( std::__detail::operator!=<std::pair<unsigned int const,RegionScriptConfig>,false>(
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,RegionScriptConfig>,false> *)(v4 + 512),
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,RegionScriptConfig>,false> *)(v4 + 544)) )
      {
        v72 = std::__detail::_Node_iterator<std::pair<unsigned int const,RegionScriptConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,RegionScriptConfig>,false,false> *const)(v4 + 512));
        std::get<0ul,unsigned int const,RegionScriptConfig>(v72);
        region_config = (std::tuple_element<1,const std::pair<unsigned int const,RegionScriptConfig> >::type *)std::get<1ul,unsigned int const,RegionScriptConfig>(v72);
        x_size = 0.0;
        z_size = 0.0;
        p_shape = &region_config->shape;
        if ( *(_BYTE *)(((unsigned __int64)p_shape >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_shape & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_shape >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(p_shape);
        }
        if ( region_config->shape == REGION_CUBIC )
        {
          if ( *(_BYTE *)(((unsigned __int64)&region_config->cubic_size >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)region_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&region_config->cubic_size >> 3)
                                                                         + 0x7FFF8000) )
          {
            __asan_report_load4(&region_config->cubic_size);
          }
          x_size = region_config->cubic_size.x / 2.0;
          v47 = (((_BYTE)region_config + 20) & 7u) + 3;
          if ( *(_BYTE *)(((unsigned __int64)&region_config->cubic_size.z >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)region_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&region_config->cubic_size.z >> 3)
                                                                         + 0x7FFF8000) )
          {
            __asan_report_load4(&region_config->cubic_size.z);
          }
          z_size = region_config->cubic_size.z / 2.0;
        }
        else
        {
          v47 = (((_BYTE)region_config + 4) & 7u) + 3;
          if ( *(_BYTE *)(((unsigned __int64)&region_config->shape >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)region_config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&region_config->shape >> 3)
                                                                        + 0x7FFF8000) )
          {
            __asan_report_load4(&region_config->shape);
          }
          if ( region_config->shape == REGION_SPHERE )
          {
            if ( *(_BYTE *)(((unsigned __int64)&region_config->sphere_radius >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&region_config->sphere_radius >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&region_config->sphere_radius);
            }
            z_size = region_config->sphere_radius;
            x_size = z_size;
          }
          else
          {
            v47 = (((_BYTE)region_config + 4) & 7u) + 3;
            if ( *(_BYTE *)(((unsigned __int64)&region_config->shape >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)region_config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&region_config->shape >> 3)
                                                                          + 0x7FFF8000) )
            {
              __asan_report_load4(&region_config->shape);
            }
            if ( region_config->shape == REGION_CYLINDER )
            {
              if ( *(_BYTE *)(((unsigned __int64)&region_config->cylinder_radius >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&region_config->cylinder_radius >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&region_config->cylinder_radius);
              }
              z_size = region_config->cylinder_radius;
              x_size = z_size;
            }
            else
            {
              v47 = (((_BYTE)region_config + 4) & 7u) + 3;
              if ( *(_BYTE *)(((unsigned __int64)&region_config->shape >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)region_config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&region_config->shape >> 3)
                                                                            + 0x7FFF8000) )
              {
                __asan_report_load4(&region_config->shape);
              }
              if ( region_config->shape == REGION_POLYGON )
              {
                if ( *(_BYTE *)(((unsigned __int64)&region_config->polygon_aabb_size >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&region_config->polygon_aabb_size >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&region_config->polygon_aabb_size);
                }
                x_size = region_config->polygon_aabb_size.x / 2.0;
                if ( *(_BYTE *)(((unsigned __int64)&region_config->polygon_aabb_size.z >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&region_config->polygon_aabb_size.z >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&region_config->polygon_aabb_size.z);
                }
                z_size = region_config->polygon_aabb_size.z / 2.0;
              }
            }
          }
        }
        *(_BYTE *)(((v4 + 576) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v4 + 608) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((unsigned __int64)&region_config->pos >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&region_config->pos >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&region_config->pos);
        }
        *(float *)&v48 = (float)(region_config->pos.x - x_size) - 1.0;
        if ( *(_BYTE *)(((unsigned __int64)&region_config->pos.z >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&region_config->pos.z >> 3) + 0x7FFF8000) <= 3 )
        {
          v48 = __asan_report_load4(&region_config->pos.z);
        }
        Vector2::Vector2((Vector2 *const)(v4 + 608), *(float *)&v48, (float)(region_config->pos.z - z_size) - 1.0);
        if ( *(_BYTE *)(((v4 + 576) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v4 + 576, v47);
        if ( *(_BYTE *)(((v4 + 608) >> 3) + 0x7FFF8000) )
          __asan_report_load8(v4 + 608);
        v87 = *(Vector2 *)(v4 + 608);
        *(_QWORD *)(v4 + 576) = SceneScriptConfig::getCoordinate(this, (data::VisionLevelType)grid_width_level, v87);
        *(_BYTE *)(((v4 + 608) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v4 + 640) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v4 + 672) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((unsigned __int64)&region_config->pos >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&region_config->pos >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&region_config->pos);
        }
        *(float *)&v49 = (float)(region_config->pos.x + x_size) + 1.0;
        if ( *(_BYTE *)(((unsigned __int64)&region_config->pos.z >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&region_config->pos.z >> 3) + 0x7FFF8000) <= 3 )
        {
          v49 = __asan_report_load4(&region_config->pos.z);
        }
        Vector2::Vector2((Vector2 *const)(v4 + 672), *(float *)&v49, (float)(region_config->pos.z + z_size) + 1.0);
        if ( *(_BYTE *)(((v4 + 640) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v4 + 640, (unsigned int)grid_width_level);
        if ( *(_BYTE *)(((v4 + 672) >> 3) + 0x7FFF8000) )
          __asan_report_load8(v4 + 672);
        v88 = *(Vector2 *)(v4 + 672);
        *(_QWORD *)(v4 + 640) = SceneScriptConfig::getCoordinate(this, (data::VisionLevelType)grid_width_level, v88);
        *(_BYTE *)(((v4 + 672) >> 3) + 0x7FFF8000) = -8;
        if ( *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v4 + 48);
        v50 = *(_DWORD *)(v4 + 48);
        if ( *(_BYTE *)(((v4 + 576) >> 3) + 0x7FFF8000) )
          __asan_report_load8(v4 + 576);
        if ( *(_BYTE *)(((v4 + 640) >> 3) + 0x7FFF8000) )
          __asan_report_load8(v4 + 640);
        v81 = *(Coordinate *)(v4 + 576);
        v82 = *(Coordinate *)(v4 + 640);
        v51 = SceneScriptConfig::fillGroupToLoadMesh(this, v50, grid_width_level, v81, v82, 1u);
        if ( *(_BYTE *)(((unsigned __int64)&script_config->grid_num >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)script_config - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&script_config->grid_num >> 3)
                                                                       + 0x7FFF8000) )
        {
          __asan_report_load4(&script_config->grid_num);
        }
        script_config->grid_num += v51;
        *(_BYTE *)(((v4 + 576) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v4 + 640) >> 3) + 0x7FFF8000) = -8;
        std::__detail::_Node_iterator<std::pair<unsigned int const,RegionScriptConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,RegionScriptConfig>,false,false> *const)(v4 + 512));
      }
    }
  }
  if ( v76 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8064) = 0LL;
    memset(
      (void *)((unsigned __int64)(v6 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v6 + 2147450880 - (((_DWORD)v6 + 2147450888) & 0xFFFFFFF8) + 108) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8068) = -168430091;
  }
};

// Line 673: range 000000000CD182E4-000000000CD186EA
std::vector<unsigned int> *__fastcall SceneScriptConfig::getLoadGroupIdVecFromPos(
        std::vector<unsigned int> *retstr,
        const SceneScriptConfig *const this,
        Vector2 pos)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig> >,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  __int64 v7; // rsi
  unsigned int *M_current; // r15
  unsigned int *v9; // r14
  size_t index; // [rsp+30h] [rbp-100h]
  SceneGridConfig *grid_config_ptr; // [rsp+38h] [rbp-F8h]
  char v14[240]; // [rsp+40h] [rbp-F0h] BYREF
  Vector2 v15; // 0:xmm0_8.8

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 8 9 <unknown> 64 8 9 <unknown> 96 8 9 coord:678 128 8 7 pos:672 160 16 30 static_group_load_mesh_ptr:679";
  *(_QWORD *)(v3 + 16) = SceneScriptConfig::getLoadGroupIdVecFromPos;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -202178560;
  *(Vector2 *)(v3 + 128) = pos;
  std::vector<unsigned int>::vector(retstr);
  for ( index = 0LL; index <= 3; ++index )
  {
    v15 = *(Vector2 *)(v3 + 128);
    *(_QWORD *)(v3 + 96) = SceneScriptConfig::getCoordinate(this, (data::VisionLevelType)index, v15);
    *(_WORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_WORD *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    SceneScriptConfig::getStaticGroupMeshPtr(
      (const SceneScriptConfig *const)(v3 + 160),
      (const std::vector<std::shared_ptr<Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig> > >> *)this,
      index);
    if ( !std::operator==<Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig>>>(
            (const std::shared_ptr<Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig> > > *)(v3 + 160),
            0LL) )
    {
      v6 = std::__shared_ptr_access<Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
      v7 = *(unsigned int *)(v3 + 96);
      grid_config_ptr = Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig>>::findGrid(v6, v7, *(_DWORD *)(v3 + 100));
      if ( grid_config_ptr )
      {
        M_current = std::vector<unsigned int>::end(&grid_config_ptr->group_id_vec)._M_current;
        v9 = std::vector<unsigned int>::begin(&grid_config_ptr->group_id_vec)._M_current;
        *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 32, v7);
        *(std::vector<unsigned int>::iterator *)(v3 + 32) = std::vector<unsigned int>::end(retstr);
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
          (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 64),
          (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 32));
        if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
          __asan_report_load8(v3 + 64);
        std::vector<unsigned int>::insert<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,void>(
          retstr,
          *(std::vector<unsigned int>::const_iterator *)(v3 + 64),
          (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)v9,
          (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current);
        *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
      }
    }
    std::shared_ptr<Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig>>>::~shared_ptr((std::shared_ptr<Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig> > > *const)(v3 + 160));
    *(_WORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = -1800;
  }
  if ( v14 == (char *)v3 )
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
  return retstr;
};

// Line 696: range 000000000CD186EC-000000000CD188FA
const std::vector<std::pair<unsigned int,bool>> *__cdecl SceneScriptConfig::getWeatherGridVec(
        const SceneScriptConfig *const this,
        const Coordinate *coord)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  const std::vector<std::pair<unsigned int,bool>> *p_weather_grid_vec; // r14
  const Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig> > *p_y; // rdi
  int32_t y; // ecx
  const std::vector<std::pair<unsigned int,bool>> *result; // rax
  SceneGridConfig *grid_config_ptr; // [rsp+18h] [rbp-78h]
  char v10[112]; // [rsp+20h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 30 static_group_load_mesh_ptr:697";
  *(_QWORD *)(v2 + 16) = SceneScriptConfig::getWeatherGridVec;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  SceneScriptConfig::getStaticGroupMeshPtr(
    (const SceneScriptConfig *const)(v2 + 32),
    (const std::vector<std::shared_ptr<Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig> > >> *)this,
    0);
  if ( std::operator==<Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig>>>(
         (const std::shared_ptr<Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig> > > *)(v2 + 32),
         0LL) )
  {
    p_weather_grid_vec = 0LL;
  }
  else
  {
    p_y = std::__shared_ptr_access<Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&coord->y >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)coord + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&coord->y >> 3) + 0x7FFF8000) )
    {
      p_y = (const Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig> > *)&coord->y;
      __asan_report_load4(&coord->y);
    }
    y = coord->y;
    if ( *(_BYTE *)(((unsigned __int64)coord >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)coord & 7) + 3) >= *(_BYTE *)(((unsigned __int64)coord >> 3) + 0x7FFF8000) )
    {
      p_y = (const Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig> > *)coord;
      __asan_report_load4(coord);
    }
    grid_config_ptr = Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig>>::findGrid(p_y, coord->x, y);
    if ( grid_config_ptr )
      p_weather_grid_vec = &grid_config_ptr->weather_grid_vec;
    else
      p_weather_grid_vec = 0LL;
  }
  std::shared_ptr<Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig>>>::~shared_ptr((std::shared_ptr<Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig> > > *const)(v2 + 32));
  result = p_weather_grid_vec;
  if ( v10 == (char *)v2 )
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

// Line 711: range 000000000CD188FC-000000000CD18B94
void __cdecl SceneScriptConfig::calOneoffGatherPointTypeGrid(
        SceneScriptConfig *const this,
        HK4EDesignConfig *config,
        const GroupInfoScriptConfig *info_config,
        const GroupScriptConfig *script_config)
{
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false> *v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r13
  bool *p_is_oneoff; // rax
  __int64 v8; // rsi
  __int64 v9; // rdx
  std::unordered_map<unsigned int,GadgetScriptConfig> *__for_range; // [rsp+20h] [rbp-A0h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false>::reference v12; // [rsp+28h] [rbp-98h]
  std::tuple_element<1,const std::pair<unsigned int const,GadgetScriptConfig> >::type *config_0; // [rsp+38h] [rbp-88h]
  char v14[128]; // [rsp+40h] [rbp-80h] BYREF

  v4 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false> *)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false> *)v5;
  }
  v4->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,GadgetScriptConfig>,false>::__node_type *)1102416563;
  v4[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,GadgetScriptConfig>,false>::__node_type *)"2 32 8 15 __for_begin:712 64 8 13 __for_end:712";
  v4[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,GadgetScriptConfig>,false>::__node_type *)SceneScriptConfig::calOneoffGatherPointTypeGrid;
  v6 = (_DWORD *)((unsigned __int64)v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -202116352;
  __for_range = &script_config->gadget_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v4[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v4[4], config);
  v4[4]._M_cur = std::unordered_map<unsigned int,GadgetScriptConfig>::begin(__for_range)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v4[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v4[8], config);
  v4[8]._M_cur = std::unordered_map<unsigned int,GadgetScriptConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,GadgetScriptConfig>,false>(v4 + 4, v4 + 8) )
  {
    v12 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false>::operator*(v4 + 4);
    std::get<0ul,unsigned int const,GadgetScriptConfig>(v12);
    config_0 = (std::tuple_element<1,const std::pair<unsigned int const,GadgetScriptConfig> >::type *)std::get<1ul,unsigned int const,GadgetScriptConfig>(v12);
    p_is_oneoff = &config_0->is_oneoff;
    v8 = ((_BYTE)config_0 + 74) & 7;
    v9 = (*(_BYTE *)(((unsigned __int64)p_is_oneoff >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)p_is_oneoff >> 3) + 0x7FFF8000));
    if ( (_BYTE)v9 )
      __asan_report_load1(p_is_oneoff, v8, v9);
    if ( config_0->is_oneoff )
    {
      if ( *(_BYTE *)(((unsigned __int64)&config_0->point_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config_0 + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_0->point_type >> 3)
                                                                + 0x7FFF8000) )
      {
        __asan_report_load4(&config_0->point_type);
      }
      if ( config_0->point_type )
        SceneScriptConfig::fillOneoffGatherPointTypeToMesh(this, config_0, script_config);
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false>::operator++(v4 + 4);
  }
  if ( v14 == (char *)v4 )
  {
    *(_QWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v4->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,GadgetScriptConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 723: range 000000000CD18B96-000000000CD1944F
void __cdecl SceneScriptConfig::fillOneoffGatherPointTypeToMesh(
        SceneScriptConfig *const this,
        const GadgetScriptConfig *gadget_script_config,
        const GroupScriptConfig *script_config)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  Vector3 *p_pos; // rsi
  Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig> > *v7; // rdi
  int32_t v8; // edx
  common::milog::MiLogStream *v9; // r14
  const char *v10; // rax
  uint32_t config_id; // edx
  std::multimap<float,OneoffGatherPointTypeGridConfig> *v12; // rax
  OneoffGatherPointTypeGridConfig *v13; // r8
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v14; // rax
  uint32_t point_type; // r14d
  char *v16; // rsi
  std::map<std::pair<unsigned int,unsigned int>,unsigned int>::mapped_type *v17; // rax
  uint32_t *v18; // rdx
  char v19; // cl
  std::set<std::pair<unsigned int,unsigned int>> *v20; // r14
  SceneGridConfig *grid_config_ptr; // [rsp+28h] [rbp-198h]
  char v25[400]; // [rsp+30h] [rbp-190h] BYREF
  Vector2 v26; // 0:xmm0_8.8

  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(352LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 32 8 9 coord:729 64 8 9 <unknown> 96 8 20 grid_config_info:736 128 8 9 <unknown> 160 8 9 <unkn"
                        "own> 192 16 30 static_group_load_mesh_ptr:724 224 32 9 <unknown> 288 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = SceneScriptConfig::fillOneoffGatherPointTypeToMesh;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -219021312;
  v5[536862728] = -218959118;
  v5[536862730] = -202116109;
  if ( *(_WORD *)(((v3 + 192) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  SceneScriptConfig::getStaticGroupMeshPtr(
    (const SceneScriptConfig *const)(v3 + 192),
    (const std::vector<std::shared_ptr<Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig> > >> *)this,
    2);
  if ( !std::operator==<Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig>>>(
          (const std::shared_ptr<Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig> > > *)(v3 + 192),
          0LL) )
  {
    p_pos = &gadget_script_config->pos;
    Vector2::Vector2((Vector2 *const)(v3 + 64), &gadget_script_config->pos);
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 32, p_pos);
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 64);
    v26 = *(Vector2 *)(v3 + 64);
    *(_QWORD *)(v3 + 32) = SceneScriptConfig::getCoordinate(this, VISION_LEVEL_REMOTE, v26);
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
    v7 = std::__shared_ptr_access<Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
    if ( *(_BYTE *)(((v3 + 36) >> 3) + 0x7FFF8000) != 0
      && (char)(((v3 + 36) & 7) + 3) >= *(_BYTE *)(((v3 + 36) >> 3) + 0x7FFF8000) )
    {
      v7 = (Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig> > *)(v3 + 36);
      __asan_report_load4(v3 + 36);
    }
    v8 = *(_DWORD *)(v3 + 36);
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
    {
      v7 = (Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig> > *)(v3 + 32);
      __asan_report_load4(v3 + 32);
    }
    grid_config_ptr = Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig>>::getGrid(v7, *(_DWORD *)(v3 + 32), v8);
    if ( grid_config_ptr )
    {
      *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((unsigned __int64)gadget_script_config >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)gadget_script_config >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(gadget_script_config);
      }
      config_id = gadget_script_config->config_id;
      if ( *(_BYTE *)(((unsigned __int64)&script_config->group_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&script_config->group_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&script_config->group_id);
      }
      OneoffGatherPointTypeGridConfig::OneoffGatherPointTypeGridConfig(
        (OneoffGatherPointTypeGridConfig *const)(v3 + 96),
        script_config->group_id,
        config_id);
      v12 = std::unordered_map<unsigned int,std::multimap<float,OneoffGatherPointTypeGridConfig>>::operator[](
              &grid_config_ptr->oneoff_gather_point_type_grid_vec_map,
              &gadget_script_config->point_type);
      std::multimap<float,OneoffGatherPointTypeGridConfig>::emplace<float const&,OneoffGatherPointTypeGridConfig&>(
        v12,
        &gadget_script_config->pos.z,
        (OneoffGatherPointTypeGridConfig *)(v3 + 96),
        &gadget_script_config->pos.z,
        v13);
      v14 = std::unordered_map<unsigned int,unsigned int>::operator[](
              &this->oneoff_gather_point_type_count_map_,
              &gadget_script_config->point_type);
      if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v14);
      }
      ++*v14;
      if ( *(_BYTE *)(((unsigned __int64)&gadget_script_config->point_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)gadget_script_config + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gadget_script_config->point_type >> 3)
                                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(&gadget_script_config->point_type);
      }
      point_type = gadget_script_config->point_type;
      *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
      std::pair<unsigned int,unsigned int>::pair<unsigned int,unsigned int,true>(
        (std::pair<unsigned int,unsigned int> *const)(v3 + 128),
        &script_config->group_id,
        &gadget_script_config->config_id);
      v16 = (char *)(v3 + 128);
      v17 = std::map<std::pair<unsigned int,unsigned int>,unsigned int>::operator[](
              &this->oneoff_gather_group_config_to_point_type_map_,
              (std::map<std::pair<unsigned int,unsigned int>,unsigned int>::key_type *)(v3 + 128));
      v18 = v17;
      v19 = *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000);
      if ( v19 != 0 && (char)(((unsigned __int8)v17 & 7) + 3) >= v19 )
      {
        LOBYTE(v16) = v19 != 0;
        __asan_report_store4(v17, v16);
      }
      *v18 = point_type;
      *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
      v20 = std::unordered_map<unsigned int,std::set<std::pair<unsigned int,unsigned int>>>::operator[](
              &this->oneoff_gather_point_type_to_group_config_set_map_,
              &gadget_script_config->point_type);
      *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
      std::pair<unsigned int,unsigned int>::pair<unsigned int,unsigned int,true>(
        (std::pair<unsigned int,unsigned int> *const)(v3 + 160),
        &script_config->group_id,
        &gadget_script_config->config_id);
      std::set<std::pair<unsigned int,unsigned int>>::insert(
        v20,
        (std::set<std::pair<unsigned int,unsigned int>>::value_type *)(v3 + 160));
      *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    }
    else
    {
      *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 224) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 1) & 7) >= *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 224, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 224),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene_script_config.cpp",
        "fillOneoffGatherPointTypeToMesh",
        733);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 224),
             (const char (*)[16])"[CONFIG_ERROR] ");
      *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 288) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 288, 32LL);
      }
      Coordinate::toString[abi:cxx11]((std::string *)(v3 + 288), (const Coordinate *const)(v3 + 32));
      v10 = (const char *)std::string::c_str(v3 + 288);
      common::milog::MiLogStream::operator()(v9, "Grid not found for Coor: %s", v10);
      std::string::~string((void *)(v3 + 288));
      *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
      *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
    }
  }
  std::shared_ptr<Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig>>>::~shared_ptr((std::shared_ptr<Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig> > > *const)(v3 + 192));
  if ( v25 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = -168430091;
  }
};

// Line 745: range 000000000CD19712-000000000CD19864
void __cdecl SceneScriptConfig::foreachOneoffGatherPointTypeNearPos(
        const SceneScriptConfig *const this,
        const Vector3 *pos,
        uint32_t range,
        uint32_t point_type,
        const std::function<bool(unsigned int,unsigned int)> *func)
{
  std::function<bool(const std::multimap<float,OneoffGatherPointTypeGridConfig>&)> *v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // r12
  char v11[128]; // [rsp+20h] [rbp-80h] BYREF

  v5 = (std::function<bool(const std::multimap<float,OneoffGatherPointTypeGridConfig>&)> *)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = (std::function<bool(const std::multimap<float,OneoffGatherPointTypeGridConfig>&)> *)v6;
  }
  v5->_M_functor._M_unused._M_object = (void *)1102416563;
  *(_QWORD *)&v5->_M_functor._M_pod_data[8] = "1 32 32 9 <unknown>";
  v5->_M_manager = (std::_Function_base::_Manager_type)SceneScriptConfig::foreachOneoffGatherPointTypeNearPos;
  v7 = (unsigned __int64)v5 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450888) = -202116109;
  std::function<bool ()(std::multimap<float,OneoffGatherPointTypeGridConfig> const&)>::function<SceneScriptConfig::foreachOneoffGatherPointTypeNearPos(Vector3 const&,unsigned int,unsigned int,std::function const&<bool ()(unsigned int,unsigned int)>)::{lambda(std::multimap<float,OneoffGatherPointTypeGridConfig> const&)#1},void,void>(
    v5 + 1,
    (SceneScriptConfig::foreachOneoffGatherPointTypeNearPos::<lambda(const OneoffGatherPointTypeGridConfigMap&)>)func);
  SceneScriptConfig::foreachOneoffGatherPointTypeNearPos(this, pos, range, point_type, v5 + 1);
  std::function<bool ()(std::multimap<float,OneoffGatherPointTypeGridConfig> const&)>::~function(v5 + 1);
  if ( v11 == (char *)v5 )
  {
    *(_DWORD *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v5->_M_functor._M_unused._M_object = (void *)1172321806;
    *(_QWORD *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v5 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 746: range 000000000CD19450-000000000CD19710
bool __cdecl SceneScriptConfig::foreachOneoffGatherPointTypeNearPos(Vector3 const&,unsigned int,unsigned int,std::function<bool ()(unsigned int,unsigned int)> const&)const::{lambda(std::multimap<float,OneoffGatherPointTypeGridConfig> const&)#1}::operator()(
        const SceneScriptConfig::foreachOneoffGatherPointTypeNearPos::<lambda(const OneoffGatherPointTypeGridConfigMap&)> *const __closure,
        const OneoffGatherPointTypeGridConfigMap *grid_config_map)
{
  bool v2; // r15
  std::_Rb_tree_const_iterator<std::pair<float const,OneoffGatherPointTypeGridConfig> >::_Self *v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  const std::function<bool(unsigned int,unsigned int)> *func; // rcx
  unsigned int config_id; // esi
  int v8; // eax
  bool result; // al
  std::_Rb_tree_const_iterator<std::pair<float const,OneoffGatherPointTypeGridConfig> >::reference v10; // [rsp+18h] [rbp-A8h]
  std::tuple_element<1,const std::pair<float const,OneoffGatherPointTypeGridConfig> >::type *grid_info; // [rsp+28h] [rbp-98h]
  char v12[144]; // [rsp+30h] [rbp-90h] BYREF

  v3 = (std::_Rb_tree_const_iterator<std::pair<float const,OneoffGatherPointTypeGridConfig> >::_Self *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = (std::_Rb_tree_const_iterator<std::pair<float const,OneoffGatherPointTypeGridConfig> >::_Self *)v4;
  }
  v3->_M_node = (std::_Rb_tree_const_iterator<std::pair<float const,OneoffGatherPointTypeGridConfig> >::_Base_ptr)1102416563;
  v3[1]._M_node = (std::_Rb_tree_const_iterator<std::pair<float const,OneoffGatherPointTypeGridConfig> >::_Base_ptr)"2 32 8 15 __for_begin:748 64 8 13 __for_end:748";
  v3[2]._M_node = (std::_Rb_tree_const_iterator<std::pair<float const,OneoffGatherPointTypeGridConfig> >::_Base_ptr)SceneScriptConfig::foreachOneoffGatherPointTypeNearPos(Vector3 const&,unsigned int,unsigned int,std::function<bool ()(unsigned int,unsigned int)> const&)const::{lambda(std::multimap<float,OneoffGatherPointTypeGridConfig> const&)#1}::operator();
  v5 = (_DWORD *)((unsigned __int64)v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&v3[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v3[4], grid_config_map);
  v3[4]._M_node = std::multimap<float,OneoffGatherPointTypeGridConfig>::begin(grid_config_map)._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&v3[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v3[8], grid_config_map);
  v3[8]._M_node = std::multimap<float,OneoffGatherPointTypeGridConfig>::end(grid_config_map)._M_node;
  while ( std::operator!=(v3 + 4, v3 + 8) )
  {
    v10 = std::_Rb_tree_const_iterator<std::pair<float const,OneoffGatherPointTypeGridConfig>>::operator*(v3 + 4);
    std::get<0ul,float const,OneoffGatherPointTypeGridConfig>(v10);
    grid_info = (std::tuple_element<1,const std::pair<float const,OneoffGatherPointTypeGridConfig> >::type *)std::get<1ul,float const,OneoffGatherPointTypeGridConfig>(v10);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure);
    func = __closure->__func;
    if ( *(_BYTE *)(((unsigned __int64)&grid_info->config_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)grid_info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&grid_info->config_id >> 3)
                                                              + 0x7FFF8000) )
    {
      __asan_report_load4(&grid_info->config_id);
    }
    config_id = grid_info->config_id;
    if ( *(_BYTE *)(((unsigned __int64)grid_info >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)grid_info & 7) + 3) >= *(_BYTE *)(((unsigned __int64)grid_info >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(grid_info);
    }
    if ( !std::function<bool ()(unsigned int,unsigned int)>::operator()(func, grid_info->group_id, config_id) )
    {
      v2 = 0;
      v8 = 0;
      goto LABEL_20;
    }
    std::_Rb_tree_const_iterator<std::pair<float const,OneoffGatherPointTypeGridConfig>>::operator++(v3 + 4);
  }
  v8 = 1;
LABEL_20:
  if ( v8 == 1 )
    v2 = 1;
  result = v2;
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v3->_M_node = (std::_Rb_tree_const_iterator<std::pair<float const,OneoffGatherPointTypeGridConfig> >::_Base_ptr)1172321806;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 760: range 000000000CD19866-000000000CD1A004
void __fastcall SceneScriptConfig::foreachOneoffGatherPointTypeNearPos(
        const SceneScriptConfig *const this,
        const Vector3 *pos,
        uint32_t range,
        uint32_t point_type,
        const std::function<bool(const std::multimap<float,OneoffGatherPointTypeGridConfig>&)> *func)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  std::__shared_ptr_access<Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig> >,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig> >,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rdx
  const int32_t *p_width; // rax
  uint32_t v11; // ecx
  char v12; // al
  __int64 v13; // rsi
  std::multimap<float,OneoffGatherPointTypeGridConfig> *p_second; // rsi
  signed int *v15; // rax
  signed int *v16; // rdx
  uint32_t v17; // ecx
  char v18; // al
  signed int *v19; // rax
  signed int *v20; // rdx
  std::__shared_ptr_access<Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig> >,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  int v22; // eax
  const std::unordered_map<unsigned int,std::multimap<float,OneoffGatherPointTypeGridConfig>> *p_oneoff_gather_point_type_grid_vec_map; // rdx
  const std::unordered_map<unsigned int,std::multimap<float,OneoffGatherPointTypeGridConfig>> *v24; // rdx
  bool v25; // al
  signed int x; // [rsp+24h] [rbp-16Ch]
  signed int y; // [rsp+28h] [rbp-168h]
  int32_t mesh_length; // [rsp+2Ch] [rbp-164h]
  int32_t mesh_width; // [rsp+30h] [rbp-160h]
  const SceneGridConfig *grid_config_ptr; // [rsp+38h] [rbp-158h]
  char v34[336]; // [rsp+40h] [rbp-150h] BYREF
  Vector2 v35; // 0:xmm0_8.8

  v5 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_3(288LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "10 48 4 9 <unknown> 64 4 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 14 point_type:759 1"
                        "28 8 9 <unknown> 160 8 8 iter:779 192 8 9 <unknown> 224 8 9 coord:768 256 16 30 static_group_load_mesh_ptr:761";
  *(_QWORD *)(v5 + 16) = SceneScriptConfig::foreachOneoffGatherPointTypeNearPos;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -234556924;
  v7[536862723] = -234556924;
  v7[536862724] = -218959360;
  v7[536862725] = -218959360;
  v7[536862726] = -218959360;
  v7[536862727] = -218959360;
  v7[536862728] = -202178560;
  *(_DWORD *)(v5 + 112) = point_type;
  if ( *(_WORD *)(((v5 + 256) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  SceneScriptConfig::getStaticGroupMeshPtr(
    (const SceneScriptConfig *const)(v5 + 256),
    (const std::vector<std::shared_ptr<Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig> > >> *)this,
    2);
  if ( !std::operator==<Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig>>>(
          (const std::shared_ptr<Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig> > > *)(v5 + 256),
          0LL) )
  {
    v8 = std::__shared_ptr_access<Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 256));
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(v8);
    }
    mesh_length = v8->length;
    v9 = std::__shared_ptr_access<Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 256));
    p_width = &v9->width;
    if ( *(_BYTE *)(((unsigned __int64)p_width >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_width & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_width >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_width);
    }
    mesh_width = v9->width;
    Vector2::Vector2((Vector2 *const)(v5 + 128), pos);
    if ( *(_BYTE *)(((v5 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v5 + 128);
    v35 = *(Vector2 *)(v5 + 128);
    v13 = 2LL;
    *(_QWORD *)(v5 + 224) = SceneScriptConfig::getCoordinate(this, VISION_LEVEL_REMOTE, v35);
    *(_BYTE *)(((v5 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) = 4;
    v11 = *(_DWORD *)(v5 + 224) - range;
    v12 = *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000);
    LOBYTE(v13) = v12 != 0;
    if ( v12 != 0 && v12 <= 3 )
      __asan_report_store4(v5 + 64, v13);
    *(_DWORD *)(v5 + 64) = v11;
    *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v5 + 48, v13);
    *(_DWORD *)(v5 + 48) = 0;
    p_second = (std::multimap<float,OneoffGatherPointTypeGridConfig> *)(v5 + 64);
    v15 = (signed int *)std::max<int>((const int *)(v5 + 48), (const int *)(v5 + 64));
    v16 = v15;
    if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v15);
    }
    x = *v16;
    *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) = -8;
    while ( x <= (int)(*(_DWORD *)(v5 + 224) + range) && x < mesh_length )
    {
      *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) = 4;
      v17 = *(_DWORD *)(v5 + 228) - range;
      v18 = *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000);
      LOBYTE(p_second) = v18 != 0;
      if ( v18 != 0 && v18 <= 3 )
        __asan_report_store4(v5 + 96, p_second);
      *(_DWORD *)(v5 + 96) = v17;
      *(_BYTE *)(((v5 + 80) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((v5 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v5 + 80, p_second);
      *(_DWORD *)(v5 + 80) = 0;
      p_second = (std::multimap<float,OneoffGatherPointTypeGridConfig> *)(v5 + 96);
      v19 = (signed int *)std::max<int>((const int *)(v5 + 80), (const int *)(v5 + 96));
      v20 = v19;
      if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v19);
      }
      y = *v20;
      *(_BYTE *)(((v5 + 80) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) = -8;
      while ( y <= (int)(*(_DWORD *)(v5 + 228) + range) && y < mesh_width )
      {
        v21 = std::__shared_ptr_access<Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 256));
        p_second = (std::multimap<float,OneoffGatherPointTypeGridConfig> *)(unsigned int)x;
        grid_config_ptr = Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig>>::findGrid(v21, x, y);
        if ( grid_config_ptr )
        {
          *(_BYTE *)(((v5 + 160) >> 3) + 0x7FFF8000) = 0;
          p_oneoff_gather_point_type_grid_vec_map = &grid_config_ptr->oneoff_gather_point_type_grid_vec_map;
          if ( *(_BYTE *)(((v5 + 160) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v5 + 160, (unsigned int)x);
          *(std::unordered_map<unsigned int,std::multimap<float,OneoffGatherPointTypeGridConfig>>::const_iterator *)(v5 + 160) = std::unordered_map<unsigned int,std::multimap<float,OneoffGatherPointTypeGridConfig>>::find(p_oneoff_gather_point_type_grid_vec_map, (const std::unordered_map<unsigned int,std::multimap<float,OneoffGatherPointTypeGridConfig>>::key_type *)(v5 + 112));
          *(_BYTE *)(((v5 + 192) >> 3) + 0x7FFF8000) = 0;
          v24 = &grid_config_ptr->oneoff_gather_point_type_grid_vec_map;
          if ( *(_BYTE *)(((v5 + 192) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v5 + 192, v5 + 112);
          *(std::unordered_map<unsigned int,std::multimap<float,OneoffGatherPointTypeGridConfig>>::const_iterator *)(v5 + 192) = std::unordered_map<unsigned int,std::multimap<float,OneoffGatherPointTypeGridConfig>>::end(v24);
          p_second = (std::multimap<float,OneoffGatherPointTypeGridConfig> *)(v5 + 192);
          v25 = std::__detail::operator==<std::pair<unsigned int const,std::multimap<float,OneoffGatherPointTypeGridConfig>>,false>(
                  (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::multimap<float,OneoffGatherPointTypeGridConfig> >,false> *)(v5 + 160),
                  (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::multimap<float,OneoffGatherPointTypeGridConfig> >,false> *)(v5 + 192));
          *(_BYTE *)(((v5 + 192) >> 3) + 0x7FFF8000) = -8;
          if ( v25 )
          {
            v22 = 0;
          }
          else
          {
            p_second = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::multimap<float,OneoffGatherPointTypeGridConfig>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::multimap<float,OneoffGatherPointTypeGridConfig> >,false,false> *const)(v5 + 160))->second;
            if ( !std::function<bool ()(std::multimap<float,OneoffGatherPointTypeGridConfig> const&)>::operator()(
                    func,
                    p_second) )
              v22 = 1;
            else
              v22 = 2;
          }
        }
        else
        {
          v22 = 0;
        }
        *(_BYTE *)(((v5 + 160) >> 3) + 0x7FFF8000) = -8;
        if ( v22 && v22 != 2 )
          goto LABEL_46;
        ++y;
      }
      ++x;
    }
  }
LABEL_46:
  std::shared_ptr<Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig>>>::~shared_ptr((std::shared_ptr<Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig> > > *const)(v5 + 256));
  if ( v34 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8020) = -168430091;
  }
};

// Line 793: range 000000000CD1A006-000000000CD1A1F3
__int64 __fastcall SceneScriptConfig::getOneoffGahterNumByPointType(
        const SceneScriptConfig *const this,
        __int64 point_type)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::unordered_map<unsigned int,unsigned int> *p_oneoff_gather_point_type_count_map; // rax
  const std::unordered_map<unsigned int,unsigned int> *v6; // rax
  bool v7; // al
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v8; // rdx
  unsigned int *p_second; // rax
  __int64 result; // rax
  char v11[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 point_type:792 64 8 8 iter:794 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = SceneScriptConfig::getOneoffGahterNumByPointType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = point_type;
  p_oneoff_gather_point_type_count_map = &this->oneoff_gather_point_type_count_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    p_oneoff_gather_point_type_count_map = (const std::unordered_map<unsigned int,unsigned int> *)__asan_report_store8(
                                                                                                    v2 + 64,
                                                                                                    point_type);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                  p_oneoff_gather_point_type_count_map,
                                                                                  (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->oneoff_gather_point_type_count_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    v6 = (const std::unordered_map<unsigned int,unsigned int> *)__asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,unsigned int>::end(v6);
  v7 = std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    v8 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 64));
    p_second = &v8->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    result = v8->second;
  }
  else
  {
    result = 0LL;
  }
  if ( v11 == (char *)v2 )
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

// Line 803: range 000000000CD1A1F4-000000000CD1A3AF
const std::set<std::pair<unsigned int,unsigned int>> *__fastcall SceneScriptConfig::findOneoffGahterGroupConfigSetByPointType(
        const SceneScriptConfig *const this,
        __int64 point_type)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,std::set<std::pair<unsigned int,unsigned int>>> *p_oneoff_gather_point_type_to_group_config_set_map; // rdx
  std::unordered_map<unsigned int,std::set<std::pair<unsigned int,unsigned int>>> *v6; // rdx
  bool v7; // al
  const std::set<std::pair<unsigned int,unsigned int>> *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 point_type:802 64 8 8 iter:804 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = SceneScriptConfig::findOneoffGahterGroupConfigSetByPointType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = point_type;
  p_oneoff_gather_point_type_to_group_config_set_map = &this->oneoff_gather_point_type_to_group_config_set_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, point_type);
  *(std::unordered_map<unsigned int,std::set<std::pair<unsigned int,unsigned int>>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::set<std::pair<unsigned int,unsigned int>>>::find(p_oneoff_gather_point_type_to_group_config_set_map, (const std::unordered_map<unsigned int,std::set<std::pair<unsigned int,unsigned int>>>::key_type *)(v2 + 48));
  v6 = &this->oneoff_gather_point_type_to_group_config_set_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,std::set<std::pair<unsigned int,unsigned int>>>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,std::set<std::pair<unsigned int,unsigned int>>>::end(v6);
  v7 = std::__detail::operator!=<std::pair<unsigned int const,std::set<std::pair<unsigned int,unsigned int>>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<std::pair<unsigned int,unsigned int>> >,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<std::pair<unsigned int,unsigned int>> >,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<std::pair<unsigned int,unsigned int>>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<std::pair<unsigned int,unsigned int>> >,false,false> *const)(v2 + 64))->second;
  else
    result = 0LL;
  if ( v9 == (char *)v2 )
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

// Line 813: range 000000000CD1A3B0-000000000CD1A66E
__int64 __fastcall SceneScriptConfig::queryOneoffGatherPointTypeByGroupConfigId(
        const SceneScriptConfig *const this,
        uint32_t group_id,
        uint32_t config_id,
        unsigned __int64 point_type)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::map<std::pair<unsigned int,unsigned int>,unsigned int> *p_oneoff_gather_group_config_to_point_type_map; // rdx
  char *v8; // rsi
  bool v9; // al
  std::_Rb_tree_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> >::pointer v10; // rdx
  unsigned int *p_second; // rax
  uint32_t second; // ecx
  char v13; // dl
  __int64 result; // rax
  char v17[208]; // [rsp+20h] [rbp-D0h] BYREF

  v4 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 32 4 12 group_id:812 48 4 13 config_id:812 64 8 8 iter:814 96 8 9 <unknown> 128 8 9 <unknown>";
  *(_QWORD *)(v4 + 16) = SceneScriptConfig::queryOneoffGatherPointTypeByGroupConfigId;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -202116352;
  *(_DWORD *)(v4 + 32) = group_id;
  *(_DWORD *)(v4 + 48) = config_id;
  std::pair<unsigned int,unsigned int>::pair<unsigned int &,unsigned int &,true>(
    (std::pair<unsigned int,unsigned int> *const)(v4 + 96),
    (unsigned int *)(v4 + 32),
    (unsigned int *)(v4 + 48));
  if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 64, v4 + 32);
  *(std::map<std::pair<unsigned int,unsigned int>,unsigned int>::const_iterator *)(v4 + 64) = std::map<std::pair<unsigned int,unsigned int>,unsigned int>::find(
                                                                                                &this->oneoff_gather_group_config_to_point_type_map_,
                                                                                                (const std::map<std::pair<unsigned int,unsigned int>,unsigned int>::key_type *)(v4 + 96));
  *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = 0;
  p_oneoff_gather_group_config_to_point_type_map = &this->oneoff_gather_group_config_to_point_type_map_;
  if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 128, v4 + 96);
  *(std::map<std::pair<unsigned int,unsigned int>,unsigned int>::const_iterator *)(v4 + 128) = std::map<std::pair<unsigned int,unsigned int>,unsigned int>::end(p_oneoff_gather_group_config_to_point_type_map);
  v8 = (char *)(v4 + 128);
  v9 = std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> >::_Self *)(v4 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> >::_Self *)(v4 + 128));
  *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = -8;
  if ( v9 )
  {
    v10 = std::_Rb_tree_const_iterator<std::pair<std::pair const<unsigned int,unsigned int>,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> > *const)(v4 + 64));
    p_second = &v10->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    second = v10->second;
    v13 = *(_BYTE *)((point_type >> 3) + 0x7FFF8000);
    if ( v13 != 0 && (char)((point_type & 7) + 3) >= v13 )
    {
      LOBYTE(v8) = v13 != 0;
      __asan_report_store4(point_type, v8);
    }
    *(_DWORD *)point_type = second;
    result = 1LL;
  }
  else
  {
    result = 0LL;
  }
  if ( v17 == (char *)v4 )
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

// Line 824: range 000000000CD1A670-000000000CD1C5E4
int32_t __cdecl SceneScriptConfig::loadMonstersPool(SceneScriptConfig *const this, LuaScript *lua_script)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  bool v6; // r15
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  int32_t v9; // r15d
  bool v10; // r15
  common::milog::MiLogStream *v11; // rax
  unsigned __int64 v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  char *v18; // rsi
  luabind::adl::object *v19; // rsi
  bool v20; // r15
  common::milog::MiLogStream *v21; // rax
  uint32_t v22; // ecx
  char v23; // al
  bool v24; // r15
  common::milog::MiLogStream *v25; // rax
  bool v26; // r15
  MonsterScriptConfig *v27; // r8
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,MonsterScriptConfig> >,bool> v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  unsigned __int64 v39; // rax
  const LuaScript *lua_scripta; // [rsp+0h] [rbp-7D0h]
  SceneScriptConfig *thisa; // [rsp+8h] [rbp-7C8h]
  int32_t ret; // [rsp+14h] [rbp-7BCh]
  std::vector<luabind::adl::object> *__for_range; // [rsp+18h] [rbp-7B8h]
  luabind::adl::object *pool_obj; // [rsp+20h] [rbp-7B0h]
  std::unordered_map<unsigned int,std::map<unsigned int,MonsterScriptConfig>>::mapped_type *monster_map; // [rsp+28h] [rbp-7A8h]
  std::vector<luabind::adl::object> *__for_range_0; // [rsp+30h] [rbp-7A0h]
  luabind::adl::object *monster_obj; // [rsp+38h] [rbp-798h]
  char v49[1936]; // [rsp+40h] [rbp-790h] BYREF

  thisa = this;
  lua_scripta = lua_script;
  v2 = (unsigned __int64)v49;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1888LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "32 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 1 9"
                        " <unknown> 144 4 11 pool_id:835 160 8 15 __for_begin:833 192 8 13 __for_end:833 224 8 15 __for_b"
                        "egin:860 256 8 13 __for_end:860 288 16 16 monsters_obj:836 320 16 13 affix_obj:903 352 16 27 ser"
                        "ver_global_value_obj:913 384 24 16 pool_obj_vec:825 448 24 19 monster_obj_vec:844 512 32 9 <unkn"
                        "own> 576 32 9 <unknown> 640 32 9 <unknown> 704 32 9 <unknown> 768 32 9 <unknown> 832 32 9 <unkno"
                        "wn> 896 32 9 <unknown> 960 32 9 <unknown> 1024 32 9 <unknown> 1088 32 9 <unknown> 1152 32 9 <unk"
                        "nown> 1216 32 9 <unknown> 1280 32 9 <unknown> 1344 32 9 <unknown> 1408 32 9 <unknown> 1472 344 1"
                        "8 monster_config:862";
  *(_QWORD *)(v2 + 16) = SceneScriptConfig::loadMonstersPool;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234753535;
  v4[536862723] = -234753535;
  v4[536862724] = -234556927;
  v4[536862725] = -218959360;
  v4[536862726] = -218959360;
  v4[536862727] = -218959360;
  v4[536862728] = -218959360;
  v4[536862729] = -219021312;
  v4[536862730] = -219021312;
  v4[536862731] = -219021312;
  v4[536862732] = -234881024;
  v4[536862733] = -218959118;
  v4[536862734] = -234881024;
  v4[536862735] = -218959118;
  v4[536862737] = -218959118;
  v4[536862739] = -218959118;
  v4[536862741] = -218959118;
  v4[536862743] = -218959118;
  v4[536862745] = -218959118;
  v4[536862747] = -218959118;
  v4[536862749] = -218959118;
  v4[536862751] = -218959118;
  v4[536862753] = -218959118;
  v4[536862755] = -218959118;
  v4[536862757] = -218959118;
  v4[536862759] = -218959118;
  v4[536862761] = -218959118;
  v4[536862763] = -218959118;
  v4[536862765] = -218959118;
  v4[536862776] = -218103808;
  v4[536862777] = -202116109;
  v4[536862778] = -202116109;
  std::vector<luabind::adl::object>::vector((std::vector<luabind::adl::object> *const)(v2 + 384));
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 512),
    "pools",
    (const std::allocator<char> *)(v2 + 48));
  v5 = (char *)(v2 + 512);
  v6 = LuaScript::getGlobalVector<luabind::adl::object>(
         lua_scripta,
         (const std::string *)(v2 + 512),
         (std::vector<luabind::adl::object> *)(v2 + 384)) != 0;
  std::string::~string((void *)(v2 + 512));
  *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( v6 )
  {
    *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 576) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 607) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 607) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 576, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 576),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene_script_config.cpp",
      "loadMonstersPool",
      828);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 576),
           (const char (*)[16])"[CONFIG_ERROR] ");
    v8 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           v7,
           (const char (*)[39])"getGlobalVector pools fails, scene_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->scene_id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 576));
    *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = -117901064;
    v9 = -1;
  }
  else
  {
    ret = 0;
    __for_range = (std::vector<luabind::adl::object> *)(v2 + 384);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, v5);
    *(std::vector<luabind::adl::object>::iterator *)(v2 + 160) = std::vector<luabind::adl::object>::begin(__for_range);
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 192, v5);
    *(std::vector<luabind::adl::object>::iterator *)(v2 + 192) = std::vector<luabind::adl::object>::end(__for_range);
    while ( __gnu_cxx::operator!=<luabind::adl::object *,std::vector<luabind::adl::object>>(
              (const __gnu_cxx::__normal_iterator<luabind::adl::object*,std::vector<luabind::adl::object> > *)(v2 + 160),
              (const __gnu_cxx::__normal_iterator<luabind::adl::object*,std::vector<luabind::adl::object> > *)(v2 + 192)) )
    {
      pool_obj = __gnu_cxx::__normal_iterator<luabind::adl::object *,std::vector<luabind::adl::object>>::operator*((const __gnu_cxx::__normal_iterator<luabind::adl::object*,std::vector<luabind::adl::object> > *const)(v2 + 160));
      *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, v2 + 192);
      *(_DWORD *)(v2 + 144) = 0;
      *(_WORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
      luabind::adl::object::object((luabind::adl::object *const)(v2 + 288));
      *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 64);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 640),
        "pool_id",
        (const std::allocator<char> *)(v2 + 64));
      v10 = ScriptUtil::getTableValue<unsigned int,char const(&)[9],luabind::adl::object &>(
              &ScriptUtil::no_exception_instance,
              pool_obj,
              (const std::string *)(v2 + 640),
              (unsigned int *)(v2 + 144),
              (const char (*)[9])"monsters",
              (luabind::adl::object *)(v2 + 288),
              (const char (*)[9])lua_scripta,
              (luabind::adl::object *)thisa) != 0;
      std::string::~string((void *)(v2 + 640));
      *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 64);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( v10 )
      {
        *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 704) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 735) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 735) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 704, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 704),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/scene_script_config.cpp",
          "loadMonstersPool",
          839);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 704),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
          v11,
          (const char (*)[50])"SCRIPT_UTIL.getTableValue pool_id, monsters fails");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 704));
        *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      else
      {
        v12 = ((v2 + 448) >> 3) + 2147450880;
        *(_WORD *)v12 = 0;
        *(_BYTE *)(v12 + 2) = 0;
        std::vector<luabind::adl::object>::vector((std::vector<luabind::adl::object> *const)(v2 + 448));
        if ( ScriptUtil::getTableValueAsVector<luabind::adl::object>(
               &ScriptUtil::no_exception_instance,
               (const luabind::adl::object *)(v2 + 288),
               (std::vector<luabind::adl::object> *)(v2 + 448)) )
        {
          *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 768) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 799) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 799) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 768, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 768),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/scene_script_config.cpp",
            "loadMonstersPool",
            847);
          v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 768),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
            v13,
            (const char (*)[41])"SCRIPT_UTIL.getTableValue monsters fails");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 768));
          *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        else if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::map<unsigned int,MonsterScriptConfig>>,unsigned int>(
                    &thisa->monster_pool_map,
                    (const unsigned int *)(v2 + 144)) )
        {
          *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 832) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 863) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 863) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 832, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 832),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/scene_script_config.cpp",
            "loadMonstersPool",
            855);
          v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 832),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v15 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v14, (const char (*)[7])byte_1A1833A0);
          v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &thisa->scene_id);
          v17 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v16, (const char (*)[24])byte_1A1833E0);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v2 + 144));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 832));
          *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        else
        {
          v18 = (char *)(v2 + 144);
          monster_map = std::unordered_map<unsigned int,std::map<unsigned int,MonsterScriptConfig>>::operator[](
                          &thisa->monster_pool_map,
                          (const std::unordered_map<unsigned int,std::map<unsigned int,MonsterScriptConfig>>::key_type *)(v2 + 144));
          __for_range_0 = (std::vector<luabind::adl::object> *)(v2 + 448);
          *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v2 + 224, v18);
          *(std::vector<luabind::adl::object>::iterator *)(v2 + 224) = std::vector<luabind::adl::object>::begin(__for_range_0);
          *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v2 + 256, v18);
          *(std::vector<luabind::adl::object>::iterator *)(v2 + 256) = std::vector<luabind::adl::object>::end(__for_range_0);
          while ( __gnu_cxx::operator!=<luabind::adl::object *,std::vector<luabind::adl::object>>(
                    (const __gnu_cxx::__normal_iterator<luabind::adl::object*,std::vector<luabind::adl::object> > *)(v2 + 224),
                    (const __gnu_cxx::__normal_iterator<luabind::adl::object*,std::vector<luabind::adl::object> > *)(v2 + 256)) )
          {
            monster_obj = __gnu_cxx::__normal_iterator<luabind::adl::object *,std::vector<luabind::adl::object>>::operator*((const __gnu_cxx::__normal_iterator<luabind::adl::object*,std::vector<luabind::adl::object> > *const)(v2 + 224));
            __asan_unpoison_stack_memory(v2 + 1472, 344LL);
            MonsterScriptConfig::MonsterScriptConfig((MonsterScriptConfig *const)(v2 + 1472));
            *(_DWORD *)(((v2 + 896) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 80);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 896),
              "config_id",
              (const std::allocator<char> *)(v2 + 80));
            v19 = monster_obj;
            v20 = ScriptUtil::getTableValue<unsigned int,char const(&)[11],unsigned int &>(
                    &ScriptUtil::no_exception_instance,
                    monster_obj,
                    (const std::string *)(v2 + 896),
                    (unsigned int *)(v2 + 1472),
                    (const char (*)[11])"monster_id",
                    (unsigned int *)(v2 + 1476),
                    (const char (*)[11])lua_scripta,
                    (unsigned int *)thisa) != 0;
            std::string::~string((void *)(v2 + 896));
            *(_DWORD *)(((v2 + 896) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 80);
            *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
            if ( v20 )
            {
              *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 960) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 991) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 991) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 960, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 960),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/scene_script_config.cpp",
                "loadMonstersPool",
                866);
              v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 960),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                v21,
                (const char (*)[44])"SCRIPT_UTIL.getTableValue monster_obj fails");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 960));
              *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = -117901064;
              ret = -1;
            }
            else
            {
              if ( *(_BYTE *)(((unsigned __int64)&thisa->next_pool_monster_config_id >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&thisa->next_pool_monster_config_id >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&thisa->next_pool_monster_config_id);
              }
              v22 = ++thisa->next_pool_monster_config_id;
              v23 = *(_BYTE *)(((v2 + 1472) >> 3) + 0x7FFF8000);
              if ( v23 != 0 && v23 <= 3 )
              {
                LOBYTE(v19) = v23 != 0;
                __asan_report_store4(v2 + 1472, v19);
              }
              *(_DWORD *)(v2 + 1472) = v22;
              *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 96);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 1024),
                "level",
                (const std::allocator<char> *)(v2 + 96));
              ScriptUtil::getTableValue<unsigned int,char const(&)[8],unsigned int &,char const(&)[15],bool &,char const(&)[8],bool &,char const(&)[9],bool &,char const(&)[8],unsigned int &,char const(&)[9],std::string &,char const(&)[5],unsigned int &,char const(&)[10],unsigned int &,char const(&)[15],unsigned int &,char const(&)[9],unsigned int &,char const(&)[16],unsigned int &,char const(&)[21],unsigned int &,char const(&)[11],unsigned int &,char const(&)[16],unsigned int &,char const(&)[8],unsigned int &,char const(&)[4],unsigned long &,char const(&)[12],unsigned int &,char const(&)[13],unsigned int &,char const(&)[18],unsigned int &,char const(&)[16],bool &>(
                (unsigned int)&ScriptUtil::no_exception_instance,
                (_DWORD)monster_obj,
                v2 + 1024,
                v2 + 1504,
                (unsigned int)"drop_id",
                v2 + 1508,
                (const char (*)[15])"ban_excel_drop",
                (bool *)(v2 + 1512),
                (const char (*)[8])"isElite",
                (bool *)(v2 + 1568),
                (const char (*)[9])"isOneoff",
                (bool *)(v2 + 1569),
                (const char (*)[8])"pose_id",
                (unsigned int *)(v2 + 1572),
                (const char (*)[9])"drop_tag",
                (std::string *)(v2 + 1608),
                (const char (*)[5])"room",
                (unsigned int *)(v2 + 1640),
                (const char (*)[10])"mark_flag",
                (unsigned int *)(v2 + 1652),
                (const char (*)[15])"guest_ban_drop",
                (unsigned int *)(v2 + 1648),
                (const char (*)[9])"title_id",
                (unsigned int *)(v2 + 1656),
                (const char (*)[16])"special_name_id",
                (unsigned int *)(v2 + 1660),
                (const char (*)[21])"oneoff_reset_version",
                (unsigned int *)(v2 + 1664),
                (const char (*)[11])"kill_score",
                (unsigned int *)(v2 + 1668),
                (const char (*)[16])"climate_area_id",
                (unsigned int *)(v2 + 1672),
                (const char (*)[8])"area_id",
                (unsigned int *)(v2 + 1680),
                (const char (*)[4])off_1A183680,
                (unsigned __int64 *)(v2 + 1688),
                (const char (*)[12])"speed_level",
                (unsigned int *)(v2 + 1696),
                (const char (*)[13])"ai_config_id",
                (unsigned int *)(v2 + 1700),
                (const char (*)[18])"sight_group_index",
                (unsigned int *)(v2 + 1676),
                (const char (*)[16])"is_light_config",
                (bool *)(v2 + 1808));
              std::string::~string((void *)(v2 + 1024));
              *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 96);
              *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
              if ( *(_BYTE *)(((v2 + 1504) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1504) >> 3) + 0x7FFF8000) <= 3 )
                __asan_report_load4(v2 + 1504);
              if ( !*(_DWORD *)(v2 + 1504) )
                *(_DWORD *)(v2 + 1504) = 1;
              *(_WORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
              luabind::adl::object::object((luabind::adl::object *const)(v2 + 320));
              *(_DWORD *)(((v2 + 1088) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 112);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 1088),
                "affix",
                (const std::allocator<char> *)(v2 + 112));
              v24 = ScriptUtil::getTableValue(
                      &ScriptUtil::no_exception_instance,
                      monster_obj,
                      (const std::string *)(v2 + 1088),
                      (luabind::adl::object *)(v2 + 320)) == 0;
              std::string::~string((void *)(v2 + 1088));
              *(_DWORD *)(((v2 + 1088) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 112);
              *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
              if ( v24
                && ScriptUtil::getTableValueAsSet<unsigned int>(
                     &ScriptUtil::no_exception_instance,
                     (const luabind::adl::object *)(v2 + 320),
                     (std::set<unsigned int> *)(v2 + 1520)) )
              {
                *(_DWORD *)(((v2 + 1152) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 1152) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 1183) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 1183) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 1152, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 1152),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/scene_script_config.cpp",
                  "loadMonstersPool",
                  908);
                v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 1152),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                  v25,
                  (const char (*)[47])"SCRIPT_UTIL.getTableValueAsSet affix_obj fails");
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1152));
                *(_DWORD *)(((v2 + 1152) >> 3) + 0x7FFF8000) = -117901064;
                ret = -1;
              }
              *(_WORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
              luabind::adl::object::object((luabind::adl::object *const)(v2 + 352));
              *(_DWORD *)(((v2 + 1216) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 128);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 1216),
                "server_global_value_config",
                (const std::allocator<char> *)(v2 + 128));
              v26 = ScriptUtil::getTableValue(
                      &ScriptUtil::no_exception_instance,
                      monster_obj,
                      (const std::string *)(v2 + 1216),
                      (luabind::adl::object *)(v2 + 352)) == 0;
              std::string::~string((void *)(v2 + 1216));
              *(_DWORD *)(((v2 + 1216) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 128);
              *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
              if ( v26 )
              {
                if ( ScriptUtil::getTableValueAsMap<std::string,float>(
                       &ScriptUtil::no_exception_instance,
                       (const luabind::adl::object *)(v2 + 352),
                       (std::map<std::string,float> *)(v2 + 1712)) )
                {
                  *(_DWORD *)(((v2 + 1280) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v2 + 1280) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v2 + 1311) >> 3) + 0x7FFF8000) != 0
                    && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 1311) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v2 + 1280, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v2 + 1280),
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/scene_script_config.cpp",
                    "loadMonstersPool",
                    918);
                  v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v2 + 1280),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
                    v28,
                    (const char (*)[61])"SCRIPT_UTIL.getTableValueAsMap server_global_value_obj fails");
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1280));
                  *(_DWORD *)(((v2 + 1280) >> 3) + 0x7FFF8000) = -117901064;
                  ret = -1;
                }
                *(_DWORD *)(((v2 + 1344) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 1344) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 1375) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 1375) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 1344, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 1344),
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/scene_script_config.cpp",
                  "loadMonstersPool",
                  921);
                v29 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                        (common::milog::MiLogStream *const)(v2 + 1344),
                        (const char (*)[7])" pool:");
                v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v29,
                        (const unsigned int *)(v2 + 144));
                v31 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                        v30,
                        (const char (*)[13])" monster_id:");
                v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v31,
                        (const unsigned int *)(v2 + 1476));
                v33 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v32, (const char (*)[6])" sgv:");
                common::milog::MiLogStream::operator<<<std::string,float>(
                  v33,
                  (const std::map<std::string,float> *)(v2 + 1712));
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1344));
                *(_DWORD *)(((v2 + 1344) >> 3) + 0x7FFF8000) = -117901064;
              }
              v34 = std::map<unsigned int,MonsterScriptConfig>::emplace<unsigned int &,MonsterScriptConfig&>(
                      monster_map,
                      (unsigned int *)(v2 + 1472),
                      (MonsterScriptConfig *)(v2 + 1472),
                      (unsigned int *)(v2 + 1472),
                      v27);
              if ( !v34.second )
              {
                *(_DWORD *)(((v2 + 1408) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 1408) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 1439) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 1439) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 1408, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 1408),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/scene_script_config.cpp",
                  "loadMonstersPool",
                  926);
                v35 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 1408),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v36 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                        v35,
                        (const char (*)[29])"duplicate monster config_id:");
                v37 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v36,
                        (const unsigned int *)(v2 + 1472));
                v38 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                        v37,
                        (const char (*)[11])" in pool: ");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v38,
                  (const unsigned int *)(v2 + 144));
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1408));
                *(_DWORD *)(((v2 + 1408) >> 3) + 0x7FFF8000) = -117901064;
                ret = -1;
              }
              luabind::adl::object::~object((luabind::adl::object *const)(v2 + 352));
              luabind::adl::object::~object((luabind::adl::object *const)(v2 + 320));
            }
            MonsterScriptConfig::~MonsterScriptConfig((MonsterScriptConfig *const)(v2 + 1472));
            __asan_poison_stack_memory(v2 + 1472, 344LL);
            *(_WORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -1800;
            *(_WORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -1800;
            __gnu_cxx::__normal_iterator<luabind::adl::object *,std::vector<luabind::adl::object>>::operator++((__gnu_cxx::__normal_iterator<luabind::adl::object*,std::vector<luabind::adl::object> > *const)(v2 + 224));
          }
          *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
        }
        std::vector<luabind::adl::object>::~vector((std::vector<luabind::adl::object> *const)(v2 + 448));
      }
      luabind::adl::object::~object((luabind::adl::object *const)(v2 + 288));
      *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
      *(_WORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -1800;
      v39 = ((v2 + 448) >> 3) + 2147450880;
      *(_WORD *)v39 = -1800;
      *(_BYTE *)(v39 + 2) = -8;
      __gnu_cxx::__normal_iterator<luabind::adl::object *,std::vector<luabind::adl::object>>::operator++((__gnu_cxx::__normal_iterator<luabind::adl::object*,std::vector<luabind::adl::object> > *const)(v2 + 160));
    }
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
    v9 = ret;
  }
  std::vector<luabind::adl::object>::~vector((std::vector<luabind::adl::object> *const)(v2 + 384));
  if ( v49 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80E4) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 236) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1888LL, v49);
  }
  return v9;
};

// Line 938: range 000000000CD1C5E6-000000000CD1DA3E
int32_t __cdecl SceneScriptConfig::loadVisionTypeMutex(SceneScriptConfig *const this, LuaScript *lua_script)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  bool v6; // r15
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  int32_t v9; // r15d
  unsigned __int64 v10; // rax
  bool v11; // r15
  common::milog::MiLogStream *v12; // rax
  unsigned __int64 v13; // rax
  common::milog::MiLogStream *v14; // rax
  char *v15; // rsi
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  char *v18; // rsi
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v19; // rax
  int *v20; // rdx
  int v21; // ecx
  char v22; // al
  std::unordered_set<unsigned int> *v23; // rax
  std::pair<std::__detail::_Node_iterator<unsigned int,true,false>,bool> v24; // rax
  unsigned int *v25; // r8
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  const LuaScript *lua_scripta; // [rsp+0h] [rbp-4E0h]
  SceneScriptConfig *thisa; // [rsp+8h] [rbp-4D8h]
  int32_t ret; // [rsp+14h] [rbp-4CCh]
  std::vector<luabind::adl::object> *__for_range; // [rsp+18h] [rbp-4C8h]
  luabind::adl::object *mutex_obj; // [rsp+20h] [rbp-4C0h]
  std::vector<unsigned int> *__for_range_0; // [rsp+28h] [rbp-4B8h]
  char v40[1200]; // [rsp+30h] [rbp-4B0h] BYREF

  thisa = this;
  lua_scripta = lua_script;
  v2 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1152LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "23 32 1 9 <unknown> 48 1 9 <unknown> 64 4 22 source_vision_type:950 80 4 22 target_vision_type:9"
                        "71 96 8 15 __for_begin:948 128 8 13 __for_end:948 160 8 15 __for_begin:971 192 8 13 __for_end:97"
                        "1 224 16 26 target_vision_type_obj:951 256 24 17 mutex_obj_vec:939 320 24 12 edge_vec:947 384 24"
                        " 26 target_vision_type_vec:958 448 24 9 cycle:984 512 32 9 <unknown> 576 32 9 <unknown> 640 32 9"
                        " <unknown> 704 32 9 <unknown> 768 32 9 <unknown> 832 32 9 <unknown> 896 32 9 <unknown> 960 32 11"
                        " err_msg:985 1024 32 9 <unknown> 1088 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = SceneScriptConfig::loadVisionTypeMutex;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -234556924;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -218959360;
  v4[536862727] = -219021312;
  v4[536862728] = -234881024;
  v4[536862729] = -218959118;
  v4[536862730] = -234881024;
  v4[536862731] = -218959118;
  v4[536862732] = -234881024;
  v4[536862733] = -218959118;
  v4[536862734] = -234881024;
  v4[536862735] = -218959118;
  v4[536862737] = -218959118;
  v4[536862739] = -218959118;
  v4[536862741] = -218959118;
  v4[536862743] = -218959118;
  v4[536862745] = -218959118;
  v4[536862747] = -218959118;
  v4[536862749] = -218959118;
  v4[536862751] = -218959118;
  v4[536862753] = -218959118;
  v4[536862755] = -202116109;
  std::vector<luabind::adl::object>::vector((std::vector<luabind::adl::object> *const)(v2 + 256));
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 512),
    "mutex_table",
    (const std::allocator<char> *)(v2 + 32));
  v5 = (char *)(v2 + 512);
  v6 = LuaScript::getGlobalVector<luabind::adl::object>(
         lua_scripta,
         (const std::string *)(v2 + 512),
         (std::vector<luabind::adl::object> *)(v2 + 256)) != 0;
  std::string::~string((void *)(v2 + 512));
  *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( v6 )
  {
    *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 576) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 607) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 607) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 576, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 576),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene_script_config.cpp",
      "loadVisionTypeMutex",
      942);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 576),
           (const char (*)[16])"[CONFIG_ERROR] ");
    v8 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
           v7,
           (const char (*)[45])"getGlobalVector mutex_table fails, scene_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->scene_id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 576));
    *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = -117901064;
    v9 = -1;
  }
  else
  {
    ret = 0;
    v10 = ((v2 + 320) >> 3) + 2147450880;
    *(_WORD *)v10 = 0;
    *(_BYTE *)(v10 + 2) = 0;
    std::vector<std::pair<unsigned int,unsigned int>>::vector((std::vector<std::pair<unsigned int,unsigned int>> *const)(v2 + 320));
    __for_range = (std::vector<luabind::adl::object> *)(v2 + 256);
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v5);
    *(std::vector<luabind::adl::object>::iterator *)(v2 + 96) = std::vector<luabind::adl::object>::begin(__for_range);
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, v5);
    *(std::vector<luabind::adl::object>::iterator *)(v2 + 128) = std::vector<luabind::adl::object>::end(__for_range);
    while ( __gnu_cxx::operator!=<luabind::adl::object *,std::vector<luabind::adl::object>>(
              (const __gnu_cxx::__normal_iterator<luabind::adl::object*,std::vector<luabind::adl::object> > *)(v2 + 96),
              (const __gnu_cxx::__normal_iterator<luabind::adl::object*,std::vector<luabind::adl::object> > *)(v2 + 128)) )
    {
      mutex_obj = __gnu_cxx::__normal_iterator<luabind::adl::object *,std::vector<luabind::adl::object>>::operator*((const __gnu_cxx::__normal_iterator<luabind::adl::object*,std::vector<luabind::adl::object> > *const)(v2 + 96));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 64, v2 + 128);
      *(_DWORD *)(v2 + 64) = 0;
      *(_WORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
      luabind::adl::object::object((luabind::adl::object *const)(v2 + 224));
      *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 48);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 640),
        "source",
        (const std::allocator<char> *)(v2 + 48));
      v11 = ScriptUtil::getTableValue<unsigned int,char const(&)[7],luabind::adl::object &>(
              &ScriptUtil::no_exception_instance,
              mutex_obj,
              (const std::string *)(v2 + 640),
              (unsigned int *)(v2 + 64),
              (const char (*)[7])"target",
              (luabind::adl::object *)(v2 + 224),
              (const char (*)[7])lua_scripta,
              (luabind::adl::object *)thisa) != 0;
      std::string::~string((void *)(v2 + 640));
      *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 48);
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( v11 )
      {
        *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 704) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 735) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 735) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 704, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 704),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/scene_script_config.cpp",
          "loadVisionTypeMutex",
          954);
        v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 704),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
          v12,
          (const char (*)[47])"SCRIPT_UTIL.getTableValue source, target fails");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 704));
        *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      else
      {
        v13 = ((v2 + 384) >> 3) + 2147450880;
        *(_WORD *)v13 = 0;
        *(_BYTE *)(v13 + 2) = 0;
        std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 384));
        if ( ScriptUtil::getTableValueAsVector<unsigned int>(
               &ScriptUtil::no_exception_instance,
               (const luabind::adl::object *)(v2 + 224),
               (std::vector<unsigned int> *)(v2 + 384)) )
        {
          *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 768) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 799) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 799) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 768, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 768),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/scene_script_config.cpp",
            "loadVisionTypeMutex",
            961);
          v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 768),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
            v14,
            (const char (*)[52])"SCRIPT_UTIL.getTableValue target_vision_types fails");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 768));
          *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        else
        {
          v15 = (char *)(v2 + 64);
          if ( std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::count(
                 &thisa->region_vision_type_exclude_set_map,
                 (const std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::key_type *)(v2 + 64)) )
          {
            *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 832) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 863) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 863) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 832, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 832),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/scene_script_config.cpp",
              "loadVisionTypeMutex",
              967);
            v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 832),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v17 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                    v16,
                    (const char (*)[30])"duplicate source_vision_type:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v2 + 64));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 832));
            *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
          else
          {
            __for_range_0 = (std::vector<unsigned int> *)(v2 + 384);
            *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v2 + 160, v15);
            *(std::vector<unsigned int>::iterator *)(v2 + 160) = std::vector<unsigned int>::begin(__for_range_0);
            *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v2 + 192, v15);
            *(std::vector<unsigned int>::iterator *)(v2 + 192) = std::vector<unsigned int>::end(__for_range_0);
            while ( 1 )
            {
              v18 = (char *)(v2 + 192);
              if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                      (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 160),
                      (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 192)) )
                break;
              *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 4;
              v19 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v2 + 160));
              v20 = (int *)v19;
              if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v19);
              }
              v21 = *v20;
              v22 = *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000);
              if ( v22 != 0 && v22 <= 3 )
              {
                LOBYTE(v18) = v22 != 0;
                __asan_report_store4(v2 + 80, v18);
              }
              *(_DWORD *)(v2 + 80) = v21;
              v23 = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::operator[](
                      &thisa->region_vision_type_exclude_set_map,
                      (const std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::key_type *)(v2 + 64));
              v24 = std::unordered_set<unsigned int>::insert(
                      v23,
                      (const std::unordered_set<unsigned int>::value_type *)(v2 + 80));
              if ( !v24.second )
              {
                *(_DWORD *)(((v2 + 896) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 896) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 927) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 927) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 896, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 896),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/scene_script_config.cpp",
                  "loadVisionTypeMutex",
                  975);
                v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 896),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v27 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                        v26,
                        (const char (*)[30])"duplicate target_vision_type:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v27,
                  (const unsigned int *)(v2 + 80));
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 896));
                *(_DWORD *)(((v2 + 896) >> 3) + 0x7FFF8000) = -117901064;
                ret = -1;
              }
              else
              {
                std::vector<std::pair<unsigned int,unsigned int>>::emplace_back<unsigned int &,unsigned int &>(
                  (std::vector<std::pair<unsigned int,unsigned int>> *const)(v2 + 320),
                  (unsigned int *)(v2 + 64),
                  (unsigned int *)(v2 + 80),
                  (unsigned int *)(v2 + 64),
                  v25);
              }
              __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v2 + 160));
            }
            *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
          }
        }
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 384));
      }
      luabind::adl::object::~object((luabind::adl::object *const)(v2 + 224));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_WORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -1800;
      v28 = ((v2 + 384) >> 3) + 2147450880;
      *(_WORD *)v28 = -1800;
      *(_BYTE *)(v28 + 2) = -8;
      __gnu_cxx::__normal_iterator<luabind::adl::object *,std::vector<luabind::adl::object>>::operator++((__gnu_cxx::__normal_iterator<luabind::adl::object*,std::vector<luabind::adl::object> > *const)(v2 + 96));
    }
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    v29 = ((v2 + 448) >> 3) + 2147450880;
    *(_WORD *)v29 = 0;
    *(_BYTE *)(v29 + 2) = 0;
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 448));
    *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v2 + 960);
    if ( common::tools::AlgorithmUtils::hasCycle(
           (const std::vector<std::pair<unsigned int,unsigned int>> *)(v2 + 320),
           (std::vector<unsigned int> *)(v2 + 448),
           (std::string *)(v2 + 960)) )
    {
      *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 1024) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 1055) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 1055) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 1024, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 1024),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene_script_config.cpp",
        "loadVisionTypeMutex",
        988);
      v30 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 1024),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v30, (const char (*)[22])"mutex_table has cycle");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1024));
      *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    else if ( (unsigned __int8)std::string::empty(v2 + 960) != 1 )
    {
      *(_DWORD *)(((v2 + 1088) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 1088) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 1119) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 1119) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 1088, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 1088),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene_script_config.cpp",
        "loadVisionTypeMutex",
        993);
      v31 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 1088),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v32 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
              v31,
              (const char (*)[40])"mutex_table cycle check error err_msg: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v32, (const std::string *)(v2 + 960));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1088));
      *(_DWORD *)(((v2 + 1088) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    v9 = ret;
    std::string::~string((void *)(v2 + 960));
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 448));
    std::vector<std::pair<unsigned int,unsigned int>>::~vector((std::vector<std::pair<unsigned int,unsigned int>> *const)(v2 + 320));
  }
  std::vector<luabind::adl::object>::~vector((std::vector<luabind::adl::object> *const)(v2 + 256));
  if ( v40 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8070) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 120) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v2 >> 3) + 0x7FFF807C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8084) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF808C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1152LL, v40);
  }
  return v9;
};

// Line 1001: range 000000000CD1DA40-000000000CD1DC01
const std::map<unsigned int,MonsterScriptConfig> *__fastcall SceneScriptConfig::findMonsterPoolByPoolId(
        const SceneScriptConfig *const this,
        __int64 monster_pool_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,std::map<unsigned int,MonsterScriptConfig>> *p_monster_pool_map; // rdx
  std::unordered_map<unsigned int,std::map<unsigned int,MonsterScriptConfig>> *v6; // rdx
  bool v7; // al
  const std::map<unsigned int,MonsterScriptConfig> *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 20 monster_pool_id:1000 64 8 9 iter:1002 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = SceneScriptConfig::findMonsterPoolByPoolId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = monster_pool_id;
  p_monster_pool_map = &this->monster_pool_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, monster_pool_id);
  *(std::unordered_map<unsigned int,std::map<unsigned int,MonsterScriptConfig>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::map<unsigned int,MonsterScriptConfig>>::find(p_monster_pool_map, (const std::unordered_map<unsigned int,std::map<unsigned int,MonsterScriptConfig>>::key_type *)(v2 + 48));
  v6 = &this->monster_pool_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,std::map<unsigned int,MonsterScriptConfig>>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,std::map<unsigned int,MonsterScriptConfig>>::end(v6);
  v7 = std::__detail::operator!=<std::pair<unsigned int const,std::map<unsigned int,MonsterScriptConfig>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<unsigned int,MonsterScriptConfig> >,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<unsigned int,MonsterScriptConfig> >,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<unsigned int,MonsterScriptConfig>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<unsigned int,MonsterScriptConfig> >,false,false> *const)(v2 + 64))->second;
  else
    result = 0LL;
  if ( v9 == (char *)v2 )
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

// Line 1012: range 000000000CD1DC02-000000000CD1DE1F
const std::unordered_set<unsigned int> *__fastcall SceneScriptConfig::getRegionVisonTypeExcludeSet(
        const SceneScriptConfig *const this,
        const std::unordered_set<unsigned int> *source_vision_type)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>> *p_region_vision_type_exclude_set_map; // rdx
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>> *v6; // rdx
  bool v7; // al
  const std::unordered_set<unsigned int> *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 23 source_vision_type:1011 64 8 7 it:1014 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = SceneScriptConfig::getRegionVisonTypeExcludeSet;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = (_DWORD)source_vision_type;
  if ( !(_BYTE)`guard variable for'SceneScriptConfig::getRegionVisonTypeExcludeSet(unsigned int)::empty_set
    && __cxa_guard_acquire(&`guard variable for'SceneScriptConfig::getRegionVisonTypeExcludeSet(unsigned int)::empty_set) )
  {
    std::unordered_set<unsigned int>::unordered_set((std::unordered_set<unsigned int> *const)&SceneScriptConfig::getRegionVisonTypeExcludeSet(unsigned int)const::empty_set);
    __cxa_guard_release(&`guard variable for'SceneScriptConfig::getRegionVisonTypeExcludeSet(unsigned int)::empty_set);
    source_vision_type = &SceneScriptConfig::getRegionVisonTypeExcludeSet(unsigned int)const::empty_set;
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_set<unsigned int>::~unordered_set,
      (void *)&SceneScriptConfig::getRegionVisonTypeExcludeSet(unsigned int)const::empty_set,
      &_dso_handle);
  }
  p_region_vision_type_exclude_set_map = &this->region_vision_type_exclude_set_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, source_vision_type);
  *(std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::find(p_region_vision_type_exclude_set_map, (const std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::key_type *)(v2 + 48));
  v6 = &this->region_vision_type_exclude_set_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,std::unordered_set<unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = &SceneScriptConfig::getRegionVisonTypeExcludeSet(unsigned int)const::empty_set;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false,false> *const)(v2 + 64))->second;
  if ( v9 == (char *)v2 )
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

// Line 1025: range 000000000CD1DE20-000000000CD1EC88
int32_t __cdecl SceneScriptConfig::rewriteGridMapBeginPosAndSize(SceneScriptConfig *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  double v7; // xmm0_8
  float v8; // xmm0_4
  double v9; // xmm0_8
  float v10; // xmm1_4
  float v11; // xmm0_4
  double v12; // xmm0_8
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  double v18; // xmm0_8
  float v19; // xmm0_4
  double v20; // xmm0_8
  float v21; // xmm1_4
  float v22; // xmm0_4
  double v23; // xmm0_8
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  float diff_x; // [rsp+10h] [rbp-170h]
  float diff_y; // [rsp+18h] [rbp-168h]
  char v48[352]; // [rsp+20h] [rbp-160h] BYREF

  v2 = (unsigned __int64)v48;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 4 16 unit_length:1026 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = SceneScriptConfig::rewriteGridMapBeginPosAndSize;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -202116109;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = 1000;
  if ( *(int *)(v2 + 48) > 0 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->begin_pos >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->begin_pos >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->begin_pos);
    }
    *(float *)&v7 = this->begin_pos.x;
    if ( *(_BYTE *)(((unsigned __int64)&this->grid_anchor_pos >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->grid_anchor_pos >> 3) + 0x7FFF8000) )
    {
      v7 = __asan_report_load4(&this->grid_anchor_pos);
    }
    diff_x = *(float *)&v7 - this->grid_anchor_pos.x;
    if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v2 + 48);
    v8 = this->grid_anchor_pos.x + (float)((int)(float)(diff_x / (float)*(int *)(v2 + 48)) * *(_DWORD *)(v2 + 48));
    if ( *(_BYTE *)(((unsigned __int64)&this->grid_map_begin_pos >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->grid_map_begin_pos >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store4(&this->grid_map_begin_pos, (((_BYTE)this - 68) & 7u) + 3);
    }
    this->grid_map_begin_pos.x = v8;
    if ( this->grid_map_begin_pos.x > this->begin_pos.x )
      this->grid_map_begin_pos.x = this->grid_map_begin_pos.x - (float)*(int *)(v2 + 48);
    if ( *(_BYTE *)(((unsigned __int64)&this->begin_pos >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->begin_pos >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->begin_pos);
    }
    *(float *)&v9 = this->begin_pos.x;
    if ( *(_BYTE *)(((unsigned __int64)&this->grid_map_begin_pos >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->grid_map_begin_pos >> 3)
                                                          + 0x7FFF8000) )
    {
      v9 = __asan_report_load4(&this->grid_map_begin_pos);
    }
    v10 = *(float *)&v9 - this->grid_map_begin_pos.x;
    if ( *(_BYTE *)(((unsigned __int64)&this->size >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->size >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->size);
    }
    v11 = this->size.x + v10;
    if ( *(_BYTE *)(((unsigned __int64)&this->grid_map_size >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->grid_map_size >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&this->grid_map_size, (((_BYTE)this - 60) & 7u) + 3);
    }
    this->grid_map_size.x = v11;
    if ( this->grid_map_begin_pos.x > this->begin_pos.x )
      goto LABEL_68;
    *(float *)&v12 = this->begin_pos.x - this->grid_map_begin_pos.x;
    if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
      v12 = __asan_report_load4(v2 + 48);
    if ( *(float *)&v12 <= (float)*(int *)(v2 + 48) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->begin_pos.y >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->begin_pos.y >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->begin_pos.y);
      }
      *(float *)&v18 = this->begin_pos.y;
      if ( *(_BYTE *)(((unsigned __int64)&this->grid_anchor_pos.y >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->grid_anchor_pos.y >> 3) + 0x7FFF8000) <= 3 )
      {
        v18 = __asan_report_load4(&this->grid_anchor_pos.y);
      }
      diff_y = *(float *)&v18 - this->grid_anchor_pos.y;
      if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v2 + 48);
      v19 = this->grid_anchor_pos.y + (float)((int)(float)(diff_y / (float)*(int *)(v2 + 48)) * *(_DWORD *)(v2 + 48));
      if ( *(_BYTE *)(((unsigned __int64)&this->grid_map_begin_pos.y >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->grid_map_begin_pos.y >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->grid_map_begin_pos.y, (((_BYTE)this - 92) & 7u) + 3);
      }
      this->grid_map_begin_pos.y = v19;
      if ( this->grid_map_begin_pos.y > this->begin_pos.y )
        this->grid_map_begin_pos.y = this->grid_map_begin_pos.y - (float)*(int *)(v2 + 48);
      if ( *(_BYTE *)(((unsigned __int64)&this->begin_pos.y >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->begin_pos.y >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->begin_pos.y);
      }
      *(float *)&v20 = this->begin_pos.y;
      if ( *(_BYTE *)(((unsigned __int64)&this->grid_map_begin_pos.y >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->grid_map_begin_pos.y >> 3) + 0x7FFF8000) <= 3 )
      {
        v20 = __asan_report_load4(&this->grid_map_begin_pos.y);
      }
      v21 = *(float *)&v20 - this->grid_map_begin_pos.y;
      if ( *(_BYTE *)(((unsigned __int64)&this->size.y >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->size.y >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->size.y);
      }
      v22 = this->size.y + v21;
      if ( *(_BYTE *)(((unsigned __int64)&this->grid_map_size.y >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->grid_map_size.y >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->grid_map_size.y, (((_BYTE)this - 84) & 7u) + 3);
      }
      this->grid_map_size.y = v22;
      if ( this->grid_map_begin_pos.y > this->begin_pos.y )
        goto LABEL_69;
      *(float *)&v23 = this->begin_pos.y - this->grid_map_begin_pos.y;
      if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
        v23 = __asan_report_load4(v2 + 48);
      if ( *(float *)&v23 <= (float)*(int *)(v2 + 48) )
      {
        if ( *(char *)(((v2 + 256) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 256, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 256),
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene_script_config.cpp",
          "rewriteGridMapBeginPosAndSize",
          1064);
        v29 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                (common::milog::MiLogStream *const)(v2 + 256),
                (const char (*)[14])"begin_pos. x:");
        v30 = common::milog::MiLogStream::operator<<<float,(float *)0>(v29, (const float *)&this->begin_pos);
        v31 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v30, (const char (*)[5])", y:");
        v32 = common::milog::MiLogStream::operator<<<float,(float *)0>(v31, &this->begin_pos.y);
        v33 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                v32,
                (const char (*)[25])", grid_map_begin_pos. x:");
        v34 = common::milog::MiLogStream::operator<<<float,(float *)0>(v33, (const float *)&this->grid_map_begin_pos);
        v35 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v34, (const char (*)[5])", y:");
        v36 = common::milog::MiLogStream::operator<<<float,(float *)0>(v35, &this->grid_map_begin_pos.y);
        v37 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v36, (const char (*)[10])", size.x:");
        v38 = common::milog::MiLogStream::operator<<<float,(float *)0>(v37, (const float *)&this->size);
        v39 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v38, (const char (*)[5])", y:");
        v40 = common::milog::MiLogStream::operator<<<float,(float *)0>(v39, &this->size.y);
        v41 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                v40,
                (const char (*)[19])", grid_map_size.x:");
        v42 = common::milog::MiLogStream::operator<<<float,(float *)0>(v41, (const float *)&this->grid_map_size);
        v43 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v42, (const char (*)[5])", y:");
        v44 = common::milog::MiLogStream::operator<<<float,(float *)0>(v43, &this->grid_map_size.y);
        v45 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v44, (const char (*)[12])", scene_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v45, &this->scene_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
        result = 0;
      }
      else
      {
LABEL_69:
        if ( *(char *)(((v2 + 192) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 192, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 192),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/scene_script_config.cpp",
          "rewriteGridMapBeginPosAndSize",
          1060);
        v24 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                (common::milog::MiLogStream *const)(v2 + 192),
                (const char (*)[34])"begin_pos change error. scene_id:");
        v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &this->scene_id);
        v26 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v25, (const char (*)[13])"begin_pos.y:");
        v27 = common::milog::MiLogStream::operator<<<float,(float *)0>(v26, &this->begin_pos.y);
        v28 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                v27,
                (const char (*)[24])", grid_map_begin_pos.y:");
        common::milog::MiLogStream::operator<<<float,(float *)0>(v28, &this->grid_map_begin_pos.y);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
        result = -1;
      }
    }
    else
    {
LABEL_68:
      if ( *(char *)(((v2 + 128) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 128, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 128),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene_script_config.cpp",
        "rewriteGridMapBeginPosAndSize",
        1044);
      v13 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
              (common::milog::MiLogStream *const)(v2 + 128),
              (const char (*)[34])"begin_pos change error. scene_id:");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &this->scene_id);
      v15 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v14, (const char (*)[13])"begin_pos.x:");
      v16 = common::milog::MiLogStream::operator<<<float,(float *)0>(v15, (const float *)&this->begin_pos);
      v17 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
              v16,
              (const char (*)[24])", grid_map_begin_pos.x:");
      common::milog::MiLogStream::operator<<<float,(float *)0>(v17, (const float *)&this->grid_map_begin_pos);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
      result = -1;
    }
  }
  else
  {
    if ( *(char *)(((v2 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene_script_config.cpp",
      "rewriteGridMapBeginPosAndSize",
      1029);
    v5 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
           (common::milog::MiLogStream *const)(v2 + 64),
           (const char (*)[19])"unit_length error:");
    common::milog::MiLogStream::operator<<<int,(int *)0>(v5, (const int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    result = -1;
  }
  if ( v48 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF801C) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8024) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1075: range 000000000CD1EC8A-000000000CD1F810
bool __cdecl SceneScriptConfig::isNewDummyPointMatch(
        const SceneScriptConfig *const this,
        const std::string *dummy_point_str,
        const DummyPointScriptConfig *dummy_point_config_ptr)
{
  bool v3; // r14
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  __int64 v9; // r8
  char *v10; // rdi
  bool v11; // r15
  common::milog::MiLogStream *v12; // rax
  std::vector<float>::reference v13; // rax
  float *v14; // rdx
  std::vector<float>::reference v15; // rax
  float *v16; // rdx
  std::vector<float>::reference v17; // rax
  float *v18; // rdx
  int v20; // edx
  std::vector<float>::reference v21; // rax
  float *v22; // rdx
  std::vector<float>::reference v23; // rax
  float *v24; // rdx
  std::vector<float>::reference v25; // rax
  float *v26; // rdx
  std::vector<float>::reference v27; // rax
  float *v28; // rdx
  std::vector<float>::reference v29; // rax
  float *v30; // rdx
  std::vector<float>::reference v31; // rax
  float *v32; // rdx
  int v34; // edx
  bool result; // al
  float y_; // [rsp+10h] [rbp-220h]
  float y_a; // [rsp+10h] [rbp-220h]
  float y_b; // [rsp+10h] [rbp-220h]
  float z_; // [rsp+14h] [rbp-21Ch]
  float z_a; // [rsp+14h] [rbp-21Ch]
  float z_b; // [rsp+14h] [rbp-21Ch]
  size_t pos; // [rsp+38h] [rbp-1F8h]
  char v44[496]; // [rsp+40h] [rbp-1F0h] BYREF

  v4 = (unsigned __int64)v44;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(448LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "9 48 1 9 <unknown> 64 12 8 pos:1102 96 12 8 rot:1103 128 12 8 pos:1111 160 12 8 rot:1112 192 24 "
                        "13 axis_vec:1094 256 32 17 sub_axis_str:1093 320 32 9 <unknown> 384 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = SceneScriptConfig::isNewDummyPointMatch;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -219020288;
  v6[536862723] = -219020288;
  v6[536862724] = -219020288;
  v6[536862725] = -219020288;
  v6[536862726] = -234881024;
  v6[536862727] = -218959118;
  v6[536862729] = -218959118;
  v6[536862731] = -218959118;
  v6[536862733] = -202116109;
  if ( !common::tools::StringUtils::isStartsWith(dummy_point_str, 91)
    || !common::tools::StringUtils::isEndsWith(dummy_point_str, 93) )
  {
    v3 = 1;
    goto LABEL_63;
  }
  if ( !dummy_point_config_ptr )
  {
    v3 = 0;
    goto LABEL_63;
  }
  pos = std::string::find(dummy_point_str, ":", 0LL);
  if ( pos == -1LL || pos > std::string::size(dummy_point_str) - 2 )
  {
    v3 = 0;
    goto LABEL_63;
  }
  v9 = std::string::size(dummy_point_str) - pos - 2;
  v10 = (char *)(pos + 1);
  if ( *(char *)(((v4 + 256) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v4 + 287) >> 3) + 0x7FFF8000) != 0
    && (char)((v4 - 64 + 95) & 7) >= *(_BYTE *)(((v4 + 287) >> 3) + 0x7FFF8000) )
  {
    v10 = (char *)(v4 + 256);
    __asan_report_store_n(v4 + 256, 32LL);
  }
  std::string::substr(v4 + 256, dummy_point_str, v10, v9);
  std::vector<float>::vector((std::vector<float> *const)(v4 + 192));
  std::allocator<char>::allocator(v4 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v4 + 320),
    ",",
    (const std::allocator<char> *)(v4 + 48));
  v11 = common::tools::StringUtils::splitToList<float>(
          (const std::string *)(v4 + 256),
          (const std::string *)(v4 + 320),
          (std::vector<float> *)(v4 + 192),
          0) != 0;
  std::string::~string((void *)(v4 + 320));
  *(_DWORD *)(((v4 + 320) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v4 + 48);
  *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( v11 )
  {
    *(_DWORD *)(((v4 + 384) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v4 + 384) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 415) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 - 97) & 7) >= *(_BYTE *)(((v4 + 415) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 384, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 384),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene_script_config.cpp",
      "isNewDummyPointMatch",
      1097);
    v12 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
            (common::milog::MiLogStream *const)(v4 + 384),
            (const char (*)[15])"invalid param:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, (const std::string *)(v4 + 256));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 384));
    *(_DWORD *)(((v4 + 384) >> 3) + 0x7FFF8000) = -117901064;
    v3 = 0;
  }
  else
  {
    if ( std::vector<float>::size((const std::vector<float> *const)(v4 + 192)) == 3 )
    {
      *(_WORD *)(((v4 + 64) >> 3) + 0x7FFF8000) = 1024;
      v13 = std::vector<float>::operator[]((std::vector<float> *const)(v4 + 192), 2uLL);
      v14 = v13;
      if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v13);
      }
      z_ = *v14;
      v15 = std::vector<float>::operator[]((std::vector<float> *const)(v4 + 192), 1uLL);
      v16 = v15;
      if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v15);
      }
      y_ = *v16;
      v17 = std::vector<float>::operator[]((std::vector<float> *const)(v4 + 192), 0LL);
      v18 = v17;
      if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v17);
      }
      Vector3::Vector3((Vector3 *const)(v4 + 64), *v18, y_, z_);
      *(_WORD *)(((v4 + 96) >> 3) + 0x7FFF8000) = 1024;
      Vector3::Vector3((Vector3 *const)(v4 + 96), 0.0, 0.0, 0.0);
      if ( operator==((const Vector3 *)(v4 + 64), &dummy_point_config_ptr->pos)
        && operator==((const Vector3 *)(v4 + 96), &dummy_point_config_ptr->rot) )
      {
        v3 = 1;
        v20 = 0;
      }
      else
      {
        v20 = 1;
      }
      *(_WORD *)(((v4 + 64) >> 3) + 0x7FFF8000) = -1800;
      *(_WORD *)(((v4 + 96) >> 3) + 0x7FFF8000) = -1800;
      if ( v20 != 1 )
        goto LABEL_62;
    }
    else if ( std::vector<float>::size((const std::vector<float> *const)(v4 + 192)) == 6 )
    {
      *(_WORD *)(((v4 + 128) >> 3) + 0x7FFF8000) = 1024;
      v21 = std::vector<float>::operator[]((std::vector<float> *const)(v4 + 192), 2uLL);
      v22 = v21;
      if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v21 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v21);
      }
      z_a = *v22;
      v23 = std::vector<float>::operator[]((std::vector<float> *const)(v4 + 192), 1uLL);
      v24 = v23;
      if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v23);
      }
      y_a = *v24;
      v25 = std::vector<float>::operator[]((std::vector<float> *const)(v4 + 192), 0LL);
      v26 = v25;
      if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v25);
      }
      Vector3::Vector3((Vector3 *const)(v4 + 128), *v26, y_a, z_a);
      *(_WORD *)(((v4 + 160) >> 3) + 0x7FFF8000) = 1024;
      v27 = std::vector<float>::operator[]((std::vector<float> *const)(v4 + 192), 5uLL);
      v28 = v27;
      if ( *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v27 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v27);
      }
      z_b = *v28;
      v29 = std::vector<float>::operator[]((std::vector<float> *const)(v4 + 192), 4uLL);
      v30 = v29;
      if ( *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v29 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v29);
      }
      y_b = *v30;
      v31 = std::vector<float>::operator[]((std::vector<float> *const)(v4 + 192), 3uLL);
      v32 = v31;
      if ( *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v31 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v31);
      }
      Vector3::Vector3((Vector3 *const)(v4 + 160), *v32, y_b, z_b);
      if ( operator==((const Vector3 *)(v4 + 128), &dummy_point_config_ptr->pos)
        && operator==((const Vector3 *)(v4 + 160), &dummy_point_config_ptr->rot) )
      {
        v3 = 1;
        v34 = 0;
      }
      else
      {
        v34 = 1;
      }
      *(_WORD *)(((v4 + 128) >> 3) + 0x7FFF8000) = -1800;
      *(_WORD *)(((v4 + 160) >> 3) + 0x7FFF8000) = -1800;
      if ( v34 != 1 )
        goto LABEL_62;
    }
    v3 = 0;
  }
LABEL_62:
  std::vector<float>::~vector((std::vector<float> *const)(v4 + 192));
  std::string::~string((void *)(v4 + 256));
LABEL_63:
  result = v3;
  if ( v44 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF802C) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8034) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};
