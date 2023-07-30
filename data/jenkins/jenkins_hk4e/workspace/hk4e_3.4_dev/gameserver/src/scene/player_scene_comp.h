// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/player_scene_comp.h

// Line 69: range 0000000013EC3FB0-0000000013EC41B8
void __cdecl TransferReason::TransferReason(TransferReason *const this, const TransferReason *a2)
{
  proto::EnterReason enter_reason; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t point_id; // ecx
  char v6; // dl
  bool v7; // dl
  uint32_t type; // ecx
  char v9; // al
  std::string *p_point_type_name; // rsi
  bool is_by_anchor_point; // cl
  char v12; // al
  const TransferReason *v13; // [rsp+0h] [rbp-10h]

  v13 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  enter_reason = a2->enter_reason;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2, (_BYTE)this);
  }
  this->enter_reason = enter_reason;
  v4 = (((_BYTE)v13 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->point_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->point_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->point_id);
  }
  point_id = v13->point_id;
  v6 = *(_BYTE *)(((unsigned __int64)&this->point_id >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v6 != 0;
  v7 = v6 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v6;
  if ( v7 )
    __asan_report_store4(&this->point_id, v4, v7);
  this->point_id = point_id;
  if ( *(_BYTE *)(((unsigned __int64)&v13->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->type);
  }
  type = v13->type;
  v9 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v4) = v9 != 0;
    __asan_report_store4(&this->type, v4, (_BYTE)this + 8);
  }
  this->type = type;
  p_point_type_name = &v13->point_type_name;
  std::string::basic_string(&this->point_type_name, &v13->point_type_name);
  if ( *(char *)(((unsigned __int64)&v13->is_by_anchor_point >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v13->is_by_anchor_point);
  is_by_anchor_point = v13->is_by_anchor_point;
  v12 = *(_BYTE *)(((unsigned __int64)&this->is_by_anchor_point >> 3) + 0x7FFF8000);
  if ( v12 < 0 )
  {
    LOBYTE(p_point_type_name) = v12 != 0;
    __asan_report_store1(&this->is_by_anchor_point, p_point_type_name, &this->is_by_anchor_point);
  }
  this->is_by_anchor_point = is_by_anchor_point;
};

// Line 69: range 00000000131D8A2C-00000000131D8A4A
void __cdecl TransferReason::~TransferReason(TransferReason *const this)
{
  std::string::~string(&this->point_type_name);
};

// Line 71: range 00000000141F56BA-00000000141F57D0
void __cdecl TransferReason::TransferReason(TransferReason *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  bool v3; // dl

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, (_BYTE)this);
  }
  this->enter_reason = ENTER_REASON_NONE;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  v3 = *(_BYTE *)(((unsigned __int64)&this->point_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->point_id >> 3) + 0x7FFF8000);
  if ( v3 )
    __asan_report_store4(&this->point_id, v2, v3);
  this->point_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->type, v2, (_BYTE)this + 8);
  }
  this->type = 0;
  std::string::basic_string(&this->point_type_name);
  if ( *(char *)(((unsigned __int64)&this->is_by_anchor_point >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_by_anchor_point, v2, &this->is_by_anchor_point);
  this->is_by_anchor_point = 0;
};

// Line 72: range 00000000131D8912-00000000131D8A2A
// local variable allocation has failed, the output may be wrong!
void __cdecl TransferReason::TransferReason(TransferReason *const this, proto::EnterReason enter_scene_reason)
{
  __int64 v2; // rsi
  bool v3; // dl

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, *(_QWORD *)&enter_scene_reason, (_BYTE)this);
  }
  this->enter_reason = enter_scene_reason;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  v3 = *(_BYTE *)(((unsigned __int64)&this->point_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->point_id >> 3) + 0x7FFF8000);
  if ( v3 )
    __asan_report_store4(&this->point_id, v2, v3);
  this->point_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->type, v2, (_BYTE)this + 8);
  }
  this->type = 0;
  std::string::basic_string(&this->point_type_name);
  if ( *(char *)(((unsigned __int64)&this->is_by_anchor_point >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_by_anchor_point, v2, &this->is_by_anchor_point);
  this->is_by_anchor_point = 0;
};

// Line 80: range 0000000013EC4ABA-0000000013EC4B95
void __cdecl HitTreePos::HitTreePos(HitTreePos *const this)
{
  __int64 v1; // rsi
  bool v2; // dl

  Vector3::Vector3(&this->tree_pos, 0.0, 0.0, 0.0);
  v1 = (((_BYTE)this + 12) & 7u) + 3;
  v2 = *(_BYTE *)(((unsigned __int64)&this->tree_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->tree_type >> 3) + 0x7FFF8000);
  if ( v2 )
    __asan_report_store4(&this->tree_type, v1, v2);
  this->tree_type = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_hit_ms >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->last_hit_ms, v1);
  this->last_hit_ms = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->drop_times >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->drop_times >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->drop_times, v1, (_BYTE)this + 24);
  }
  this->drop_times = 0;
};

