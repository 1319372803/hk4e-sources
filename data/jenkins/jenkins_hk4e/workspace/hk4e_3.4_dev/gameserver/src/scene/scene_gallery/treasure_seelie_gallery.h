// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_gallery/treasure_seelie_gallery.h

// Line 20: range 0000000018326E5E-0000000018326EAB
void __cdecl TreasureSeelieGallery::~TreasureSeelieGallery(TreasureSeelieGallery *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'TreasureSeelieGallery + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseGallery = v2;
  BaseGallery::~BaseGallery((BaseGallery *const)this);
};

// Line 20: range 0000000018326EAC-0000000018326ED6
void __cdecl TreasureSeelieGallery::~TreasureSeelieGallery(TreasureSeelieGallery *const this)
{
  TreasureSeelieGallery::~TreasureSeelieGallery(this);
  operator delete(this, 0x138uLL);
};

// Line 23: range 0000000016B33E4A-0000000016B33FDE
void __fastcall ZN21TreasureSeelieGalleryCI211BaseGalleryER5Scenej(
        TreasureSeelieGallery *const this,
        Scene *a2,
        int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int (**v6)(...); // rdx
  __int64 v7; // rsi
  bool v8; // dl
  char v10[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ZN21TreasureSeelieGalleryCI211BaseGalleryER5Scenej;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  BaseGallery::BaseGallery((BaseGallery *const)this, a2, *(_DWORD *)(v3 + 32));
  v6 = (int (**)(...))(&`vtable for'TreasureSeelieGallery + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BaseGallery = v6;
  v7 = (((_BYTE)this + 44) & 7u) + 3;
  v8 = *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000);
  if ( v8 )
    __asan_report_store4(&this->progress_, v7, v8);
  this->progress_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->goal_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->goal_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->goal_, v7, (_BYTE)this + 48);
  }
  this->goal_ = 0;
  if ( v10 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
