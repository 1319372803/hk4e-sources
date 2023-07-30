// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/roguelike/rogue_diary_runtime_mgr.h

// Line 22: range 00000000149EE6DA-00000000149EE72E
uint32_t __cdecl RogueDiaryRuntimeMgr::getCurRound(const RogueDiaryRuntimeMgr *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_round_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_round_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_round_);
  }
  return this->cur_round_;
};

// Line 48: range 0000000016D67628-0000000016D6770A
void __cdecl RogueDiaryRuntimeMgr::~RogueDiaryRuntimeMgr(RogueDiaryRuntimeMgr *const this)
{
  std::vector<unsigned long>::~vector(&this->optional_tired_guid_vec_);
  std::unordered_map<unsigned long,RogueDiaryAvatarData>::~unordered_map(&this->guid_avatar_data_map_);
  std::vector<unsigned long>::~vector(&this->onstage_guid_vec_);
  std::vector<unsigned int>::~vector(&this->resume_select_card_vec_);
  std::vector<unsigned int>::~vector(&this->resume_chosen_card_vec_);
  std::vector<unsigned int>::~vector(&this->resume_optional_card_vec_);
  std::vector<unsigned int>::~vector(&this->chosen_card_vec_);
  std::vector<unsigned int>::~vector(&this->optional_card_vec_);
  std::vector<std::pair<unsigned int,bool>>::~vector(&this->round_room_config_vec_);
  std::unordered_map<unsigned int,unsigned long>::~unordered_map(&this->formal_id_to_guid_map_);
  std::unordered_map<unsigned int,unsigned long>::~unordered_map(&this->trial_id_to_guid_map_);
  std::vector<unsigned int>::~vector(&this->group_vec_);
};