// Line 88: range 0000000013EC3AE2-0000000013EC3B90
void __cdecl LevelTagInfo::LevelTagInfo(LevelTagInfo *const this)
{
  __int64 v1; // rsi
  bool v2; // dl

  std::map<unsigned int,unsigned int>::map(&this->level_tag_change_map);
  std::map<unsigned int,unsigned int>::map(&this->series_change_map);
  if ( *(_BYTE *)(((unsigned __int64)&this->record_change_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->record_change_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->record_change_time, v1, (_BYTE)this + 96);
  }
  this->record_change_time = 0;
  v2 = *(_BYTE *)(((unsigned __int64)&this->record_change_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->record_change_count >> 3)
                                                         + 0x7FFF8000);
  if ( v2 )
    __asan_report_store4(&this->record_change_count, (((_BYTE)this + 100) & 7u) + 3, v2);
  this->record_change_count = 0;
};

// Line 88: range 0000000013EC3B92-0000000013EC3BBC
void __cdecl LevelTagInfo::~LevelTagInfo(LevelTagInfo *const this)
{
  std::map<unsigned int,unsigned int>::~map(&this->series_change_map);
  std::map<unsigned int,unsigned int>::~map(&this->level_tag_change_map);
};

// Line 100: range 00000000149F14F8-00000000149F1512
void __cdecl LevelTagChangeParam::~LevelTagChangeParam(LevelTagChangeParam *const this)
{
  std::optional<std::vector<Vector3>>::~optional(&this->trans_pos_vec_opt);
};

// Line 107: range 0000000013EC54AA-0000000013EC54C4
void __cdecl SceneTagOpParam::~SceneTagOpParam(SceneTagOpParam *const this)
{
  std::optional<std::vector<Vector3>>::~optional(&this->trans_pos_vec_opt);
};

// Line 113: range 0000000013EBBB2C-0000000013EBBCBE
void __cdecl HitTreeSortInfo::HitTreeSortInfo(
        HitTreeSortInfo *const this,
        const Vector3 *tree_pos,
        const float tree_dis,
        const uint32_t tree_type)
{
  bool v4; // dl
  bool v5; // dl

  if ( ((unsigned __int8)this & 7) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->tree_pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&this->tree_pos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(this, 12LL);
  }
  if ( ((unsigned __int8)tree_pos & 7) >= *(_BYTE *)(((unsigned __int64)tree_pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)tree_pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&tree_pos->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)tree_pos + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&tree_pos->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(tree_pos, 12LL);
  }
  this->tree_pos = *tree_pos;
  v4 = *(_BYTE *)(((unsigned __int64)&this->tree_dis >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->tree_dis >> 3) + 0x7FFF8000);
  if ( v4 )
    __asan_report_store4(&this->tree_dis, (((_BYTE)this + 12) & 7u) + 3, v4);
  this->tree_dis = tree_dis;
  v5 = *(_BYTE *)(((unsigned __int64)&this->tree_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->tree_type >> 3) + 0x7FFF8000);
  if ( v5 )
    __asan_report_store4(&this->tree_type, (((_BYTE)this + 16) & 7u) + 3, v5);
  this->tree_type = tree_type;
};

// Line 118: range 0000000013EBBCC0-0000000013EBBD5F
bool __cdecl HitTreeSortInfo::operator>(const HitTreeSortInfo *const this, const HitTreeSortInfo *other)
{
  float tree_dis; // xmm0_4

  if ( *(_BYTE *)(((unsigned __int64)&this->tree_dis >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->tree_dis >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->tree_dis);
  }
  tree_dis = this->tree_dis;
  if ( *(_BYTE *)(((unsigned __int64)&other->tree_dis >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)other + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&other->tree_dis >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&other->tree_dis);
  }
  return tree_dis > other->tree_dis;
};

// Line 128: range 00000000140FBE44-00000000140FC15B
void __cdecl PlayerSceneComp::~PlayerSceneComp(PlayerSceneComp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerSceneComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PlayerCompBase = v2;
  LevelTagInfo::~LevelTagInfo(&this->level_tag_info_);
  std::set<std::pair<unsigned int,unsigned int>>::~set(&this->player_in_region_set_);
  std::map<unsigned int,unsigned int>::~map(&this->gadget_chain_level_map_);
  std::shared_ptr<proto_log::AntiCheatBodyGadgetInteractBeyondCheckDistance>::~shared_ptr(&this->gadget_interact_beyond_check_distance_log_ptr_);
  std::shared_ptr<proto_log::AntiCheatBodyGadgetInteractBeyondDistance>::~shared_ptr(&this->gadget_interact_beyond_distance_log_ptr_);
  std::deque<Vector3>::~deque(&this->bush_drop_pos_deque_);
  std::set<unsigned int>::~set(&this->obtained_wood_type_set_);
  std::vector<HitTreePos>::~vector(&this->hit_tree_pos_vec_);
  std::weak_ptr<Challenge>::~weak_ptr(&this->current_combat_stat_challenge_wtr_);
  std::set<std::weak_ptr<Challenge>,std::owner_less<std::weak_ptr<Challenge>>,std::allocator<std::weak_ptr<Challenge>>>::~set(&this->challenge_wtr_set_);
  std::unordered_map<unsigned int,std::set<std::pair<unsigned int,unsigned int>>>::~unordered_map(&this->oneoff_gather_point_type_to_group_configs_map_);
  std::weak_ptr<Observer>::~weak_ptr(&this->capture_succ_observer_);
  std::weak_ptr<Observer>::~weak_ptr(&this->fishing_succ_observer_);
  std::weak_ptr<Observer>::~weak_ptr(&this->world_player_change_observer_);
  std::weak_ptr<Observer>::~weak_ptr(&this->kill_monster_observer_);
  std::weak_ptr<Observer>::~weak_ptr(&this->change_avatar_observer_);
  std::weak_ptr<Observer>::~weak_ptr(&this->skill_event_observer_);
  std::string::~string(&this->enter_world_tran_);
  std::weak_ptr<WeatherArea>::~weak_ptr(&this->weather_area_wtr_);
  std::weak_ptr<Scene>::~weak_ptr(&this->dest_scene_wtr_);
  std::unordered_map<unsigned long,std::weak_ptr<Npc>>::~unordered_map(&this->quest_npc_entity_map_);
  std::set<std::weak_ptr<Entity>,std::owner_less<std::weak_ptr<Entity>>,std::allocator<std::weak_ptr<Entity>>>::~set(&this->leave_scene_destroy_entity_set_);
  std::set<std::weak_ptr<Entity>,std::owner_less<std::weak_ptr<Entity>>,std::allocator<std::weak_ptr<Entity>>>::~set(&this->disconnect_destroy_entity_set_);
  std::weak_ptr<World>::~weak_ptr(&this->cur_world_wtr_);
  std::weak_ptr<Scene>::~weak_ptr(&this->cur_scene_wtr_);
  std::unordered_map<unsigned int,proto::SceneBin>::~unordered_map(&this->persistent_dungeon_scene_bin_map_);
  std::unordered_map<unsigned int,std::weak_ptr<DungeonScene>>::~unordered_map(&this->create_persistent_dungeon_scene_map_);
  std::map<unsigned int,unsigned int>::~map(&this->monster_captured_num_map_);
  std::unordered_map<unsigned int,bool>::~unordered_map(&this->map_area_info_map_);
  std::unordered_map<std::string,unsigned int>::~unordered_map(&this->daily_gadget_drop_category_count_map_);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->gadget_interact_num_map_);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->chest_open_num_map_);
  std::unordered_map<unsigned int,proto::SubfieldDropBin>::~unordered_map(&this->subfield_drop_map_);
  std::unordered_map<unsigned int,proto::SceneBossChestBin>::~unordered_map(&this->scene_boss_chest_map_);
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,proto::SceneProductBin>>::~unordered_map(&this->dungeon_product_map_);
  std::unordered_map<unsigned int,proto::SceneProductBin>::~unordered_map(&this->world_product_map_);
  std::unordered_map<unsigned int,std::unordered_set<proto::MapMarkPoint>>::~unordered_map(&this->mark_point_set_map_);
  std::map<unsigned int,unsigned int>::~map(&this->monster_killed_num_map_);
  std::set<unsigned int>::~set(&this->monster_seen_set_);
  std::shared_ptr<PlayerWorld>::~shared_ptr(&this->my_player_world_ptr_);
  PlayerCompBase::~PlayerCompBase(this);
};

