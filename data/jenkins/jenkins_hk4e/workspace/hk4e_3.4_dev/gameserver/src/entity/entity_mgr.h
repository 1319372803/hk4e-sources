// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/entity/entity_mgr.h

// Line 59: range 00000000131E66A8-00000000131E6700
void __cdecl FishParam::FishParam(FishParam *const this)
{
  std::shared_ptr<Gadget>::shared_ptr(&this->gadget_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&this->fish_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fish_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fish_id);
  }
  this->fish_id = 0;
};

// Line 59: range 0000000014C898F2-0000000014C8998C
void __cdecl FishParam::FishParam(FishParam *const this, FishParam *a2)
{
  uint32_t fish_id; // ecx

  std::shared_ptr<Gadget>::shared_ptr(&this->gadget_ptr, &a2->gadget_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&a2->fish_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->fish_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  fish_id = a2->fish_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->fish_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fish_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fish_id);
  }
  this->fish_id = fish_id;
};

// Line 59: range 00000000131E6702-00000000131E671C
void __cdecl FishParam::~FishParam(FishParam *const this)
{
  std::shared_ptr<Gadget>::~shared_ptr(&this->gadget_ptr);
};

// Line 65: range 00000000131E671E-00000000131E683F
void __cdecl FishtankFishParam::FishtankFishParam(FishtankFishParam *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)this & 7) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(this);
  }
  this->is_fishtank_fish = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->fish_distance_from_water >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fish_distance_from_water >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store4(&this->fish_distance_from_water);
  }
  this->fish_distance_from_water = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->fish_scale >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fish_scale >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->fish_scale);
  }
  this->fish_scale = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->initial_rotation_y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->initial_rotation_y >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->initial_rotation_y);
  }
  this->initial_rotation_y = 0.0;
};

