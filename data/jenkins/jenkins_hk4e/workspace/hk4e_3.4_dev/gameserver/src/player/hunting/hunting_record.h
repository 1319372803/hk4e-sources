// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/hunting/hunting_record.h

// Line 35: range 0000000016D6BA22-0000000016D6BDA0
void __cdecl HuntingRecord::HuntingRecord(
        HuntingRecord *const this,
        Player *player,
        uint32_t refresh_id,
        uint32_t monster_config_id,
        uint32_t city_id)
{
  int (**v5)(...); // rdx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rdx

  std::enable_shared_from_this<HuntingRecord>::enable_shared_from_this(&this->std::enable_shared_from_this<HuntingRecord>);
  v5 = (int (**)(...))(&`vtable for'HuntingRecord + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, player);
  this->_vptr_HuntingRecord = v5;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->player_, player);
  this->player_ = player;
  if ( *(_BYTE *)(((unsigned __int64)&this->refresh_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->refresh_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->refresh_id_, player, &this->refresh_id_);
  }
  this->refresh_id_ = refresh_id;
  v6 = (((_BYTE)this + 36) & 7u) + 3;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->monster_config_id_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->monster_config_id_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->monster_config_id_, v6, v7);
  this->monster_config_id_ = monster_config_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->city_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->city_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->city_id_, v6, &this->city_id_);
  }
  this->city_id_ = city_id;
  v8 = (((_BYTE)this + 44) & 7u) + 3;
  v9 = (*(_BYTE *)(((unsigned __int64)&this->cur_ref_index_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_ref_index_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_store4(&this->cur_ref_index_, v8, v9);
  this->cur_ref_index_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_loaded_group_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_loaded_group_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_loaded_group_id_, v8, &this->cur_loaded_group_id_);
  }
  this->cur_loaded_group_id_ = 0;
  v10 = (((_BYTE)this + 52) & 7u) + 3;
  v11 = (*(_BYTE *)(((unsigned __int64)&this->finished_clue_group_num_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->finished_clue_group_num_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
    __asan_report_store4(&this->finished_clue_group_num_, v10, v11);
  this->finished_clue_group_num_ = 0;
  std::unordered_set<unsigned int>::unordered_set(&this->chosen_group_set_);
  if ( *(_BYTE *)(((unsigned __int64)&this->destination_group_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->destination_group_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->destination_group_id_, v10, &this->destination_group_id_);
  }
  this->destination_group_id_ = 0;
  v12 = (((_BYTE)this + 116) & 7u) + 3;
  v13 = (*(_BYTE *)(((unsigned __int64)&this->hunting_fail_time_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->hunting_fail_time_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v13 )
    __asan_report_store4(&this->hunting_fail_time_, v12, v13);
  this->hunting_fail_time_ = 0;
  std::string::basic_string(&this->transaction_);
  if ( *(char *)(((unsigned __int64)&this->is_last_check_in_area_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_last_check_in_area_, v12, &this->is_last_check_in_area_);
  this->is_last_check_in_area_ = 0;
  v14 = (*(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v14 )
    __asan_report_store4(&this->state_, (((_BYTE)this - 100) & 7u) + 3, v14);
  this->state_ = hunting_none;
  std::shared_ptr<PlayerUnixTimer>::shared_ptr(&this->player_timer_ptr_);
  std::shared_ptr<PlayerUnixTimer>::shared_ptr(&this->hunting_timer_ptr_);
  std::vector<std::weak_ptr<Observer>>::vector(&this->observer_vec_);
};

// Line 38: range 000000001709496E-0000000017094A15
void __cdecl HuntingRecord::~HuntingRecord(HuntingRecord *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'HuntingRecord + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_HuntingRecord = v2;
  std::vector<std::weak_ptr<Observer>>::~vector(&this->observer_vec_);
  std::shared_ptr<PlayerUnixTimer>::~shared_ptr(&this->hunting_timer_ptr_);
  std::shared_ptr<PlayerUnixTimer>::~shared_ptr(&this->player_timer_ptr_);
  std::string::~string(&this->transaction_);
  std::unordered_set<unsigned int>::~unordered_set(&this->chosen_group_set_);
  std::enable_shared_from_this<HuntingRecord>::~enable_shared_from_this(&this->std::enable_shared_from_this<HuntingRecord>);
};

// Line 38: range 0000000017094A16-0000000017094A40
void __cdecl HuntingRecord::~HuntingRecord(HuntingRecord *const this)
{
  HuntingRecord::~HuntingRecord(this);
  operator delete(this, 0xD8uLL);
};

// Line 44: range 0000000016D6BDA2-0000000016D6BDFC
bool __cdecl HuntingRecord::isFinish(HuntingRecord *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->state_);
  }
  return this->state_ == hunting_finish;
};

// Line 45: range 0000000016D6BDFE-0000000016D6BE58
bool __cdecl HuntingRecord::isStart(HuntingRecord *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->state_);
  }
  return this->state_ == hunting_start;
};

// Line 53: range 0000000016D6BE5A-0000000016D6BE86
std::string *__cdecl HuntingRecord::getTransaction[abi:cxx11](std::string *retstr, HuntingRecord *const this)
{
  std::string::basic_string(retstr, &this->transaction_);
  return retstr;
};

// Line 97: range 0000000016D6BE88-0000000016D6BECF
uint32_t __cdecl HuntingRecord::getRefreshId(const HuntingRecord *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->refresh_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->refresh_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->refresh_id_);
  }
  return this->refresh_id_;
};

// Line 98: range 0000000016D6BED0-0000000016D6BF1F
uint32_t __cdecl HuntingRecord::getMonsterConfigId(const HuntingRecord *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->monster_config_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->monster_config_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->monster_config_id_);
  }
  return this->monster_config_id_;
};

// Line 100: range 0000000016D6BF20-0000000016D6BF6F
uint32_t __cdecl HuntingRecord::getCurRefIndex(const HuntingRecord *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_ref_index_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_ref_index_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_ref_index_);
  }
  return this->cur_ref_index_;
};

// Line 101: range 0000000016D6BF70-0000000016D6BFB7
uint32_t __cdecl HuntingRecord::getCurLoadedGroupId(const HuntingRecord *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_loaded_group_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_loaded_group_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_loaded_group_id_);
  }
  return this->cur_loaded_group_id_;
};
