// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_gallery/balloon_gallery.h

// Line 19: range 000000001828ABFE-000000001828AD38
void __cdecl BalloonPlayerInfo::BalloonPlayerInfo(BalloonPlayerInfo *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  bool v3; // dl

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, (_BYTE)this);
  }
  this->score = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->combo_disable_time >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->combo_disable_time, v1);
  this->combo_disable_time = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_combo >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_combo >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_combo, v1, (_BYTE)this + 16);
  }
  this->cur_combo = 0;
  v2 = (((_BYTE)this + 20) & 7u) + 3;
  v3 = *(_BYTE *)(((unsigned __int64)&this->max_combo >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_combo >> 3) + 0x7FFF8000);
  if ( v3 )
    __asan_report_store4(&this->max_combo, v2, v3);
  this->max_combo = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->shoot_balloon_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->shoot_balloon_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->shoot_balloon_count, v2, (_BYTE)this + 24);
  }
  this->shoot_balloon_count = 0;
};

// Line 31: range 0000000018327BB4-0000000018327C13
void __cdecl BalloonGallery::~BalloonGallery(BalloonGallery *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'BalloonGallery + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseGallery = v2;
  std::map<unsigned int,BalloonPlayerInfo>::~map(&this->uid_balloon_info_map_);
  BaseGallery::~BaseGallery(this);
};

// Line 31: range 0000000018327C14-0000000018327C3E
void __cdecl BalloonGallery::~BalloonGallery(BalloonGallery *const this)
{
  BalloonGallery::~BalloonGallery(this);
  operator delete(this, 0x168uLL);
};

// Line 34: range 0000000016B29D6A-0000000016B29EC5
void __fastcall ZN14BalloonGalleryCI211BaseGalleryER5Scenej(BalloonGallery *const this, Scene *a2, int a3)
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
  *(_QWORD *)(v3 + 16) = ZN14BalloonGalleryCI211BaseGalleryER5Scenej;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  BaseGallery::BaseGallery(this, a2, *(_DWORD *)(v3 + 32));
  v6 = (int (**)(...))(&`vtable for'BalloonGallery + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BaseGallery = v6;
  std::map<unsigned int,BalloonPlayerInfo>::map(&this->uid_balloon_info_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->stop_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stop_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->stop_time_, a2, (_BYTE)this + 96);
  }
  this->stop_time_ = 0;
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