// Line 74: range 00000000131E6840-00000000131E7007
void __cdecl MonsterParam::MonsterParam(MonsterParam *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->monster_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->config_id);
  }
  this->config_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->entity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->entity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->entity_id);
  }
  this->entity_id = 0;
  Vector3::Vector3(&this->pos, 0.0, 0.0, 0.0);
  Vector3::Vector3(&this->rot, 0.0, 0.0, 0.0);
  if ( *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->level);
  }
  this->level = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->config_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->config_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->config_level);
  }
  this->config_level = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->revise_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->revise_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->revise_level);
  }
  this->revise_level = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->drop_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->drop_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->drop_id);
  }
  this->drop_id = 0;
  std::shared_ptr<Group>::shared_ptr(&this->group_ptr);
  std::shared_ptr<Creature>::shared_ptr(&this->owner_ptr);
  if ( *(char *)(((unsigned __int64)&this->is_ban_txt_drop >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_ban_txt_drop);
  this->is_ban_txt_drop = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_elite >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 89) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_elite >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_elite);
  }
  this->is_elite = 0;
  std::set<unsigned int>::set(&this->affix_set);
  if ( *(_BYTE *)(((unsigned __int64)&this->summoned_tag >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->summoned_tag >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->summoned_tag);
  }
  this->summoned_tag = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->born_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->born_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->born_type);
  }
  this->born_type = MONSTER_BORN_DEFAULT;
  if ( *(_BYTE *)(((unsigned __int64)&this->master_entity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->master_entity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->master_entity_id);
  }
  this->master_entity_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->born_slot_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->born_slot_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->born_slot_index);
  }
  this->born_slot_index = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->room_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->room_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->room_id);
  }
  this->room_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->guest_ban_drop >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->guest_ban_drop >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->guest_ban_drop);
  }
  this->guest_ban_drop = 0;
  std::string::basic_string(&this->drop_tag);
  if ( *(_BYTE *)(((unsigned __int64)&this->title_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->title_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->title_id);
  }
  this->title_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->special_name_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->special_name_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->special_name_id);
  }
  this->special_name_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->init_pose >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->init_pose >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->init_pose);
  }
  this->init_pose = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->climate_area_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->climate_area_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->climate_area_id);
  }
  this->climate_area_id = 0;
  std::shared_ptr<EntitySightGroup>::shared_ptr(&this->sight_group_ptr, 0LL);
  if ( *(_BYTE *)(((unsigned __int64)&this->sight_group_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->sight_group_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->sight_group_index);
  }
  this->sight_group_index = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_vision_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->group_vision_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->group_vision_type);
  }
  this->group_vision_type = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->monster_pool_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->monster_pool_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->monster_pool_id);
  }
  this->monster_pool_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->ai_config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->ai_config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->ai_config_id);
  }
  this->ai_config_id = 0;
  std::map<std::string,float>::map(&this->global_value_map);
  if ( *(_BYTE *)(((unsigned __int64)&this->level_route_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_route_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level_route_id);
  }
  this->level_route_id = 0;
  FishParam::FishParam(&this->fish_param);
  if ( *(char *)(((unsigned __int64)&this->is_light_config >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_light_config);
  this->is_light_config = 0;
  FishtankFishParam::FishtankFishParam(&this->fishtank_param);
  if ( *(_BYTE *)(((unsigned __int64)&this->initial_hp_percentage >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->initial_hp_percentage >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->initial_hp_percentage);
  }
  this->initial_hp_percentage = 0.0;
};

// Line 74: range 0000000014C8998E-0000000014C8AA93
void __cdecl MonsterParam::MonsterParam(MonsterParam *const this, MonsterParam *a2)
{
  double v2; // xmm0_8
  uint32_t monster_id; // ecx
  uint32_t config_id; // ecx
  uint32_t entity_id; // ecx
  uint32_t level; // ecx
  uint32_t config_level; // ecx
  uint32_t revise_level; // ecx
  uint32_t drop_id; // ecx
  bool is_ban_txt_drop; // cl
  bool is_elite; // cl
  uint32_t summoned_tag; // ecx
  proto::MonsterBornType born_type; // ecx
  uint32_t master_entity_id; // ecx
  uint32_t born_slot_index; // ecx
  uint32_t room_id; // ecx
  uint32_t guest_ban_drop; // ecx
  uint32_t title_id; // ecx
  uint32_t special_name_id; // ecx
  uint32_t init_pose; // ecx
  uint32_t climate_area_id; // ecx
  uint32_t sight_group_index; // ecx
  uint32_t group_vision_type; // ecx
  uint32_t monster_pool_id; // ecx
  uint32_t ai_config_id; // ecx
  uint32_t level_route_id; // ecx
  bool is_light_config; // cl
  __int64 v28; // rdx
  float initial_hp_percentage; // xmm0_4

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    v2 = __asan_report_load4();
  }
  monster_id = a2->monster_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->monster_id = monster_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->config_id >> 3) + 0x7FFF8000) )
  {
    v2 = __asan_report_load4();
  }
  config_id = a2->config_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->config_id);
  }
  this->config_id = config_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->entity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->entity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    v2 = __asan_report_load4();
  }
  entity_id = a2->entity_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->entity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->entity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->entity_id);
  }
  this->entity_id = entity_id;
  if ( (((unsigned __int8)this + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&this->pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&this->pos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->pos, 12LL);
  }
  if ( (((unsigned __int8)a2 + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&a2->pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&a2->pos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->pos, 12LL);
  }
  this->pos = a2->pos;
  if ( *(char *)(((unsigned __int64)&this->rot >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->rot.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 35) & 7) >= *(_BYTE *)((((unsigned __int64)&this->rot.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->rot, 12LL);
  }
  if ( *(char *)(((unsigned __int64)&a2->rot >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&a2->rot.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 35) & 7) >= *(_BYTE *)((((unsigned __int64)&a2->rot.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->rot, 12LL);
  }
  this->rot = a2->rot;
  if ( *(_BYTE *)(((unsigned __int64)&a2->level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->level >> 3) + 0x7FFF8000) )
  {
    v2 = __asan_report_load4();
  }
  level = a2->level;
  if ( *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->level);
  }
  this->level = level;
  if ( *(_BYTE *)(((unsigned __int64)&a2->config_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->config_level >> 3) + 0x7FFF8000) <= 3 )
  {
    v2 = __asan_report_load4();
  }
  config_level = a2->config_level;
  if ( *(_BYTE *)(((unsigned __int64)&this->config_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->config_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->config_level);
  }
  this->config_level = config_level;
  if ( *(_BYTE *)(((unsigned __int64)&a2->revise_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->revise_level >> 3) + 0x7FFF8000) )
  {
    v2 = __asan_report_load4();
  }
  revise_level = a2->revise_level;
  if ( *(_BYTE *)(((unsigned __int64)&this->revise_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->revise_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->revise_level);
  }
  this->revise_level = revise_level;
  if ( *(_BYTE *)(((unsigned __int64)&a2->drop_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->drop_id >> 3) + 0x7FFF8000) <= 3 )
  {
    v2 = __asan_report_load4();
  }
  drop_id = a2->drop_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->drop_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->drop_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->drop_id);
  }
  this->drop_id = drop_id;
  std::shared_ptr<Group>::shared_ptr(&this->group_ptr, &a2->group_ptr);
  std::shared_ptr<Creature>::shared_ptr(&this->owner_ptr, &a2->owner_ptr);
  if ( *(char *)(((unsigned __int64)&a2->is_ban_txt_drop >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_ban_txt_drop);
  is_ban_txt_drop = a2->is_ban_txt_drop;
  if ( *(char *)(((unsigned __int64)&this->is_ban_txt_drop >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_ban_txt_drop);
  this->is_ban_txt_drop = is_ban_txt_drop;
  if ( *(_BYTE *)(((unsigned __int64)&a2->is_elite >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 89) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->is_elite >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&a2->is_elite);
  }
  is_elite = a2->is_elite;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_elite >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 89) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_elite >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_elite);
  }
  this->is_elite = is_elite;
  std::set<unsigned int>::set(&this->affix_set, &a2->affix_set);
  if ( *(_BYTE *)(((unsigned __int64)&a2->summoned_tag >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->summoned_tag >> 3) + 0x7FFF8000) <= 3 )
  {
    v2 = __asan_report_load4();
  }
  summoned_tag = a2->summoned_tag;
  if ( *(_BYTE *)(((unsigned __int64)&this->summoned_tag >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->summoned_tag >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->summoned_tag);
  }
  this->summoned_tag = summoned_tag;
  if ( *(_BYTE *)(((unsigned __int64)&a2->born_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->born_type >> 3) + 0x7FFF8000) )
  {
    v2 = __asan_report_load4();
  }
  born_type = a2->born_type;
  if ( *(_BYTE *)(((unsigned __int64)&this->born_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->born_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->born_type);
  }
  this->born_type = born_type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->master_entity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->master_entity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    v2 = __asan_report_load4();
  }
  master_entity_id = a2->master_entity_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->master_entity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->master_entity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->master_entity_id);
  }
  this->master_entity_id = master_entity_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->born_slot_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->born_slot_index >> 3) + 0x7FFF8000) )
  {
    v2 = __asan_report_load4();
  }
  born_slot_index = a2->born_slot_index;
  if ( *(_BYTE *)(((unsigned __int64)&this->born_slot_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->born_slot_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->born_slot_index);
  }
  this->born_slot_index = born_slot_index;
  if ( *(_BYTE *)(((unsigned __int64)&a2->room_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->room_id >> 3) + 0x7FFF8000) <= 3 )
  {
    v2 = __asan_report_load4();
  }
  room_id = a2->room_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->room_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->room_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->room_id);
  }
  this->room_id = room_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->guest_ban_drop >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->guest_ban_drop >> 3) + 0x7FFF8000) )
  {
    v2 = __asan_report_load4();
  }
  guest_ban_drop = a2->guest_ban_drop;
  if ( *(_BYTE *)(((unsigned __int64)&this->guest_ban_drop >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->guest_ban_drop >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->guest_ban_drop);
  }
  this->guest_ban_drop = guest_ban_drop;
  std::string::basic_string(&this->drop_tag, &a2->drop_tag, v2);
  if ( *(_BYTE *)(((unsigned __int64)&a2->title_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->title_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  title_id = a2->title_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->title_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->title_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->title_id);
  }
  this->title_id = title_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->special_name_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->special_name_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  special_name_id = a2->special_name_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->special_name_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->special_name_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->special_name_id);
  }
  this->special_name_id = special_name_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->init_pose >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->init_pose >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  init_pose = a2->init_pose;
  if ( *(_BYTE *)(((unsigned __int64)&this->init_pose >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->init_pose >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->init_pose);
  }
  this->init_pose = init_pose;
  if ( *(_BYTE *)(((unsigned __int64)&a2->climate_area_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->climate_area_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  climate_area_id = a2->climate_area_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->climate_area_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->climate_area_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->climate_area_id);
  }
  this->climate_area_id = climate_area_id;
  std::shared_ptr<EntitySightGroup>::shared_ptr(&this->sight_group_ptr, &a2->sight_group_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&a2->sight_group_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->sight_group_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  sight_group_index = a2->sight_group_index;
  if ( *(_BYTE *)(((unsigned __int64)&this->sight_group_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->sight_group_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->sight_group_index);
  }
  this->sight_group_index = sight_group_index;
  if ( *(_BYTE *)(((unsigned __int64)&a2->group_vision_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->group_vision_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  group_vision_type = a2->group_vision_type;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_vision_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->group_vision_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->group_vision_type);
  }
  this->group_vision_type = group_vision_type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->monster_pool_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->monster_pool_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  monster_pool_id = a2->monster_pool_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->monster_pool_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->monster_pool_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->monster_pool_id);
  }
  this->monster_pool_id = monster_pool_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->ai_config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->ai_config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  ai_config_id = a2->ai_config_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->ai_config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->ai_config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->ai_config_id);
  }
  this->ai_config_id = ai_config_id;
  std::map<std::string,float>::map(&this->global_value_map, &a2->global_value_map);
  if ( *(_BYTE *)(((unsigned __int64)&a2->level_route_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->level_route_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  level_route_id = a2->level_route_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_route_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_route_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level_route_id);
  }
  this->level_route_id = level_route_id;
  FishParam::FishParam(&this->fish_param, &a2->fish_param);
  if ( *(char *)(((unsigned __int64)&a2->is_light_config >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_light_config);
  is_light_config = a2->is_light_config;
  if ( *(char *)(((unsigned __int64)&this->is_light_config >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_light_config);
  this->is_light_config = is_light_config;
  if ( (((unsigned __int8)this + 76) & 7) >= *(_BYTE *)(((unsigned __int64)&this->fishtank_param >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->fishtank_param >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->fishtank_param.initial_rotation_y + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 91) & 7) >= *(_BYTE *)((((unsigned __int64)&this->fishtank_param.initial_rotation_y + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->fishtank_param, 16LL);
  }
  if ( (((unsigned __int8)a2 + 76) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->fishtank_param >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->fishtank_param >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&a2->fishtank_param.initial_rotation_y + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 91) & 7) >= *(_BYTE *)((((unsigned __int64)&a2->fishtank_param.initial_rotation_y + 3) >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->fishtank_param, 16LL);
  }
  v28 = *(_QWORD *)&a2->fishtank_param.fish_scale;
  *(_QWORD *)&this->fishtank_param.is_fishtank_fish = *(_QWORD *)&a2->fishtank_param.is_fishtank_fish;
  *(_QWORD *)&this->fishtank_param.fish_scale = v28;
  if ( *(_BYTE *)(((unsigned __int64)&a2->initial_hp_percentage >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->initial_hp_percentage >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  initial_hp_percentage = a2->initial_hp_percentage;
  if ( *(_BYTE *)(((unsigned __int64)&this->initial_hp_percentage >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->initial_hp_percentage >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->initial_hp_percentage);
  }
  this->initial_hp_percentage = initial_hp_percentage;
};

// Line 74: range 00000000131E7008-00000000131E708E
void __cdecl MonsterParam::~MonsterParam(MonsterParam *const this)
{
  FishParam::~FishParam(&this->fish_param);
  std::map<std::string,float>::~map(&this->global_value_map);
  std::shared_ptr<EntitySightGroup>::~shared_ptr(&this->sight_group_ptr);
  std::string::~string(&this->drop_tag);
  std::set<unsigned int>::~set(&this->affix_set);
  std::shared_ptr<Creature>::~shared_ptr(&this->owner_ptr);
  std::shared_ptr<Group>::~shared_ptr(&this->group_ptr);
};

// Line 116: range 0000000013EC488A-0000000013EC4A21
void __cdecl NpcParam::NpcParam(NpcParam *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->npc_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->config_id);
  }
  this->config_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->entity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->entity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->entity_id);
  }
  this->entity_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->room_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->room_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->room_id);
  }
  this->room_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->parent_quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->parent_quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->parent_quest_id);
  }
  this->parent_quest_id = 0;
  Vector3::Vector3(&this->pos, 0.0, 0.0, 0.0);
  Vector3::Vector3(&this->rot, 0.0, 0.0, 0.0);
  std::shared_ptr<Group>::shared_ptr(&this->group_ptr);
};

// Line 116: range 0000000013EC4A22-0000000013EC4A40
void __cdecl NpcParam::~NpcParam(NpcParam *const this)
{
  std::shared_ptr<Group>::~shared_ptr(&this->group_ptr);
};

// Line 129: range 00000000138457C4-0000000013845813
void __cdecl GatherParam::GatherParam(GatherParam *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->gather_id = 0;
};

// Line 129: range 00000000138476F4-0000000013847722
void __cdecl TrifleParam::~TrifleParam(TrifleParam *const this)
{
  std::shared_ptr<Group>::~shared_ptr(&this->group_ptr);
  std::shared_ptr<Item>::~shared_ptr(&this->item_ptr);
};

// Line 135: range 0000000013845814-00000000138458E3
void __cdecl ChestParam::ChestParam(ChestParam *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->chest_drop_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_show_cutscene >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_show_cutscene >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_show_cutscene);
  }
  this->is_show_cutscene = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_auto_pick >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 5) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_auto_pick >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_auto_pick);
  }
  this->is_auto_pick = 0;
};

