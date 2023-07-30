// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/quest/quest.h

// Line 24: range 000000001413E20A-000000001413E266
void __cdecl Quest::~Quest(Quest *const this)
{
  std::weak_ptr<Player>::~weak_ptr(&this->player_wtr_);
  std::map<unsigned int,Quest::QuestTalkRecord>::~map(&this->talk_history_map_);
  std::vector<unsigned int>::~vector(&this->content_fail_progress_vec_);
  std::vector<unsigned int>::~vector(&this->content_finish_progress_vec_);
  std::enable_shared_from_this<Quest>::~enable_shared_from_this(this);
};

// Line 28: range 00000000140780D2-0000000014078167
void __cdecl Quest::QuestTalkRecord::QuestTalkRecord(Quest::QuestTalkRecord *const this)
{
  __int64 v1; // rcx
  char v2; // dl
  bool v3; // cl
  __int64 v4; // rdx
  char v5; // dl
  __int64 v6; // rdx

  v2 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  v3 = v2 != 0;
  v4 = (v2 != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7) + 3) >= v2);
  if ( (_BYTE)v4 )
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3, v4, v3);
  this->talk_id = 0;
  v5 = *(_BYTE *)(((unsigned __int64)&this->talk_time >> 3) + 0x7FFF8000);
  LOBYTE(v1) = v5 != 0;
  v6 = (v5 != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= v5);
  if ( (_BYTE)v6 )
    __asan_report_store4(&this->talk_time, (((_BYTE)this + 4) & 7u) + 3, v6, v1);
  this->talk_time = 0;
};

// Line 35: range 0000000013EBE992-0000000013EBEB76
void __cdecl Quest::Quest(Quest *const this, uint32_t quest_id)
{
  __int64 v2; // rcx
  char v3; // al
  char v4; // dl
  __int64 v5; // rsi
  __int64 v6; // rdx
  char v7; // al
  char v8; // dl
  __int64 v9; // rsi
  __int64 v10; // rdx
  char v11; // al
  __int64 v12; // rcx
  char v13; // al

  std::enable_shared_from_this<Quest>::enable_shared_from_this(this);
  v3 = *(_BYTE *)(((unsigned __int64)&this->quest_id_ >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(v2) = v3 != 0;
    __asan_report_store4(&this->quest_id_, quest_id, &this->quest_id_, v2);
  }
  this->quest_id_ = quest_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000);
  LOBYTE(v2) = v4 != 0;
  v5 = (((_BYTE)this + 20) & 7u) + 3;
  v6 = (v4 != 0) & (unsigned __int8)((char)((((_BYTE)this + 20) & 7) + 3) >= v4);
  if ( (_BYTE)v6 )
    __asan_report_store4(&this->state_, v5, v6, v2);
  this->state_ = QUEST_STATE_NONE;
  v7 = *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(v2) = v7 != 0;
    __asan_report_store4(&this->start_time_, v5, &this->start_time_, v2);
  }
  this->start_time_ = 0;
  v8 = *(_BYTE *)(((unsigned __int64)&this->start_game_time_ >> 3) + 0x7FFF8000);
  LOBYTE(v2) = v8 != 0;
  v9 = (((_BYTE)this + 28) & 7u) + 3;
  v10 = (v8 != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= v8);
  if ( (_BYTE)v10 )
    __asan_report_store4(&this->start_game_time_, v9, v10, v2);
  this->start_game_time_ = 0;
  v11 = *(_BYTE *)(((unsigned __int64)&this->accept_time_ >> 3) + 0x7FFF8000);
  if ( v11 != 0 && v11 <= 3 )
  {
    LOBYTE(v2) = v11 != 0;
    __asan_report_store4(&this->accept_time_, v9, &this->accept_time_, v2);
  }
  this->accept_time_ = 0;
  std::vector<unsigned int>::vector(&this->content_finish_progress_vec_);
  std::vector<unsigned int>::vector(&this->content_fail_progress_vec_);
  std::map<unsigned int,Quest::QuestTalkRecord>::map(&this->talk_history_map_);
  std::weak_ptr<Player>::weak_ptr(&this->player_wtr_);
  v13 = *(_BYTE *)(((unsigned __int64)&this->gm_force_finish_flag_ >> 3) + 0x7FFF8000);
  if ( v13 < 0 )
  {
    LOBYTE(v12) = v13 != 0;
    __asan_report_store1(&this->gm_force_finish_flag_, v9, &this->gm_force_finish_flag_, v12);
  }
  this->gm_force_finish_flag_ = 0;
};

// Line 47: range 0000000013EBEB78-0000000013EBEBA3
void __cdecl Quest::setOwner(Quest *const this, PlayerPtr *p_player_ptr)
{
  std::weak_ptr<Player>::operator=<Player>(&this->player_wtr_, p_player_ptr);
};

// Line 48: range 000000001440594A-000000001440599B
PlayerPtr __cdecl Quest::getOwner(const Quest *const this)
{
  __int64 v1; // rsi
  PlayerPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v1);
  result = std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)this);
  result._M_ptr = (std::__shared_ptr<Player,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 145: range 0000000013EBEBEC-0000000013EBEC33
uint32_t __cdecl Quest::getAcceptTime(const Quest *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->accept_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->accept_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->accept_time_);
  }
  return this->accept_time_;
};

// Line 145: range 0000000013EBEBA4-0000000013EBEBEB
uint32_t __cdecl Quest::getQuestId(const Quest *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->quest_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->quest_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->quest_id_);
  }
  return this->quest_id_;
};

// Line 146: range 00000000131DFAB2-00000000131DFAF9
uint32_t __cdecl Quest::getStartTime(const Quest *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->start_time_);
  }
  return this->start_time_;
};

// Line 230: range 00000000131DFA62-00000000131DFAB1
data::QuestState __cdecl Quest::getState(const Quest *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->state_);
  }
  return this->state_;
};
