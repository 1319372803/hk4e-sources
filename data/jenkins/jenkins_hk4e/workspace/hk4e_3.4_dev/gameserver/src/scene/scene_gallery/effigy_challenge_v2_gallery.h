// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_gallery/effigy_challenge_v2_gallery.h

// Line 20: range 0000000017B8CF52-0000000017B8CF9F
void __cdecl EffigyChallengeV2Gallery::~EffigyChallengeV2Gallery(EffigyChallengeV2Gallery *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'EffigyChallengeV2Gallery + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseGallery = v2;
  BaseGallery::~BaseGallery((BaseGallery *const)this);
};

// Line 20: range 0000000017B8CFA0-0000000017B8CFCA
void __cdecl EffigyChallengeV2Gallery::~EffigyChallengeV2Gallery(EffigyChallengeV2Gallery *const this)
{
  EffigyChallengeV2Gallery::~EffigyChallengeV2Gallery(this);
  operator delete(this, 0x150uLL);
};

// Line 23: range 0000000016B35954-0000000016B35C92
void __fastcall ZN24EffigyChallengeV2GalleryCI211BaseGalleryER5Scenej(
        EffigyChallengeV2Gallery *const this,
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
  __int64 v11; // rsi
  bool v12; // dl
  __int64 v13; // rsi
  bool v14; // dl
  char v16[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ZN24EffigyChallengeV2GalleryCI211BaseGalleryER5Scenej;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  BaseGallery::BaseGallery((BaseGallery *const)this, a2, *(_DWORD *)(v3 + 32));
  v6 = (int (**)(...))(&`vtable for'EffigyChallengeV2Gallery + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BaseGallery = v6;
  v7 = (((_BYTE)this + 44) & 7u) + 3;
  v8 = *(_BYTE *)(((unsigned __int64)&this->effigy_challenge_v2_skill_no_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->effigy_challenge_v2_skill_no_ >> 3)
                                                        + 0x7FFF8000);
  if ( v8 )
    __asan_report_store4(&this->effigy_challenge_v2_skill_no_, v7, v8);
  this->effigy_challenge_v2_skill_no_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->effigy_challenge_v2_host_uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->effigy_challenge_v2_host_uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->effigy_challenge_v2_host_uid_, v7, (_BYTE)this + 48);
  }
  this->effigy_challenge_v2_host_uid_ = 0;
  v9 = (((_BYTE)this + 52) & 7u) + 3;
  v10 = *(_BYTE *)(((unsigned __int64)&this->t_use_time_limit_ >> 3) + 0x7FFF8000) != 0
     && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->t_use_time_limit_ >> 3) + 0x7FFF8000);
  if ( v10 )
    __asan_report_store4(&this->t_use_time_limit_, v9, v10);
  this->t_use_time_limit_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_mode_difficulty_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->challenge_mode_difficulty_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->challenge_mode_difficulty_, v9, (_BYTE)this + 56);
  }
  this->challenge_mode_difficulty_ = 0;
  v11 = (((_BYTE)this + 60) & 7u) + 3;
  v12 = *(_BYTE *)(((unsigned __int64)&this->t_remain_use_time_ >> 3) + 0x7FFF8000) != 0
     && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->t_remain_use_time_ >> 3)
                                                         + 0x7FFF8000);
  if ( v12 )
    __asan_report_store4(&this->t_remain_use_time_, v11, v12);
  this->t_remain_use_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->killed_monster_cnt_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->killed_monster_cnt_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->killed_monster_cnt_, v11, (_BYTE)this + 64);
  }
  this->killed_monster_cnt_ = 0;
  v13 = (((_BYTE)this + 68) & 7u) + 3;
  v14 = *(_BYTE *)(((unsigned __int64)&this->total_target_kill_cnt_ >> 3) + 0x7FFF8000) != 0
     && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total_target_kill_cnt_ >> 3)
                                                         + 0x7FFF8000);
  if ( v14 )
    __asan_report_store4(&this->total_target_kill_cnt_, v13, v14);
  this->total_target_kill_cnt_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->boss_violent_level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->boss_violent_level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->boss_violent_level_, v13, (_BYTE)this + 72);
  }
  this->boss_violent_level_ = 0;
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
