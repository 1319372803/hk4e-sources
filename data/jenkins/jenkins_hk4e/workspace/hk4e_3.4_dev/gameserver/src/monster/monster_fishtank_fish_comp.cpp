// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/monster/monster_fishtank_fish_comp.cpp

// Line 16: range 00000000168D3D9E-00000000168D3ED0
void __cdecl MonsterFishtankFishComp::MonsterFishtankFishComp(
        MonsterFishtankFishComp *const this,
        Monster *monster,
        float fish_distance_from_water,
        float fish_scale,
        float initial_rotation_y)
{
  int (**v5)(...); // rdx

  MonsterCompBase::MonsterCompBase(this, monster);
  v5 = (int (**)(...))(&`vtable for'MonsterFishtankFishComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_MonsterCompBase = v5;
  if ( *(_BYTE *)(((unsigned __int64)&this->fish_distance_from_water_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fish_distance_from_water_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fish_distance_from_water_);
  }
  this->fish_distance_from_water_ = fish_distance_from_water;
  if ( *(_BYTE *)(((unsigned __int64)&this->fish_scale_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fish_scale_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->fish_scale_);
  }
  this->fish_scale_ = fish_scale;
  if ( *(_BYTE *)(((unsigned __int64)&this->initial_rotation_y_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->initial_rotation_y_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->initial_rotation_y_);
  }
  this->initial_rotation_y_ = initial_rotation_y;
};

// Line 23: range 00000000168D3ED2-00000000168D3FDE
int32_t __cdecl MonsterFishtankFishComp::toClient(
        const MonsterFishtankFishComp *const this,
        proto::SceneMonsterInfo *scene_monster_info)
{
  proto::FishtankFishInfo *fish_info; // [rsp+18h] [rbp-8h]

  fish_info = proto::SceneMonsterInfo::mutable_fishtank_fish_info(scene_monster_info);
  if ( *(_BYTE *)(((unsigned __int64)&this->fish_distance_from_water_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fish_distance_from_water_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::FishtankFishInfo::set_fish_distance_from_water(fish_info, this->fish_distance_from_water_);
  if ( *(_BYTE *)(((unsigned __int64)&this->fish_scale_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fish_scale_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::FishtankFishInfo::set_fish_scale(fish_info, this->fish_scale_);
  if ( *(_BYTE *)(((unsigned __int64)&this->initial_rotation_y_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->initial_rotation_y_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::FishtankFishInfo::set_initial_rotation_y(fish_info, this->initial_rotation_y_);
  return 0;
};
