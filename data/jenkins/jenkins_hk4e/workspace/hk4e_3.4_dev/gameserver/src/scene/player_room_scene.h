// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/player_room_scene.h

// Line 19: range 0000000015F87B98-0000000015F87BE5
void __cdecl PlayerRoomScene::~PlayerRoomScene(PlayerRoomScene *const this)
{
  __int64 v1; // rsi
  __int64 *v2; // rdx

  v2 = &`vtable for'PlayerRoomScene + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  *(_QWORD *)this->baseclass_0 = v2;
  RoomScene::~RoomScene(this);
};

// Line 22: range 0000000015F2EE06-0000000015F2EF43
void __fastcall ZN15PlayerRoomSceneCI25SceneEj(PlayerRoomScene *const this, int a2)
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
  *(_QWORD *)(v2 + 16) = ZN15PlayerRoomSceneCI25SceneEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  v5 = *(unsigned int *)(v2 + 32);
  ZN9RoomSceneCI25SceneEj(this, v5);
  v6 = &`vtable for'PlayerRoomScene + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v5);
  *(_QWORD *)this->baseclass_0 = v6;
  if ( *(char *)(((unsigned __int64)&this->is_room_locked_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_room_locked_, v5, &this->is_room_locked_);
  this->is_room_locked_ = 0;
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

// Line 34: range 0000000013EC2628-0000000013EC2675
bool __cdecl PlayerRoomScene::getIsRoomLocked(const PlayerRoomScene *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_room_locked_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_room_locked_);
  return this->is_room_locked_;
};

// Line 34: range 0000000013EC2676-0000000013EC26CC
// local variable allocation has failed, the output may be wrong!
void __cdecl PlayerRoomScene::setIsRoomLocked(PlayerRoomScene *const this, bool is_room_locked__out)
{
  if ( *(char *)(((unsigned __int64)&this->is_room_locked_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_room_locked_, is_room_locked__out, &this->is_room_locked_);
  this->is_room_locked_ = is_room_locked__out;
};
