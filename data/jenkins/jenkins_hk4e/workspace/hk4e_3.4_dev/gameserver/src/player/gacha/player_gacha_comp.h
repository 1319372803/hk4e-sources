// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/gacha/player_gacha_comp.h

// Line 52: range 0000000014326E88-0000000014326ED7
void __cdecl GachaItemParentTypeData::GachaItemParentTypeData(GachaItemParentTypeData *const this)
{
  __int64 v1; // rdx

  v1 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7)
                                                                                              + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
  if ( (_BYTE)v1 )
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3, v1);
  this->last_gacha_times = 0;
};

// Line 75: range 00000000143272E2-0000000014327331
void __cdecl GachaUpData::GachaUpData(GachaUpData *const this)
{
  __int64 v1; // rdx

  v1 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7)
                                                                                              + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
  if ( (_BYTE)v1 )
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3, v1);
  this->gacha_no_up_times = 0;
};

// Line 84: range 000000001432A77C-000000001432AA69
void __cdecl GachaRecord::GachaRecord(GachaRecord *const this)
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
  this->gacha_type = 0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->cur_schedule_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_schedule_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store4(&this->cur_schedule_id, v2, v3);
  this->cur_schedule_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->total_gacha_times >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->total_gacha_times >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->total_gacha_times, v2, &this->total_gacha_times);
  }
  this->total_gacha_times = 0;
  v4 = (((_BYTE)this + 12) & 7u) + 3;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->cur_schedule_total_gacha_times >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_schedule_total_gacha_times >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store4(&this->cur_schedule_total_gacha_times, v4, v5);
  this->cur_schedule_total_gacha_times = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->total_ten_gacha_times >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->total_ten_gacha_times >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->total_ten_gacha_times, v4, &this->total_ten_gacha_times);
  }
  this->total_ten_gacha_times = 0;
  std::map<unsigned int,GachaGuaranteeData>::map(&this->gacha_guarantee_map);
  std::map<unsigned int,GachaItemTypeData>::map(&this->gacha_item_type_data_map);
  std::map<unsigned int,GachaItemParentTypeData>::map(&this->gacha_item_parent_type_data_map);
  std::map<unsigned int,GachaUpData>::map(&this->gacha_up_data_map);
  if ( *(_BYTE *)(((unsigned __int64)&this->wish_item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->wish_item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->wish_item_id, v4, &this->wish_item_id);
  }
  this->wish_item_id = 0;
  v6 = (((_BYTE)this - 36) & 7u) + 3;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->wish_progress >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->wish_progress >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->wish_progress, v6, v7);
  this->wish_progress = 0;
  if ( *(char *)(((unsigned __int64)&this->is_new_wish >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_new_wish, v6, &this->is_new_wish);
  this->is_new_wish = 0;
  v8 = (((_BYTE)this - 28) & 7u) + 3;
  v9 = (*(_BYTE *)(((unsigned __int64)&this->cur_schedule_daily_last_gacha_time >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_schedule_daily_last_gacha_time >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_store4(&this->cur_schedule_daily_last_gacha_time, v8, v9);
  this->cur_schedule_daily_last_gacha_time = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_schedule_daily_gacha_times >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_schedule_daily_gacha_times >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_schedule_daily_gacha_times, v8, &this->cur_schedule_daily_gacha_times);
  }
  this->cur_schedule_daily_gacha_times = 0;
};

// Line 84: range 00000000142F1F6E-00000000142F1FBE
void __cdecl GachaRecord::~GachaRecord(GachaRecord *const this)
{
  std::map<unsigned int,GachaUpData>::~map(&this->gacha_up_data_map);
  std::map<unsigned int,GachaItemParentTypeData>::~map(&this->gacha_item_parent_type_data_map);
  std::map<unsigned int,GachaItemTypeData>::~map(&this->gacha_item_type_data_map);
  std::map<unsigned int,GachaGuaranteeData>::~map(&this->gacha_guarantee_map);
};

// Line 137: range 00000000141FA1CA-00000000141FA298
void __cdecl GachaStatLogContext::GachaStatLogContext(GachaStatLogContext *const this)
{
  __int64 v1; // rsi
  uint32_t *p_gacha_up_prob; // rdx
  __int64 v3; // rdx

  std::vector<data::GachaGuaranteeParentTypeWeight>::vector(&this->gacha_item_parent_type_weight_vec);
  std::vector<std::pair<data::GachaItemParentType,unsigned int>>::vector(&this->last_gacha_item_parent_type_times_vec);
  p_gacha_up_prob = &this->gacha_up_prob;
  if ( *(_BYTE *)(((unsigned __int64)p_gacha_up_prob >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_gacha_up_prob >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gacha_up_prob, v1, p_gacha_up_prob);
  }
  this->gacha_up_prob = 0;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->gacha_no_up_times >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gacha_no_up_times >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store4(&this->gacha_no_up_times, (((_BYTE)this + 52) & 7u) + 3, v3);
  this->gacha_no_up_times = 0;
  std::vector<data::GachaGuaranteeTypeWeight>::vector(&this->gacha_item_type_weight_vec);
  std::vector<std::pair<data::GachaItemType,unsigned int>>::vector(&this->last_gacha_item_type_times_vec);
};

// Line 137: range 00000000141FA29A-00000000141FA2E4
void __cdecl GachaStatLogContext::~GachaStatLogContext(GachaStatLogContext *const this)
{
  std::vector<std::pair<data::GachaItemType,unsigned int>>::~vector(&this->last_gacha_item_type_times_vec);
  std::vector<data::GachaGuaranteeTypeWeight>::~vector(&this->gacha_item_type_weight_vec);
  std::vector<std::pair<data::GachaItemParentType,unsigned int>>::~vector(&this->last_gacha_item_parent_type_times_vec);
  std::vector<data::GachaGuaranteeParentTypeWeight>::~vector(&this->gacha_item_parent_type_weight_vec);
};

// Line 148: range 000000001434A5D2-000000001434A62F
void __cdecl PlayerGachaComp::~PlayerGachaComp(PlayerGachaComp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerGachaComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PlayerCompBase = v2;
  std::map<data::GachaType,GachaRecord>::~map(&this->gacha_record_map_);
  PlayerCompBase::~PlayerCompBase(this);
};

// Line 148: range 000000001434A630-000000001434A65A
void __cdecl PlayerGachaComp::~PlayerGachaComp(PlayerGachaComp *const this)
{
  PlayerGachaComp::~PlayerGachaComp(this);
  operator delete(this, 0x60uLL);
};

// Line 154: range 000000001747EA0A-000000001747EB34
void __cdecl ZN15PlayerGachaCompCI214PlayerCompBaseER6Player(PlayerGachaComp *const this, Player *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  PlayerCompBase::PlayerCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'PlayerGachaComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_PlayerCompBase = v2;
  std::map<data::GachaType,GachaRecord>::map(&this->gacha_record_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->gacha_random_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gacha_random_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gacha_random_, a2, &this->gacha_random_);
  }
  this->gacha_random_ = 0;
  v3 = (((_BYTE)this + 84) & 7u) + 3;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->daily_gacha_times_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->daily_gacha_times_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->daily_gacha_times_, v3, v4);
  this->daily_gacha_times_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_gacha_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_gacha_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_gacha_time_, v3, &this->last_gacha_time_);
  }
  this->last_gacha_time_ = 0;
};