// Line 143: range 00000000138458E4-0000000013845AAB
void __cdecl PlatformParam::PlatformParam(PlatformParam *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->moving_platform_type = MOVING_PLATFORM_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->route_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->route_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->route_id);
  }
  this->route_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_start_route >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_start_route >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_start_route);
  }
  this->is_start_route = 0;
  Quaternion::Quaternion(&this->rot_offset);
  Vector3::Vector3(&this->pos_offset, 0.0, 0.0, 0.0);
  if ( *(_BYTE *)(((unsigned __int64)&this->route_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 40) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->route_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->route_index);
  }
  this->route_index = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_started >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 44) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_started >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_started);
  }
  this->is_started = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_use_last_index >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 45) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_use_last_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_use_last_index);
  }
  this->is_use_last_index = 0;
};

// Line 156: range 0000000013845AAC-0000000013845BC7
void __cdecl AbilityGadgetParam::AbilityGadgetParam(AbilityGadgetParam *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)this & 7) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(this);
  }
  this->is_ability_created = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->camp_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->camp_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->camp_id);
  }
  this->camp_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->camp_target_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->camp_target_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->camp_target_type);
  }
  this->camp_target_type = Alliance;
  if ( *(_BYTE *)(((unsigned __int64)&this->target_entity_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->target_entity_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->target_entity_id);
  }
  this->target_entity_id = 0;
};

