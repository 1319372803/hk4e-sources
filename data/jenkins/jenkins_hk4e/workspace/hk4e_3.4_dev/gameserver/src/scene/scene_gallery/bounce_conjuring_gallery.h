// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_gallery/bounce_conjuring_gallery.h

// Line 18: range 00000000182427FE-00000000182429A5
void __cdecl BounceConjuringPlayerInfo::BounceConjuringPlayerInfo(BounceConjuringPlayerInfo *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  bool v3; // dl
  __int64 v4; // rsi
  bool v5; // dl
  bool v6; // dl

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, (_BYTE)this);
  }
  this->score = 0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  v3 = *(_BYTE *)(((unsigned __int64)&this->destroyed_machine_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->destroyed_machine_count >> 3)
                                                       + 0x7FFF8000);
  if ( v3 )
    __asan_report_store4(&this->destroyed_machine_count, v2, v3);
  this->destroyed_machine_count = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->damage >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->damage >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->damage, v2, (_BYTE)this + 8);
  }
  this->damage = 0.0;
  v4 = (((_BYTE)this + 12) & 7u) + 3;
  v5 = *(_BYTE *)(((unsigned __int64)&this->normal_hit_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->normal_hit_count >> 3) + 0x7FFF8000);
  if ( v5 )
    __asan_report_store4(&this->normal_hit_count, v4, v5);
  this->normal_hit_count = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->perfect_hit_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->perfect_hit_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->perfect_hit_count, v4, (_BYTE)this + 16);
  }
  this->perfect_hit_count = 0;
  v6 = *(_BYTE *)(((unsigned __int64)&this->fever_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fever_count >> 3) + 0x7FFF8000);
  if ( v6 )
    __asan_report_store4(&this->fever_count, (((_BYTE)this + 20) & 7u) + 3, v6);
  this->fever_count = 0;
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->gadget_count_map);
};

// Line 18: range 00000000181F8AFC-00000000181F8B1A
void __cdecl BounceConjuringPlayerInfo::~BounceConjuringPlayerInfo(BounceConjuringPlayerInfo *const this)
{
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->gadget_count_map);
};

// Line 31: range 0000000018327B0C-0000000018327B6B
void __cdecl BounceConjuringGallery::~BounceConjuringGallery(BounceConjuringGallery *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'BounceConjuringGallery + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseGallery = v2;
  std::unordered_map<unsigned int,BounceConjuringPlayerInfo>::~unordered_map(&this->uid_info_map_);
  BaseGallery::~BaseGallery(this);
};

// Line 31: range 0000000018327B6C-0000000018327B96
void __cdecl BounceConjuringGallery::~BounceConjuringGallery(BounceConjuringGallery *const this)
{
  BounceConjuringGallery::~BounceConjuringGallery(this);
  operator delete(this, 0x170uLL);
};

// Line 34: range 0000000016B2C0EA-0000000016B2C245
void __fastcall ZN22BounceConjuringGalleryCI211BaseGalleryER5Scenej(
        BounceConjuringGallery *const this,
        Scene *a2,
        int a3)
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
  *(_QWORD *)(v3 + 16) = ZN22BounceConjuringGalleryCI211BaseGalleryER5Scenej;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  BaseGallery::BaseGallery(this, a2, *(_DWORD *)(v3 + 32));
  v6 = (int (**)(...))(&`vtable for'BounceConjuringGallery + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BaseGallery = v6;
  std::unordered_map<unsigned int,BounceConjuringPlayerInfo>::unordered_map(&this->uid_info_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->match_id_, a2, (_BYTE)this + 104);
  }
  this->match_id_ = 0;
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
