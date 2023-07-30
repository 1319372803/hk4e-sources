// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/potion_activity.h

// Line 57: range 0000000016D68E1C-0000000016D68F11
void __cdecl PotionStage::PotionStage(PotionStage *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->stage_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_open);
  }
  this->is_open = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->reset_times >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reset_times >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reset_times);
  }
  this->reset_times = 0;
  std::map<unsigned int,PotionLevel>::map(&this->level_map);
  std::unordered_set<unsigned int>::unordered_set(&this->cool_down_avatar_id_set);
  std::unordered_set<unsigned int>::unordered_set(&this->cool_down_buff_id_set);
};

// Line 57: range 0000000016F9A246-0000000016F9A445
void __cdecl PotionStage::PotionStage(PotionStage *const this, const PotionStage *a2)
{
  uint32_t stage_id; // ecx
  bool is_open; // cl
  uint32_t reset_times; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  stage_id = a2->stage_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->stage_id = stage_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&a2->is_open);
  }
  is_open = a2->is_open;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_open);
  }
  this->is_open = is_open;
  if ( *(_BYTE *)(((unsigned __int64)&a2->reset_times >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->reset_times >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  reset_times = a2->reset_times;
  if ( *(_BYTE *)(((unsigned __int64)&this->reset_times >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reset_times >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reset_times);
  }
  this->reset_times = reset_times;
  std::map<unsigned int,PotionLevel>::map(&this->level_map, &a2->level_map);
  std::unordered_set<unsigned int>::unordered_set(&this->cool_down_avatar_id_set, &a2->cool_down_avatar_id_set);
  std::unordered_set<unsigned int>::unordered_set(&this->cool_down_buff_id_set, &a2->cool_down_buff_id_set);
};

// Line 57: range 0000000016D68F12-0000000016D68F50
void __cdecl PotionStage::~PotionStage(PotionStage *const this)
{
  std::unordered_set<unsigned int>::~unordered_set(&this->cool_down_buff_id_set);
  std::unordered_set<unsigned int>::~unordered_set(&this->cool_down_avatar_id_set);
  std::map<unsigned int,PotionLevel>::~map(&this->level_map);
};

// Line 90: range 0000000016D690D2-0000000016D6934C
void __cdecl PotionDungeonContext::PotionDungeonContext(PotionDungeonContext *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->stage_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->level_id);
  }
  this->level_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->difficulty_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->difficulty_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->difficulty_level);
  }
  this->difficulty_level = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->mode_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->mode_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->mode_id);
  }
  this->mode_id = 0;
  std::vector<PotionAvatar>::vector(&this->team_avatar_vec);
  std::unordered_set<unsigned int>::unordered_set(&this->buff_id_set);
  if ( *(char *)(((unsigned __int64)&this->is_has_add_buff >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_has_add_buff);
  this->is_has_add_buff = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->final_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->final_score >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->final_score);
  }
  this->final_score = 0;
  if ( *(char *)(((unsigned __int64)&this->is_saved >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_saved);
  this->is_saved = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_use_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->challenge_use_time >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->challenge_use_time);
  }
  this->challenge_use_time = 0;
  google::protobuf::RepeatedPtrField<proto_log::AvatarLog>::RepeatedPtrField(&this->avatar_log_list);
};

