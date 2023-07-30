// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/dungeon/persistent_dungeon_scene.h

// Line 20: range 0000000015F87C42-0000000015F87C8F
void __cdecl PersistentDungeonScene::~PersistentDungeonScene(PersistentDungeonScene *const this)
{
  __int64 *v1; // rdx

  v1 = &`vtable for'PersistentDungeonScene + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  *(_QWORD *)this->baseclass_0 = v1;
  DungeonScene::~DungeonScene(this);
};

// Line 23: range 0000000015F2E58A-0000000015F2E6C7
void __fastcall ZN22PersistentDungeonSceneCI25SceneEj(PersistentDungeonScene *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  __int64 *v5; // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN22PersistentDungeonSceneCI25SceneEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  ZN12DungeonSceneCI25SceneEj(this, *(_DWORD *)(v2 + 32));
  v5 = &`vtable for'PersistentDungeonScene + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  *(_QWORD *)this->baseclass_0 = v5;
  if ( *(char *)(((unsigned __int64)&this->is_mark_reset_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_mark_reset_);
  this->is_mark_reset_ = 0;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 25: range 00000000155C5362-00000000155C5370
bool __cdecl PersistentDungeonScene::isPersistent(PersistentDungeonScene *const this)
{
  return 1;
};

// Line 40: range 00000000155C5372-00000000155C53BF
bool __cdecl PersistentDungeonScene::getIsMarkReset(const PersistentDungeonScene *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_mark_reset_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_mark_reset_);
  return this->is_mark_reset_;
};

// Line 40: range 0000000013EC2704-0000000013EC275A
void __cdecl PersistentDungeonScene::setIsMarkReset(PersistentDungeonScene *const this, bool is_mark_reset__out)
{
  if ( *(char *)(((unsigned __int64)&this->is_mark_reset_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_mark_reset_);
  this->is_mark_reset_ = is_mark_reset__out;
};
