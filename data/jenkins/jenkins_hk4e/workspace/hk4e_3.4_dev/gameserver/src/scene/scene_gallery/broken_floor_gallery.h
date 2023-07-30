// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_gallery/broken_floor_gallery.h

// Line 18: range 0000000017B8D346-0000000017B8D3A5
void __cdecl BrokenFloorGallery::~BrokenFloorGallery(BrokenFloorGallery *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'BrokenFloorGallery + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseGallery = v2;
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->fall_count_map_);
  BaseGallery::~BaseGallery(this);
};

// Line 18: range 0000000017B8D3A6-0000000017B8D3D0
void __cdecl BrokenFloorGallery::~BrokenFloorGallery(BrokenFloorGallery *const this)
{
  BrokenFloorGallery::~BrokenFloorGallery(this);
  operator delete(this, 0x168uLL);
};

// Line 21: range 0000000016B2B690-0000000016B2B7A8
void __fastcall ZN18BrokenFloorGalleryCI211BaseGalleryER5Scenej(BrokenFloorGallery *const this, Scene *a2, int a3)
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
  *(_QWORD *)(v3 + 16) = ZN18BrokenFloorGalleryCI211BaseGalleryER5Scenej;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  BaseGallery::BaseGallery(this, a2, *(_DWORD *)(v3 + 32));
  v6 = (int (**)(...))(&`vtable for'BrokenFloorGallery + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BaseGallery = v6;
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->fall_count_map_);
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
