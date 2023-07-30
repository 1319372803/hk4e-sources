// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_gallery/fish_gallery.h

// Line 18: range 00000000167D34CE-00000000167D3563
void __cdecl FishInfo::FishInfo(FishInfo *const this)
{
  bool v1; // dl
  bool v2; // dl

  v1 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v1 )
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3, v1);
  this->into_bag_count = 0;
  v2 = *(_BYTE *)(((unsigned __int64)&this->free_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->free_count >> 3) + 0x7FFF8000);
  if ( v2 )
    __asan_report_store4(&this->free_count, (((_BYTE)this + 4) & 7u) + 3, v2);
  this->free_count = 0;
};

// Line 24: range 0000000016832A8A-0000000016832AFB
void __cdecl FishGallery::~FishGallery(FishGallery *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'FishGallery + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseGallery = v2;
  std::vector<unsigned int>::~vector(&this->fishing_score_vec_);
  std::map<unsigned int,FishInfo>::~map(&this->fish_map_);
  BaseGallery::~BaseGallery(this);
};

// Line 24: range 0000000016832AFC-0000000016832B26
void __cdecl FishGallery::~FishGallery(FishGallery *const this)
{
  FishGallery::~FishGallery(this);
  operator delete(this, 0x178uLL);
};

// Line 27: range 0000000016B2D5BE-0000000016B2D6E8
void __fastcall ZN11FishGalleryCI211BaseGalleryER5Scenej(FishGallery *const this, Scene *a2, int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int (**v6)(...); // rdx
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ZN11FishGalleryCI211BaseGalleryER5Scenej;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  BaseGallery::BaseGallery(this, a2, *(_DWORD *)(v3 + 32));
  v6 = (int (**)(...))(&`vtable for'FishGallery + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BaseGallery = v6;
  std::map<unsigned int,FishInfo>::map(&this->fish_map_);
  std::vector<unsigned int>::vector(&this->fishing_score_vec_);
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
