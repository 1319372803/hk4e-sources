// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/channeller_slab_activity.h

// Line 23: range 00000000150320DE-0000000015032108
void __cdecl ChannellerSlabActivity::~ChannellerSlabActivity(ChannellerSlabActivity *const this)
{
  ChannellerSlabActivity::~ChannellerSlabActivity(this);
  operator delete(this, 0x5A0uLL);
};

// Line 23: range 0000000015032000-00000000150320DD
void __cdecl ChannellerSlabActivity::~ChannellerSlabActivity(ChannellerSlabActivity *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ChannellerSlabActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  std::unordered_set<unsigned int>::~unordered_set(&this->active_stage_set_);
  std::weak_ptr<Observer>::~weak_ptr(&this->challenge_begin_obs_wtr_);
  std::weak_ptr<Observer>::~weak_ptr(&this->avatar_level_up_obs_wtr_);
  std::weak_ptr<Observer>::~weak_ptr(&this->obtain_avatar_obs_wtr_);
  std::weak_ptr<Observer>::~weak_ptr(&this->leave_scene_obs_wtr_);
  std::weak_ptr<Observer>::~weak_ptr(&this->enter_scene_obs_wtr_);
  std::weak_ptr<Observer>::~weak_ptr(&this->general_reward_obs_wtr_);
  ChannellerSlabActivity::BinData::~BinData(&this->bin_data_);
  BaseActivity::~BaseActivity(this);
};

// Line 25: range 0000000014F793DC-0000000014F79473
void __cdecl ChannellerSlabActivity::StageData::StageData(ChannellerSlabActivity::StageData *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->stage_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_dungeon_done >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_dungeon_done >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_dungeon_done);
  }
  this->is_dungeon_done = 0;
  std::vector<unsigned int>::vector(&this->active_camp_vec);
};

// Line 25: range 0000000014FBA578-0000000014FBA690
void __cdecl ChannellerSlabActivity::StageData::StageData(
        ChannellerSlabActivity::StageData *const this,
        ChannellerSlabActivity::StageData *a2)
{
  uint32_t stage_id; // ecx
  bool is_dungeon_done; // cl

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
  if ( *(_BYTE *)(((unsigned __int64)&a2->is_dungeon_done >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->is_dungeon_done >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&a2->is_dungeon_done);
  }
  is_dungeon_done = a2->is_dungeon_done;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_dungeon_done >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_dungeon_done >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_dungeon_done);
  }
  this->is_dungeon_done = is_dungeon_done;
  std::vector<unsigned int>::vector(&this->active_camp_vec, &a2->active_camp_vec);
};

// Line 25: range 0000000014F79474-0000000014F79492
void __cdecl ChannellerSlabActivity::StageData::~StageData(ChannellerSlabActivity::StageData *const this)
{
  std::vector<unsigned int>::~vector(&this->active_camp_vec);
};

// Line 30: range 000000001384A465-000000001384A46F
data::NewActivityType __cdecl ChannellerSlabActivity::getActivityStaticType()
{
  return 1502;
};

// Line 32: range 000000001701F858-000000001701F872
void __cdecl ChannellerSlabActivity::BuffScheme::BuffScheme(ChannellerSlabActivity::BuffScheme *const this)
{
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->slot_map);
};

// Line 32: range 0000000015031F10-0000000015031F2A
void __cdecl ChannellerSlabActivity::BuffScheme::~BuffScheme(ChannellerSlabActivity::BuffScheme *const this)
{
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->slot_map);
};

// Line 44: range 000000001701F874-000000001701F8C0
void __cdecl ChannellerSlabActivity::BuffData::BuffData(ChannellerSlabActivity::BuffData *const this)
{
  std::unordered_set<unsigned int>::unordered_set(&this->buff_id_set);
  ChannellerSlabActivity::BuffScheme::BuffScheme(&this->single_buff_scheme);
  ChannellerSlabActivity::BuffScheme::BuffScheme(&this->mp_buff_scheme);
  std::vector<ChannellerSlabActivity::AssistData>::vector(&this->assist_vec);
};

// Line 44: range 0000000015031F2C-0000000015031F78
void __cdecl ChannellerSlabActivity::BuffData::~BuffData(ChannellerSlabActivity::BuffData *const this)
{
  std::vector<ChannellerSlabActivity::AssistData>::~vector(&this->assist_vec);
  ChannellerSlabActivity::BuffScheme::~BuffScheme(&this->mp_buff_scheme);
  ChannellerSlabActivity::BuffScheme::~BuffScheme(&this->single_buff_scheme);
  std::unordered_set<unsigned int>::~unordered_set(&this->buff_id_set);
};

