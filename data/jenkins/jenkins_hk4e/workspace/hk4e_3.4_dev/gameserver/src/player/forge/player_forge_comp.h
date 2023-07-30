// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/forge/player_forge_comp.h

// Line 23: range 000000001678B36A-000000001678B388
void __cdecl ForgeQueue::~ForgeQueue(ForgeQueue *const this)
{
  std::vector<unsigned int>::~vector(&this->proud_skill_id_vec);
};

// Line 36: range 0000000016670E58-0000000016670EFF
uint32_t __cdecl ForgeQueue::getTakableCount(const ForgeQueue *const this)
{
  uint32_t finish_count; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&this->finish_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->finish_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->finish_count);
  }
  finish_count = this->finish_count;
  if ( *(_BYTE *)(((unsigned __int64)&this->taken_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->taken_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->taken_count);
  }
  if ( finish_count <= this->taken_count )
    return 0;
  else
    return this->finish_count - this->taken_count;
};

// Line 37: range 0000000016670F00-0000000016670FA7
uint32_t __cdecl ForgeQueue::getUnfinishCount(const ForgeQueue *const this)
{
  uint32_t forge_count; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&this->forge_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->forge_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->forge_count);
  }
  forge_count = this->forge_count;
  if ( *(_BYTE *)(((unsigned __int64)&this->finish_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->finish_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->finish_count);
  }
  if ( forge_count <= this->finish_count )
    return 0;
  else
    return this->forge_count - this->finish_count;
};

// Line 38: range 0000000016670FA8-0000000016671077
uint32_t __cdecl ForgeQueue::getNextFinishTime(const ForgeQueue *const this)
{
  uint32_t start_time; // ecx
  uint32_t v2; // esi

  if ( *(_BYTE *)(((unsigned __int64)&this->start_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->start_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->start_time);
  }
  start_time = this->start_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->finish_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->finish_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->finish_count);
  }
  v2 = this->finish_count + 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->single_time_cost >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->single_time_cost >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->single_time_cost);
  }
  return start_time + v2 * this->single_time_cost;
};

// Line 39: range 0000000016671078-000000001667114C
uint32_t __cdecl ForgeQueue::getTotalFinishTime(const ForgeQueue *const this)
{
  uint32_t start_time; // ecx
  uint32_t forge_count; // esi

  if ( *(_BYTE *)(((unsigned __int64)&this->start_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->start_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->start_time);
  }
  start_time = this->start_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->forge_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->forge_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->forge_count);
  }
  forge_count = this->forge_count;
  if ( *(_BYTE *)(((unsigned __int64)&this->single_time_cost >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->single_time_cost >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->single_time_cost);
  }
  return start_time + forge_count * this->single_time_cost;
};

// Line 43: range 0000000016832416-0000000016832495
void __cdecl PlayerForgeComp::~PlayerForgeComp(PlayerForgeComp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerForgeComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PlayerCompBase = v2;
  std::unordered_set<unsigned int>::~unordered_set(&this->unlock_forge_id_set_);
  PlayerUnixTimer::~PlayerUnixTimer(&this->forge_timer_);
  std::map<unsigned int,ForgeQueue>::~map(&this->forge_queue_map_);
  PlayerCompBase::~PlayerCompBase(this);
};

// Line 43: range 0000000016832496-00000000168324C0
void __cdecl PlayerForgeComp::~PlayerForgeComp(PlayerForgeComp *const this)
{
  PlayerForgeComp::~PlayerForgeComp(this);
  operator delete(this, 0xF8uLL);
};

// Line 46: range 0000000017213FC5-0000000017213FCF
uint32_t __cdecl PlayerForgeComp::getType()
{
  return 22;
};

