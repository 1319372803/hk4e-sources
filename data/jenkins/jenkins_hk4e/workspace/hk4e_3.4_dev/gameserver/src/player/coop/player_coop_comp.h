// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/coop/player_coop_comp.h

// Line 20: range 000000001422070A-000000001422090E
void __cdecl MainCoop::MainCoop(MainCoop *const this, const MainCoop *a2)
{
  uint32_t id; // ecx
  char v3; // al
  __int64 v4; // rsi
  proto::MainCoop::Status status; // ecx
  char v6; // dl
  __int64 v7; // rdx
  std::vector<unsigned int> *p_save_point_vec; // rsi
  uint32_t self_confidence; // ecx
  char v10; // al
  const MainCoop *v11; // [rsp+0h] [rbp-20h]

  v11 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  id = a2->id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2, this);
  }
  this->id = id;
  v4 = (((_BYTE)v11 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v11->status >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v11 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v11->status >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v11->status);
  }
  status = v11->status;
  v6 = *(_BYTE *)(((unsigned __int64)&this->status >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->status, v4, v7);
  this->status = status;
  p_save_point_vec = &v11->save_point_vec;
  std::vector<unsigned int>::vector(&this->save_point_vec, &v11->save_point_vec);
  if ( *(_BYTE *)(((unsigned __int64)&v11->self_confidence >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v11->self_confidence >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v11->self_confidence);
  }
  self_confidence = v11->self_confidence;
  v10 = *(_BYTE *)(((unsigned __int64)&this->self_confidence >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(p_save_point_vec) = v10 != 0;
    __asan_report_store4(&this->self_confidence, p_save_point_vec, &this->self_confidence);
  }
  this->self_confidence = self_confidence;
  std::unordered_map<unsigned int,int>::unordered_map(&this->normal_var_map, &v11->normal_var_map);
  std::unordered_map<unsigned int,int>::unordered_map(&this->temp_var_map, &v11->temp_var_map);
};

// Line 20: range 00000000141EE3B8-00000000141EE3F6
void __cdecl MainCoop::~MainCoop(MainCoop *const this)
{
  std::unordered_map<unsigned int,int>::~unordered_map(&this->temp_var_map);
  std::unordered_map<unsigned int,int>::~unordered_map(&this->normal_var_map);
  std::vector<unsigned int>::~vector(&this->save_point_vec);
};

// Line 22: range 00000000141EE2BA-00000000141EE3B7
// local variable allocation has failed, the output may be wrong!
void __cdecl MainCoop::MainCoop(MainCoop *const this, uint32_t id)
{
  __int64 v2; // rsi
  __int64 v3; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, *(_QWORD *)&id, this);
  }
  this->id = id;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->status >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->status >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store4(&this->status, v2, v3);
  this->status = MainCoop_Status_INVALID;
  std::vector<unsigned int>::vector(&this->save_point_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->self_confidence >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->self_confidence >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->self_confidence, v2, &this->self_confidence);
  }
  this->self_confidence = 0;
  std::unordered_map<unsigned int,int>::unordered_map(&this->normal_var_map);
  std::unordered_map<unsigned int,int>::unordered_map(&this->temp_var_map);
};

// Line 38: range 00000000142F66F6-00000000142F6813
void __cdecl CoopPoint::CoopPoint(CoopPoint *const this, CoopPoint *a2)
{
  uint32_t id; // ecx
  char v3; // al
  __int64 v4; // rsi
  proto::CoopPoint::State state; // ecx
  char v6; // dl
  __int64 v7; // rdx
  CoopPoint *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  id = a2->id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2, this);
  }
  this->id = id;
  v4 = (((_BYTE)v8 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->state >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->state >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->state);
  }
  state = v8->state;
  v6 = *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->state, v4, v7);
  this->state = state;
  MainCoop::MainCoop(&this->start_main_coop, &v8->start_main_coop);
};

