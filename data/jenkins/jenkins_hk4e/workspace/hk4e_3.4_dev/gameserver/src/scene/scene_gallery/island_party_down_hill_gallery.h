// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_gallery/island_party_down_hill_gallery.h

// Line 20: range 000000001483799A-00000000148379E7
void __cdecl IslandPartyDownHillGallery::~IslandPartyDownHillGallery(IslandPartyDownHillGallery *const this)
{
  __int64 v1; // rsi
  __int64 *v2; // rdx

  v2 = &`vtable for'IslandPartyDownHillGallery + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  *(_QWORD *)this->baseclass_0 = v2;
  BaseGallery::~BaseGallery((BaseGallery *const)this);
};

// Line 20: range 00000000148379E8-0000000014837A12
void __cdecl IslandPartyDownHillGallery::~IslandPartyDownHillGallery(IslandPartyDownHillGallery *const this)
{
  IslandPartyDownHillGallery::~IslandPartyDownHillGallery(this);
  operator delete(this, 0x138uLL);
};

// Line 23: range 0000000016B31586-0000000016B31765
void __fastcall ZN26IslandPartyDownHillGalleryCI211BaseGalleryER5Scenej(
        IslandPartyDownHillGallery *const this,
        Scene *a2,
        int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  __int64 *v6; // rdx
  __int64 v7; // rsi
  bool v8; // dl
  bool v9; // dl
  char v11[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ZN26IslandPartyDownHillGalleryCI211BaseGalleryER5Scenej;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  BaseGallery::BaseGallery((BaseGallery *const)this, a2, *(_DWORD *)(v3 + 32));
  v6 = &`vtable for'IslandPartyDownHillGallery + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  *(_QWORD *)this->baseclass_0 = v6;
  v7 = (((_BYTE)this + 44) & 7u) + 3;
  v8 = *(_BYTE *)(((unsigned __int64)&this->total_kill_monster_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total_kill_monster_count_ >> 3)
                                                        + 0x7FFF8000);
  if ( v8 )
    __asan_report_store4(&this->total_kill_monster_count_, v7, v8);
  this->total_kill_monster_count_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_kill_monster_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_kill_monster_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_kill_monster_count_, v7, (_BYTE)this + 48);
  }
  this->max_kill_monster_count_ = 0;
  v9 = *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000);
  if ( v9 )
    __asan_report_store4(&this->coin_, (((_BYTE)this + 52) & 7u) + 3, v9);
  this->coin_ = 0;
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
