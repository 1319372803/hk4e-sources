// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/home_world_scene.h

// Line 20: range 0000000015F87B1C-0000000015F87B69
void __cdecl HomeWorldScene::~HomeWorldScene(HomeWorldScene *const this)
{
  __int64 v1; // rsi
  __int64 *v2; // rdx

  v2 = &`vtable for'HomeWorldScene + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  *(_QWORD *)this->baseclass_0 = v2;
  Scene::~Scene((Scene *const)this);
};

// Line 23: range 0000000015F2F21A-0000000015F2F362
void __fastcall ZN14HomeWorldSceneCI25SceneEj(HomeWorldScene *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  __int64 v5; // rsi
  __int64 *v6; // rdx
  bool v7; // dl
  char v8[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN14HomeWorldSceneCI25SceneEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  v5 = *(unsigned int *)(v2 + 32);
  Scene::Scene((Scene *const)this, v5);
  v6 = &`vtable for'HomeWorldScene + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v5);
  *(_QWORD *)this->baseclass_0 = v6;
  v7 = *(_BYTE *)(((unsigned __int64)&this->last_location_notify_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_location_notify_time_ >> 3)
                                                         + 0x7FFF8000);
  if ( v7 )
    __asan_report_store4(&this->last_location_notify_time_, (((_BYTE)this + 100) & 7u) + 3, v7);
  this->last_location_notify_time_ = 0;
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 49: range 00000000131E8D3A-00000000131E8D4B
int32_t __cdecl HomeWorldScene::saveGroupByMUIP(HomeWorldScene *const this, uint32_t group_id)
{
  return 0;
};

// Line 53: range 00000000131E8D4C-00000000131E8D5A
uint32_t __cdecl HomeWorldScene::getGroupInitWorldLevelLimit(HomeWorldScene *const this)
{
  return 0;
};

// Line 56: range 00000000131E8D5C-00000000131E8DA4
SceneHomeComp *__cdecl HomeWorldScene::getHomeComp(HomeWorldScene *const this)
{
  std::__shared_ptr_access<SceneHomeComp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rbx
  std::shared_ptr<SceneHomeComp> v3[2]; // [rsp+10h] [rbp-20h] BYREF

  EcsBase<Scene,SceneCompBase,12u>::findComp<SceneHomeComp>((const EcsBase<Scene,SceneCompBase,12> *const)v3);
  v1 = std::__shared_ptr_access<SceneHomeComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<SceneHomeComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)v3);
  std::shared_ptr<SceneHomeComp>::~shared_ptr(v3);
  return v1;
};
