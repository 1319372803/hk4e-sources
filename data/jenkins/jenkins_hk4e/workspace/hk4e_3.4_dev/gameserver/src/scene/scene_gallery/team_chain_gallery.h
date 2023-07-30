// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_gallery/team_chain_gallery.h

// Line 20: range 0000000018326ED8-0000000018326F5B
void __cdecl TeamChainGallery::~TeamChainGallery(TeamChainGallery *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'TeamChainGallery + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseGallery = v2;
  std::string::~string(&this->chain_avatar_ability_group_name_);
  std::vector<unsigned long>::~vector(&this->chain_avatar_guid_vec_);
  std::vector<unsigned int>::~vector(&this->choose_skill_vec_);
  BaseGallery::~BaseGallery((BaseGallery *const)this);
};

// Line 20: range 0000000018326F5C-0000000018326F86
void __cdecl TeamChainGallery::~TeamChainGallery(TeamChainGallery *const this)
{
  TeamChainGallery::~TeamChainGallery(this);
  operator delete(this, 0x198uLL);
};

// Line 23: range 0000000016B386A2-0000000016B3893D
void __fastcall ZN16TeamChainGalleryCI211BaseGalleryER5Scenej(TeamChainGallery *const this, Scene *a2, int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int (**v6)(...); // rdx
  __int64 v7; // rsi
  bool v8; // dl
  bool v9; // dl
  char v11[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ZN16TeamChainGalleryCI211BaseGalleryER5Scenej;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  BaseGallery::BaseGallery((BaseGallery *const)this, a2, *(_DWORD *)(v3 + 32));
  v6 = (int (**)(...))(&`vtable for'TeamChainGallery + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BaseGallery = v6;
  v7 = (((_BYTE)this + 44) & 7u) + 3;
  v8 = *(_BYTE *)(((unsigned __int64)&this->cur_total_score_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_total_score_ >> 3) + 0x7FFF8000);
  if ( v8 )
    __asan_report_store4(&this->cur_total_score_, v7, v8);
  this->cur_total_score_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_idx_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_idx_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gallery_idx_, v7, (_BYTE)this + 48);
  }
  this->gallery_idx_ = 0;
  std::vector<unsigned int>::vector(&this->choose_skill_vec_);
  if ( *(_BYTE *)(((unsigned __int64)&this->score_end_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->score_end_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->score_end_time_, v7, (_BYTE)this + 80);
  }
  this->score_end_time_ = 0;
  std::vector<unsigned long>::vector(&this->chain_avatar_guid_vec_);
  std::string::basic_string(&this->chain_avatar_ability_group_name_);
  if ( *(_BYTE *)(((unsigned __int64)&this->killed_monster_cnt_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->killed_monster_cnt_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->killed_monster_cnt_, v7, (_BYTE)this - 112);
  }
  this->killed_monster_cnt_ = 0;
  v9 = *(_BYTE *)(((unsigned __int64)&this->total_target_kill_cnt_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total_target_kill_cnt_ >> 3)
                                                         + 0x7FFF8000);
  if ( v9 )
    __asan_report_store4(&this->total_target_kill_cnt_, (((_BYTE)this - 108) & 7u) + 3, v9);
  this->total_target_kill_cnt_ = 0;
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
