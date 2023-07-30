// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_gallery/fall_gallery.h

// Line 19: range 00000000167D13AE-00000000167D14C4
void __cdecl FallPlayerInfo::FallPlayerInfo(FallPlayerInfo *const this)
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
  std::map<unsigned int,unsigned int>::map(&this->ball_gadget_count_map);
  if ( *(char *)(((unsigned __int64)&this->is_ground >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_ground, v1, &this->is_ground);
  this->is_ground = 0;
  v2 = (((_BYTE)this + 60) & 7u) + 3;
  v3 = *(_BYTE *)(((unsigned __int64)&this->time_cost >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->time_cost >> 3) + 0x7FFF8000);
  if ( v3 )
    __asan_report_store4(&this->time_cost, v2, v3);
  this->time_cost = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->remain_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->remain_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->remain_time, v2, (_BYTE)this + 64);
  }
  this->remain_time = 0;
};

// Line 19: range 0000000016773342-0000000016773360
void __cdecl FallPlayerInfo::~FallPlayerInfo(FallPlayerInfo *const this)
{
  std::map<unsigned int,unsigned int>::~map(&this->ball_gadget_count_map);
};

// Line 31: range 0000000016832B44-0000000016832BA3
void __cdecl FallGallery::~FallGallery(FallGallery *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'FallGallery + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseGallery = v2;
  std::map<unsigned int,FallPlayerInfo>::~map(&this->uid_fall_info_map_);
  BaseGallery::~BaseGallery(this);
};

// Line 31: range 0000000016832BA4-0000000016832BCE
void __cdecl FallGallery::~FallGallery(FallGallery *const this)
{
  FallGallery::~FallGallery(this);
  operator delete(this, 0x168uLL);
};

// Line 34: range 0000000016B2A91E-0000000016B2AAC4
void __fastcall ZN11FallGalleryCI211BaseGalleryER5Scenej(FallGallery *const this, Scene *a2, int a3)
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
  *(_QWORD *)(v3 + 16) = ZN11FallGalleryCI211BaseGalleryER5Scenej;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  BaseGallery::BaseGallery(this, a2, *(_DWORD *)(v3 + 32));
  v6 = (int (**)(...))(&`vtable for'FallGallery + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BaseGallery = v6;
  std::map<unsigned int,FallPlayerInfo>::map(&this->uid_fall_info_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->start_time_, a2, (_BYTE)this + 96);
  }
  this->start_time_ = 0;
  v7 = *(_BYTE *)(((unsigned __int64)&this->stop_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stop_time_ >> 3) + 0x7FFF8000);
  if ( v7 )
    __asan_report_store4(&this->stop_time_, (((_BYTE)this + 100) & 7u) + 3, v7);
  this->stop_time_ = 0;
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
