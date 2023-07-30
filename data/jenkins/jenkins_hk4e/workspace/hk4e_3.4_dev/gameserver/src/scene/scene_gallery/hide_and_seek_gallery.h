// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_gallery/hide_and_seek_gallery.h

// Line 19: range 000000001683275C-00000000168327DF
void __cdecl HideAndSeekGallery::~HideAndSeekGallery(HideAndSeekGallery *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'HideAndSeekGallery + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseGallery = v2;
  std::set<unsigned int>::~set(&this->ghost_uid_set_);
  std::set<unsigned int>::~set(&this->caught_uid_set_);
  std::vector<unsigned int>::~vector(&this->hunter_visible_uid_vec_);
  BaseGallery::~BaseGallery(this);
};

// Line 19: range 00000000168327E0-000000001683280A
void __cdecl HideAndSeekGallery::~HideAndSeekGallery(HideAndSeekGallery *const this)
{
  HideAndSeekGallery::~HideAndSeekGallery(this);
  operator delete(this, 0x1B8uLL);
};

// Line 22: range 0000000016B2BAAE-0000000016B2BC8A
void __fastcall ZN18HideAndSeekGalleryCI211BaseGalleryER5Scenej(HideAndSeekGallery *const this, Scene *a2, int a3)
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
  *(_QWORD *)(v3 + 16) = ZN18HideAndSeekGalleryCI211BaseGalleryER5Scenej;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  BaseGallery::BaseGallery(this, a2, *(_DWORD *)(v3 + 32));
  v6 = (int (**)(...))(&`vtable for'HideAndSeekGallery + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BaseGallery = v6;
  std::vector<unsigned int>::vector(&this->hunter_visible_uid_vec_);
  std::set<unsigned int>::set(&this->caught_uid_set_);
  std::set<unsigned int>::set(&this->ghost_uid_set_);
  if ( *(_BYTE *)(((unsigned __int64)&this->multistage_group_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->multistage_group_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->multistage_group_id_, a2, (_BYTE)this - 88);
  }
  this->multistage_group_id_ = 0;
  v7 = *(_BYTE *)(((unsigned __int64)&this->multistage_play_index_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->multistage_play_index_ >> 3)
                                                        + 0x7FFF8000);
  if ( v7 )
    __asan_report_store4(&this->multistage_play_index_, (((_BYTE)this - 84) & 7u) + 3, v7);
  this->multistage_play_index_ = 0;
  std::optional<bool>::optional(&this->result_opt_);
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

// Line 29: range 000000001519968C-00000000151996D9
std::optional<bool> __cdecl HideAndSeekGallery::getGalleryResult(HideAndSeekGallery *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->result_opt_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->result_opt_ >> 3) + 0x7FFF8000) <= 1 )
  {
    __asan_report_load2(&this->result_opt_);
  }
  return this->result_opt_;
};

// Line 38: range 00000000151996DA-000000001519972D
// local variable allocation has failed, the output may be wrong!
void __cdecl HideAndSeekGallery::setMultistageGroupId(
        HideAndSeekGallery *const this,
        uint32_t multistage_group_id__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->multistage_group_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->multistage_group_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->multistage_group_id_, *(_QWORD *)&multistage_group_id__out, (_BYTE)this - 88);
  }
  this->multistage_group_id_ = multistage_group_id__out;
};

// Line 39: range 000000001519972E-0000000015199789
void __cdecl HideAndSeekGallery::setMultistagePlayIndex(
        HideAndSeekGallery *const this,
        uint32_t multistage_play_index__out)
{
  bool v2; // dl

  v2 = *(_BYTE *)(((unsigned __int64)&this->multistage_play_index_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->multistage_play_index_ >> 3)
                                                        + 0x7FFF8000);
  if ( v2 )
    __asan_report_store4(&this->multistage_play_index_, (((_BYTE)this - 84) & 7u) + 3, v2);
  this->multistage_play_index_ = multistage_play_index__out;
};