// Line 51: range 0000000014F792EA-0000000014F79336
void __cdecl ChannellerSlabActivity::BuffData::clear(ChannellerSlabActivity::BuffData *const this)
{
  std::unordered_set<unsigned int>::clear(&this->buff_id_set);
  std::unordered_map<unsigned int,unsigned int>::clear(&this->single_buff_scheme.slot_map);
  std::unordered_map<unsigned int,unsigned int>::clear(&this->mp_buff_scheme.slot_map);
  std::vector<ChannellerSlabActivity::AssistData>::clear(&this->assist_vec);
};

// Line 60: range 0000000015013A40-0000000015013B53
void __cdecl ChannellerSlabActivity::LoopDungeonData::LoopDungeonData(
        ChannellerSlabActivity::LoopDungeonData *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->dungeon_index = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->score);
  }
  this->score = 0;
  if ( *(char *)(((unsigned __int64)&this->is_first_pass_reward_taken >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_first_pass_reward_taken);
  this->is_first_pass_reward_taken = 0;
  std::vector<unsigned int>::vector(&this->last_condition_id_vec);
  if ( *(char *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_open);
  this->is_open = 0;
};

// Line 60: range 0000000014FF8C8A-0000000014FF8CA8
void __cdecl ChannellerSlabActivity::LoopDungeonData::~LoopDungeonData(
        ChannellerSlabActivity::LoopDungeonData *const this)
{
  std::vector<unsigned int>::~vector(&this->last_condition_id_vec);
};

// Line 69: range 000000001701F8FA-000000001701F99D
void __cdecl ChannellerSlabActivity::LoopDungeonStageData::LoopDungeonStageData(
        ChannellerSlabActivity::LoopDungeonStageData *const this)
{
  std::map<unsigned int,ChannellerSlabActivity::LoopDungeonData>::map(&this->dungeon_data_map);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_difficulty_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_difficulty_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_difficulty_id);
  }
  this->last_difficulty_id = 0;
  std::unordered_set<unsigned int>::unordered_set(&this->taken_reward_index_set);
  if ( *(char *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_open);
  this->is_open = 0;
};

// Line 69: range 0000000015031F96-0000000015031FC0
void __cdecl ChannellerSlabActivity::LoopDungeonStageData::~LoopDungeonStageData(
        ChannellerSlabActivity::LoopDungeonStageData *const this)
{
  std::unordered_set<unsigned int>::~unordered_set(&this->taken_reward_index_set);
  std::map<unsigned int,ChannellerSlabActivity::LoopDungeonData>::~map(&this->dungeon_data_map);
};

// Line 76: range 0000000014F79338-0000000014F793DB
void __cdecl ChannellerSlabActivity::LoopDungeonStageData::clear(
        ChannellerSlabActivity::LoopDungeonStageData *const this)
{
  std::map<unsigned int,ChannellerSlabActivity::LoopDungeonData>::clear(&this->dungeon_data_map);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_difficulty_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_difficulty_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_difficulty_id);
  }
  this->last_difficulty_id = 0;
  std::unordered_set<unsigned int>::clear(&this->taken_reward_index_set);
  if ( *(char *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_open);
  this->is_open = 0;
};

// Line 85: range 000000001701F99E-000000001701FA1D
void __cdecl ChannellerSlabActivity::BinData::BinData(ChannellerSlabActivity::BinData *const this)
{
  std::vector<ChannellerSlabActivity::StageData>::vector(&this->stage_vec);
  ChannellerSlabActivity::BuffData::BuffData(&this->buff_data);
  ChannellerSlabActivity::LoopDungeonStageData::LoopDungeonStageData(&this->loop_dungeon_stage_data);
  if ( *(_BYTE *)(((unsigned __int64)&this->tokens >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->tokens >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->tokens);
  }
  this->tokens = 0;
};

// Line 85: range 0000000015031FC2-0000000015031FFE
void __cdecl ChannellerSlabActivity::BinData::~BinData(ChannellerSlabActivity::BinData *const this)
{
  ChannellerSlabActivity::LoopDungeonStageData::~LoopDungeonStageData(&this->loop_dungeon_stage_data);
  ChannellerSlabActivity::BuffData::~BuffData(&this->buff_data);
  std::vector<ChannellerSlabActivity::StageData>::~vector(&this->stage_vec);
};

// Line 97: range 0000000014F796BC-0000000014F79789
void __cdecl ChannellerSlabActivity::LoopDungeonContext::LoopDungeonContext(
        ChannellerSlabActivity::LoopDungeonContext *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->dungeon_index = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->difficulty_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->difficulty_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->difficulty_id);
  }
  this->difficulty_id = 0;
  std::vector<unsigned int>::vector(&this->condition_id_vec);
  std::unordered_set<unsigned int>::unordered_set(&this->scheme_buff_id_set);
  std::vector<std::string>::vector(&this->scheme_ability_group_vec);
  std::unordered_set<unsigned int>::unordered_set(&this->enter_uid_set);
};

