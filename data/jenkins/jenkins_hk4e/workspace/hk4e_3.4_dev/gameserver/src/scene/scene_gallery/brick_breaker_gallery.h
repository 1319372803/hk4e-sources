// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_gallery/brick_breaker_gallery.h

// Line 20: range 0000000017B8D3D2-0000000017B8D479
void __cdecl BrickBreakerGallery::~BrickBreakerGallery(BrickBreakerGallery *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'BrickBreakerGallery + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseGallery = v2;
  std::shared_ptr<SceneTimer>::~shared_ptr(&this->breakout_log_timer_ptr_);
  AbilityBreakoutMixin::BreakoutSnapShot::~BreakoutSnapShot(&this->snap_shot_);
  std::vector<unsigned int>::~vector(&this->remaining_boss_hp_vec_);
  std::vector<unsigned int>::~vector(&this->score_vec_);
  std::vector<unsigned int>::~vector(&this->enter_scene_avatar_id_vec_);
  BaseGallery::~BaseGallery((BaseGallery *const)this);
};

// Line 20: range 0000000017B8D47A-0000000017B8D4A4
void __cdecl BrickBreakerGallery::~BrickBreakerGallery(BrickBreakerGallery *const this)
{
  BrickBreakerGallery::~BrickBreakerGallery(this);
  operator delete(this, 0x2A8uLL);
};

// Line 23: range 0000000016B3651A-0000000016B36748
void __fastcall ZN19BrickBreakerGalleryCI211BaseGalleryER5Scenej(BrickBreakerGallery *const this, Scene *a2, int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int (**v6)(...); // rdx
  __int64 v7; // rsi
  bool v8; // dl
  char v10[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ZN19BrickBreakerGalleryCI211BaseGalleryER5Scenej;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  BaseGallery::BaseGallery((BaseGallery *const)this, a2, *(_DWORD *)(v3 + 32));
  v6 = (int (**)(...))(&`vtable for'BrickBreakerGallery + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BaseGallery = v6;
  v7 = (((_BYTE)this + 44) & 7u) + 3;
  v8 = *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000);
  if ( v8 )
    __asan_report_store4(&this->match_id_, v7, v8);
  this->match_id_ = 0;
  if ( *(char *)(((unsigned __int64)&this->is_need_set_team_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_need_set_team_, v7, &this->is_need_set_team_);
  this->is_need_set_team_ = 0;
  std::vector<unsigned int>::vector(&this->enter_scene_avatar_id_vec_);
  if ( *(_BYTE *)(((unsigned __int64)&this->owner_uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->owner_uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->owner_uid_, v7, (_BYTE)this + 80);
  }
  this->owner_uid_ = 0;
  std::vector<unsigned int>::vector(&this->score_vec_);
  std::vector<unsigned int>::vector(&this->remaining_boss_hp_vec_);
  AbilityBreakoutMixin::BreakoutSnapShot::BreakoutSnapShot(&this->snap_shot_);
  std::shared_ptr<SceneTimer>::shared_ptr(&this->breakout_log_timer_ptr_);
  if ( v10 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 33: range 0000000014F7854A-0000000014F78575
void __cdecl BrickBreakerGallery::setEnterSceneAvatarIdVec(
        BrickBreakerGallery *const this,
        const std::vector<unsigned int> *enter_scene_avatar_id_vec)
{
  std::vector<unsigned int>::operator=(&this->enter_scene_avatar_id_vec_, enter_scene_avatar_id_vec);
};

// Line 39: range 0000000014F78576-0000000014F785CA
uint32_t __cdecl BrickBreakerGallery::getMatchId(const BrickBreakerGallery *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  return this->match_id_;
};

// Line 39: range 00000000180B5468-00000000180B54C3
void __cdecl BrickBreakerGallery::setMatchId(BrickBreakerGallery *const this, uint32_t match_id__out)
{
  bool v2; // dl

  v2 = *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000);
  if ( v2 )
    __asan_report_store4(&this->match_id_, (((_BYTE)this + 44) & 7u) + 3, v2);
  this->match_id_ = match_id__out;
};

// Line 40: range 0000000014F785CC-0000000014F78622
// local variable allocation has failed, the output may be wrong!
void __cdecl BrickBreakerGallery::setIsNeedSetTeam(BrickBreakerGallery *const this, bool is_need_set_team__out)
{
  if ( *(char *)(((unsigned __int64)&this->is_need_set_team_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_need_set_team_, is_need_set_team__out, &this->is_need_set_team_);
  this->is_need_set_team_ = is_need_set_team__out;
};