// Line 51: range 0000000016D66CBA-0000000016D673F9
void __cdecl RogueDiaryRuntimeMgr::RogueDiaryRuntimeMgr(
        RogueDiaryRuntimeMgr *const this,
        Player *player,
        RogueDiaryActivity *activity)
{
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, player);
  this->player_ = player;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->activity_, player);
  this->activity_ = activity;
  if ( *(char *)(((unsigned __int64)&this->is_running_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_running_, player, &this->is_running_);
  this->is_running_ = 0;
  std::vector<unsigned int>::vector(&this->group_vec_);
  if ( *(_BYTE *)(((unsigned __int64)&this->group_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->group_index_, player, &this->group_index_);
  }
  this->group_index_ = 0;
  v3 = (((_BYTE)this + 52) & 7u) + 3;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->cur_room_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_room_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->cur_room_, v3, v4);
  this->cur_room_ = 0;
  if ( *(char *)(((unsigned __int64)&this->is_room_fighting_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_room_fighting_, v3, &this->is_room_fighting_);
  this->is_room_fighting_ = 0;
  v5 = ((_BYTE)this + 57) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->is_select_room_hard_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->is_select_room_hard_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->is_select_room_hard_, v5, v6);
  this->is_select_room_hard_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->room_start_time_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->room_start_time_, v5);
  this->room_start_time_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->room_end_time_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->room_end_time_, v5);
  this->room_end_time_ = 0LL;
  if ( *(char *)(((unsigned __int64)&this->is_enter_next_dungeon_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_enter_next_dungeon_, v5, &this->is_enter_next_dungeon_);
  this->is_enter_next_dungeon_ = 0;
  std::unordered_map<unsigned int,unsigned long>::unordered_map(&this->trial_id_to_guid_map_);
  std::unordered_map<unsigned int,unsigned long>::unordered_map(&this->formal_id_to_guid_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_round_coin_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_round_coin_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_round_coin_, v5, &this->cur_round_coin_);
  }
  this->cur_round_coin_ = 0;
  v7 = (((_BYTE)this - 52) & 7u) + 3;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->cur_round_time_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_round_time_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store4(&this->cur_round_time_, v7, v8);
  this->cur_round_time_ = 0;
  if ( *(char *)(((unsigned __int64)&this->is_settle_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_settle_, v7, &this->is_settle_);
  this->is_settle_ = 0;
  v9 = ((_BYTE)this - 47) & 7;
  v10 = (*(_BYTE *)(((unsigned __int64)&this->is_interrupt_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)&this->is_interrupt_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_store1(&this->is_interrupt_, v9, v10);
  this->is_interrupt_ = 0;
  std::pair<unsigned int,unsigned int>::pair<unsigned int,unsigned int,true>(&this->resume_repair_gadget_index_pair_);
  v11 = ((_BYTE)this - 36) & 7;
  v12 = (*(_BYTE *)(((unsigned __int64)&this->is_have_progress_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v11 >= *(_BYTE *)(((unsigned __int64)&this->is_have_progress_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v12 )
    __asan_report_store1(&this->is_have_progress_, v11, v12);
  this->is_have_progress_ = 0;
  v13 = ((_BYTE)this - 35) & 7;
  v14 = (*(_BYTE *)(((unsigned __int64)&this->is_have_enter_dungeon_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v13 >= *(_BYTE *)(((unsigned __int64)&this->is_have_enter_dungeon_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v14 )
    __asan_report_store1(&this->is_have_enter_dungeon_, v13, v14);
  this->is_have_enter_dungeon_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->stage_id_, v13, &this->stage_id_);
  }
  this->stage_id_ = 0;
  v15 = (((_BYTE)this - 28) & 7u) + 3;
  v16 = (*(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v16 )
    __asan_report_store4(&this->dungeon_id_, v15, v16);
  this->dungeon_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_difficulty_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_difficulty_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_difficulty_, v15, &this->cur_difficulty_);
  }
  this->cur_difficulty_ = 0;
  v17 = (((_BYTE)this - 20) & 7u) + 3;
  v18 = (*(_BYTE *)(((unsigned __int64)&this->cur_round_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_round_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v18 )
    __asan_report_store4(&this->cur_round_, v17, v18);
  this->cur_round_ = 0;
  if ( *(char *)(((unsigned __int64)&this->is_round_fight_finished_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_round_fight_finished_, v17, &this->is_round_fight_finished_);
  this->is_round_fight_finished_ = 0;
  v19 = ((_BYTE)this - 15) & 7;
  v20 = (*(_BYTE *)(((unsigned __int64)&this->is_round_repair_finished_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v19 >= *(_BYTE *)(((unsigned __int64)&this->is_round_repair_finished_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v20 )
    __asan_report_store1(&this->is_round_repair_finished_, v19, v20);
  this->is_round_repair_finished_ = 0;
  std::vector<std::pair<unsigned int,bool>>::vector(&this->round_room_config_vec_);
  std::vector<unsigned int>::vector(&this->optional_card_vec_);
  std::vector<unsigned int>::vector(&this->chosen_card_vec_);
  std::vector<unsigned int>::vector(&this->resume_optional_card_vec_);
  std::vector<unsigned int>::vector(&this->resume_chosen_card_vec_);
  std::vector<unsigned int>::vector(&this->resume_select_card_vec_);
  std::vector<unsigned long>::vector(&this->onstage_guid_vec_);
  std::unordered_map<unsigned long,RogueDiaryAvatarData>::unordered_map(&this->guid_avatar_data_map_);
  std::vector<unsigned long>::vector(&this->optional_tired_guid_vec_);
  if ( *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->coin_, v19, &this->coin_);
  }
  this->coin_ = 0;
  v21 = (((_BYTE)this - 12) & 7u) + 3;
  v22 = (*(_BYTE *)(((unsigned __int64)&this->time_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->time_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v22 )
    __asan_report_store4(&this->time_, v21, v22);
  this->time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->transaction_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->transaction_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->transaction_, v21, &this->transaction_);
  }
  this->transaction_ = 0;
};

// Line 91: range 0000000016D673FA-0000000016D6740D
const std::vector<unsigned int> *__cdecl RogueDiaryRuntimeMgr::getOptionalCardVec(
        const RogueDiaryRuntimeMgr *const this)
{
  return &this->optional_card_vec_;
};

// Line 93: range 0000000016D6740E-0000000016D6742D
void __cdecl RogueDiaryRuntimeMgr::clearOptionalCardVec(RogueDiaryRuntimeMgr *const this)
{
  std::vector<unsigned int>::clear(&this->optional_card_vec_);
};

// Line 144: range 00000000149EE730-00000000149EE77F
uint32_t __cdecl RogueDiaryRuntimeMgr::getCurRoom(const RogueDiaryRuntimeMgr *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_room_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_room_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_room_);
  }
  return this->cur_room_;
};

// Line 145: range 0000000016D6742E-0000000016D6747B
bool __cdecl RogueDiaryRuntimeMgr::isRoundFightFinished(const RogueDiaryRuntimeMgr *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_round_fight_finished_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_round_fight_finished_);
  return this->is_round_fight_finished_;
};

// Line 147: range 0000000014405D1E-0000000014405E54
bool __cdecl RogueDiaryRuntimeMgr::isInResumeRepairGadgetRoom(const RogueDiaryRuntimeMgr *const this)
{
  unsigned int first; // ecx
  unsigned int second; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&this->resume_repair_gadget_index_pair_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->resume_repair_gadget_index_pair_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->resume_repair_gadget_index_pair_);
  }
  first = this->resume_repair_gadget_index_pair_.first;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_round_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_round_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_round_);
  }
  if ( first != this->cur_round_ )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->resume_repair_gadget_index_pair_.second >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->resume_repair_gadget_index_pair_.second >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->resume_repair_gadget_index_pair_.second);
  }
  second = this->resume_repair_gadget_index_pair_.second;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_room_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_room_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_room_);
  }
  return second == this->cur_room_;
};

// Line 212: range 00000000149EE780-00000000149EE7C8
bool __cdecl RogueDiaryRuntimeMgr::getIsRunning(const RogueDiaryRuntimeMgr *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_running_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_running_);
  return this->is_running_;
};

// Line 222: range 0000000016D6747C-0000000016D674CD
// local variable allocation has failed, the output may be wrong!
void __cdecl RogueDiaryRuntimeMgr::setIsEnterNextDungeon(
        RogueDiaryRuntimeMgr *const this,
        bool is_enter_next_dungeon__out)
{
  if ( *(char *)(((unsigned __int64)&this->is_enter_next_dungeon_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_enter_next_dungeon_, is_enter_next_dungeon__out, &this->is_enter_next_dungeon_);
  this->is_enter_next_dungeon_ = is_enter_next_dungeon__out;
};

// Line 236: range 0000000016D674CE-0000000016D67520
bool __cdecl RogueDiaryRuntimeMgr::getIsHaveProgress(const RogueDiaryRuntimeMgr *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_have_progress_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_have_progress_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_have_progress_);
  }
  return this->is_have_progress_;
};

// Line 237: range 0000000016D67522-0000000016D67574
bool __cdecl RogueDiaryRuntimeMgr::getIsHaveEnterDungeon(const RogueDiaryRuntimeMgr *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_have_enter_dungeon_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 35) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_have_enter_dungeon_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_have_enter_dungeon_);
  }
  return this->is_have_enter_dungeon_;
};

// Line 237: range 0000000016D67576-0000000016D675D1
void __cdecl RogueDiaryRuntimeMgr::setIsHaveEnterDungeon(
        RogueDiaryRuntimeMgr *const this,
        bool is_have_enter_dungeon__out)
{
  __int64 v2; // rsi
  __int64 v3; // rdx

  v2 = ((_BYTE)this - 35) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_have_enter_dungeon_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_have_enter_dungeon_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_have_enter_dungeon_, v2, v3);
  this->is_have_enter_dungeon_ = is_have_enter_dungeon__out;
};

// Line 238: range 00000000149EE7CA-00000000149EE816
uint32_t __cdecl RogueDiaryRuntimeMgr::getStageId(const RogueDiaryRuntimeMgr *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->stage_id_);
  }
  return this->stage_id_;
};

// Line 239: range 0000000016D675D2-0000000016D67626
uint32_t __cdecl RogueDiaryRuntimeMgr::getDungeonId(const RogueDiaryRuntimeMgr *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->dungeon_id_);
  }
  return this->dungeon_id_;
};
