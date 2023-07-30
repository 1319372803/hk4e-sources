// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/room_scene.h

// Line 20: range 0000000015F2EDB8-0000000015F2EE05
void __cdecl RoomScene::~RoomScene(RoomScene *const this)
{
  __int64 v1; // rsi
  __int64 *v2; // rdx

  v2 = &`vtable for'RoomScene + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  *(_QWORD *)this->baseclass_0 = v2;
  Scene::~Scene((Scene *const)this);
};

// Line 23: range 0000000015F2EC6E-0000000015F2EDB6
void __fastcall ZN9RoomSceneCI25SceneEj(RoomScene *const this, int a2)
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
  *(_QWORD *)(v2 + 16) = ZN9RoomSceneCI25SceneEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  v5 = *(unsigned int *)(v2 + 32);
  Scene::Scene((Scene *const)this, v5);
  v6 = &`vtable for'RoomScene + 2;
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

// Line 32: range 00000000131E8A8C-00000000131E8A9A
int32_t __cdecl RoomScene::initWeatherArea(RoomScene *const this)
{
  return 0;
};

// Line 38: range 0000000015D378D4-0000000015D3791C
SceneRoomSightComp *__cdecl RoomScene::getRoomSightComp(RoomScene *const this)
{
  std::__shared_ptr_access<SceneRoomSightComp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rbx
  std::shared_ptr<SceneRoomSightComp> v3[2]; // [rsp+10h] [rbp-20h] BYREF

  EcsBase<Scene,SceneCompBase,12u>::findComp<SceneRoomSightComp>((const EcsBase<Scene,SceneCompBase,12> *const)v3);
  v1 = std::__shared_ptr_access<SceneRoomSightComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<SceneRoomSightComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)v3);
  std::shared_ptr<SceneRoomSightComp>::~shared_ptr(v3);
  return v1;
};