// Line 165: range 0000000013845BC8-0000000013845C17
void __cdecl InteractParam::InteractParam(InteractParam *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->interact_id = 0;
};

// Line 171: range 0000000013845C18-0000000013845CAC
void __cdecl WorktopParam::WorktopParam(WorktopParam *const this)
{
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(this);
  this->is_guest_can_operate = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_persistent >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 1) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_persistent >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_persistent);
  }
  this->is_persistent = 0;
  std::set<unsigned int>::set(&this->init_option_set);
};

// Line 171: range 0000000013845CAE-0000000013845CCC
void __cdecl WorktopParam::~WorktopParam(WorktopParam *const this)
{
  std::set<unsigned int>::~set(&this->init_option_set);
};

// Line 179: range 0000000013845CCE-0000000013845E3D
void __cdecl BlossomChestParam::BlossomChestParam(BlossomChestParam *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->blossom_chest_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->drop_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->drop_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->drop_id);
  }
  this->drop_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->dead_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dead_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dead_time);
  }
  this->dead_time = 0;
  std::set<unsigned int>::set(&this->qualify_uid_set);
  std::set<unsigned int>::set(&this->remain_uid_set);
  if ( *(_BYTE *)(((unsigned __int64)&this->item_limit_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->item_limit_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->item_limit_type);
  }
  this->item_limit_type = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->refresh_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->refresh_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->refresh_id);
  }
  this->refresh_id = 0;
};

