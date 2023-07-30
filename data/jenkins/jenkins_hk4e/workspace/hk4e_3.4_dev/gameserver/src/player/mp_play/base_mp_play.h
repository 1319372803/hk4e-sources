// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/mp_play/base_mp_play.h

// Line 38: range 0000000017633130-000000001763320B
void __cdecl MpPlayBattleResult::MpPlayBattleResult(MpPlayBattleResult *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, this);
  }
  this->cost_time = 0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store4(&this->score, v2, v3);
  this->score = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_win >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->is_win >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->is_win, v2, &this->is_win);
  }
  this->is_win = 0;
  std::map<unsigned int,unsigned int>::map(&this->uid_score_map);
};

// Line 38: range 000000001763320C-000000001763322A
void __cdecl MpPlayBattleResult::~MpPlayBattleResult(MpPlayBattleResult *const this)
{
  std::map<unsigned int,unsigned int>::~map(&this->uid_score_map);
};

// Line 52: range 0000000016D70648-0000000016D70934
void __cdecl BaseMpPlay::BaseMpPlay(BaseMpPlay *const this, Player *player, uint32_t play_id, uint32_t play_type)
{
  int (**v4)(...); // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rdx

  std::enable_shared_from_this<BaseMpPlay>::enable_shared_from_this(&this->std::enable_shared_from_this<BaseMpPlay>);
  v4 = (int (**)(...))(&`vtable for'BaseMpPlay + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, player);
  this->_vptr_BaseMpPlay = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->player_, player);
  this->player_ = player;
  if ( *(_BYTE *)(((unsigned __int64)&this->play_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->play_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->play_id_, player, &this->play_id_);
  }
  this->play_id_ = play_id;
  v5 = (((_BYTE)this + 36) & 7u) + 3;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->entry_id_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entry_id_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store4(&this->entry_id_, v5, v6);
  this->entry_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->play_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->play_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->play_type_, v5, &this->play_type_);
  }
  this->play_type_ = play_type;
  v7 = ((_BYTE)this + 44) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->is_close_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->is_close_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->is_close_, v7, v8);
  this->is_close_ = 0;
  std::vector<unsigned int>::vector(&this->reward_remain_uid_vec_);
  std::map<unsigned int,unsigned int>::map(&this->uid_world_level_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->state_, v7, &this->state_);
  }
  this->state_ = none;
  v9 = (((_BYTE)this + 124) & 7u) + 3;
  v10 = (*(_BYTE *)(((unsigned __int64)&this->prepare_end_time_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->prepare_end_time_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_store4(&this->prepare_end_time_, v9, v10);
  this->prepare_end_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->reward_gadget_eid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reward_gadget_eid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reward_gadget_eid_, v9, &this->reward_gadget_eid_);
  }
  this->reward_gadget_eid_ = 0;
  v11 = ((_BYTE)this - 124) & 7;
  v12 = (*(_BYTE *)(((unsigned __int64)&this->is_battle_started_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v11 >= *(_BYTE *)(((unsigned __int64)&this->is_battle_started_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v12 )
    __asan_report_store1(&this->is_battle_started_, v11, v12);
  this->is_battle_started_ = 0;
  std::shared_ptr<PlayerUnixTimer>::shared_ptr(&this->start_timer_ptr_);
  std::shared_ptr<PlayerUnixTimer>::shared_ptr(&this->player_count_timer_ptr_);
  std::string::basic_string(&this->transaction_no_);
};

// Line 55: range 00000000170943CC-00000000170943F6
void __cdecl BaseMpPlay::~BaseMpPlay(BaseMpPlay *const this)
{
  BaseMpPlay::~BaseMpPlay(this);
  operator delete(this, 0xC8uLL);
};

// Line 55: range 0000000017094324-00000000170943CB
void __cdecl BaseMpPlay::~BaseMpPlay(BaseMpPlay *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'BaseMpPlay + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseMpPlay = v2;
  std::string::~string(&this->transaction_no_);
  std::shared_ptr<PlayerUnixTimer>::~shared_ptr(&this->player_count_timer_ptr_);
  std::shared_ptr<PlayerUnixTimer>::~shared_ptr(&this->start_timer_ptr_);
  std::map<unsigned int,unsigned int>::~map(&this->uid_world_level_map_);
  std::vector<unsigned int>::~vector(&this->reward_remain_uid_vec_);
  std::enable_shared_from_this<BaseMpPlay>::~enable_shared_from_this(&this->std::enable_shared_from_this<BaseMpPlay>);
};

// Line 90: range 0000000016D70936-0000000016D70988
bool __cdecl BaseMpPlay::isBattleStarted(const BaseMpPlay *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_battle_started_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 124) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_battle_started_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_battle_started_);
  }
  return this->is_battle_started_;
};

// Line 107: range 0000000016D7098A-0000000016D709D1
uint32_t __cdecl BaseMpPlay::getPlayId(const BaseMpPlay *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->play_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->play_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->play_id_);
  }
  return this->play_id_;
};

// Line 107: range 0000000016D709D2-0000000016D70A19
uint32_t __cdecl BaseMpPlay::getPlayType(const BaseMpPlay *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->play_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->play_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->play_type_);
  }
  return this->play_type_;
};

// Line 110: range 000000001690A710-000000001690A75D
bool __cdecl BaseMpPlay::isClose(const BaseMpPlay *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_close_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 44) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_close_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_close_);
  }
  return this->is_close_;
};

// Line 111: range 0000000016D70A1A-0000000016D70A61
State __cdecl BaseMpPlay::getState(const BaseMpPlay *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->state_);
  }
  return this->state_;
};

// Line 112: range 0000000017632F5C-0000000017632FAB
uint32_t __cdecl BaseMpPlay::getPrepareEndTime(const BaseMpPlay *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->prepare_end_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->prepare_end_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->prepare_end_time_);
  }
  return this->prepare_end_time_;
};

// Line 113: range 0000000017632FAC-0000000017632FDB
std::string *__cdecl BaseMpPlay::getTransactionNo[abi:cxx11](std::string *retstr, const BaseMpPlay *const this)
{
  std::string::basic_string(retstr, &this->transaction_no_);
  return retstr;
};

// Line 115: range 000000001461D7A2-000000001461D7B3
const std::map<unsigned int,unsigned int> *__cdecl BaseMpPlay::getRewardQualifyUidMap(const BaseMpPlay *const this)
{
  return &this->uid_world_level_map_;
};

// Line 116: range 000000001461D7B4-000000001461D7C5
const std::vector<unsigned int> *__cdecl BaseMpPlay::getRewardRemainUidVec(const BaseMpPlay *const this)
{
  return &this->reward_remain_uid_vec_;
};