// Line 38: range 0000000014340E6E-0000000014340F8B
void __cdecl CoopPoint::CoopPoint(CoopPoint *const this, const CoopPoint *a2)
{
  uint32_t id; // ecx
  char v3; // al
  __int64 v4; // rsi
  proto::CoopPoint::State state; // ecx
  char v6; // dl
  __int64 v7; // rdx
  const CoopPoint *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  id = a2->id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2, this);
  }
  this->id = id;
  v4 = (((_BYTE)v8 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->state >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->state >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->state);
  }
  state = v8->state;
  v6 = *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->state, v4, v7);
  this->state = state;
  MainCoop::MainCoop(&this->start_main_coop, &v8->start_main_coop);
};

// Line 38: range 00000000141F14BE-00000000141F14DC
void __cdecl CoopPoint::~CoopPoint(CoopPoint *const this)
{
  MainCoop::~MainCoop(&this->start_main_coop);
};

// Line 40: range 00000000141EE3F8-00000000141EE49F
// local variable allocation has failed, the output may be wrong!
void __cdecl CoopPoint::CoopPoint(CoopPoint *const this, uint32_t id, uint32_t chapter_id)
{
  __int64 v3; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, *(_QWORD *)&id, this);
  }
  this->id = id;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store4(&this->state, (((_BYTE)this + 4) & 7u) + 3, v3);
  this->state = CoopPoint_State_STATE_UNSTARTED;
  MainCoop::MainCoop(&this->start_main_coop, chapter_id);
};

// Line 51: range 00000000142F736E-00000000142F7569
void __cdecl CoopChapter::CoopChapter(CoopChapter *const this, const CoopChapter *a2)
{
  uint32_t id; // ecx
  char v3; // al
  __int64 v4; // rsi
  proto::CoopChapter::State state; // ecx
  char v6; // dl
  __int64 v7; // rdx
  const CoopChapter *v8; // [rsp+0h] [rbp-20h]

  v8 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  id = a2->id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2, this);
  }
  this->id = id;
  v4 = (((_BYTE)v8 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->state >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->state >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->state);
  }
  state = v8->state;
  v6 = *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->state, v4, v7);
  this->state = state;
  std::unordered_set<unsigned int>::unordered_set(&this->cg_set, &v8->cg_set);
  std::unordered_set<unsigned int>::unordered_set(&this->reward_set, &v8->reward_set);
  std::unordered_set<unsigned int>::unordered_set(&this->dialog_set, &v8->dialog_set);
  std::unordered_map<unsigned int,CoopPoint>::unordered_map(&this->coop_point_map, &v8->coop_point_map);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->seen_ending_map, &v8->seen_ending_map);
};

// Line 51: range 00000000141F1546-00000000141F15A8
void __cdecl CoopChapter::~CoopChapter(CoopChapter *const this)
{
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->seen_ending_map);
  std::unordered_map<unsigned int,CoopPoint>::~unordered_map(&this->coop_point_map);
  std::unordered_set<unsigned int>::~unordered_set(&this->dialog_set);
  std::unordered_set<unsigned int>::~unordered_set(&this->reward_set);
  std::unordered_set<unsigned int>::~unordered_set(&this->cg_set);
};

// Line 53: range 00000000141EE64E-00000000141EE731
// local variable allocation has failed, the output may be wrong!
void __cdecl CoopChapter::CoopChapter(CoopChapter *const this, uint32_t id)
{
  __int64 v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, *(_QWORD *)&id, this);
  }
  this->id = id;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store4(&this->state, (((_BYTE)this + 4) & 7u) + 3, v2);
  this->state = CoopChapter_State_STATE_COND_NOT_MEET;
  std::unordered_set<unsigned int>::unordered_set(&this->cg_set);
  std::unordered_set<unsigned int>::unordered_set(&this->reward_set);
  std::unordered_set<unsigned int>::unordered_set(&this->dialog_set);
  std::unordered_map<unsigned int,CoopPoint>::unordered_map(&this->coop_point_map);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->seen_ending_map);
};

// Line 68: range 0000000017487406-000000001748745D
void __cdecl CoopProgress::CoopProgress(CoopProgress *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, this);
  }
  this->coop_point_id = 0;
  std::unordered_map<unsigned int,MainCoop>::unordered_map(&this->main_coop_map);
};