// Line 179: range 0000000013845E3E-0000000013845E6C
void __cdecl BlossomChestParam::~BlossomChestParam(BlossomChestParam *const this)
{
  std::set<unsigned int>::~set(&this->remain_uid_set);
  std::set<unsigned int>::~set(&this->qualify_uid_set);
};

// Line 191: range 0000000013846000-00000000138461D0
void __cdecl GadgetGeneralRewardParam::GadgetGeneralRewardParam(GadgetGeneralRewardParam *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->resin = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->dead_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dead_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->dead_time);
  }
  this->dead_time = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->destroy_cd >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->destroy_cd >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->destroy_cd);
  }
  this->destroy_cd = 0;
  std::map<unsigned int,proto::GeneralRewardBin>::map(&this->qualify_info_map);
  std::set<unsigned int>::set(&this->remain_uid_set);
  if ( *(_BYTE *)(((unsigned __int64)&this->item_limit_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->item_limit_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->item_limit_type);
  }
  this->item_limit_type = 0;
  ItemParam::ItemParam(&this->item_param);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_auto_pick >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 124) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_auto_pick >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_auto_pick);
  }
  this->is_auto_pick = 0;
  std::set<unsigned int>::set(&this->open_state_set);
  if ( *(char *)(((unsigned __int64)&this->is_general_reward_hiden >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_general_reward_hiden);
  this->is_general_reward_hiden = 0;
};

// Line 191: range 00000000138461D2-0000000013846212
void __cdecl GadgetGeneralRewardParam::~GadgetGeneralRewardParam(GadgetGeneralRewardParam *const this)
{
  std::set<unsigned int>::~set(&this->open_state_set);
  std::set<unsigned int>::~set(&this->remain_uid_set);
  std::map<unsigned int,proto::GeneralRewardBin>::~map(&this->qualify_info_map);
};

// Line 206: range 0000000013846214-0000000013846263
void __cdecl GadgetOfferingParam::GadgetOfferingParam(GadgetOfferingParam *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->offering_id = 0;
};

// Line 212: range 0000000013846264-00000000138462B3
void __cdecl MiracleRingParam::MiracleRingParam(MiracleRingParam *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->owner_uid = 0;
};

// Line 221: range 000000001384630C-0000000013846363
void __cdecl FoundationParam::FoundationParam(FoundationParam *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->point_config_id = 0;
  std::shared_ptr<TowerDefensePlayBase>::shared_ptr(&this->play_base_ptr);
};

// Line 221: range 0000000013846364-0000000013846382
void __cdecl FoundationParam::~FoundationParam(FoundationParam *const this)
{
  std::shared_ptr<TowerDefensePlayBase>::~shared_ptr(&this->play_base_ptr);
};

// Line 228: range 0000000013846384-00000000138463D3
void __cdecl EchoShellParam::EchoShellParam(EchoShellParam *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->voice_id = 0;
};

// Line 234: range 00000000138463D4-0000000013846469
void __cdecl ScreenParam::ScreenParam(ScreenParam *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->live_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->projector_entity_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->projector_entity_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->projector_entity_id);
  }
  this->projector_entity_id = 0;
};