// Line 128: range 00000000140FC15C-00000000140FC186
void __cdecl PlayerSceneComp::~PlayerSceneComp(PlayerSceneComp *const this)
{
  PlayerSceneComp::~PlayerSceneComp(this);
  operator delete(this, 0x750uLL);
};

// Line 133: range 000000001720FD16-000000001720FD20
uint32_t __cdecl PlayerSceneComp::getType()
{
  return 9;
};

// Line 209: range 0000000013222940-0000000013222AAA
std::shared_ptr<PlayerWorld> __cdecl PlayerSceneComp::getCurWorld<PlayerWorld>(const PlayerSceneComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::shared_ptr<PlayerWorld> result; // rax
  char v5[128]; // [rsp+10h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 13 world_ptr:841 64 16 7 ptr:842";
  *(_QWORD *)(v1 + 16) = PlayerSceneComp::getCurWorld<PlayerWorld>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  PlayerSceneComp::getCurWorld((const PlayerSceneComp *const)(v1 + 32));
  std::dynamic_pointer_cast<PlayerWorld,World>((const std::shared_ptr<World> *)(v1 + 64));
  if ( std::operator==<PlayerWorld>((const std::shared_ptr<PlayerWorld> *)(v1 + 64), 0LL) )
    std::shared_ptr<PlayerWorld>::shared_ptr((std::shared_ptr<PlayerWorld> *const)this, 0LL);
  else
    std::shared_ptr<PlayerWorld>::shared_ptr(
      (std::shared_ptr<PlayerWorld> *const)this,
      (std::shared_ptr<PlayerWorld> *)(v1 + 64));
  std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v1 + 64));
  std::shared_ptr<World>::~shared_ptr((std::shared_ptr<World> *const)(v1 + 32));
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
  result._M_ptr = (std::__shared_ptr<PlayerWorld,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 211: range 00000000131D8A4C-00000000131D8A9D
ScenePtr __cdecl PlayerSceneComp::getCurScene(const PlayerSceneComp *const this)
{
  __int64 v1; // rsi
  ScenePtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v1);
  result = std::weak_ptr<Scene>::lock((const std::weak_ptr<Scene> *const)this);
  result._M_ptr = (std::__shared_ptr<Scene,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 212: range 00000000131D8A9E-00000000131D8AEA
uint32_t __cdecl PlayerSceneComp::getCurSceneId(const PlayerSceneComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_scene_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_scene_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_scene_id_);
  }
  return this->cur_scene_id_;
};