// Line 97: range 0000000014B2D164-0000000014B2D2D2
void __cdecl ChannellerSlabActivity::LoopDungeonContext::LoopDungeonContext(
        ChannellerSlabActivity::LoopDungeonContext *const this,
        ChannellerSlabActivity::LoopDungeonContext *a2)
{
  uint32_t dungeon_index; // ecx
  uint32_t difficulty_id; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  dungeon_index = a2->dungeon_index;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->dungeon_index = dungeon_index;
  if ( *(_BYTE *)(((unsigned __int64)&a2->difficulty_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->difficulty_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  difficulty_id = a2->difficulty_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->difficulty_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->difficulty_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->difficulty_id);
  }
  this->difficulty_id = difficulty_id;
  std::vector<unsigned int>::vector(&this->condition_id_vec, &a2->condition_id_vec);
  std::unordered_set<unsigned int>::unordered_set(&this->scheme_buff_id_set, &a2->scheme_buff_id_set);
  std::vector<std::string>::vector(&this->scheme_ability_group_vec, &a2->scheme_ability_group_vec);
  std::unordered_set<unsigned int>::unordered_set(&this->enter_uid_set, &a2->enter_uid_set);
};

// Line 97: range 0000000014A933D0-0000000014A9358F
void __cdecl ChannellerSlabActivity::LoopDungeonContext::LoopDungeonContext(
        ChannellerSlabActivity::LoopDungeonContext *const this,
        const ChannellerSlabActivity::LoopDungeonContext *a2)
{
  uint32_t dungeon_index; // ecx
  uint32_t difficulty_id; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  dungeon_index = a2->dungeon_index;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->dungeon_index = dungeon_index;
  if ( *(_BYTE *)(((unsigned __int64)&a2->difficulty_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->difficulty_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  difficulty_id = a2->difficulty_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->difficulty_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->difficulty_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->difficulty_id);
  }
  this->difficulty_id = difficulty_id;
  std::vector<unsigned int>::vector(&this->condition_id_vec, &a2->condition_id_vec);
  std::unordered_set<unsigned int>::unordered_set(&this->scheme_buff_id_set, &a2->scheme_buff_id_set);
  std::vector<std::string>::vector(&this->scheme_ability_group_vec, &a2->scheme_ability_group_vec);
  std::unordered_set<unsigned int>::unordered_set(&this->enter_uid_set, &a2->enter_uid_set);
};

// Line 108: range 000000001701FA1E-000000001701FBF7
void __fastcall ZN22ChannellerSlabActivityCI212BaseActivityER6Playerj(
        ChannellerSlabActivity *const this,
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
  *(_QWORD *)(v3 + 16) = ZN22ChannellerSlabActivityCI212BaseActivityER6Playerj;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  BaseActivity::BaseActivity(this, a2, *(_DWORD *)(v3 + 32));
  v6 = (int (**)(...))(&`vtable for'ChannellerSlabActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v6;
  ChannellerSlabActivity::BinData::BinData(&this->bin_data_);
  std::weak_ptr<Observer>::weak_ptr(&this->general_reward_obs_wtr_);
  std::weak_ptr<Observer>::weak_ptr(&this->enter_scene_obs_wtr_);
  std::weak_ptr<Observer>::weak_ptr(&this->leave_scene_obs_wtr_);
  std::weak_ptr<Observer>::weak_ptr(&this->obtain_avatar_obs_wtr_);
  std::weak_ptr<Observer>::weak_ptr(&this->avatar_level_up_obs_wtr_);
  std::weak_ptr<Observer>::weak_ptr(&this->challenge_begin_obs_wtr_);
  std::unordered_set<unsigned int>::unordered_set(&this->active_stage_set_);
  if ( *(_BYTE *)(((unsigned __int64)&this->gm_add_buff_energy_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gm_add_buff_energy_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gm_add_buff_energy_);
  }
  this->gm_add_buff_energy_ = 0;
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

// Line 162: range 0000000017D7116A-0000000017D711B6
uint32_t __cdecl ChannellerSlabActivity::getToken(const ChannellerSlabActivity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->bin_data_.tokens >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->bin_data_.tokens >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->bin_data_.tokens;
};

// Line 1021: range 0000000014A44374-0000000014A443C2
void __cdecl ChannellerSlabActivity::LoopDungeonContext::~LoopDungeonContext(
        ChannellerSlabActivity::LoopDungeonContext *const this)
{
  std::unordered_set<unsigned int>::~unordered_set(&this->enter_uid_set);
  std::vector<std::string>::~vector(&this->scheme_ability_group_vec);
  std::unordered_set<unsigned int>::~unordered_set(&this->scheme_buff_id_set);
  std::vector<unsigned int>::~vector(&this->condition_id_vec);
};