// Line 240: range 000000001384646A-000000001384658B
void __cdecl HomeGatherParam::HomeGatherParam(HomeGatherParam *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->gather_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->field_guid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->field_guid >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->field_guid);
  }
  this->field_guid = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->sub_field_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->sub_field_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->sub_field_index);
  }
  this->sub_field_index = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->bundle_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->bundle_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->bundle_index);
  }
  this->bundle_index = 0;
};

// Line 249: range 000000001384658C-00000000138466F3
void __cdecl RoguelikeOperatorParam::RoguelikeOperatorParam(RoguelikeOperatorParam *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->cell_config_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cell_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cell_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cell_id);
  }
  this->cell_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cell_state >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cell_state >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cell_state);
  }
  this->cell_state = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cell_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cell_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cell_type);
  }
  this->cell_type = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->owner_uid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->owner_uid >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->owner_uid);
  }
  this->owner_uid = 0;
};

// Line 259: range 00000000138466F4-0000000013846743
void __cdecl CoinCollectOperatorParam::CoinCollectOperatorParam(CoinCollectOperatorParam *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->level_id = 0;
};

// Line 265: range 0000000013846744-0000000013846793
void __cdecl WidgetGadgetParam::WidgetGadgetParam(WidgetGadgetParam *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->owner_uid = 0;
};

// Line 271: range 0000000013846794-0000000013846F42
void __cdecl GadgetParam::GadgetParam(GadgetParam *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->gadget_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->config_id);
  }
  this->config_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->entity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->entity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->entity_id);
  }
  this->entity_id = 0;
  Vector3::Vector3(&this->pos, 0.0, 0.0, 0.0);
  Vector3::Vector3(&this->rot, 0.0, 0.0, 0.0);
  if ( *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->level);
  }
  this->level = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->config_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->config_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->config_level);
  }
  this->config_level = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->revise_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->revise_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->revise_level);
  }
  this->revise_level = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->drop_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->drop_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->drop_id);
  }
  this->drop_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_state >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gadget_state >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gadget_state);
  }
  this->gadget_state = 0;
  std::shared_ptr<Group>::shared_ptr(&this->group_ptr);
  std::shared_ptr<Creature>::shared_ptr(&this->owner_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&this->target_entity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->target_entity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->target_entity_id);
  }
  this->target_entity_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->born_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->born_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->born_type);
  }
  this->born_type = GADGET_BORN_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->room_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->room_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->room_id);
  }
  this->room_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->guest_ban_drop >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->guest_ban_drop >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->guest_ban_drop);
  }
  this->guest_ban_drop = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->mp_play_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mp_play_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->mp_play_id);
  }
  this->mp_play_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_client_invisible >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 108) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_client_invisible >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_client_invisible);
  }
  this->is_client_invisible = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_by_quest >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 109) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_by_quest >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_by_quest);
  }
  this->is_by_quest = 0;
  std::shared_ptr<Creature>::shared_ptr(&this->prop_owner_ptr, 0LL);
  if ( *(_BYTE *)(((unsigned __int64)&this->only_vision_uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->only_vision_uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->only_vision_uid);
  }
  this->only_vision_uid = 0;
  std::shared_ptr<EntitySightGroup>::shared_ptr(&this->sight_group_ptr, 0LL);
  if ( *(_BYTE *)(((unsigned __int64)&this->group_vision_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_vision_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->group_vision_type);
  }
  this->group_vision_type = 0;
  std::vector<unsigned int>::vector(&this->interact_uid_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->talk_state >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->talk_state >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->talk_state);
  }
  this->talk_state = 0;
  std::shared_ptr<Player>::shared_ptr(&this->player_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&this->reason >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reason >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reason);
  }
  this->reason = CREATE_GADGET_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->reason_extra >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reason_extra >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->reason_extra);
  }
  this->reason_extra = 0;
  GatherParam::GatherParam(&this->gather);
  ChestParam::ChestParam(&this->chest);
  PlatformParam::PlatformParam(&this->platform);
  AbilityGadgetParam::AbilityGadgetParam(&this->ability);
  InteractParam::InteractParam(&this->interact);
  WorktopParam::WorktopParam(&this->worktop);
  BlossomChestParam::BlossomChestParam(&this->blossom_chest);
  GadgetGeneralRewardParam::GadgetGeneralRewardParam(&this->general_reward);
  GadgetOfferingParam::GadgetOfferingParam(&this->offering_param);
  MiracleRingParam::MiracleRingParam(&this->miracle_ring);
  FoundationParam::FoundationParam(&this->foundation);
  EchoShellParam::EchoShellParam(&this->echo_shell);
  ScreenParam::ScreenParam(&this->screen);
  HomeGatherParam::HomeGatherParam(&this->home_gather);
  RoguelikeOperatorParam::RoguelikeOperatorParam(&this->roguelike_operator_param);
  CoinCollectOperatorParam::CoinCollectOperatorParam(&this->coin_collect_operator_param);
  std::map<std::string,float>::map(&this->global_value_map);
  if ( *(_BYTE *)(((unsigned __int64)&this->point_config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->point_config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->point_config_id);
  }
  this->point_config_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->fixed_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fixed_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->fixed_level);
  }
  this->fixed_level = 0;
  WidgetGadgetParam::WidgetGadgetParam(&this->widget);
};