// Line 214: range 0000000015A1A32A-0000000015A1A37F
void __cdecl PlayerSceneComp::setMyCurPlayerSceneId(PlayerSceneComp *const this, uint32_t scene_id)
{
  bool v2; // dl

  v2 = *(_BYTE *)(((unsigned __int64)&this->my_cur_player_scene_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->my_cur_player_scene_id_ >> 3)
                                                        + 0x7FFF8000);
  if ( v2 )
    __asan_report_store4(&this->my_cur_player_scene_id_, (((_BYTE)this + 36) & 7u) + 3, v2);
  this->my_cur_player_scene_id_ = scene_id;
};

// Line 214: range 0000000015A1A2DC-0000000015A1A329
// local variable allocation has failed, the output may be wrong!
void __cdecl PlayerSceneComp::setMyCurSceneId(PlayerSceneComp *const this, uint32_t scene_id)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->my_cur_scene_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->my_cur_scene_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->my_cur_scene_id_, *(_QWORD *)&scene_id, (_BYTE)this + 32);
  }
  this->my_cur_scene_id_ = scene_id;
};

// Line 215: range 0000000013EBBD60-0000000013EBBDA7
uint32_t __cdecl PlayerSceneComp::getMyCurSceneId(const PlayerSceneComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->my_cur_scene_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->my_cur_scene_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->my_cur_scene_id_);
  }
  return this->my_cur_scene_id_;
};

// Line 217: range 0000000015A1A380-0000000015A1A3CD
// local variable allocation has failed, the output may be wrong!
void __cdecl PlayerSceneComp::setMyCurHomeSceneId(PlayerSceneComp *const this, uint32_t scene_id)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->my_cur_home_scene_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->my_cur_home_scene_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->my_cur_home_scene_id_, *(_QWORD *)&scene_id, (_BYTE)this + 40);
  }
  this->my_cur_home_scene_id_ = scene_id;
};

// Line 218: range 0000000013EBBDF8-0000000013EBBE3F
uint32_t __cdecl PlayerSceneComp::getMyCurHomeSceneId(const PlayerSceneComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->my_cur_home_scene_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->my_cur_home_scene_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->my_cur_home_scene_id_);
  }
  return this->my_cur_home_scene_id_;
};

// Line 218: range 0000000013EBBDA8-0000000013EBBDF7
uint32_t __cdecl PlayerSceneComp::getMyCurPlayerSceneId(const PlayerSceneComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->my_cur_player_scene_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->my_cur_player_scene_id_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->my_cur_player_scene_id_);
  }
  return this->my_cur_player_scene_id_;
};

// Line 223: range 000000001623ABF0-000000001623AC1F
std::set<std::pair<unsigned int,unsigned int>> *__cdecl PlayerSceneComp::getCurRegionSet(
        std::set<std::pair<unsigned int,unsigned int>> *retstr,
        PlayerSceneComp *const this)
{
  std::set<std::pair<unsigned int,unsigned int>>::set(retstr, &this->player_in_region_set_);
  return retstr;
};

// Line 305: range 00000000131D8AEC-00000000131D8B3D
ScenePtr __cdecl PlayerSceneComp::getDestScene(const PlayerSceneComp *const this)
{
  __int64 v1; // rsi
  ScenePtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v1);
  result = std::weak_ptr<Scene>::lock((const std::weak_ptr<Scene> *const)this);
  result._M_ptr = (std::__shared_ptr<Scene,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 306: range 000000001720FD22-000000001720FD6E
uint32_t __cdecl PlayerSceneComp::getDestSceneId(const PlayerSceneComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->dest_scene_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dest_scene_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->dest_scene_id_);
  }
  return this->dest_scene_id_;
};

// Line 308: range 0000000013EBBE40-0000000013EBBEC7
void __cdecl PlayerSceneComp::resetDestScene(PlayerSceneComp *const this)
{
  __int64 v1; // rsi

  std::__weak_ptr<Scene,(__gnu_cxx::_Lock_policy)2>::reset(&this->dest_scene_wtr_);
  if ( *(_BYTE *)(((unsigned __int64)&this->dest_scene_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dest_scene_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dest_scene_id_, v1, (_BYTE)this + 64);
  }
  this->dest_scene_id_ = 0;
  Vector3::reset(&this->dest_pos_);
  Vector3::reset(&this->dest_rot_);
};

// Line 317: range 0000000013EBBEC8-0000000013EBBEDB
const Vector3 *__cdecl PlayerSceneComp::getDestPos(const PlayerSceneComp *const this)
{
  return &this->dest_pos_;
};

// Line 317: range 0000000013EBBEDC-0000000013EBBEEF
const Vector3 *__cdecl PlayerSceneComp::getDestRot(const PlayerSceneComp *const this)
{
  return &this->dest_rot_;
};

// Line 318: range 000000001720FD70-000000001720FE78
void __cdecl PlayerSceneComp::setDestPos(PlayerSceneComp *const this, const Vector3 *pos)
{
  if ( (((unsigned __int8)this + 68) & 7) >= *(_BYTE *)(((unsigned __int64)&this->dest_pos_ >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->dest_pos_ >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->dest_pos_.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 79) & 7) >= *(_BYTE *)((((unsigned __int64)&this->dest_pos_.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->dest_pos_, 12LL);
  }
  if ( ((unsigned __int8)pos & 7) >= *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&pos->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)pos + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&pos->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(pos, 12LL);
  }
  this->dest_pos_ = *pos;
};

// Line 322: range 000000001720FE7A-000000001720FF7B
void __cdecl PlayerSceneComp::setDestRot(PlayerSceneComp *const this, const Vector3 *rot)
{
  if ( *(char *)(((unsigned __int64)&this->dest_rot_ >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->dest_rot_.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 91) & 7) >= *(_BYTE *)((((unsigned __int64)&this->dest_rot_.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->dest_rot_, 12LL);
  }
  if ( ((unsigned __int8)rot & 7) >= *(_BYTE *)(((unsigned __int64)rot >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)rot >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&rot->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)rot + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&rot->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(rot, 12LL);
  }
  this->dest_rot_ = *rot;
};

// Line 327: range 000000001720FF7C-000000001720FFC3
uint32_t __cdecl PlayerSceneComp::getMyPrevSceneId(PlayerSceneComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->my_prev_scene_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->my_prev_scene_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->my_prev_scene_id_);
  }
  return this->my_prev_scene_id_;
};

// Line 333: range 00000000131D8B3E-00000000131D8B8C
bool __cdecl PlayerSceneComp::isInTransfer(const PlayerSceneComp *const this)
{
  bool v1; // bl
  std::weak_ptr<Scene> v3; // [rsp+10h] [rbp-20h] BYREF

  std::weak_ptr<Scene>::lock(&v3);
  v1 = std::operator!=<Scene>((const std::shared_ptr<Scene> *)&v3, 0LL);
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)&v3);
  return v1;
};

