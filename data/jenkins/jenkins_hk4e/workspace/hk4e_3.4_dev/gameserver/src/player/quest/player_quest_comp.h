// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/quest/player_quest_comp.h

// Line 33: range 0000000013EBC33E-0000000013EBC413
void __cdecl Chapter::Chapter(Chapter *const this)
{
  __int64 v1; // rcx
  char v2; // dl
  bool v3; // cl
  __int64 v4; // rdx
  char v5; // dl
  __int64 v6; // rdx
  char v7; // dl
  __int64 v8; // rsi
  __int64 v9; // rdx

  v2 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  v3 = v2 != 0;
  v4 = (v2 != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7) + 3) >= v2);
  if ( (_BYTE)v4 )
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3, v4, v3);
  this->chapter_id_ = 0;
  v5 = *(_BYTE *)(((unsigned __int64)&this->chapter_state_ >> 3) + 0x7FFF8000);
  LOBYTE(v1) = v5 != 0;
  v6 = (v5 != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= v5);
  if ( (_BYTE)v6 )
    __asan_report_store4(&this->chapter_state_, (((_BYTE)this + 4) & 7u) + 3, v6, v1);
  this->chapter_state_ = CHAPTER_STATE_INVALID;
  v7 = *(_BYTE *)(((unsigned __int64)&this->is_notify_sent_ >> 3) + 0x7FFF8000);
  LOBYTE(v1) = v7 != 0;
  v8 = ((_BYTE)this + 8) & 7;
  v9 = (v7 != 0) & (unsigned __int8)((char)v8 >= v7);
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->is_notify_sent_, v8, v9, v1);
  this->is_notify_sent_ = 0;
};

// Line 34: range 0000000013EBC414-0000000013EBC4EB
void __cdecl Chapter::Chapter(Chapter *const this, uint32_t chapter_id)
{
  __int64 v2; // rcx
  char v3; // dl
  bool v4; // cl
  __int64 v5; // rdx
  char v6; // dl
  __int64 v7; // rdx
  char v8; // dl
  __int64 v9; // rsi
  __int64 v10; // rdx

  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  v4 = v3 != 0;
  v5 = (v3 != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7) + 3) >= v3);
  if ( (_BYTE)v5 )
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3, v5, v4);
  this->chapter_id_ = chapter_id;
  v6 = *(_BYTE *)(((unsigned __int64)&this->chapter_state_ >> 3) + 0x7FFF8000);
  LOBYTE(v2) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->chapter_state_, (((_BYTE)this + 4) & 7u) + 3, v7, v2);
  this->chapter_state_ = CHAPTER_STATE_INVALID;
  v8 = *(_BYTE *)(((unsigned __int64)&this->is_notify_sent_ >> 3) + 0x7FFF8000);
  LOBYTE(v2) = v8 != 0;
  v9 = ((_BYTE)this + 8) & 7;
  v10 = (v8 != 0) & (unsigned __int8)((char)v9 >= v8);
  if ( (_BYTE)v10 )
    __asan_report_store1(&this->is_notify_sent_, v9, v10, v2);
  this->is_notify_sent_ = 0;
};

// Line 39: range 0000000013EBC4EC-0000000013EBC536
uint32_t __cdecl Chapter::getChapterId(const Chapter *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  return this->chapter_id_;
};

// Line 40: range 0000000013EBC538-0000000013EBC587
proto::ChapterState __cdecl Chapter::getChapterState(const Chapter *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->chapter_state_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->chapter_state_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->chapter_state_);
  }
  return this->chapter_state_;
};

// Line 40: range 0000000013EBC588-0000000013EBC5DE
void __cdecl Chapter::setChapterState(Chapter *const this, proto::ChapterState chapter_state__out)
{
  char v2; // dl
  bool v3; // cl
  __int64 v4; // rdx

  v2 = *(_BYTE *)(((unsigned __int64)&this->chapter_state_ >> 3) + 0x7FFF8000);
  v3 = v2 != 0;
  v4 = (v2 != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= v2);
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->chapter_state_, (((_BYTE)this + 4) & 7u) + 3, v4, v3);
  this->chapter_state_ = chapter_state__out;
};

// Line 41: range 0000000013EBC5E0-0000000013EBC62D
bool __cdecl Chapter::getIsNotifySent(const Chapter *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_notify_sent_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_notify_sent_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_notify_sent_);
  }
  return this->is_notify_sent_;
};

