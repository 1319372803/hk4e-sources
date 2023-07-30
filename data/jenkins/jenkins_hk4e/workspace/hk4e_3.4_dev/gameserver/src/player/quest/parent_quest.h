// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/quest/parent_quest.h

// Line 28: range 0000000016D5FE84-0000000016D5FFDB
void __cdecl ParentQuestInferenceWordData::ParentQuestInferenceWordData(
        ParentQuestInferenceWordData *const this,
        uint32_t id)
{
  __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rdx

  v2 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7)
                                                                                              + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3, v2);
  this->word_id = id;
  v3 = ((_BYTE)this + 4) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_interpret >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_interpret >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_interpret, v3, v4);
  this->is_interpret = 0;
  v5 = ((_BYTE)this + 5) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->is_associate >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->is_associate >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->is_associate, v5, v6);
  this->is_associate = 0;
  v7 = ((_BYTE)this + 6) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->is_submit >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->is_submit >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->is_submit, v7, v8);
  this->is_submit = 0;
  v9 = (*(_BYTE *)(((unsigned __int64)&this->unlock_by_word_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->unlock_by_word_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_store4(&this->unlock_by_word_id, (((_BYTE)this + 8) & 7u) + 3, v9);
  this->unlock_by_word_id = 0;
};

// Line 37: range 000000001413E146-000000001413E1DA
void __cdecl ParentQuest::~ParentQuest(ParentQuest *const this)
{
  std::set<unsigned int>::~set(&this->unlock_inference_conclusion_set_);
  std::unordered_map<unsigned int,ParentQuestInferenceWordData>::~unordered_map(&this->unlock_inference_word_map_);
  std::map<unsigned int,unsigned int>::~map(&this->time_var_map_);
  std::weak_ptr<Player>::~weak_ptr(&this->player_wtr_);
  std::vector<int>::~vector(&this->quest_var_list_);
  ParentQuestRandomInfo::~ParentQuestRandomInfo(&this->random_info_);
  std::map<unsigned int,data::QuestState>::~map(&this->child_quest_state_map_);
  std::enable_shared_from_this<ParentQuest>::~enable_shared_from_this(this);
};

// Line 40: range 0000000013EBB5F6-0000000013EBB99A
// local variable allocation has failed, the output may be wrong!
void __cdecl ParentQuest::ParentQuest(ParentQuest *const this, uint32_t parent_quest_id)
{
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx
  std::allocator<int> __a; // [rsp+1Fh] [rbp-11h] BYREF

  std::enable_shared_from_this<ParentQuest>::enable_shared_from_this(this);
  if ( *(char *)(((unsigned __int64)&this->is_random_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_random_, *(_QWORD *)&parent_quest_id, &this->is_random_);
  this->is_random_ = 0;
  v2 = (((_BYTE)this + 20) & 7u) + 3;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->parent_quest_id_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->parent_quest_id_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store4(&this->parent_quest_id_, v2, v3);
  this->parent_quest_id_ = parent_quest_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->total_finish_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->total_finish_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->total_finish_count_, v2, &this->total_finish_count_);
  }
  this->total_finish_count_ = 0;
  v4 = (((_BYTE)this + 28) & 7u) + 3;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->today_finish_count_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->today_finish_count_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store4(&this->today_finish_count_, v4, v5);
  this->today_finish_count_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_finish_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_finish_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_finish_time_, v4, &this->last_finish_time_);
  }
  this->last_finish_time_ = 0;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->accept_time_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->accept_time_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store4(&this->accept_time_, (((_BYTE)this + 36) & 7u) + 3, v6);
  this->accept_time_ = 0;
  std::map<unsigned int,data::QuestState>::map(&this->child_quest_state_map_);
  ParentQuestRandomInfo::ParentQuestRandomInfo(&this->random_info_);
  std::allocator<int>::allocator(&__a);
  std::vector<int>::vector(&this->quest_var_list_, 5uLL, &__a);
  std::allocator<int>::~allocator(&__a);
  if ( *(_BYTE *)(((unsigned __int64)&this->quest_var_seq_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->quest_var_seq_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->quest_var_seq_, 5LL, &this->quest_var_seq_);
  }
  this->quest_var_seq_ = 0;
  v7 = (((_BYTE)this + 108) & 7u) + 3;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->reward_index_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reward_index_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store4(&this->reward_index_, v7, v8);
  this->reward_index_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->state_, v7, &this->state_);
  }
  this->state_ = PARENT_QUEST_STATE_NONE;
  std::weak_ptr<Player>::weak_ptr(&this->player_wtr_);
  std::map<unsigned int,unsigned int>::map(&this->time_var_map_);
  if ( *(char *)(((unsigned __int64)&this->is_lock_team_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_lock_team_, v7, &this->is_lock_team_);
  this->is_lock_team_ = 0;
  std::unordered_map<unsigned int,ParentQuestInferenceWordData>::unordered_map(&this->unlock_inference_word_map_);
  std::set<unsigned int>::set(&this->unlock_inference_conclusion_set_);
};

// Line 49: range 0000000013EBB99C-0000000013EBB9C7
void __cdecl ParentQuest::setOwner(ParentQuest *const this, PlayerPtr *p_player_ptr)
{
  std::weak_ptr<Player>::operator=<Player>(&this->player_wtr_, p_player_ptr);
};

// Line 50: range 0000000016D5FFDC-0000000016D6002D
PlayerPtr __cdecl ParentQuest::getOwner(ParentQuest *const this)
{
  PlayerPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)this);
  result._M_ptr = (std::__shared_ptr<Player,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 59: range 0000000013EBBA10-0000000013EBBA58
bool __cdecl ParentQuest::isRandom(ParentQuest *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_random_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_random_);
  return this->is_random_;
};

