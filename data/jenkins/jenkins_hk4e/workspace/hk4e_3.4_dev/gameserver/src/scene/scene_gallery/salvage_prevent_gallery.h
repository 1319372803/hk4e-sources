// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_gallery/salvage_prevent_gallery.h

// Line 19: range 0000000016B7C106-0000000016B7C153
void __cdecl SalvagePreventGallery::~SalvagePreventGallery(SalvagePreventGallery *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'SalvagePreventGallery + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseGallery = v2;
  BaseGallery::~BaseGallery((BaseGallery *const)this);
};

// Line 19: range 0000000016B7C154-0000000016B7C17E
void __cdecl SalvagePreventGallery::~SalvagePreventGallery(SalvagePreventGallery *const this)
{
  SalvagePreventGallery::~SalvagePreventGallery(this);
  operator delete(this, 0x140uLL);
};

// Line 22: range 0000000016B2EA56-0000000016B2EC78
void __fastcall ZN21SalvagePreventGalleryCI211BaseGalleryER5Scenej(
        SalvagePreventGallery *const this,
        Scene *a2,
        int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int (**v6)(...); // rdx
  __int64 v7; // rsi
  bool v8; // dl
  __int64 v9; // rsi
  bool v10; // dl
  char v12[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ZN21SalvagePreventGalleryCI211BaseGalleryER5Scenej;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  BaseGallery::BaseGallery((BaseGallery *const)this, a2, *(_DWORD *)(v3 + 32));
  v6 = (int (**)(...))(&`vtable for'SalvagePreventGallery + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BaseGallery = v6;
  v7 = (((_BYTE)this + 44) & 7u) + 3;
  v8 = *(_BYTE *)(((unsigned __int64)&this->time_remain_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->time_remain_ >> 3) + 0x7FFF8000);
  if ( v8 )
    __asan_report_store4(&this->time_remain_, v7, v8);
  this->time_remain_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->monster_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->monster_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->monster_count_, v7, (_BYTE)this + 48);
  }
  this->monster_count_ = 0;
  v9 = (((_BYTE)this + 52) & 7u) + 3;
  v10 = *(_BYTE *)(((unsigned __int64)&this->final_score_ >> 3) + 0x7FFF8000) != 0
     && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->final_score_ >> 3) + 0x7FFF8000);
  if ( v10 )
    __asan_report_store4(&this->final_score_, v9, v10);
  this->final_score_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->reason_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reason_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reason_, v9, (_BYTE)this + 56);
  }
  this->reason_ = SALVAGE_PREVENT_STOP_NONE;
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
