// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_gallery/muqadas_potion_gallery.h

// Line 17: range 0000000016B7C274-0000000016B7C2C1
void __cdecl MuqadasPotionGallery::~MuqadasPotionGallery(MuqadasPotionGallery *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MuqadasPotionGallery + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseGallery = v2;
  BaseGallery::~BaseGallery((BaseGallery *const)this);
};

// Line 17: range 0000000016B7C2C2-0000000016B7C2EC
void __cdecl MuqadasPotionGallery::~MuqadasPotionGallery(MuqadasPotionGallery *const this)
{
  MuqadasPotionGallery::~MuqadasPotionGallery(this);
  operator delete(this, 0x158uLL);
};

// Line 20: range 0000000016B3309A-0000000016B33466
void __fastcall ZN20MuqadasPotionGalleryCI211BaseGalleryER5Scenej(MuqadasPotionGallery *const this, Scene *a2, int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int (**v6)(...); // rdx
  __int64 v7; // rsi
  bool v8; // dl
  __int64 v9; // rsi
  bool v10; // dl
  __int64 v11; // rsi
  bool v12; // dl
  __int64 v13; // rsi
  bool v14; // dl
  __int64 v15; // rsi
  bool v16; // dl
  char v18[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ZN20MuqadasPotionGalleryCI211BaseGalleryER5Scenej;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  BaseGallery::BaseGallery((BaseGallery *const)this, a2, *(_DWORD *)(v3 + 32));
  v6 = (int (**)(...))(&`vtable for'MuqadasPotionGallery + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BaseGallery = v6;
  v7 = (((_BYTE)this + 44) & 7u) + 3;
  v8 = *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000);
  if ( v8 )
    __asan_report_store4(&this->activity_id_, v7, v8);
  this->activity_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level_id_, v7, (_BYTE)this + 48);
  }
  this->level_id_ = 0;
  v9 = (((_BYTE)this + 52) & 7u) + 3;
  v10 = *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000) != 0
     && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000);
  if ( v10 )
    __asan_report_store4(&this->score_, v9, v10);
  this->score_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->capture_weakness_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->capture_weakness_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->capture_weakness_count_, v9, (_BYTE)this + 56);
  }
  this->capture_weakness_count_ = 0;
  v11 = (((_BYTE)this + 60) & 7u) + 3;
  v12 = *(_BYTE *)(((unsigned __int64)&this->skill_energy_ >> 3) + 0x7FFF8000) != 0
     && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->skill_energy_ >> 3) + 0x7FFF8000);
  if ( v12 )
    __asan_report_store4(&this->skill_energy_, v11, v12);
  this->skill_energy_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_use_limit_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->skill_use_limit_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->skill_use_limit_, v11, (_BYTE)this + 64);
  }
  this->skill_use_limit_ = 0;
  v13 = (((_BYTE)this + 68) & 7u) + 3;
  v14 = *(_BYTE *)(((unsigned __int64)&this->gallery_left_time_ >> 3) + 0x7FFF8000) != 0
     && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gallery_left_time_ >> 3)
                                                         + 0x7FFF8000);
  if ( v14 )
    __asan_report_store4(&this->gallery_left_time_, v13, v14);
  this->gallery_left_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_use_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->skill_use_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->skill_use_time_, v13, (_BYTE)this + 72);
  }
  this->skill_use_time_ = 0;
  v15 = (((_BYTE)this + 76) & 7u) + 3;
  v16 = *(_BYTE *)(((unsigned __int64)&this->once_max_weakness_count_ >> 3) + 0x7FFF8000) != 0
     && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->once_max_weakness_count_ >> 3)
                                                         + 0x7FFF8000);
  if ( v16 )
    __asan_report_store4(&this->once_max_weakness_count_, v15, v16);
  this->once_max_weakness_count_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->actual_start_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->actual_start_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->actual_start_time_, v15, (_BYTE)this + 80);
  }
  this->actual_start_time_ = 0;
  if ( v18 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