// Line 431: range 000000001623AB74-000000001623ABC8
uint32_t __cdecl PlayerSceneComp::getCurCityId(const PlayerSceneComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->city_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->city_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->city_id_);
  }
  return this->city_id_;
};

// Line 432: range 00000000131D8B8E-00000000131D8BDA
uint32_t __cdecl PlayerSceneComp::getLevel1AreaId(const PlayerSceneComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->level1_area_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level1_area_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->level1_area_id_);
  }
  return this->level1_area_id_;
};

// Line 433: range 00000000131D8BDC-00000000131D8C30
uint32_t __cdecl PlayerSceneComp::getLevel2AreaId(const PlayerSceneComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->level2_area_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level2_area_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->level2_area_id_);
  }
  return this->level2_area_id_;
};

// Line 436: range 0000000017D68BAA-0000000017D68BFC
// local variable allocation has failed, the output may be wrong!
void __cdecl PlayerSceneComp::setLevel1AreaId(PlayerSceneComp *const this, uint32_t level1_area_id)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->level1_area_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level1_area_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level1_area_id_, *(_QWORD *)&level1_area_id, (_BYTE)this - 120);
  }
  this->level1_area_id_ = level1_area_id;
};

// Line 443: range 0000000013844A58-0000000013844AA9
WeatherAreaPtr __cdecl PlayerSceneComp::getWeatherArea(const PlayerSceneComp *const this)
{
  __int64 v1; // rsi
  WeatherAreaPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v1);
  result = std::weak_ptr<WeatherArea>::lock((const std::weak_ptr<WeatherArea> *const)this);
  result._M_ptr = (std::__shared_ptr<WeatherArea,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 467: range 00000000131D8C32-00000000131D8C5D
void __cdecl PlayerSceneComp::setCurWorld(PlayerSceneComp *const this, WorldPtr *p_world_ptr)
{
  std::weak_ptr<World>::operator=<World>(&this->cur_world_wtr_, p_world_ptr);
};

// Line 468: range 00000000131D8C5E-00000000131D8CAF
WorldPtr __cdecl PlayerSceneComp::getCurWorld(const PlayerSceneComp *const this)
{
  __int64 v1; // rsi
  WorldPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v1);
  result = std::weak_ptr<World>::lock((const std::weak_ptr<World> *const)this);
  result._M_ptr = (std::__shared_ptr<World,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 468: range 00000000131D8CB0-00000000131D8D02
// local variable allocation has failed, the output may be wrong!
void __cdecl PlayerSceneComp::setCurWorldOwnerUid(PlayerSceneComp *const this, uint32_t uid)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_world_owner_uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_world_owner_uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_world_owner_uid_, *(_QWORD *)&uid, (_BYTE)this - 112);
  }
  this->cur_world_owner_uid_ = uid;
};

// Line 470: range 0000000013EBBEF0-0000000013EBBF3C
uint32_t __cdecl PlayerSceneComp::getCurWorldOwnerUid(const PlayerSceneComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_world_owner_uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_world_owner_uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_world_owner_uid_);
  }
  return this->cur_world_owner_uid_;
};

// Line 473: range 00000000131D8DA8-00000000131D8DD4
PlayerWorldPtr __cdecl PlayerSceneComp::getMyPlayerWorld(const PlayerSceneComp *const this)
{
  __int64 v1; // rsi
  PlayerWorldPtr result; // rax

  std::shared_ptr<PlayerWorld>::shared_ptr(
    (std::shared_ptr<PlayerWorld> *const)this,
    (const std::shared_ptr<PlayerWorld> *)(v1 + 56));
  result._M_ptr = (std::__shared_ptr<PlayerWorld,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 479: range 00000000131D8DD6-00000000131D8DE9
const std::string *__cdecl PlayerSceneComp::getEnterWorldTransaction[abi:cxx11](const PlayerSceneComp *const this)
{
  return &this->enter_world_tran_;
};

// Line 565: range 00000000149ED6D2-00000000149ED6F1
uint32_t __cdecl PlayerSceneComp::getObtainedWoodTypeNum(const PlayerSceneComp *const this)
{
  return std::set<unsigned int>::size(&this->obtained_wood_type_set_);
};

// Line 599: range 0000000016907A54-0000000016907AA0
uint32_t __cdecl PlayerSceneComp::getEnterSceneToken(const PlayerSceneComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->enter_scene_token_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->enter_scene_token_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->enter_scene_token_);
  }
  return this->enter_scene_token_;
};

