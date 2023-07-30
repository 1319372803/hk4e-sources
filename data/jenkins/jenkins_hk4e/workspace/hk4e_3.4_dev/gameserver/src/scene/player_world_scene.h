// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/player_world_scene.h

// Line 21: range 0000000015F87CBE-0000000015F87D1D
void __cdecl PlayerWorldScene::~PlayerWorldScene(PlayerWorldScene *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerWorldScene + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  std::unordered_set<unsigned int>::~unordered_set(&this->invisible_reset_alert_monster_set_);
  Scene::~Scene((Scene *const)this);
};

// Line 24: range 0000000015F2D08E-0000000015F2D333
void __fastcall ZN16PlayerWorldSceneCI25SceneEj(PlayerWorldScene *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  __int64 v5; // rsi
  int (**v6)(...); // rdx
  __int64 v7; // rsi
  bool v8; // dl
  __int64 v9; // rsi
  bool v10; // dl
  char v11[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN16PlayerWorldSceneCI25SceneEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  v5 = *(unsigned int *)(v2 + 32);
  Scene::Scene((Scene *const)this, v5);
  v6 = (int (**)(...))(&`vtable for'PlayerWorldScene + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v5);
  this->_vptr_DescribalBase = v6;
  v7 = (((_BYTE)this + 100) & 7u) + 3;
  v8 = *(_BYTE *)(((unsigned __int64)&this->cur_spring_volume_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_spring_volume_ >> 3)
                                                         + 0x7FFF8000);
  if ( v8 )
    __asan_report_store4(&this->cur_spring_volume_, v7, v8);
  this->cur_spring_volume_ = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_spring_volume_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_spring_volume_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_spring_volume_, v7, (_BYTE)this + 104);
  }
  this->max_spring_volume_ = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_spring_recover_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->last_spring_recover_time_ms_, v7);
  this->last_spring_recover_time_ms_ = 0LL;
  std::unordered_set<unsigned int>::unordered_set(&this->invisible_reset_alert_monster_set_);
  if ( *(char *)(((unsigned __int64)&this->is_locked_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_locked_, v7, &this->is_locked_);
  this->is_locked_ = 1;
  v9 = (((_BYTE)this - 76) & 7u) + 3;
  v10 = *(_BYTE *)(((unsigned __int64)&this->last_location_notify_time_ >> 3) + 0x7FFF8000) != 0
     && (char)((((_BYTE)this - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_location_notify_time_ >> 3)
                                                         + 0x7FFF8000);
  if ( v10 )
    __asan_report_store4(&this->last_location_notify_time_, v9, v10);
  this->last_location_notify_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_check_residual_invalid_groups_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_check_residual_invalid_groups_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_check_residual_invalid_groups_time_, v9, (_BYTE)this - 72);
  }
  this->last_check_residual_invalid_groups_time_ = 0;
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 65: range 0000000013EB9D88-0000000013EB9DD0
SceneEnvAnimalComp *__cdecl PlayerWorldScene::getEnvAnimalComp(PlayerWorldScene *const this)
{
  std::__shared_ptr_access<SceneEnvAnimalComp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rbx
  std::shared_ptr<SceneEnvAnimalComp> v3[2]; // [rsp+10h] [rbp-20h] BYREF

  EcsBase<Scene,SceneCompBase,12u>::findComp<SceneEnvAnimalComp>((const EcsBase<Scene,SceneCompBase,12> *const)v3);
  v1 = std::__shared_ptr_access<SceneEnvAnimalComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<SceneEnvAnimalComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)v3);
  std::shared_ptr<SceneEnvAnimalComp>::~shared_ptr(v3);
  return v1;
};

// Line 67: range 0000000013EB9E0E-0000000013EB9E56
SceneEncounterComp *__cdecl PlayerWorldScene::getEncounterComp(PlayerWorldScene *const this)
{
  std::__shared_ptr_access<SceneEncounterComp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rbx
  std::shared_ptr<SceneEncounterComp> v3[2]; // [rsp+10h] [rbp-20h] BYREF

  EcsBase<Scene,SceneCompBase,12u>::findComp<SceneEncounterComp>((const EcsBase<Scene,SceneCompBase,12> *const)v3);
  v1 = std::__shared_ptr_access<SceneEncounterComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<SceneEncounterComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)v3);
  std::shared_ptr<SceneEncounterComp>::~shared_ptr(v3);
  return v1;
};

// Line 85: range 0000000013844D5E-0000000013844DB4
float __cdecl PlayerWorldScene::getCurSpringVolume(const PlayerWorldScene *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_spring_volume_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_spring_volume_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_spring_volume_);
  }
  return this->cur_spring_volume_;
};

// Line 85: range 0000000017D68712-0000000017D68773
void __cdecl PlayerWorldScene::setCurSpringVolume(PlayerWorldScene *const this, float cur_spring_volume__out)
{
  bool v2; // dl

  v2 = *(_BYTE *)(((unsigned __int64)&this->cur_spring_volume_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_spring_volume_ >> 3)
                                                         + 0x7FFF8000);
  if ( v2 )
    __asan_report_store4(&this->cur_spring_volume_, (((_BYTE)this + 100) & 7u) + 3, v2);
  this->cur_spring_volume_ = cur_spring_volume__out;
};

// Line 91: range 0000000013EB9E58-0000000013EB9EA5
bool __cdecl PlayerWorldScene::getIsLocked(const PlayerWorldScene *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_locked_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_locked_);
  return this->is_locked_;
};

// Line 91: range 0000000013EB9EA6-0000000013EB9EFC
// local variable allocation has failed, the output may be wrong!
void __cdecl PlayerWorldScene::setIsLocked(PlayerWorldScene *const this, bool is_locked__out)
{
  if ( *(char *)(((unsigned __int64)&this->is_locked_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_locked_, is_locked__out, &this->is_locked_);
  this->is_locked_ = is_locked__out;
};
