// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_home_comp.h

// Line 28: range 0000000015D4130A-0000000015D41471
void __cdecl HomeFishtankFishInfo::HomeFishtankFishInfo(HomeFishtankFishInfo *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx
  bool v3; // dl
  bool v4; // dl
  bool v5; // dl
  bool v6; // dl

  v1 = (unsigned __int8)this & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(this, v1, v2);
  this->is_fishtank_fish = 0;
  v3 = *(_BYTE *)(((unsigned __int64)&this->fish_distance_from_water >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fish_distance_from_water >> 3)
                                                       + 0x7FFF8000);
  if ( v3 )
    __asan_report_store4(&this->fish_distance_from_water, (((_BYTE)this + 4) & 7u) + 3, v3);
  this->fish_distance_from_water = 0.0;
  v4 = *(_BYTE *)(((unsigned __int64)&this->initial_pose_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->initial_pose_id >> 3) + 0x7FFF8000);
  if ( v4 )
    __asan_report_store4(&this->initial_pose_id, (((_BYTE)this + 8) & 7u) + 3, v4);
  this->initial_pose_id = 0;
  v5 = *(_BYTE *)(((unsigned __int64)&this->fish_scale >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fish_scale >> 3) + 0x7FFF8000);
  if ( v5 )
    __asan_report_store4(&this->fish_scale, (((_BYTE)this + 12) & 7u) + 3, v5);
  this->fish_scale = 0.0;
  v6 = *(_BYTE *)(((unsigned __int64)&this->initial_rotation_y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->initial_rotation_y >> 3) + 0x7FFF8000);
  if ( v6 )
    __asan_report_store4(&this->initial_rotation_y, (((_BYTE)this + 16) & 7u) + 3, v6);
  this->initial_rotation_y = 0.0;
};

// Line 37: range 0000000015D41472-0000000015D41621
void __cdecl HomeAnimalInfo::HomeAnimalInfo(HomeAnimalInfo *const this)
{
  bool v1; // dl
  bool v2; // dl
  bool v3; // dl
  bool v4; // dl
  bool v5; // dl

  v1 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v1 )
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3, v1);
  this->block_id = 0;
  v2 = *(_BYTE *)(((unsigned __int64)&this->vec_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->vec_index >> 3) + 0x7FFF8000);
  if ( v2 )
    __asan_report_store4(&this->vec_index, (((_BYTE)this + 4) & 7u) + 3, v2);
  this->vec_index = -1;
  v3 = *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000);
  if ( v3 )
    __asan_report_store4(&this->furniture_id, (((_BYTE)this + 8) & 7u) + 3, v3);
  this->furniture_id = 0;
  v4 = *(_BYTE *)(((unsigned __int64)&this->monster_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->monster_id >> 3) + 0x7FFF8000);
  if ( v4 )
    __asan_report_store4(&this->monster_id, (((_BYTE)this + 12) & 7u) + 3, v4);
  this->monster_id = 0;
  Vector3::Vector3(&this->pos, 0.0, 0.0, 0.0);
  Vector3::Vector3(&this->rot, 0.0, 0.0, 0.0);
  v5 = *(_BYTE *)(((unsigned __int64)&this->respawn_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 40) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->respawn_time >> 3) + 0x7FFF8000);
  if ( v5 )
    __asan_report_store4(&this->respawn_time, (((_BYTE)this + 40) & 7u) + 3, v5);
  this->respawn_time = 0;
  HomeFishtankFishInfo::HomeFishtankFishInfo(&this->fishtank_fish_info);
};

// Line 52: range 0000000015F454C6-0000000015F45567
void __cdecl SceneHomeComp::~SceneHomeComp(SceneHomeComp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'SceneHomeComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SceneCompBase = v2;
  std::unordered_map<std::pair<unsigned int,unsigned int>,std::vector<unsigned int>,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,std::vector<unsigned int>>>>::~unordered_map(&this->scene_point_fish_entities_map_);
  std::unordered_map<unsigned int,std::vector<unsigned int>>::~unordered_map(&this->fishpond_guid_entities_map_);
  std::set<unsigned int>::~set(&this->server_gadget_entity_id_set_);
  std::set<unsigned int>::~set(&this->gather_entity_id_set_);
  std::map<unsigned int,HomeAnimalInfo>::~map(&this->animal_info_map_);
  SceneCompBase::~SceneCompBase(this);
};

// Line 52: range 0000000015F45568-0000000015F45592
void __cdecl SceneHomeComp::~SceneHomeComp(SceneHomeComp *const this)
{
  SceneHomeComp::~SceneHomeComp(this);
  operator delete(this, 0x120uLL);
};

// Line 58: range 0000000013606F16-0000000013607005
void __cdecl ZN13SceneHomeCompCI213SceneCompBaseER5Scene(SceneHomeComp *const this, Scene *a2)
{
  int (**v2)(...); // rdx

  SceneCompBase::SceneCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'SceneHomeComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_SceneCompBase = v2;
  std::map<unsigned int,HomeAnimalInfo>::map(&this->animal_info_map_);
  std::set<unsigned int>::set(&this->gather_entity_id_set_);
  std::set<unsigned int>::set(&this->server_gadget_entity_id_set_);
  if ( *(_BYTE *)(((unsigned __int64)&this->next_plant_refresh_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->next_plant_refresh_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->next_plant_refresh_time_, a2, (_BYTE)this - 88);
  }
  this->next_plant_refresh_time_ = 0;
  std::unordered_map<unsigned int,std::vector<unsigned int>>::unordered_map(&this->fishpond_guid_entities_map_);
  std::unordered_map<std::pair<unsigned int,unsigned int>,std::vector<unsigned int>,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,std::vector<unsigned int>>>>::unordered_map(&this->scene_point_fish_entities_map_);
};

// Line 303: range 000000001461D57A-000000001461D649
void __fastcall SceneHomeComp::onRemoveGather(SceneHomeComp *const this, uint32_t entity_id)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 12 entity_id:93";
  *(_QWORD *)(v2 + 16) = SceneHomeComp::onRemoveGather;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = entity_id;
  std::set<unsigned int>::erase(&this->gather_entity_id_set_, (const std::set<unsigned int>::key_type *)(v2 + 32));
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