// Line 605: range 0000000015A1A3CE-0000000015A1A3E1
const std::unordered_map<unsigned int,bool> *__cdecl PlayerSceneComp::getMapAreaInfoMap(
        const PlayerSceneComp *const this)
{
  return &this->map_area_info_map_;
};

// Line 644: range 000000001720FFC4-0000000017210016
// local variable allocation has failed, the output may be wrong!
void __cdecl PlayerSceneComp::setLastAreaPlayType(PlayerSceneComp *const this, uint32_t area_play_type)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->last_area_play_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_area_play_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_area_play_type_, *(_QWORD *)&area_play_type, (_BYTE)this + 72);
  }
  this->last_area_play_type_ = area_play_type;
};

// Line 668: range 0000000017D68BFE-0000000017D68C11
const std::vector<HitTreePos> *__cdecl PlayerSceneComp::getHitTreePosInfo(const PlayerSceneComp *const this)
{
  return &this->hit_tree_pos_vec_;
};

// Line 762: range 0000000017210018-000000001721006C
uint32_t __cdecl PlayerSceneComp::getFirstTransPointId(const PlayerSceneComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->first_trans_point_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->first_trans_point_id_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->first_trans_point_id_);
  }
  return this->first_trans_point_id_;
};

// Line 762: range 000000001721006E-00000000172100C9
void __cdecl PlayerSceneComp::setFirstTransPointId(PlayerSceneComp *const this, uint32_t first_trans_point_id__out)
{
  bool v2; // dl

  v2 = *(_BYTE *)(((unsigned __int64)&this->first_trans_point_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->first_trans_point_id_ >> 3)
                                                         + 0x7FFF8000);
  if ( v2 )
    __asan_report_store4(&this->first_trans_point_id_, (((_BYTE)this + 116) & 7u) + 3, v2);
  this->first_trans_point_id_ = first_trans_point_id__out;
};

// Line 763: range 00000000172100CA-0000000017210116
uint32_t __cdecl PlayerSceneComp::getEnterFirstTransPointTime(const PlayerSceneComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->enter_first_trans_point_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->enter_first_trans_point_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->enter_first_trans_point_time_);
  }
  return this->enter_first_trans_point_time_;
};

// Line 763: range 0000000017210118-000000001721016B
// local variable allocation has failed, the output may be wrong!
void __cdecl PlayerSceneComp::setEnterFirstTransPointTime(
        PlayerSceneComp *const this,
        uint32_t enter_first_trans_point_time__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->enter_first_trans_point_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->enter_first_trans_point_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(
      &this->enter_first_trans_point_time_,
      *(_QWORD *)&enter_first_trans_point_time__out,
      (_BYTE)this + 120);
  }
  this->enter_first_trans_point_time_ = enter_first_trans_point_time__out;
};

// Line 777: range 0000000013EBBF7A-0000000013EBBFCE
proto::EnterType __cdecl PlayerSceneComp::getDestEnterType(const PlayerSceneComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->dest_enter_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dest_enter_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->dest_enter_type_);
  }
  return this->dest_enter_type_;
};

// Line 777: range 000000001721016C-00000000172101C7
void __cdecl PlayerSceneComp::setDestEnterType(PlayerSceneComp *const this, proto::EnterType dest_enter_type__out)
{
  bool v2; // dl

  v2 = *(_BYTE *)(((unsigned __int64)&this->dest_enter_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dest_enter_type_ >> 3) + 0x7FFF8000);
  if ( v2 )
    __asan_report_store4(&this->dest_enter_type_, (((_BYTE)this + 92) & 7u) + 3, v2);
  this->dest_enter_type_ = dest_enter_type__out;
};

// Line 778: range 00000000172101C8-0000000017210214
proto::VisionType __cdecl PlayerSceneComp::getDestVisionType(const PlayerSceneComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->dest_vision_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dest_vision_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->dest_vision_type_);
  }
  return this->dest_vision_type_;
};

// Line 778: range 0000000017210216-0000000017210269
// local variable allocation has failed, the output may be wrong!
void __cdecl PlayerSceneComp::setDestVisionType(PlayerSceneComp *const this, proto::VisionType dest_vision_type__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->dest_vision_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dest_vision_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dest_vision_type_, *(_QWORD *)&dest_vision_type__out, (_BYTE)this + 96);
  }
  this->dest_vision_type_ = dest_vision_type__out;
};

// Line 779: range 00000000146176FA-000000001461774C
bool __cdecl PlayerSceneComp::getIsEnterRelogin(const PlayerSceneComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_enter_relogin_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 100) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_enter_relogin_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_enter_relogin_);
  }
  return this->is_enter_relogin_;
};

// Line 779: range 000000001721026A-00000000172102C5
void __cdecl PlayerSceneComp::setIsEnterRelogin(PlayerSceneComp *const this, bool is_enter_relogin__out)
{
  __int64 v2; // rsi
  __int64 v3; // rdx

  v2 = ((_BYTE)this + 100) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_enter_relogin_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_enter_relogin_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_enter_relogin_, v2, v3);
  this->is_enter_relogin_ = is_enter_relogin__out;
};

