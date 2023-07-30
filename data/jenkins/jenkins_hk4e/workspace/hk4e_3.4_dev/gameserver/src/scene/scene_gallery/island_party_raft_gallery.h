// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_gallery/island_party_raft_gallery.h

// Line 18: range 0000000014837920-000000001483796D
void __cdecl IslandPartyRaftGallery::~IslandPartyRaftGallery(IslandPartyRaftGallery *const this)
{
  __int64 v1; // rsi
  __int64 *v2; // rdx

  v2 = &`vtable for'IslandPartyRaftGallery + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  *(_QWORD *)this->baseclass_0 = v2;
  BaseGallery::~BaseGallery((BaseGallery *const)this);
};

// Line 18: range 000000001483796E-0000000014837998
void __cdecl IslandPartyRaftGallery::~IslandPartyRaftGallery(IslandPartyRaftGallery *const this)
{
  IslandPartyRaftGallery::~IslandPartyRaftGallery(this);
  operator delete(this, 0x140uLL);
};

// Line 21: range 0000000016B31FAE-0000000016B3221B
void __fastcall ZN22IslandPartyRaftGalleryCI211BaseGalleryER5Scenej(
        IslandPartyRaftGallery *const this,
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
  bool v11; // dl
  char v13[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ZN22IslandPartyRaftGalleryCI211BaseGalleryER5Scenej;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  BaseGallery::BaseGallery((BaseGallery *const)this, a2, *(_DWORD *)(v3 + 32));
  v6 = &`vtable for'IslandPartyRaftGallery + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  *(_QWORD *)this->baseclass_0 = v6;
  v7 = (((_BYTE)this + 44) & 7u) + 3;
  v8 = *(_BYTE *)(((unsigned __int64)&this->fuel_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fuel_ >> 3) + 0x7FFF8000);
  if ( v8 )
    __asan_report_store4(&this->fuel_, v7, v8);
  this->fuel_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->component_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->component_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->component_, v7, (_BYTE)this + 48);
  }
  this->component_ = 0;
  v9 = (((_BYTE)this + 52) & 7u) + 3;
  v10 = *(_BYTE *)(((unsigned __int64)&this->raft_entity_id_ >> 3) + 0x7FFF8000) != 0
     && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->raft_entity_id_ >> 3) + 0x7FFF8000);
  if ( v10 )
    __asan_report_store4(&this->raft_entity_id_, v9, v10);
  this->raft_entity_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->point_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->point_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->point_id_, v9, (_BYTE)this + 56);
  }
  this->point_id_ = 0;
  v11 = *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) != 0
     && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000);
  if ( v11 )
    __asan_report_store4(&this->coin_, (((_BYTE)this + 60) & 7u) + 3, v11);
  this->coin_ = 0;
  if ( v13 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
