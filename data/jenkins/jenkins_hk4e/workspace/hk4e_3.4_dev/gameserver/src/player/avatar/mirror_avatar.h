// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/avatar/mirror_avatar.h

// Line 19: range 000000001635AEBE-000000001635AF1D
void __cdecl MirrorAvatar::~MirrorAvatar(MirrorAvatar *const this)
{
  __int64 v1; // rsi
  __int64 *v2; // rdx

  v2 = &`vtable for'MirrorAvatar + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  *(_QWORD *)this->baseclass_0 = v2;
  std::weak_ptr<DungeonScene>::~weak_ptr(&this->cur_dungeon_scene_wtr_);
  Avatar::~Avatar(this);
};

// Line 19: range 000000001635AF1E-000000001635AF48
void __cdecl MirrorAvatar::~MirrorAvatar(MirrorAvatar *const this)
{
  MirrorAvatar::~MirrorAvatar(this);
  operator delete(this, 0xB70uLL);
};

// Line 22: range 0000000017466CAE-0000000017466E00
void __fastcall ZN12MirrorAvatarCI26AvatarEj(MirrorAvatar *const this, int a2)
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
  *(_QWORD *)(v2 + 16) = ZN12MirrorAvatarCI26AvatarEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  v5 = *(unsigned int *)(v2 + 32);
  Avatar::Avatar(this, v5);
  v6 = &`vtable for'MirrorAvatar + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v5);
  *(_QWORD *)this->baseclass_0 = v6;
  std::weak_ptr<DungeonScene>::weak_ptr(&this->cur_dungeon_scene_wtr_);
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_snapshot_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->avatar_snapshot_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->avatar_snapshot_type_, v5, &this->avatar_snapshot_type_);
  }
  this->avatar_snapshot_type_ = AVATAR_SNAPSHOT_TYPE_NONE;
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

// Line 30: range 0000000017216AEA-0000000017216B36
proto::AvatarSnapshotType __cdecl MirrorAvatar::getAvatarSnapshotType(const MirrorAvatar *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_snapshot_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->avatar_snapshot_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->avatar_snapshot_type_);
  }
  return this->avatar_snapshot_type_;
};

// Line 37: range 00000000143FF492-00000000143FF4E3
DungeonScenePtr __cdecl MirrorAvatar::getCurTowerDungeonScene(const MirrorAvatar *const this)
{
  DungeonScenePtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::weak_ptr<DungeonScene>::lock((const std::weak_ptr<DungeonScene> *const)this);
  result._M_ptr = (std::__shared_ptr<DungeonScene,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 38: range 00000000143FF4E4-00000000143FF50F
void __cdecl MirrorAvatar::setCurTowerDungeonScene(MirrorAvatar *const this, DungeonScenePtr *p_dungeon_scene_ptr)
{
  std::weak_ptr<DungeonScene>::operator=<DungeonScene>(&this->cur_dungeon_scene_wtr_, p_dungeon_scene_ptr);
};