// Line 780: range 0000000015D35C02-0000000015D35C54
bool __cdecl PlayerSceneComp::getIsClientRelogin(const PlayerSceneComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_client_relogin_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 101) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_client_relogin_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_client_relogin_);
  }
  return this->is_client_relogin_;
};

// Line 780: range 00000000172102C6-0000000017210321
void __cdecl PlayerSceneComp::setIsClientRelogin(PlayerSceneComp *const this, bool is_client_relogin__out)
{
  __int64 v2; // rsi
  __int64 v3; // rdx

  v2 = ((_BYTE)this + 101) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_client_relogin_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_client_relogin_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_client_relogin_, v2, v3);
  this->is_client_relogin_ = is_client_relogin__out;
};

// Line 781: range 000000001461774E-000000001461779A
proto::EnterReason __cdecl PlayerSceneComp::getDestEnterReason(const PlayerSceneComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->dest_enter_reason_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dest_enter_reason_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->dest_enter_reason_);
  }
  return this->dest_enter_reason_;
};

// Line 781: range 0000000017210322-0000000017210375
// local variable allocation has failed, the output may be wrong!
void __cdecl PlayerSceneComp::setDestEnterReason(
        PlayerSceneComp *const this,
        proto::EnterReason dest_enter_reason__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->dest_enter_reason_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dest_enter_reason_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dest_enter_reason_, *(_QWORD *)&dest_enter_reason__out, (_BYTE)this + 104);
  }
  this->dest_enter_reason_ = dest_enter_reason__out;
};

// Line 782: range 0000000013844AAA-0000000013844AFE
EnterSceneState __cdecl PlayerSceneComp::getEnterSceneState(const PlayerSceneComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->enter_scene_state_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->enter_scene_state_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->enter_scene_state_);
  }
  return this->enter_scene_state_;
};

// Line 782: range 0000000017210376-00000000172103D1
void __cdecl PlayerSceneComp::setEnterSceneState(PlayerSceneComp *const this, EnterSceneState enter_scene_state__out)
{
  bool v2; // dl

  v2 = *(_BYTE *)(((unsigned __int64)&this->enter_scene_state_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->enter_scene_state_ >> 3)
                                                         + 0x7FFF8000);
  if ( v2 )
    __asan_report_store4(&this->enter_scene_state_, (((_BYTE)this + 108) & 7u) + 3, v2);
  this->enter_scene_state_ = enter_scene_state__out;
};

// Line 783: range 00000000172103D2-0000000017210425
// local variable allocation has failed, the output may be wrong!
void __cdecl PlayerSceneComp::setEnterSceneToken(PlayerSceneComp *const this, uint32_t enter_scene_token__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->enter_scene_token_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->enter_scene_token_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->enter_scene_token_, *(_QWORD *)&enter_scene_token__out, (_BYTE)this + 112);
  }
  this->enter_scene_token_ = enter_scene_token__out;
};

// Line 785: range 00000000149ED6F2-00000000149ED73E
uint32_t __cdecl PlayerSceneComp::getTotalBossChestTakeNum(const PlayerSceneComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->total_boss_chest_take_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->total_boss_chest_take_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->total_boss_chest_take_num_);
  }
  return this->total_boss_chest_take_num_;
};

// Line 786: range 00000000143FF796-00000000143FF7E8
bool __cdecl PlayerSceneComp::getIsHasTransferMarkForSpeedCheck(const PlayerSceneComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_has_transfer_mark_for_speed_check_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 124) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_has_transfer_mark_for_speed_check_ >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_has_transfer_mark_for_speed_check_);
  }
  return this->is_has_transfer_mark_for_speed_check_;
};

// Line 786: range 0000000017210426-0000000017210481
void __cdecl PlayerSceneComp::setIsHasTransferMarkForSpeedCheck(
        PlayerSceneComp *const this,
        bool is_has_transfer_mark_for_speed_check__out)
{
  __int64 v2; // rsi
  __int64 v3; // rdx

  v2 = ((_BYTE)this + 124) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_has_transfer_mark_for_speed_check_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_has_transfer_mark_for_speed_check_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_has_transfer_mark_for_speed_check_, v2, v3);
  this->is_has_transfer_mark_for_speed_check_ = is_has_transfer_mark_for_speed_check__out;
};

// Line 787: range 0000000017210482-00000000172104D4
bool __cdecl PlayerSceneComp::getIsHasTransferMarkForSceneTimeSpeedCheck(const PlayerSceneComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_has_transfer_mark_for_scene_time_speed_check_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 125) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_has_transfer_mark_for_scene_time_speed_check_ >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_has_transfer_mark_for_scene_time_speed_check_);
  }
  return this->is_has_transfer_mark_for_scene_time_speed_check_;
};

// Line 787: range 00000000172104D6-0000000017210531
void __cdecl PlayerSceneComp::setIsHasTransferMarkForSceneTimeSpeedCheck(
        PlayerSceneComp *const this,
        bool is_has_transfer_mark_for_scene_time_speed_check__out)
{
  __int64 v2; // rsi
  __int64 v3; // rdx

  v2 = ((_BYTE)this + 125) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_has_transfer_mark_for_scene_time_speed_check_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_has_transfer_mark_for_scene_time_speed_check_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_has_transfer_mark_for_scene_time_speed_check_, v2, v3);
  this->is_has_transfer_mark_for_scene_time_speed_check_ = is_has_transfer_mark_for_scene_time_speed_check__out;
};

