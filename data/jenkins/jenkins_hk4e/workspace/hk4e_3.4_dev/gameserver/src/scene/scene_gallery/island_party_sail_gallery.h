// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_gallery/island_party_sail_gallery.h

// Line 20: range 00000000148378A6-00000000148378F3
void __cdecl IslandPartySailGallery::~IslandPartySailGallery(IslandPartySailGallery *const this)
{
  __int64 v1; // rsi
  __int64 *v2; // rdx

  v2 = &`vtable for'IslandPartySailGallery + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  *(_QWORD *)this->baseclass_0 = v2;
  BaseGallery::~BaseGallery((BaseGallery *const)this);
};

// Line 20: range 00000000148378F4-000000001483791E
void __cdecl IslandPartySailGallery::~IslandPartySailGallery(IslandPartySailGallery *const this)
{
  IslandPartySailGallery::~IslandPartySailGallery(this);
  operator delete(this, 0x148uLL);
};

// Line 23: range 0000000016B3252E-0000000016B327DE
void __fastcall ZN22IslandPartySailGalleryCI211BaseGalleryER5Scenej(
        IslandPartySailGallery *const this,
        Scene *a2,
        int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  __int64 *v6; // rdx
  __int64 v7; // rsi
  bool v8; // dl
  __int64 v9; // rsi
  bool v10; // dl
  __int64 v11; // rsi
  bool v12; // dl
  char v14[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ZN22IslandPartySailGalleryCI211BaseGalleryER5Scenej;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  BaseGallery::BaseGallery((BaseGallery *const)this, a2, *(_DWORD *)(v3 + 32));
  v6 = &`vtable for'IslandPartySailGallery + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  *(_QWORD *)this->baseclass_0 = v6;
  v7 = (((_BYTE)this + 44) & 7u) + 3;
  v8 = *(_BYTE *)(((unsigned __int64)&this->kill_monster_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->kill_monster_count_ >> 3)
                                                        + 0x7FFF8000);
  if ( v8 )
    __asan_report_store4(&this->kill_monster_count_, v7, v8);
  this->kill_monster_count_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_monster_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_monster_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_monster_count_, v7, (_BYTE)this + 48);
  }
  this->max_monster_count_ = 0;
  v9 = (((_BYTE)this + 52) & 7u) + 3;
  v10 = *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) != 0
     && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000);
  if ( v10 )
    __asan_report_store4(&this->progress_, v9, v10);
  this->progress_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_progress_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_progress_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_progress_, v9, (_BYTE)this + 56);
  }
  this->max_progress_ = 0;
  v11 = (((_BYTE)this + 60) & 7u) + 3;
  v12 = *(_BYTE *)(((unsigned __int64)&this->sail_stage_ >> 3) + 0x7FFF8000) != 0
     && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->sail_stage_ >> 3) + 0x7FFF8000);
  if ( v12 )
    __asan_report_store4(&this->sail_stage_, v11, v12);
  this->sail_stage_ = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->coin_, v11, (_BYTE)this + 64);
  }
  this->coin_ = 0;
  if ( v14 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
