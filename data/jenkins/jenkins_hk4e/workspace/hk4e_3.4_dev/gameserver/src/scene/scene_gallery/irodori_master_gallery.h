// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_gallery/irodori_master_gallery.h

// Line 25: range 0000000014837A14-0000000014837A61
void __cdecl IrodoriMasterGallery::~IrodoriMasterGallery(IrodoriMasterGallery *const this)
{
  __int64 v1; // rsi
  __int64 *v2; // rdx

  v2 = &`vtable for'IrodoriMasterGallery + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  *(_QWORD *)this->baseclass_0 = v2;
  BaseGallery::~BaseGallery((BaseGallery *const)this);
};

// Line 25: range 0000000014837A62-0000000014837A8C
void __cdecl IrodoriMasterGallery::~IrodoriMasterGallery(IrodoriMasterGallery *const this)
{
  IrodoriMasterGallery::~IrodoriMasterGallery(this);
  operator delete(this, 0x168uLL);
};

// Line 28: range 0000000016B2FCA2-0000000016B300FD
void __fastcall ZN20IrodoriMasterGalleryCI211BaseGalleryER5Scenej(IrodoriMasterGallery *const this, Scene *a2, int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  __int64 *v6; // rdx
  __int64 v7; // rsi
  bool v8; // dl
  __int64 v9; // rsi
  bool v10; // dl
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rsi
  bool v14; // dl
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rdx
  char v20[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ZN20IrodoriMasterGalleryCI211BaseGalleryER5Scenej;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  BaseGallery::BaseGallery((BaseGallery *const)this, a2, *(_DWORD *)(v3 + 32));
  v6 = &`vtable for'IrodoriMasterGallery + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  *(_QWORD *)this->baseclass_0 = v6;
  v7 = (((_BYTE)this + 44) & 7u) + 3;
  v8 = *(_BYTE *)(((unsigned __int64)&this->owner_uid_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->owner_uid_ >> 3) + 0x7FFF8000);
  if ( v8 )
    __asan_report_store4(&this->owner_uid_, v7, v8);
  this->owner_uid_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level_id_, v7, (_BYTE)this + 48);
  }
  this->level_id_ = 0;
  v9 = (((_BYTE)this + 52) & 7u) + 3;
  v10 = *(_BYTE *)(((unsigned __int64)&this->difficulty_ >> 3) + 0x7FFF8000) != 0
     && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->difficulty_ >> 3) + 0x7FFF8000);
  if ( v10 )
    __asan_report_store4(&this->difficulty_, v9, v10);
  this->difficulty_ = 0;
  if ( *(char *)(((unsigned __int64)&this->is_cg_viewed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_cg_viewed_, v9, &this->is_cg_viewed_);
  this->is_cg_viewed_ = 0;
  v11 = ((_BYTE)this + 57) & 7;
  v12 = (*(_BYTE *)(((unsigned __int64)&this->is_finish_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v11 >= *(_BYTE *)(((unsigned __int64)&this->is_finish_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v12 )
    __asan_report_store1(&this->is_finish_, v11, v12);
  this->is_finish_ = 0;
  v13 = (((_BYTE)this + 60) & 7u) + 3;
  v14 = *(_BYTE *)(((unsigned __int64)&this->finish_time_ >> 3) + 0x7FFF8000) != 0
     && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->finish_time_ >> 3) + 0x7FFF8000);
  if ( v14 )
    __asan_report_store4(&this->finish_time_, v13, v14);
  this->finish_time_ = 0;
  if ( *(char *)(((unsigned __int64)&this->is_timeout_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_timeout_, v13, &this->is_timeout_);
  this->is_timeout_ = 0;
  v15 = ((_BYTE)this + 65) & 7;
  v16 = (*(_BYTE *)(((unsigned __int64)&this->is_cg_end_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v15 >= *(_BYTE *)(((unsigned __int64)&this->is_cg_end_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v16 )
    __asan_report_store1(&this->is_cg_end_, v15, v16);
  this->is_cg_end_ = 0;
  v17 = ((_BYTE)this + 66) & 7;
  v18 = (*(_BYTE *)(((unsigned __int64)&this->is_settled_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v17 >= *(_BYTE *)(((unsigned __int64)&this->is_settled_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v18 )
    __asan_report_store1(&this->is_settled_, v17, v18);
  this->is_settled_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->start_time_, v17);
  this->start_time_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_time_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->end_time_, v17);
  this->end_time_ = 0LL;
  if ( *(char *)(((unsigned __int64)&this->is_resource_guard_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_resource_guard_, v17, &this->is_resource_guard_);
  this->is_resource_guard_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->grant_trial_avatar_guid_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->grant_trial_avatar_guid_, v17);
  this->grant_trial_avatar_guid_ = 0LL;
  if ( v20 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
