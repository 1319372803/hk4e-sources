// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/home_room_scene.h

// Line 19: range 0000000015F87AA0-0000000015F87AED
void __cdecl HomeRoomScene::~HomeRoomScene(HomeRoomScene *const this)
{
  __int64 v1; // rsi
  __int64 *v2; // rdx

  v2 = &`vtable for'HomeRoomScene + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  *(_QWORD *)this->baseclass_0 = v2;
  RoomScene::~RoomScene(this);
};

// Line 22: range 0000000015F2F634-0000000015F2F774
void __fastcall ZN13HomeRoomSceneCI25SceneEj(HomeRoomScene *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  __int64 v5; // rsi
  __int64 *v6; // rdx
  char v7[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN13HomeRoomSceneCI25SceneEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  v5 = *(unsigned int *)(v2 + 32);
  ZN9RoomSceneCI25SceneEj(this, v5);
  v6 = &`vtable for'HomeRoomScene + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v5);
  *(_QWORD *)this->baseclass_0 = v6;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_location_notify_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_location_notify_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_location_notify_time_, v5, (_BYTE)this + 104);
  }
  this->last_location_notify_time_ = 0;
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

// Line 42: range 00000000131E8A9C-00000000131E8AAD
int32_t __cdecl HomeRoomScene::saveGroupByMUIP(HomeRoomScene *const this, uint32_t group_id)
{
  return 0;
};

// Line 46: range 00000000131E8AAE-00000000131E8ABC
uint32_t __cdecl HomeRoomScene::getGroupInitWorldLevelLimit(HomeRoomScene *const this)
{
  return 0;
};

// Line 48: range 00000000131E8AFA-00000000131E8B42
SceneHomeComp *__cdecl HomeRoomScene::getHomeComp(HomeRoomScene *const this)
{
  std::__shared_ptr_access<SceneHomeComp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rbx
  std::shared_ptr<SceneHomeComp> v3[2]; // [rsp+10h] [rbp-20h] BYREF

  EcsBase<Scene,SceneCompBase,12u>::findComp<SceneHomeComp>((const EcsBase<Scene,SceneCompBase,12> *const)v3);
  v1 = std::__shared_ptr_access<SceneHomeComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<SceneHomeComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)v3);
  std::shared_ptr<SceneHomeComp>::~shared_ptr(v3);
  return v1;
};