// Line 788: range 0000000017210532-000000001721057E
uint32_t __cdecl PlayerSceneComp::getPrevWeatherAreaId(const PlayerSceneComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->prev_weather_area_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->prev_weather_area_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->prev_weather_area_id_);
  }
  return this->prev_weather_area_id_;
};

// Line 802: range 0000000015A1A3E2-0000000015A1A42E
uint32_t __cdecl PlayerSceneComp::getChatBlockEndTime(const PlayerSceneComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->chat_block_end_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->chat_block_end_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->chat_block_end_time_);
  }
  return this->chat_block_end_time_;
};

// Line 802: range 0000000016907AA2-0000000016907AF5
// local variable allocation has failed, the output may be wrong!
void __cdecl PlayerSceneComp::setChatBlockEndTime(PlayerSceneComp *const this, uint32_t chat_block_end_time__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->chat_block_end_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->chat_block_end_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->chat_block_end_time_, *(_QWORD *)&chat_block_end_time__out, (_BYTE)this + 88);
  }
  this->chat_block_end_time_ = chat_block_end_time__out;
};

// Line 839: range 000000001723F076-000000001723F1E0
std::shared_ptr<HomeWorld> __cdecl PlayerSceneComp::getCurWorld<HomeWorld>(const PlayerSceneComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::shared_ptr<HomeWorld> result; // rax
  char v5[128]; // [rsp+10h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 13 world_ptr:841 64 16 7 ptr:842";
  *(_QWORD *)(v1 + 16) = PlayerSceneComp::getCurWorld<HomeWorld>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  PlayerSceneComp::getCurWorld((const PlayerSceneComp *const)(v1 + 32));
  std::dynamic_pointer_cast<HomeWorld,World>((const std::shared_ptr<World> *)(v1 + 64));
  if ( std::operator==<HomeWorld>((const std::shared_ptr<HomeWorld> *)(v1 + 64), 0LL) )
    std::shared_ptr<HomeWorld>::shared_ptr((std::shared_ptr<HomeWorld> *const)this, 0LL);
  else
    std::shared_ptr<HomeWorld>::shared_ptr(
      (std::shared_ptr<HomeWorld> *const)this,
      (std::shared_ptr<HomeWorld> *)(v1 + 64));
  std::shared_ptr<HomeWorld>::~shared_ptr((std::shared_ptr<HomeWorld> *const)(v1 + 64));
  std::shared_ptr<World>::~shared_ptr((std::shared_ptr<World> *const)(v1 + 32));
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
  result._M_ptr = (std::__shared_ptr<HomeWorld,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 852: range 00000000138DA19A-00000000138DA304
std::shared_ptr<DungeonScene> __cdecl PlayerSceneComp::getCurScene<DungeonScene>(PlayerSceneComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::shared_ptr<DungeonScene> result; // rax
  char v5[128]; // [rsp+10h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 13 scene_ptr:854 64 16 7 ptr:855";
  *(_QWORD *)(v1 + 16) = PlayerSceneComp::getCurScene<DungeonScene>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v1 + 32));
  std::dynamic_pointer_cast<DungeonScene,Scene>((const std::shared_ptr<Scene> *)(v1 + 64));
  if ( std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v1 + 64), 0LL) )
    std::shared_ptr<DungeonScene>::shared_ptr((std::shared_ptr<DungeonScene> *const)this, 0LL);
  else
    std::shared_ptr<DungeonScene>::shared_ptr(
      (std::shared_ptr<DungeonScene> *const)this,
      (std::shared_ptr<DungeonScene> *)(v1 + 64));
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v1 + 64));
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 32));
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
  result._M_ptr = (std::__shared_ptr<DungeonScene,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 852: range 0000000013212EF4-000000001321305E
std::shared_ptr<PlayerWorldScene> __cdecl PlayerSceneComp::getCurScene<PlayerWorldScene>(PlayerSceneComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::shared_ptr<PlayerWorldScene> result; // rax
  char v5[128]; // [rsp+10h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 13 scene_ptr:854 64 16 7 ptr:855";
  *(_QWORD *)(v1 + 16) = PlayerSceneComp::getCurScene<PlayerWorldScene>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v1 + 32));
  std::dynamic_pointer_cast<PlayerWorldScene,Scene>((const std::shared_ptr<Scene> *)(v1 + 64));
  if ( std::operator==<PlayerWorldScene>((const std::shared_ptr<PlayerWorldScene> *)(v1 + 64), 0LL) )
    std::shared_ptr<PlayerWorldScene>::shared_ptr((std::shared_ptr<PlayerWorldScene> *const)this, 0LL);
  else
    std::shared_ptr<PlayerWorldScene>::shared_ptr(
      (std::shared_ptr<PlayerWorldScene> *const)this,
      (std::shared_ptr<PlayerWorldScene> *)(v1 + 64));
  std::shared_ptr<PlayerWorldScene>::~shared_ptr((std::shared_ptr<PlayerWorldScene> *const)(v1 + 64));
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 32));
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
  result._M_ptr = (std::__shared_ptr<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 13618: range 000000001518A4AE-000000001518A4FF
ChallengePtr __cdecl PlayerSceneComp::getCurrentCombatStatChallenge(const PlayerSceneComp *const this)
{
  __int64 v1; // rsi
  ChallengePtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v1);
  result = std::weak_ptr<Challenge>::lock((const std::weak_ptr<Challenge> *const)this);
  result._M_ptr = (std::__shared_ptr<Challenge,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};