// Line 59: range 0000000013EBB9C8-0000000013EBBA0F
uint32_t __cdecl ParentQuest::getTotalFinishCount(ParentQuest *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->total_finish_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->total_finish_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->total_finish_count_);
  }
  return this->total_finish_count_;
};

// Line 81: range 0000000015D35B64-0000000015D35BB0
uint32_t __cdecl ParentQuest::getQuestVarSeq(ParentQuest *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->quest_var_seq_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->quest_var_seq_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->quest_var_seq_);
  }
  return this->quest_var_seq_;
};

// Line 85: range 00000000131D88C4-00000000131D8910
data::ParentQuestState __cdecl ParentQuest::getParentQuestState(const ParentQuest *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->state_);
  }
  return this->state_;
};

// Line 108: range 0000000013EBBA5A-0000000013EBBA79
uint32_t __cdecl ParentQuest::getQuestTimeVarCount(const ParentQuest *const this)
{
  return std::map<unsigned int,unsigned int>::size(&this->time_var_map_);
};

// Line 133: range 0000000013EBBA7A-0000000013EBBAC9
uint32_t __cdecl ParentQuest::getParentQuestId(const ParentQuest *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->parent_quest_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->parent_quest_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->parent_quest_id_);
  }
  return this->parent_quest_id_;
};

// Line 133: range 0000000013EBBACA-0000000013EBBB20
// local variable allocation has failed, the output may be wrong!
void __cdecl ParentQuest::setIsLockTeam(ParentQuest *const this, bool is_lock_team__out)
{
  if ( *(char *)(((unsigned __int64)&this->is_lock_team_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_lock_team_, is_lock_team__out, &this->is_lock_team_);
  this->is_lock_team_ = is_lock_team__out;
};

// Line 134: range 0000000015D35BB2-0000000015D35C01
uint32_t __cdecl ParentQuest::getParentTemplateId(const ParentQuest *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->random_info_.template_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->random_info_.template_id >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->random_info_.template_id);
  }
  return this->random_info_.template_id;
};

// Line 151: range 0000000016D6002E-0000000016D6007B
bool __cdecl ParentQuest::getIsLockTeam(const ParentQuest *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_lock_team_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_lock_team_);
  return this->is_lock_team_;
};
