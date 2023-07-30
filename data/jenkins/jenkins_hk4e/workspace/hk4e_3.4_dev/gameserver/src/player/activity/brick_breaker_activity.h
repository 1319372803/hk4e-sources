// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/brick_breaker_activity.h

// Line 19: range 0000000014F78624-0000000014F786CE
void __cdecl BrickBreakerLevelData::BrickBreakerLevelData(BrickBreakerLevelData *const this)
{
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(this);
  this->is_finish = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_score >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_score);
  }
  this->max_score = 0;
  std::vector<unsigned int>::vector(&this->chosen_avatar_vec);
  std::vector<unsigned int>::vector(&this->chosen_skill_vec);
};

// Line 19: range 0000000015000E9C-0000000015000FD5
void __cdecl BrickBreakerLevelData::BrickBreakerLevelData(BrickBreakerLevelData *const this, BrickBreakerLevelData *a2)
{
  bool is_finish; // cl
  uint32_t max_score; // ecx

  if ( *(char *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(a2);
  is_finish = a2->is_finish;
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(this);
  this->is_finish = is_finish;
  if ( *(_BYTE *)(((unsigned __int64)&a2->max_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->max_score >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  max_score = a2->max_score;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_score >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_score);
  }
  this->max_score = max_score;
  std::vector<unsigned int>::vector(&this->chosen_avatar_vec, &a2->chosen_avatar_vec);
  std::vector<unsigned int>::vector(&this->chosen_skill_vec, &a2->chosen_skill_vec);
};

// Line 19: range 0000000014F786D0-0000000014F786FE
void __cdecl BrickBreakerLevelData::~BrickBreakerLevelData(BrickBreakerLevelData *const this)
{
  std::vector<unsigned int>::~vector(&this->chosen_skill_vec);
  std::vector<unsigned int>::~vector(&this->chosen_avatar_vec);
};

// Line 28: range 000000001702EBC8-000000001702EC9D
void __cdecl BrickBreakerTransferContext::BrickBreakerTransferContext(BrickBreakerTransferContext *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->level_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_restart >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_restart >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_restart);
  }
  this->is_restart = 0;
  std::vector<unsigned int>::vector(&this->enter_scene_avatar_id_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->enter_reason >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->enter_reason >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->enter_reason);
  }
  this->enter_reason = ENTER_REASON_NONE;
};

// Line 28: range 0000000015032142-0000000015032160
void __cdecl BrickBreakerTransferContext::~BrickBreakerTransferContext(BrickBreakerTransferContext *const this)
{
  std::vector<unsigned int>::~vector(&this->enter_scene_avatar_id_vec);
};

// Line 38: range 0000000014F788CC-0000000014F78923
void __cdecl BrickBreakerDungeonContext::BrickBreakerDungeonContext(BrickBreakerDungeonContext *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->level_id = 0;
  std::vector<unsigned int>::vector(&this->enter_scene_avatar_id_vec);
};

// Line 38: range 0000000014FE0526-0000000014FE05BE
void __cdecl BrickBreakerDungeonContext::BrickBreakerDungeonContext(
        BrickBreakerDungeonContext *const this,
        BrickBreakerDungeonContext *a2)
{
  uint32_t level_id; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  level_id = a2->level_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->level_id = level_id;
  std::vector<unsigned int>::vector(&this->enter_scene_avatar_id_vec, &a2->enter_scene_avatar_id_vec);
};

// Line 38: range 0000000014FB3C7C-0000000014FB3D14
void __cdecl BrickBreakerDungeonContext::BrickBreakerDungeonContext(
        BrickBreakerDungeonContext *const this,
        const BrickBreakerDungeonContext *a2)
{
  uint32_t level_id; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  level_id = a2->level_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->level_id = level_id;
  std::vector<unsigned int>::vector(&this->enter_scene_avatar_id_vec, &a2->enter_scene_avatar_id_vec);
};

// Line 38: range 0000000014F78924-0000000014F78942
void __cdecl BrickBreakerDungeonContext::~BrickBreakerDungeonContext(BrickBreakerDungeonContext *const this)
{
  std::vector<unsigned int>::~vector(&this->enter_scene_avatar_id_vec);
};

// Line 44: range 0000000015032162-000000001503221B
void __cdecl BrickBreakerActivity::~BrickBreakerActivity(BrickBreakerActivity *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BrickBreakerActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  std::map<std::type_index,std::weak_ptr<Observer>>::~map(&this->event_observer_map_);
  BrickBreakerTransferContext::~BrickBreakerTransferContext(&this->transfer_context_);
  std::map<unsigned int,unsigned int>::~map(&this->skill_map_);
  std::map<unsigned int,BrickBreakerLevelData>::~map(&this->dungeon_level_map_);
  std::map<unsigned int,BrickBreakerLevelData>::~map(&this->world_level_map_);
  std::map<unsigned int,std::tuple<bool,bool,bool,bool>>::~map(&this->unlock_stage_map_);
  BaseActivity::~BaseActivity(this);
};