// Line 49: range 000000001747F030-000000001747F2FF
void __cdecl ZN15PlayerForgeCompCI214PlayerCompBaseER6Player(PlayerForgeComp *const this, Player *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  PlayerForgeComp **v5; // r8
  const std::_Placeholder<1> *v6; // r9
  PlayerForgeComp *v7; // [rsp+18h] [rbp-78h] BYREF
  PlayerPtr p_player_ptr; // [rsp+20h] [rbp-70h] BYREF
  void (*__f[2])(PlayerForgeComp *, unsigned __int64); // [rsp+30h] [rbp-60h] BYREF
  std::_Bind_helper<false,void (PlayerForgeComp::*)(long unsigned int),PlayerForgeComp*,const std::_Placeholder<1>&>::type p___f; // [rsp+40h] [rbp-50h] BYREF
  std::function<void(long unsigned int)> p_callback; // [rsp+60h] [rbp-30h] BYREF

  PlayerCompBase::PlayerCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'PlayerForgeComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_PlayerCompBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_day_refresh_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_day_refresh_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_day_refresh_time_, a2, &this->last_day_refresh_time_);
  }
  this->last_day_refresh_time_ = 0;
  v3 = (((_BYTE)this + 36) & 7u) + 3;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->cur_forge_point_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_forge_point_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->cur_forge_point_, v3, v4);
  this->cur_forge_point_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_transaction_no_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_transaction_no_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_transaction_no_, v3, &this->last_transaction_no_);
  }
  this->last_transaction_no_ = 0;
  std::map<unsigned int,ForgeQueue>::map(&this->forge_queue_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->next_refresh_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->next_refresh_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->next_refresh_time, v3, &this->next_refresh_time);
  }
  this->next_refresh_time = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  toPtr<Player,Player>((Player *)&p_player_ptr);
  v7 = this;
  __f[0] = (void (*)(PlayerForgeComp *, unsigned __int64))PlayerForgeComp::onTimer;
  __f[1] = 0LL;
  std::bind<void (PlayerForgeComp::*)(unsigned long),PlayerForgeComp*,std::_Placeholder<1> const&>(
    &p___f,
    __f,
    &v7,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v5,
    v6);
  std::function<void ()(unsigned long)>::function<std::_Bind<void (PlayerForgeComp::*)(unsigned long) ()(PlayerForgeComp*,std::_Placeholder<1>)>,void,void>(
    &p_callback,
    &p___f);
  PlayerUnixTimer::PlayerUnixTimer(&this->forge_timer_, &p_player_ptr, &p_callback);
  std::function<void ()(unsigned long)>::~function(&p_callback);
  std::shared_ptr<Player>::~shared_ptr(&p_player_ptr);
  std::unordered_set<unsigned int>::unordered_set(&this->unlock_forge_id_set_);
};

// Line 70: range 0000000015195F4C-0000000015195F5D
const std::map<unsigned int,ForgeQueue> *__cdecl PlayerForgeComp::getForgeQueueMap(const PlayerForgeComp *const this)
{
  return &this->forge_queue_map_;
};

// Line 167: range 000000001667114E-0000000016671195
uint32_t __cdecl PlayerForgeComp::getLastDayRefreshTime(const PlayerForgeComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->last_day_refresh_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_day_refresh_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_day_refresh_time_);
  }
  return this->last_day_refresh_time_;
};

// Line 167: range 0000000016671196-00000000166711E4
// local variable allocation has failed, the output may be wrong!
void __cdecl PlayerForgeComp::setLastDayRefreshTime(PlayerForgeComp *const this, uint32_t last_day_refresh_time__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->last_day_refresh_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_day_refresh_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(
      &this->last_day_refresh_time_,
      *(_QWORD *)&last_day_refresh_time__out,
      &this->last_day_refresh_time_);
  }
  this->last_day_refresh_time_ = last_day_refresh_time__out;
};

// Line 168: range 00000000166711E6-0000000016671235
uint32_t __cdecl PlayerForgeComp::getCurForgePoint(const PlayerForgeComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_forge_point_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_forge_point_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_forge_point_);
  }
  return this->cur_forge_point_;
};

// Line 168: range 0000000016671236-000000001667128C
void __cdecl PlayerForgeComp::setCurForgePoint(PlayerForgeComp *const this, uint32_t cur_forge_point__out)
{
  __int64 v2; // rdx

  v2 = (*(_BYTE *)(((unsigned __int64)&this->cur_forge_point_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_forge_point_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store4(&this->cur_forge_point_, (((_BYTE)this + 36) & 7u) + 3, v2);
  this->cur_forge_point_ = cur_forge_point__out;
};

// Line 353: range 00000000167E597C-00000000167E5BE3
void __cdecl ForgeQueue::ForgeQueue(ForgeQueue *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, this);
  }
  this->transaction_no = 0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->queue_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->queue_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store4(&this->queue_id, v2, v3);
  this->queue_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->forge_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->forge_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->forge_id, v2, &this->forge_id);
  }
  this->forge_id = 0;
  v4 = (((_BYTE)this + 12) & 7u) + 3;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->forge_count >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->forge_count >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store4(&this->forge_count, v4, v5);
  this->forge_count = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->finish_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->finish_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->finish_count, v4, &this->finish_count);
  }
  this->finish_count = 0;
  v6 = (((_BYTE)this + 20) & 7u) + 3;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->taken_count >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->taken_count >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->taken_count, v6, v7);
  this->taken_count = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->start_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->start_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->start_time, v6, &this->start_time);
  }
  this->start_time = 0;
  v8 = (((_BYTE)this + 28) & 7u) + 3;
  v9 = (*(_BYTE *)(((unsigned __int64)&this->single_time_cost >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->single_time_cost >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_store4(&this->single_time_cost, v8, v9);
  this->single_time_cost = 0;
  std::vector<unsigned int>::vector(&this->proud_skill_id_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->avatar_id, v8, &this->avatar_id);
  }
  this->avatar_id = 0;
};
