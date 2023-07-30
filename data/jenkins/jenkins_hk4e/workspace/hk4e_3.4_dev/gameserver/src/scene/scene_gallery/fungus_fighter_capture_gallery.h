// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_gallery/fungus_fighter_capture_gallery.h

// Line 20: range 000000001683297A-00000000168329C7
void __cdecl FungusFighterCaptureGallery::~FungusFighterCaptureGallery(FungusFighterCaptureGallery *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'FungusFighterCaptureGallery + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseGallery = v2;
  BaseGallery::~BaseGallery((BaseGallery *const)this);
};

// Line 20: range 00000000168329C8-00000000168329F2
void __cdecl FungusFighterCaptureGallery::~FungusFighterCaptureGallery(FungusFighterCaptureGallery *const this)
{
  FungusFighterCaptureGallery::~FungusFighterCaptureGallery(this);
  operator delete(this, 0x130uLL);
};

// Line 23: range 0000000016B354F8-0000000016B35649
void __fastcall ZN27FungusFighterCaptureGalleryCI211BaseGalleryER5Scenej(
        FungusFighterCaptureGallery *const this,
        Scene *a2,
        int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int (**v6)(...); // rdx
  bool v7; // dl
  char v9[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ZN27FungusFighterCaptureGalleryCI211BaseGalleryER5Scenej;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  BaseGallery::BaseGallery((BaseGallery *const)this, a2, *(_DWORD *)(v3 + 32));
  v6 = (int (**)(...))(&`vtable for'FungusFighterCaptureGallery + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BaseGallery = v6;
  v7 = *(_BYTE *)(((unsigned __int64)&this->camp_fungus_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->camp_fungus_count_ >> 3) + 0x7FFF8000);
  if ( v7 )
    __asan_report_store4(&this->camp_fungus_count_, (((_BYTE)this + 44) & 7u) + 3, v7);
  this->camp_fungus_count_ = 0;
  if ( v9 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