// Line 271: range 0000000013846F44-0000000013847012
void __cdecl GadgetParam::~GadgetParam(GadgetParam *const this)
{
  std::map<std::string,float>::~map(&this->global_value_map);
  FoundationParam::~FoundationParam(&this->foundation);
  GadgetGeneralRewardParam::~GadgetGeneralRewardParam(&this->general_reward);
  BlossomChestParam::~BlossomChestParam(&this->blossom_chest);
  WorktopParam::~WorktopParam(&this->worktop);
  std::shared_ptr<Player>::~shared_ptr(&this->player_ptr);
  std::vector<unsigned int>::~vector(&this->interact_uid_vec);
  std::shared_ptr<EntitySightGroup>::~shared_ptr(&this->sight_group_ptr);
  std::shared_ptr<Creature>::~shared_ptr(&this->prop_owner_ptr);
  std::shared_ptr<Creature>::~shared_ptr(&this->owner_ptr);
  std::shared_ptr<Group>::~shared_ptr(&this->group_ptr);
};

// Line 300: range 0000000015A1ADCD-0000000015A1ADE1
uint32_t __cdecl EntityUtils::getEntityId(proto::ProtEntityType type, uint32_t index)
{
  return index | (type << 24);
};

// Line 328: range 00000000138434CC-00000000138437EB
void __cdecl TrifleParam::TrifleParam(TrifleParam *const this, const ActionReason *action_reason)
{
  __int64 v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->entity_id = 0;
  std::shared_ptr<Item>::shared_ptr(&this->item_ptr);
  Vector3::Vector3(&this->pos, 0.0, 0.0, 0.0);
  Vector3::Vector3(&this->rot, 0.0, 0.0, 0.0);
  std::shared_ptr<Group>::shared_ptr(&this->group_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&this->source_entity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->source_entity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->source_entity_id);
  }
  this->source_entity_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->only_vision_uid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->only_vision_uid >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->only_vision_uid);
  }
  this->only_vision_uid = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->born_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->born_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->born_type);
  }
  this->born_type = GADGET_BORN_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->room_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->room_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->room_id);
  }
  this->room_id = 0;
  if ( *(char *)(((unsigned __int64)&this->is_by_drop >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_by_drop);
  this->is_by_drop = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_fake >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 81) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_fake >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_fake);
  }
  this->is_fake = 0;
  if ( (((unsigned __int8)this + 84) & 7) >= *(_BYTE *)(((unsigned __int64)&this->action_reason >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->action_reason >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->action_reason.is_by_overflow_transform + 2) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 107) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->action_reason.is_by_overflow_transform
                                                                           + 2) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->action_reason, 24LL);
  }
  if ( ((unsigned __int8)action_reason & 7) >= *(_BYTE *)(((unsigned __int64)action_reason >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)action_reason >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&action_reason->is_by_overflow_transform + 2) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)action_reason + 23) & 7) >= *(_BYTE *)(((unsigned __int64)(&action_reason->is_by_overflow_transform
                                                                                   + 2) >> 3)
                                                               + 0x7FFF8000) )
  {
    __asan_report_load_n(action_reason, 24LL);
  }
  v2 = *(_QWORD *)&action_reason->quest_id;
  *(_QWORD *)&this->action_reason.reason_type = *(_QWORD *)&action_reason->reason_type;
  *(_QWORD *)&this->action_reason.quest_id = v2;
  *(_QWORD *)&this->action_reason.item_exceed_msg_type = *(_QWORD *)&action_reason->item_exceed_msg_type;
};

