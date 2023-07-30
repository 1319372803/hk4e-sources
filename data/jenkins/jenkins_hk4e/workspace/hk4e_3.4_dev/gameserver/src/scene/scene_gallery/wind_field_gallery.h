// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_gallery/wind_field_gallery.h

// Line 18: range 0000000018326B2E-0000000018326B7B
void __cdecl WindFieldGallery::~WindFieldGallery(WindFieldGallery *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'WindFieldGallery + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseGallery = v2;
  BaseGallery::~BaseGallery((BaseGallery *const)this);
};

// Line 18: range 0000000018326B7C-0000000018326BA6
void __cdecl WindFieldGallery::~WindFieldGallery(WindFieldGallery *const this)
{
  WindFieldGallery::~WindFieldGallery(this);
  operator delete(this, 0x150uLL);
};

// Line 21: range 0000000016B3485E-0000000016B34BE7
void __fastcall ZN16WindFieldGalleryCI211BaseGalleryER5Scenej(WindFieldGallery *const this, Scene *a2, int a3)
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
  bool v15; // dl
  char v17[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ZN16WindFieldGalleryCI211BaseGalleryER5Scenej;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  BaseGallery::BaseGallery((BaseGallery *const)this, a2, *(_DWORD *)(v3 + 32));
  v6 = (int (**)(...))(&`vtable for'WindFieldGallery + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BaseGallery = v6;
  v7 = (((_BYTE)this + 44) & 7u) + 3;
  v8 = *(_BYTE *)(((unsigned __int64)&this->element_ball_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->element_ball_num_ >> 3) + 0x7FFF8000);
  if ( v8 )
    __asan_report_store4(&this->element_ball_num_, v7, v8);
  this->element_ball_num_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->coin_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->coin_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->coin_num_, v7, (_BYTE)this + 48);
  }
  this->coin_num_ = 0;
  v9 = (((_BYTE)this + 52) & 7u) + 3;
  v10 = *(_BYTE *)(((unsigned __int64)&this->killed_monster_num_ >> 3) + 0x7FFF8000) != 0
     && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->killed_monster_num_ >> 3)
                                                         + 0x7FFF8000);
  if ( v10 )
    __asan_report_store4(&this->killed_monster_num_, v9, v10);
  this->killed_monster_num_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_total_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->challenge_total_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->challenge_total_time_, v9, (_BYTE)this + 56);
  }
  this->challenge_total_time_ = 0;
  v11 = (((_BYTE)this + 60) & 7u) + 3;
  v12 = *(_BYTE *)(((unsigned __int64)&this->challenge_timestamp_ >> 3) + 0x7FFF8000) != 0
     && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->challenge_timestamp_ >> 3)
                                                         + 0x7FFF8000);
  if ( v12 )
    __asan_report_store4(&this->challenge_timestamp_, v11, v12);
  this->challenge_timestamp_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->show_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->show_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->show_id_, v11, (_BYTE)this + 64);
  }
  this->show_id_ = 0;
  v13 = (((_BYTE)this + 68) & 7u) + 3;
  v14 = *(_BYTE *)(((unsigned __int64)&this->used_time_ >> 3) + 0x7FFF8000) != 0
     && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->used_time_ >> 3) + 0x7FFF8000);
  if ( v14 )
    __asan_report_store4(&this->used_time_, v13, v14);
  this->used_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_ball_max_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->challenge_ball_max_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->challenge_ball_max_count_, v13, (_BYTE)this + 72);
  }
  this->challenge_ball_max_count_ = 0;
  v15 = *(_BYTE *)(((unsigned __int64)&this->challenge_ball_cur_count_ >> 3) + 0x7FFF8000) != 0
     && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->challenge_ball_cur_count_ >> 3)
                                                         + 0x7FFF8000);
  if ( v15 )
    __asan_report_store4(&this->challenge_ball_cur_count_, (((_BYTE)this + 76) & 7u) + 3, v15);
  this->challenge_ball_cur_count_ = 0;
  if ( v17 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