// Line 41: range 0000000013EBC62E-0000000013EBC684
void __cdecl Chapter::setIsNotifySent(Chapter *const this, bool is_notify_sent__out)
{
  char v2; // dl
  bool v3; // cl
  __int64 v4; // rsi
  __int64 v5; // rdx

  v2 = *(_BYTE *)(((unsigned __int64)&this->is_notify_sent_ >> 3) + 0x7FFF8000);
  v3 = v2 != 0;
  v4 = ((_BYTE)this + 8) & 7;
  v5 = (v2 != 0) & (unsigned __int8)((char)v4 >= v2);
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->is_notify_sent_, v4, v5, v3);
  this->is_notify_sent_ = is_notify_sent__out;
};

// Line 48: range 0000000013F41A24-0000000013F41CAB
void __cdecl SceneRange::SceneRange(SceneRange *const this, SceneRange *a2)
{
  __int64 scene_id; // rcx
  char v3; // al
  __int64 v4; // rsi
  __int64 radius; // rcx
  char v6; // dl
  __int64 v7; // rdx
  std::string *p_dummy_point; // rsi
  _BOOL8 is_not_in_range; // rcx
  char v10; // al
  SceneRange *v11; // [rsp+0h] [rbp-10h]

  v11 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  scene_id = a2->scene_id_;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2, this, scene_id);
  }
  this->scene_id_ = scene_id;
  v4 = (((_BYTE)v11 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v11->radius_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v11 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v11->radius_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v11->radius_);
  }
  radius = v11->radius_;
  v6 = *(_BYTE *)(((unsigned __int64)&this->radius_ >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->radius_, v4, v7, radius);
  this->radius_ = radius;
  p_dummy_point = &v11->dummy_point_;
  std::string::basic_string(&this->dummy_point_, &v11->dummy_point_);
  if ( *(char *)(((unsigned __int64)&v11->is_not_in_range_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v11->is_not_in_range_);
  is_not_in_range = v11->is_not_in_range_;
  v10 = *(_BYTE *)(((unsigned __int64)&this->is_not_in_range_ >> 3) + 0x7FFF8000);
  if ( v10 < 0 )
  {
    LOBYTE(p_dummy_point) = v10 != 0;
    __asan_report_store1(&this->is_not_in_range_, p_dummy_point, &this->is_not_in_range_, is_not_in_range);
  }
  this->is_not_in_range_ = is_not_in_range;
  if ( (((unsigned __int8)this + 44) & 7) >= *(_BYTE *)(((unsigned __int64)&this->dummy_point_pos_ >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->dummy_point_pos_ >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->dummy_point_pos_.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 55) & 7) >= *(_BYTE *)((((unsigned __int64)&this->dummy_point_pos_.z + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->dummy_point_pos_, 12LL);
  }
  if ( (((unsigned __int8)v11 + 44) & 7) >= *(_BYTE *)(((unsigned __int64)&v11->dummy_point_pos_ >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&v11->dummy_point_pos_ >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&v11->dummy_point_pos_.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v11 + 55) & 7) >= *(_BYTE *)((((unsigned __int64)&v11->dummy_point_pos_.z + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&v11->dummy_point_pos_, 12LL);
  }
  this->dummy_point_pos_ = v11->dummy_point_pos_;
};

// Line 48: range 00000000140F8DCA-00000000140F9051
void __cdecl SceneRange::SceneRange(SceneRange *const this, const SceneRange *a2)
{
  __int64 scene_id; // rcx
  char v3; // al
  __int64 v4; // rsi
  __int64 radius; // rcx
  char v6; // dl
  __int64 v7; // rdx
  std::string *p_dummy_point; // rsi
  _BOOL8 is_not_in_range; // rcx
  char v10; // al
  const SceneRange *v11; // [rsp+0h] [rbp-10h]

  v11 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  scene_id = a2->scene_id_;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2, this, scene_id);
  }
  this->scene_id_ = scene_id;
  v4 = (((_BYTE)v11 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v11->radius_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v11 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v11->radius_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v11->radius_);
  }
  radius = v11->radius_;
  v6 = *(_BYTE *)(((unsigned __int64)&this->radius_ >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->radius_, v4, v7, radius);
  this->radius_ = radius;
  p_dummy_point = &v11->dummy_point_;
  std::string::basic_string(&this->dummy_point_, &v11->dummy_point_);
  if ( *(char *)(((unsigned __int64)&v11->is_not_in_range_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v11->is_not_in_range_);
  is_not_in_range = v11->is_not_in_range_;
  v10 = *(_BYTE *)(((unsigned __int64)&this->is_not_in_range_ >> 3) + 0x7FFF8000);
  if ( v10 < 0 )
  {
    LOBYTE(p_dummy_point) = v10 != 0;
    __asan_report_store1(&this->is_not_in_range_, p_dummy_point, &this->is_not_in_range_, is_not_in_range);
  }
  this->is_not_in_range_ = is_not_in_range;
  if ( (((unsigned __int8)this + 44) & 7) >= *(_BYTE *)(((unsigned __int64)&this->dummy_point_pos_ >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->dummy_point_pos_ >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->dummy_point_pos_.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 55) & 7) >= *(_BYTE *)((((unsigned __int64)&this->dummy_point_pos_.z + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->dummy_point_pos_, 12LL);
  }
  if ( (((unsigned __int8)v11 + 44) & 7) >= *(_BYTE *)(((unsigned __int64)&v11->dummy_point_pos_ >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&v11->dummy_point_pos_ >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&v11->dummy_point_pos_.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v11 + 55) & 7) >= *(_BYTE *)((((unsigned __int64)&v11->dummy_point_pos_.z + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&v11->dummy_point_pos_, 12LL);
  }
  this->dummy_point_pos_ = v11->dummy_point_pos_;
};

// Line 48: range 0000000013EBFCA8-0000000013EBFCC6
void __cdecl SceneRange::~SceneRange(SceneRange *const this)
{
  std::string::~string(&this->dummy_point_);
};

// Line 51: range 0000000013EBC686-0000000013EBC789
void __cdecl SceneRange::SceneRange(
        SceneRange *const this,
        uint32_t scene_id,
        uint32_t radius,
        std::string *p_dummy_point)
{
  char v4; // al
  char v5; // dl
  __int64 v6; // rdx
  __int64 v7; // rcx
  char v8; // al
  std::string *p_dummy_pointa; // [rsp+8h] [rbp-18h]

  p_dummy_pointa = p_dummy_point;
  v4 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(p_dummy_point) = v4 != 0;
    __asan_report_store4(this, scene_id, this, p_dummy_point);
  }
  this->scene_id_ = scene_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->radius_ >> 3) + 0x7FFF8000);
  LOBYTE(p_dummy_point) = v5 != 0;
  v6 = (v5 != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= v5);
  if ( (_BYTE)v6 )
    __asan_report_store4(&this->radius_, (((_BYTE)this + 4) & 7u) + 3, v6, p_dummy_point);
  this->radius_ = radius;
  std::string::basic_string(&this->dummy_point_, p_dummy_pointa);
  v8 = *(_BYTE *)(((unsigned __int64)&this->is_not_in_range_ >> 3) + 0x7FFF8000);
  if ( v8 < 0 )
  {
    LOBYTE(v7) = v8 != 0;
    __asan_report_store1(&this->is_not_in_range_, p_dummy_pointa, &this->is_not_in_range_, v7);
  }
  this->is_not_in_range_ = 0;
  Vector3::Vector3(&this->dummy_point_pos_, 0.0, 0.0, 0.0);
};

// Line 73: range 0000000013EC0022-0000000013EC003C
void __cdecl SceneRangeHelper::~SceneRangeHelper(SceneRangeHelper *const this)
{
  std::map<unsigned int,std::vector<SceneRange>>::~map(&this->scene_range_map_);
};

// Line 76: range 0000000013EBC7FA-0000000013EBC849
void __cdecl SceneRangeHelper::SceneRangeHelper(SceneRangeHelper *const this, Player *player)
{
  __int64 v2; // rdx

  std::map<unsigned int,std::vector<SceneRange>>::map(&this->scene_range_map_);
  v2 = *(unsigned __int8 *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000);
  if ( (_BYTE)v2 )
    __asan_report_store8(&this->player_, player, v2);
  this->player_ = player;
};

// Line 88: range 00000000140FC580-00000000140FC5AA
void __cdecl PlayerQuestComp::~PlayerQuestComp(PlayerQuestComp *const this)
{
  PlayerQuestComp::~PlayerQuestComp(this);
  operator delete(this, 0x5D0uLL);
};

// Line 88: range 00000000140FC388-00000000140FC57F
void __cdecl PlayerQuestComp::~PlayerQuestComp(PlayerQuestComp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerQuestComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PlayerCompBase = v2;
  SceneRangeHelper::~SceneRangeHelper(&this->scene_range_helper_);
  PlayerUnixTimer::~PlayerUnixTimer(&this->check_leave_scene_range_timer_);
  PlayerUnixTimer::~PlayerUnixTimer(&this->check_quest_time_var_timer_);
  PlayerUnixTimer::~PlayerUnixTimer(&this->check_quest_start_timer_);
  std::map<unsigned int,std::set<unsigned int>>::~map(&this->wq_parent_quest_linked_group_map_);
  std::unordered_set<unsigned int>::~unordered_set(&this->pre_open_chapter_id_set_);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->last_dungeon_settle_map_);
  std::queue<PlayerQuestComp::QuestActionSnapShot>::~queue(&this->quest_group_action_list_);
  std::weak_ptr<Scene>::~weak_ptr(&this->move_scene_wtr_);
  std::map<unsigned int,std::set<unsigned int>>::~map(&this->shared_npc_quest_map_);
  std::map<unsigned int,std::set<unsigned int>>::~map(&this->exclusive_npc_quest_map_);
  std::map<unsigned int,data::QuestExcelConfig *>::~map(&this->quest_config_map_);
  std::map<unsigned int,data::MainQuestExcelConfig *>::~map(&this->parent_quest_config_map_);
  QuestOperator::~QuestOperator(&this->quest_op_);
  std::unordered_map<unsigned int,int>::~unordered_map(&this->quest_global_var_map_);
  std::unordered_set<unsigned int>::~unordered_set(&this->server_cond_meet_quest_set_);
  std::map<unsigned int,Chapter>::~map(&this->chapter_map_);
  std::set<unsigned int>::~set(&this->mp_block_quest_set_);
  std::map<unsigned int,std::set<unsigned int>>::~map(&this->occupied_place_map_);
  std::map<unsigned int,std::set<unsigned int>>::~map(&this->occupied_npc_map_);
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map(&this->item_event_quest_map_);
  std::map<data::QuestContentType,std::set<unsigned int>>::~map(&this->event_quest_map_);
  std::map<unsigned int,std::shared_ptr<ParentQuest>>::~map(&this->parent_quest_map_);
  std::map<unsigned int,std::shared_ptr<Quest>>::~map(&this->quest_map_);
  PlayerCompBase::~PlayerCompBase(this);
};

// Line 92: range 0000000013EC0C42-0000000013EC0DD4
void __cdecl PlayerQuestComp::QuestActionSnapShot::QuestActionSnapShot(
        PlayerQuestComp::QuestActionSnapShot *const this,
        const PlayerQuestComp::QuestActionSnapShot *a2)
{
  __int64 parent_quest_id; // rcx
  char v3; // al
  __int64 v4; // rsi
  __int64 quest_id; // rcx
  char v6; // dl
  __int64 v7; // rdx
  __int64 state; // rcx
  char v9; // al
  const PlayerQuestComp::QuestActionSnapShot *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  parent_quest_id = a2->parent_quest_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2, this, parent_quest_id);
  }
  this->parent_quest_id = parent_quest_id;
  v4 = (((_BYTE)v10 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->quest_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->quest_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->quest_id_);
  }
  quest_id = v10->quest_id_;
  v6 = *(_BYTE *)(((unsigned __int64)&this->quest_id_ >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->quest_id_, v4, v7, quest_id);
  this->quest_id_ = quest_id;
  if ( *(_BYTE *)(((unsigned __int64)&v10->state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->state_);
  }
  state = (unsigned int)v10->state_;
  v9 = *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v4) = v9 != 0;
    __asan_report_store4(&this->state_, v4, &this->state_, state);
  }
  this->state_ = state;
  data::QuestExec::QuestExec(&this->action_, &v10->action_);
};

// Line 92: range 0000000013EC0DD6-0000000013EC0DF4
void __cdecl PlayerQuestComp::QuestActionSnapShot::~QuestActionSnapShot(
        PlayerQuestComp::QuestActionSnapShot *const this)
{
  data::QuestExec::~QuestExec(&this->action_);
};

// Line 99: range 0000000013EBC920-0000000013EBCA0C
// local variable allocation has failed, the output may be wrong!
void __cdecl PlayerQuestComp::QuestActionSnapShot::QuestActionSnapShot(
        PlayerQuestComp::QuestActionSnapShot *const this,
        uint32_t parent_quest_id,
        uint32_t quest_id,
        data::QuestState state,
        const data::QuestExec *action)
{
  char v5; // al
  char v6; // dl
  __int64 v7; // rsi
  __int64 v8; // rdx
  char v9; // al
  data::QuestState statea; // [rsp+Ch] [rbp-14h]

  statea = state;
  v5 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(state) = v5 != 0;
    __asan_report_store4(this, parent_quest_id, this, state);
  }
  this->parent_quest_id = parent_quest_id;
  v6 = *(_BYTE *)(((unsigned __int64)&this->quest_id_ >> 3) + 0x7FFF8000);
  LOBYTE(state) = v6 != 0;
  v7 = (((_BYTE)this + 4) & 7u) + 3;
  v8 = (v6 != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= v6);
  if ( (_BYTE)v8 )
    __asan_report_store4(&this->quest_id_, v7, v8, *(_QWORD *)&state);
  this->quest_id_ = quest_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(state) = v9 != 0;
    __asan_report_store4(&this->state_, v7, &this->state_, *(_QWORD *)&state);
  }
  this->state_ = statea;
  data::QuestExec::QuestExec(&this->action_, action);
};

// Line 149: range 0000000013EBCA0E-0000000013EBCA5B
bool __cdecl PlayerQuestComp::isQuestExist(const PlayerQuestComp *const this, uint32_t quest_id)
{
  bool v2; // bl
  std::shared_ptr<Quest> __a; // [rsp+10h] [rbp-20h] BYREF

  PlayerQuestComp::findQuest((const PlayerQuestComp *const)&__a, (__int64)this, quest_id);
  v2 = std::operator!=<Quest>(0LL, &__a);
  std::shared_ptr<Quest>::~shared_ptr(&__a);
  return v2;
};

// Line 633: range 0000000013EBCA5C-0000000013EBCB2D
void __fastcall PlayerQuestComp::addMpBlockQuest(PlayerQuestComp *const this, uint32_t quest_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char v5[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 quest_id:633";
  *(_QWORD *)(v2 + 16) = PlayerQuestComp::addMpBlockQuest;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = quest_id;
  std::set<unsigned int>::insert(&this->mp_block_quest_set_, (const std::set<unsigned int>::value_type *)(v2 + 32));
  if ( v5 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 633: range 0000000013EBCB2E-0000000013EBCBFF
void __fastcall PlayerQuestComp::tryRemoveMpBlockQuest(PlayerQuestComp *const this, uint32_t quest_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char v5[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 quest_id:634";
  *(_QWORD *)(v2 + 16) = PlayerQuestComp::tryRemoveMpBlockQuest;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = quest_id;
  std::set<unsigned int>::erase(&this->mp_block_quest_set_, (const std::set<unsigned int>::key_type *)(v2 + 32));
  if ( v5 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 655: range 0000000017213844-0000000017213863
void __cdecl PlayerQuestComp::resetMoveSceneWtr(PlayerQuestComp *const this)
{
  std::__weak_ptr<Scene,(__gnu_cxx::_Lock_policy)2>::reset(&this->move_scene_wtr_);
};

// Line 726: range 0000000013EBCC00-0000000013EBCC4C
uint32_t __cdecl PlayerQuestComp::getLuaNotifyQuestParam(const PlayerQuestComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->lua_notity_quest_param_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->lua_notity_quest_param_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->lua_notity_quest_param_);
  }
  return this->lua_notity_quest_param_;
};

// Line 726: range 0000000013EBCC4E-0000000013EBCCA1
void __cdecl PlayerQuestComp::setLuaNotifyQuestParam(PlayerQuestComp *const this, uint32_t lua_notity_quest_param__out)
{
  char v2; // al
  bool v3; // cl

  v2 = *(_BYTE *)(((unsigned __int64)&this->lua_notity_quest_param_ >> 3) + 0x7FFF8000);
  if ( v2 != 0 && v2 <= 3 )
  {
    v3 = v2 != 0;
    __asan_report_store4(
      &this->lua_notity_quest_param_,
      lua_notity_quest_param__out,
      &this->lua_notity_quest_param_,
      v3);
  }
  this->lua_notity_quest_param_ = lua_notity_quest_param__out;
};

// Line 763: range 0000000017213864-000000001721386E
uint32_t __cdecl PlayerQuestComp::getType()
{
  return 4;
};