// Line 68: range 000000001434AA74-000000001434AA92
void __cdecl CoopProgress::~CoopProgress(CoopProgress *const this)
{
  std::unordered_map<unsigned int,MainCoop>::~unordered_map(&this->main_coop_map);
};

// Line 78: range 000000001434AA94-000000001434AB37
void __cdecl PlayerCoopComp::~PlayerCoopComp(PlayerCoopComp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerCoopComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PlayerCompBase = v2;
  std::set<unsigned int>::~set(&this->opening_chapter_set_);
  PlayerUnixTimer::~PlayerUnixTimer(&this->coop_timer_);
  std::unordered_set<unsigned int>::~unordered_set(&this->viewed_chapter_set_);
  CoopProgress::~CoopProgress(&this->cur_progress_);
  std::unordered_map<unsigned int,CoopChapter>::~unordered_map(&this->chapter_map_);
  PlayerCompBase::~PlayerCompBase(this);
};

// Line 78: range 000000001434AB38-000000001434AB62
void __cdecl PlayerCoopComp::~PlayerCoopComp(PlayerCoopComp *const this)
{
  PlayerCoopComp::~PlayerCoopComp(this);
  operator delete(this, 0x160uLL);
};

// Line 81: range 00000000172141CE-00000000172141D8
uint32_t __cdecl PlayerCoopComp::getType()
{
  return 42;
};

// Line 83: range 000000001748745E-00000000174876F9
void __cdecl ZN14PlayerCoopCompCI214PlayerCompBaseER6Player(PlayerCoopComp *const this, Player *a2)
{
  int (**v2)(...); // rdx
  PlayerCoopComp **v3; // r8
  const std::_Placeholder<1> *v4; // r9
  __int64 v5; // rsi
  __int64 v6; // rdx
  PlayerCoopComp *v7; // [rsp+18h] [rbp-78h] BYREF
  PlayerPtr p_player_ptr; // [rsp+20h] [rbp-70h] BYREF
  void (*__f[2])(PlayerCoopComp *, unsigned __int64); // [rsp+30h] [rbp-60h] BYREF
  std::_Bind_helper<false,void (PlayerCoopComp::*)(long unsigned int),PlayerCoopComp*,const std::_Placeholder<1>&>::type p___f; // [rsp+40h] [rbp-50h] BYREF
  std::function<void(long unsigned int)> p_callback; // [rsp+60h] [rbp-30h] BYREF

  PlayerCompBase::PlayerCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'PlayerCoopComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_PlayerCompBase = v2;
  std::unordered_map<unsigned int,CoopChapter>::unordered_map(&this->chapter_map_);
  CoopProgress::CoopProgress(&this->cur_progress_);
  std::unordered_set<unsigned int>::unordered_set(&this->viewed_chapter_set_);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  toPtr<Player,Player>((Player *)&p_player_ptr);
  v7 = this;
  __f[0] = (void (*)(PlayerCoopComp *, unsigned __int64))PlayerCoopComp::onCoopTimer;
  __f[1] = 0LL;
  std::bind<void (PlayerCoopComp::*)(unsigned long),PlayerCoopComp*,std::_Placeholder<1> const&>(
    &p___f,
    __f,
    &v7,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v3,
    v4);
  std::function<void ()(unsigned long)>::function<std::_Bind<void (PlayerCoopComp::*)(unsigned long) ()(PlayerCoopComp*,std::_Placeholder<1>)>,void,void>(
    &p_callback,
    &p___f);
  PlayerUnixTimer::PlayerUnixTimer(&this->coop_timer_, &p_player_ptr, &p_callback);
  std::function<void ()(unsigned long)>::~function(&p_callback);
  std::shared_ptr<Player>::~shared_ptr(&p_player_ptr);
  std::set<unsigned int>::set(&this->opening_chapter_set_);
  if ( *(char *)(((unsigned __int64)&this->is_in_test >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_in_test, &p_player_ptr, &this->is_in_test);
  this->is_in_test = 0;
  v5 = ((_BYTE)this + 89) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->is_ignore_open_time >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->is_ignore_open_time >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->is_ignore_open_time, v5, v6);
  this->is_ignore_open_time = 0;
};
