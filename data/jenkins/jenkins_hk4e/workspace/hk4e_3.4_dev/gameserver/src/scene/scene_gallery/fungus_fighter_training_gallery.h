// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_gallery/fungus_fighter_training_gallery.h

// Line 18: range 0000000016832900-000000001683294D
void __cdecl FungusFighterTrainingGallery::~FungusFighterTrainingGallery(FungusFighterTrainingGallery *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'FungusFighterTrainingGallery + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseGallery = v2;
  BaseGallery::~BaseGallery((BaseGallery *const)this);
};

// Line 18: range 000000001683294E-0000000016832978
void __cdecl FungusFighterTrainingGallery::~FungusFighterTrainingGallery(FungusFighterTrainingGallery *const this)
{
  FungusFighterTrainingGallery::~FungusFighterTrainingGallery(this);
  operator delete(this, 0x148uLL);
};

// Line 21: range 0000000016B34EF8-0000000016B351F3
void __fastcall ZN28FungusFighterTrainingGalleryCI211BaseGalleryER5Scenej(
        FungusFighterTrainingGallery *const this,
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
  bool v13; // dl
  char v15[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ZN28FungusFighterTrainingGalleryCI211BaseGalleryER5Scenej;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  BaseGallery::BaseGallery((BaseGallery *const)this, a2, *(_DWORD *)(v3 + 32));
  v6 = (int (**)(...))(&`vtable for'FungusFighterTrainingGallery + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BaseGallery = v6;
  v7 = (((_BYTE)this + 44) & 7u) + 3;
  v8 = *(_BYTE *)(((unsigned __int64)&this->killed_monster_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->killed_monster_count_ >> 3)
                                                        + 0x7FFF8000);
  if ( v8 )
    __asan_report_store4(&this->killed_monster_count_, v7, v8);
  this->killed_monster_count_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->buff_last_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->buff_last_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->buff_last_time_, v7, (_BYTE)this + 48);
  }
  this->buff_last_time_ = 0;
  v9 = (((_BYTE)this + 52) & 7u) + 3;
  v10 = *(_BYTE *)(((unsigned __int64)&this->buff_start_time_ >> 3) + 0x7FFF8000) != 0
     && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->buff_start_time_ >> 3) + 0x7FFF8000);
  if ( v10 )
    __asan_report_store4(&this->buff_start_time_, v9, v10);
  this->buff_start_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_monster_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_monster_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_monster_count_, v9, (_BYTE)this + 56);
  }
  this->max_monster_count_ = 0;
  v11 = (((_BYTE)this + 60) & 7u) + 3;
  v12 = *(_BYTE *)(((unsigned __int64)&this->rest_skill_count_ >> 3) + 0x7FFF8000) != 0
     && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->rest_skill_count_ >> 3) + 0x7FFF8000);
  if ( v12 )
    __asan_report_store4(&this->rest_skill_count_, v11, v12);
  this->rest_skill_count_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_skill_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_skill_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_skill_count_, v11, (_BYTE)this + 64);
  }
  this->max_skill_count_ = 0;
  v13 = *(_BYTE *)(((unsigned __int64)&this->buff_id_ >> 3) + 0x7FFF8000) != 0
     && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->buff_id_ >> 3) + 0x7FFF8000);
  if ( v13 )
    __asan_report_store4(&this->buff_id_, (((_BYTE)this + 68) & 7u) + 3, v13);
  this->buff_id_ = 0;
  if ( v15 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