// Line 44: range 000000001503221C-0000000015032246
void __cdecl BrickBreakerActivity::~BrickBreakerActivity(BrickBreakerActivity *const this)
{
  BrickBreakerActivity::~BrickBreakerActivity(this);
  operator delete(this, 0x4E8uLL);
};

// Line 47: range 000000001702EC9E-000000001702EF62
void __fastcall ZN20BrickBreakerActivityCI212BaseActivityER6Playerj(
        BrickBreakerActivity *const this,
        Player *a2,
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
  *(_QWORD *)(v3 + 16) = ZN20BrickBreakerActivityCI212BaseActivityER6Playerj;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  BaseActivity::BaseActivity(this, a2, *(_DWORD *)(v3 + 32));
  v6 = (int (**)(...))(&`vtable for'BrickBreakerActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v6;
  std::map<unsigned int,std::tuple<bool,bool,bool,bool>>::map(&this->unlock_stage_map_);
  std::map<unsigned int,BrickBreakerLevelData>::map(&this->world_level_map_);
  std::map<unsigned int,BrickBreakerLevelData>::map(&this->dungeon_level_map_);
  std::map<unsigned int,unsigned int>::map(&this->skill_map_);
  Vector3::Vector3(&this->start_pos_, 0.0, 0.0, 0.0);
  Vector3::Vector3(&this->start_rot_, 0.0, 0.0, 0.0);
  if ( *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->play_index_);
  }
  this->play_index_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_level_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_level_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cur_level_id_);
  }
  this->cur_level_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_play_mode_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_play_mode_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_play_mode_);
  }
  this->cur_play_mode_ = NONE_3;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_ignore_check_by_gm_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 116) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_ignore_check_by_gm_ >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_ignore_check_by_gm_);
  }
  this->is_ignore_check_by_gm_ = 0;
  BrickBreakerTransferContext::BrickBreakerTransferContext(&this->transfer_context_);
  std::map<std::type_index,std::weak_ptr<Observer>>::map(&this->event_observer_map_);
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

// Line 61: range 0000000014F78526-0000000014F78537
int32_t __cdecl BrickBreakerActivity::getAddCoinExceedRetcode(
        const BrickBreakerActivity *const this,
        proto::VirtualItem coin_type)
{
  return 10464;
};

// Line 62: range 0000000014F78538-0000000014F78549
int32_t __cdecl BrickBreakerActivity::getSubCoinNotEnoughRetcode(
        const BrickBreakerActivity *const this,
        proto::VirtualItem coin_type)
{
  return 10463;
};

// Line 67: range 000000001384AA54-000000001384AA5E
data::NewActivityType __cdecl BrickBreakerActivity::getActivityStaticType()
{
  return 3300;
};

// Line 73: range 0000000017A09D5A-0000000017A09E1A
int32_t __cdecl BrickBreakerActivity::getCurAvatarAndSkillVec(
        BrickBreakerActivity *const this,
        std::vector<unsigned int> *avatar_vec,
        std::vector<unsigned int> *skill_vec)
{
  char v3; // di

  if ( *(_BYTE *)(((unsigned __int64)&this->cur_play_mode_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_play_mode_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  v3 = this->cur_play_mode_ == IN_DUNGEON;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_level_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_level_id_ >> 3) + 0x7FFF8000) )
  {
    v3 = (_BYTE)this - 124;
    __asan_report_load4();
  }
  return BrickBreakerActivity::getAvatarAndSkillVec(this, this->cur_level_id_, v3, avatar_vec, skill_vec);
};

// Line 130: range 0000000017D71946-0000000017D7199A
uint32_t __cdecl BrickBreakerActivity::getCurLevelId(const BrickBreakerActivity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_level_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_level_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  return this->cur_level_id_;
};

// Line 139: range 0000000017D7199C-0000000017D719F7
void __cdecl BrickBreakerActivity::setIsIgnoreCheckByGm(
        BrickBreakerActivity *const this,
        bool is_ignore_check_by_gm__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_ignore_check_by_gm_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 116) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_ignore_check_by_gm_ >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_ignore_check_by_gm_);
  }
  this->is_ignore_check_by_gm_ = is_ignore_check_by_gm__out;
};