// Line 90: range 0000000014B2F5A2-0000000014B2FA1C
void __cdecl PotionDungeonContext::PotionDungeonContext(PotionDungeonContext *const this, PotionDungeonContext *a2)
{
  uint32_t stage_id; // ecx
  uint32_t level_id; // ecx
  uint32_t difficulty_level; // ecx
  uint32_t mode_id; // ecx
  bool is_has_add_buff; // cl
  uint32_t final_score; // ecx
  bool is_saved; // cl
  uint32_t challenge_use_time; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  stage_id = a2->stage_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->stage_id = stage_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->level_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->level_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  level_id = a2->level_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->level_id);
  }
  this->level_id = level_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->difficulty_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->difficulty_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  difficulty_level = a2->difficulty_level;
  if ( *(_BYTE *)(((unsigned __int64)&this->difficulty_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->difficulty_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->difficulty_level);
  }
  this->difficulty_level = difficulty_level;
  if ( *(_BYTE *)(((unsigned __int64)&a2->mode_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->mode_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  mode_id = a2->mode_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->mode_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->mode_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->mode_id);
  }
  this->mode_id = mode_id;
  std::vector<PotionAvatar>::vector(&this->team_avatar_vec, &a2->team_avatar_vec);
  std::unordered_set<unsigned int>::unordered_set(&this->buff_id_set, &a2->buff_id_set);
  if ( *(char *)(((unsigned __int64)&a2->is_has_add_buff >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_has_add_buff);
  is_has_add_buff = a2->is_has_add_buff;
  if ( *(char *)(((unsigned __int64)&this->is_has_add_buff >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_has_add_buff);
  this->is_has_add_buff = is_has_add_buff;
  if ( *(_BYTE *)(((unsigned __int64)&a2->final_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->final_score >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  final_score = a2->final_score;
  if ( *(_BYTE *)(((unsigned __int64)&this->final_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->final_score >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->final_score);
  }
  this->final_score = final_score;
  if ( *(char *)(((unsigned __int64)&a2->is_saved >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_saved);
  is_saved = a2->is_saved;
  if ( *(char *)(((unsigned __int64)&this->is_saved >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_saved);
  this->is_saved = is_saved;
  if ( *(_BYTE *)(((unsigned __int64)&a2->challenge_use_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->challenge_use_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  challenge_use_time = a2->challenge_use_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_use_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->challenge_use_time >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->challenge_use_time);
  }
  this->challenge_use_time = challenge_use_time;
  google::protobuf::RepeatedPtrField<proto_log::AvatarLog>::RepeatedPtrField(
    &this->avatar_log_list,
    &a2->avatar_log_list);
};

// Line 90: range 0000000014A96A7C-0000000014A96EFB
void __cdecl PotionDungeonContext::PotionDungeonContext(
        PotionDungeonContext *const this,
        const PotionDungeonContext *a2)
{
  uint32_t stage_id; // ecx
  uint32_t level_id; // ecx
  uint32_t difficulty_level; // ecx
  uint32_t mode_id; // ecx
  bool is_has_add_buff; // cl
  uint32_t final_score; // ecx
  bool is_saved; // cl
  uint32_t challenge_use_time; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  stage_id = a2->stage_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->stage_id = stage_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->level_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->level_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  level_id = a2->level_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->level_id);
  }
  this->level_id = level_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->difficulty_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->difficulty_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  difficulty_level = a2->difficulty_level;
  if ( *(_BYTE *)(((unsigned __int64)&this->difficulty_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->difficulty_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->difficulty_level);
  }
  this->difficulty_level = difficulty_level;
  if ( *(_BYTE *)(((unsigned __int64)&a2->mode_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->mode_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  mode_id = a2->mode_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->mode_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->mode_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->mode_id);
  }
  this->mode_id = mode_id;
  std::vector<PotionAvatar>::vector(&this->team_avatar_vec, &a2->team_avatar_vec);
  std::unordered_set<unsigned int>::unordered_set(&this->buff_id_set, &a2->buff_id_set);
  if ( *(char *)(((unsigned __int64)&a2->is_has_add_buff >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_has_add_buff);
  is_has_add_buff = a2->is_has_add_buff;
  if ( *(char *)(((unsigned __int64)&this->is_has_add_buff >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_has_add_buff);
  this->is_has_add_buff = is_has_add_buff;
  if ( *(_BYTE *)(((unsigned __int64)&a2->final_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->final_score >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  final_score = a2->final_score;
  if ( *(_BYTE *)(((unsigned __int64)&this->final_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->final_score >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->final_score);
  }
  this->final_score = final_score;
  if ( *(char *)(((unsigned __int64)&a2->is_saved >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_saved);
  is_saved = a2->is_saved;
  if ( *(char *)(((unsigned __int64)&this->is_saved >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_saved);
  this->is_saved = is_saved;
  if ( *(_BYTE *)(((unsigned __int64)&a2->challenge_use_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->challenge_use_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  challenge_use_time = a2->challenge_use_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_use_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->challenge_use_time >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->challenge_use_time);
  }
  this->challenge_use_time = challenge_use_time;
  google::protobuf::RepeatedPtrField<proto_log::AvatarLog>::RepeatedPtrField(
    &this->avatar_log_list,
    &a2->avatar_log_list);
};

// Line 90: range 0000000014A4684A-0000000014A46888
void __cdecl PotionDungeonContext::~PotionDungeonContext(PotionDungeonContext *const this)
{
  google::protobuf::RepeatedPtrField<proto_log::AvatarLog>::~RepeatedPtrField(&this->avatar_log_list);
  std::unordered_set<unsigned int>::~unordered_set(&this->buff_id_set);
  std::vector<PotionAvatar>::~vector(&this->team_avatar_vec);
};

// Line 94: range 000000001384A63A-000000001384A644
data::NewActivityType __cdecl PotionActivity::getActivityStaticType()
{
  return 2400;
};

// Line 105: range 0000000017094FA8-000000001709503D
void __cdecl PotionActivity::~PotionActivity(PotionActivity *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'PotionActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  std::vector<unsigned long>::~vector(&this->in_dungeon_avatar_guid_vec_);
  std::map<unsigned int,PotionStage>::~map(&this->stage_map_);
  std::weak_ptr<Observer>::~weak_ptr(&this->post_enter_scene_obs_wtr_);
  std::weak_ptr<Observer>::~weak_ptr(&this->leave_scene_obs_wtr_);
  BaseActivity::~BaseActivity(this);
};

// Line 105: range 000000001709503E-0000000017095068
void __cdecl PotionActivity::~PotionActivity(PotionActivity *const this)
{
  PotionActivity::~PotionActivity(this);
  operator delete(this, 0x418uLL);
};

// Line 108: range 0000000017026B6E-0000000017026CFC
void __fastcall ZN14PotionActivityCI212BaseActivityER6Playerj(PotionActivity *const this, Player *a2, int a3)
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
  *(_QWORD *)(v3 + 16) = ZN14PotionActivityCI212BaseActivityER6Playerj;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  BaseActivity::BaseActivity(this, a2, *(_DWORD *)(v3 + 32));
  v6 = (int (**)(...))(&`vtable for'PotionActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v6;
  std::weak_ptr<Observer>::weak_ptr(&this->leave_scene_obs_wtr_);
  std::weak_ptr<Observer>::weak_ptr(&this->post_enter_scene_obs_wtr_);
  std::map<unsigned int,PotionStage>::map(&this->stage_map_);
  std::vector<unsigned long>::vector(&this->in_dungeon_avatar_guid_vec_);
  if ( *(char *)(((unsigned __int64)&this->is_finish_any_level_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_finish_any_level_);
  this->is_finish_any_level_ = 0;
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