// Line 344: range 00000000131E34D0-00000000131E38A0
void __cdecl ClientGadgetParam::ClientGadgetParam(ClientGadgetParam *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->gadget_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->entity_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entity_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->entity_id);
  }
  this->entity_id = 0;
  Vector3::Vector3(&this->pos, 0.0, 0.0, 0.0);
  Vector3::Vector3(&this->rot, 0.0, 0.0, 0.0);
  if ( *(_BYTE *)(((unsigned __int64)&this->camp_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->camp_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->camp_id);
  }
  this->camp_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->camp_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->camp_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->camp_type);
  }
  this->camp_type = 0;
  std::shared_ptr<Creature>::shared_ptr(&this->owner_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&this->target_entity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->target_entity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->target_entity_id);
  }
  this->target_entity_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->authority_peer_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->authority_peer_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->authority_peer_id);
  }
  this->authority_peer_id = 0;
  if ( *(char *)(((unsigned __int64)&this->is_async_load >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_async_load);
  this->is_async_load = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->exclude_uid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->exclude_uid >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->exclude_uid);
  }
  this->exclude_uid = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->room_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->room_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->room_id);
  }
  this->room_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->master_uid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->master_uid >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->master_uid);
  }
  this->master_uid = 0;
  std::shared_ptr<Creature>::shared_ptr(&this->prop_owner_ptr);
  std::shared_ptr<EntitySightGroup>::shared_ptr(&this->sight_group_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level);
  }
  this->level = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_peer_id_from_player >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 116) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_peer_id_from_player >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_peer_id_from_player);
  }
  this->is_peer_id_from_player = 0;
  std::vector<unsigned int>::vector(&this->target_entity_id_vec);
  if ( *(char *)(((unsigned __int64)&this->correct_owner >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->correct_owner);
  this->correct_owner = 0;
};

// Line 344: range 00000000131E38A2-00000000131E38F0
void __cdecl ClientGadgetParam::~ClientGadgetParam(ClientGadgetParam *const this)
{
  std::vector<unsigned int>::~vector(&this->target_entity_id_vec);
  std::shared_ptr<EntitySightGroup>::~shared_ptr(&this->sight_group_ptr);
  std::shared_ptr<Creature>::~shared_ptr(&this->prop_owner_ptr);
  std::shared_ptr<Creature>::~shared_ptr(&this->owner_ptr);
};

// Line 368: range 0000000016051EF2-0000000016052185
void __cdecl RegionParam::RegionParam(RegionParam *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->config_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->entity_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entity_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->entity_id);
  }
  this->entity_id = 0;
  Vector3::Vector3(&this->pos, 0.0, 0.0, 0.0);
  if ( *(_BYTE *)(((unsigned __int64)&this->shape >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->shape >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->shape);
  }
  this->shape = REGION_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->sphere_radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->sphere_radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->sphere_radius);
  }
  this->sphere_radius = 0.0;
  Vector3::Vector3(&this->cubic_size, 0.0, 0.0, 0.0);
  std::shared_ptr<Group>::shared_ptr(&this->group_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&this->room_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->room_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->room_id);
  }
  this->room_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->scene_id);
  }
  this->scene_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cylinder_radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cylinder_radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cylinder_radius);
  }
  this->cylinder_radius = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cylinder_height >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cylinder_height >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cylinder_height);
  }
  this->cylinder_height = 0.0;
  std::vector<data::Point2D>::vector(&this->relative_polygon_point_vec);
  Vector3::Vector3(&this->polygon_aabb_size, 0.0, 0.0, 0.0);
};

// Line 368: range 0000000016052186-00000000160521B4
void __cdecl RegionParam::~RegionParam(RegionParam *const this)
{
  std::vector<data::Point2D>::~vector(&this->relative_polygon_point_vec);
  std::shared_ptr<Group>::~shared_ptr(&this->group_ptr);
};

// Line 724: range 00000000149ED0D3-00000000149ED0E1
proto::ProtEntityType __cdecl EntityUtils::getEntityType(uint32_t entity_id)
{
  return HIBYTE(entity_id);
};