// Line 177: range 0000000017D68C7E-0000000017D68CCD
uint32_t __cdecl PlayerGachaComp::getDailyGachaTimes(const PlayerGachaComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->daily_gacha_times_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->daily_gacha_times_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->daily_gacha_times_);
  }
  return this->daily_gacha_times_;
};

// Line 228: range 0000000017213FAF-0000000017213FB9
uint32_t __cdecl PlayerGachaComp::getType()
{
  return 20;
};

// Line 353: range 0000000014327618-00000000143276ED
void __cdecl GachaGuaranteeData::GachaGuaranteeData(GachaGuaranteeData *const this)
{
  __int64 v1; // rdx
  __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  v1 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7)
                                                                                              + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
  if ( (_BYTE)v1 )
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3, v1);
  this->gacha_rule_id = 0;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->last_gacha_guarantee_times >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_gacha_guarantee_times >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store4(&this->last_gacha_guarantee_times, (((_BYTE)this + 4) & 7u) + 3, v2);
  this->last_gacha_guarantee_times = 0;
  v3 = ((_BYTE)this + 8) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_cur_schedule_triggered >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_cur_schedule_triggered >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_cur_schedule_triggered, v3, v4);
  this->is_cur_schedule_triggered = 0;
};

// Line 549: range 0000000014326CDC-0000000014326D2B
void __cdecl GachaItemTypeData::GachaItemTypeData(GachaItemTypeData *const this)
{
  __int64 v1; // rdx

  v1 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7)
                                                                                              + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
  if ( (_BYTE)v1 )
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3, v1);
  this->last_gacha_times = 0;
};
