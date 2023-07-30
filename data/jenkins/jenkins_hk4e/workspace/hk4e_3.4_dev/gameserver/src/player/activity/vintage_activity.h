// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/vintage_activity.h

// Line 26: range 000000001384AA28-000000001384AA32
data::NewActivityType __cdecl VintageActivity::getActivityStaticType()
{
  return 3103;
};

// Line 27: range 00000000149F4D10-00000000149F4E25
void __cdecl VintageHuntingStageData::VintageHuntingStageData(VintageHuntingStageData *const this)
{
  __int64 v1; // rdx
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rdx

  v1 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7)
                                                                                              + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
  if ( (_BYTE)v1 )
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3, v1);
  this->stage_id = 0;
  v2 = ((_BYTE)this + 4) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_open, v2, v3);
  this->is_open = 0;
  v4 = ((_BYTE)this + 5) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->is_finish >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->is_finish >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->is_finish, v4, v5);
  this->is_finish = 0;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->record_value >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->record_value >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store4(&this->record_value, (((_BYTE)this + 8) & 7u) + 3, v6);
  this->record_value = 0;
};

// Line 39: range 000000001702CAE4-000000001702CB79
void __cdecl HuntingTransferContext::HuntingTransferContext(HuntingTransferContext *const this)
{
  __int64 v1; // rdx
  __int64 v2; // rdx

  v1 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7)
                                                                                              + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
  if ( (_BYTE)v1 )
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3, v1);
  this->hunting_stage_id = 0;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->enter_reason_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->enter_reason_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store4(&this->enter_reason_, (((_BYTE)this + 4) & 7u) + 3, v2);
  this->enter_reason_ = ENTER_REASON_NONE;
};

// Line 46: range 00000000149F4AB0-00000000149F4BC5
void __cdecl VintagePresentLevelData::VintagePresentLevelData(VintagePresentLevelData *const this)
{
  __int64 v1; // rdx
  __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx

  v1 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7)
                                                                                              + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
  if ( (_BYTE)v1 )
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3, v1);
  this->present_id = 0;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store4(&this->stage_id, (((_BYTE)this + 4) & 7u) + 3, v2);
  this->stage_id = 0;
  v3 = ((_BYTE)this + 8) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_open, v3, v4);
  this->is_open = 0;
  v5 = ((_BYTE)this + 9) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->is_finish >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->is_finish >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->is_finish, v5, v6);
  this->is_finish = 0;
};

// Line 58: range 00000000149F4E96-00000000149F4F6D
void __cdecl VintagePresentStageData::VintagePresentStageData(VintagePresentStageData *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, this);
  }
  this->stage_id = 0;
  v2 = ((_BYTE)this + 4) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_open, v2, v3);
  this->is_open = 0;
  v4 = ((_BYTE)this + 5) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->is_finish >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->is_finish >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->is_finish, v4, v5);
  this->is_finish = 0;
  std::map<unsigned int,VintagePresentLevelData>::map(&this->present_level_map);
};

// Line 58: range 0000000014BD8B62-0000000014BD8CFA
void __cdecl VintagePresentStageData::VintagePresentStageData(
        VintagePresentStageData *const this,
        const VintagePresentStageData *a2)
{
  uint32_t stage_id; // ecx
  char v3; // al
  __int64 v4; // rsi
  bool is_open; // cl
  char v6; // dl
  __int64 v7; // rdx
  __int64 v8; // rsi
  bool is_finish; // cl
  char v10; // dl
  __int64 v11; // rdx
  const VintagePresentStageData *v12; // [rsp+0h] [rbp-10h]

  v12 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  stage_id = a2->stage_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2, this);
  }
  this->stage_id = stage_id;
  v4 = ((_BYTE)v12 + 4) & 7;
  if ( *(_BYTE *)(((unsigned __int64)&v12->is_open >> 3) + 0x7FFF8000) != 0
    && (char)v4 >= *(_BYTE *)(((unsigned __int64)&v12->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&v12->is_open);
  }
  is_open = v12->is_open;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 4) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_open, v4, v7);
  this->is_open = is_open;
  v8 = ((_BYTE)v12 + 5) & 7;
  if ( *(_BYTE *)(((unsigned __int64)&v12->is_finish >> 3) + 0x7FFF8000) != 0
    && (char)v8 >= *(_BYTE *)(((unsigned __int64)&v12->is_finish >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&v12->is_finish);
  }
  is_finish = v12->is_finish;
  v10 = *(_BYTE *)(((unsigned __int64)&this->is_finish >> 3) + 0x7FFF8000);
  LOBYTE(v8) = v10 != 0;
  v11 = (v10 != 0) & (unsigned __int8)((((unsigned __int8)this + 5) & 7) >= v10);
  if ( (_BYTE)v11 )
    __asan_report_store1(&this->is_finish, v8, v11);
  this->is_finish = is_finish;
  std::map<unsigned int,VintagePresentLevelData>::map(&this->present_level_map, &v12->present_level_map);
};

// Line 58: range 00000000149F4F6E-00000000149F4F8C
void __cdecl VintagePresentStageData::~VintagePresentStageData(VintagePresentStageData *const this)
{
  std::map<unsigned int,VintagePresentLevelData>::~map(&this->present_level_map);
};

// Line 70: range 000000001702CBEA-000000001702CC79
void __cdecl VintageBoothUsedItemData::VintageBoothUsedItemData(VintageBoothUsedItemData *const this)
{
  __int64 v1; // rdx
  __int64 v2; // rsi
  __int64 v3; // rdx

  v1 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7)
                                                                                              + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
  if ( (_BYTE)v1 )
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3, v1);
  this->gadget_id = 0;
  v2 = ((_BYTE)this + 4) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_open, v2, v3);
  this->is_open = 0;
};

// Line 82: range 00000000149F4BFA-00000000149F4D0F
void __cdecl VintageCampChallengeLevelData::VintageCampChallengeLevelData(VintageCampChallengeLevelData *const this)
{
  __int64 v1; // rdx
  __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx

  v1 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7)
                                                                                              + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
  if ( (_BYTE)v1 )
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3, v1);
  this->level_id = 0;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store4(&this->stage_id, (((_BYTE)this + 4) & 7u) + 3, v2);
  this->stage_id = 0;
  v3 = ((_BYTE)this + 8) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_open, v3, v4);
  this->is_open = 0;
  v5 = ((_BYTE)this + 9) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->is_finish >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->is_finish >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->is_finish, v5, v6);
  this->is_finish = 0;
};

// Line 95: range 00000000149F4FFE-00000000149F5116
void __cdecl VintageCampChallengeStageData::VintageCampChallengeStageData(VintageCampChallengeStageData *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, this);
  }
  this->stage_id = 0;
  std::map<unsigned int,VintageCampChallengeLevelData>::map(&this->camp_level_map);
  if ( *(char *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_open, v1, &this->is_open);
  this->is_open = 0;
  v2 = ((_BYTE)this + 57) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_finish >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_finish >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_finish, v2, v3);
  this->is_finish = 0;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->max_finished_level >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_finished_level >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->max_finished_level, (((_BYTE)this + 60) & 7u) + 3, v4);
  this->max_finished_level = 0;
};

// Line 95: range 0000000014BD91AE-0000000014BD93C1
void __cdecl VintageCampChallengeStageData::VintageCampChallengeStageData(
        VintageCampChallengeStageData *const this,
        const VintageCampChallengeStageData *a2)
{
  uint32_t stage_id; // ecx
  char v3; // al
  std::map<unsigned int,VintageCampChallengeLevelData> *p_camp_level_map; // rsi
  bool is_open; // cl
  char v6; // al
  __int64 v7; // rsi
  bool is_finish; // cl
  char v9; // dl
  __int64 v10; // rdx
  __int64 v11; // rsi
  uint32_t max_finished_level; // ecx
  char v13; // dl
  __int64 v14; // rdx
  const VintageCampChallengeStageData *v15; // [rsp+0h] [rbp-10h]

  v15 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  stage_id = a2->stage_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2, this);
  }
  this->stage_id = stage_id;
  p_camp_level_map = &v15->camp_level_map;
  std::map<unsigned int,VintageCampChallengeLevelData>::map(&this->camp_level_map, &v15->camp_level_map);
  if ( *(char *)(((unsigned __int64)&v15->is_open >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v15->is_open);
  is_open = v15->is_open;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_camp_level_map) = v6 != 0;
    __asan_report_store1(&this->is_open, p_camp_level_map, &this->is_open);
  }
  this->is_open = is_open;
  v7 = ((_BYTE)v15 + 57) & 7;
  if ( *(_BYTE *)(((unsigned __int64)&v15->is_finish >> 3) + 0x7FFF8000) != 0
    && (char)v7 >= *(_BYTE *)(((unsigned __int64)&v15->is_finish >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&v15->is_finish);
  }
  is_finish = v15->is_finish;
  v9 = *(_BYTE *)(((unsigned __int64)&this->is_finish >> 3) + 0x7FFF8000);
  LOBYTE(v7) = v9 != 0;
  v10 = (v9 != 0) & (unsigned __int8)((((unsigned __int8)this + 57) & 7) >= v9);
  if ( (_BYTE)v10 )
    __asan_report_store1(&this->is_finish, v7, v10);
  this->is_finish = is_finish;
  v11 = (((_BYTE)v15 + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v15->max_finished_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v15 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->max_finished_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v15->max_finished_level);
  }
  max_finished_level = v15->max_finished_level;
  v13 = *(_BYTE *)(((unsigned __int64)&this->max_finished_level >> 3) + 0x7FFF8000);
  LOBYTE(v11) = v13 != 0;
  v14 = (v13 != 0) & (unsigned __int8)((char)((((_BYTE)this + 60) & 7) + 3) >= v13);
  if ( (_BYTE)v14 )
    __asan_report_store4(&this->max_finished_level, v11, v14);
  this->max_finished_level = max_finished_level;
};

// Line 95: range 00000000149F5118-00000000149F5136
void __cdecl VintageCampChallengeStageData::~VintageCampChallengeStageData(VintageCampChallengeStageData *const this)
{
  std::map<unsigned int,VintageCampChallengeLevelData>::~map(&this->camp_level_map);
};

// Line 108: range 00000000149F55C6-00000000149F564E
void __cdecl VintageMarketStoreData::VintageMarketStoreData(VintageMarketStoreData *const this)
{
  __int64 v1; // rsi
  uint32_t *p_slot_count; // rdx

  std::vector<unsigned int>::vector(&this->attr_vec);
  std::vector<unsigned int>::vector(&this->aim_attr_vec);
  std::map<unsigned int,std::vector<unsigned int>>::map(&this->attr_random_pool_map);
  p_slot_count = &this->slot_count;
  if ( *(_BYTE *)(((unsigned __int64)p_slot_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_slot_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->slot_count, v1, p_slot_count);
  }
  this->slot_count = 0;
  std::vector<unsigned int>::vector(&this->chosen_skill_vec);
};

// Line 108: range 0000000014BDF99E-0000000014BDFA89
void __cdecl VintageMarketStoreData::VintageMarketStoreData(
        VintageMarketStoreData *const this,
        VintageMarketStoreData *a2)
{
  std::map<unsigned int,std::vector<unsigned int>> *p_attr_random_pool_map; // rsi
  uint32_t slot_count; // ecx
  char v4; // al

  std::vector<unsigned int>::vector(&this->attr_vec, &a2->attr_vec);
  std::vector<unsigned int>::vector(&this->aim_attr_vec, &a2->aim_attr_vec);
  p_attr_random_pool_map = &a2->attr_random_pool_map;
  std::map<unsigned int,std::vector<unsigned int>>::map(&this->attr_random_pool_map, p_attr_random_pool_map);
  if ( *(_BYTE *)(((unsigned __int64)&a2->slot_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->slot_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->slot_count);
  }
  slot_count = a2->slot_count;
  v4 = *(_BYTE *)(((unsigned __int64)&this->slot_count >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(p_attr_random_pool_map) = v4 != 0;
    __asan_report_store4(&this->slot_count, p_attr_random_pool_map, &this->slot_count);
  }
  this->slot_count = slot_count;
  std::vector<unsigned int>::vector(&this->chosen_skill_vec, &a2->chosen_skill_vec);
};

// Line 108: range 0000000014BE1476-0000000014BE15AE
void __cdecl VintageMarketStoreData::VintageMarketStoreData(
        VintageMarketStoreData *const this,
        const VintageMarketStoreData *a2)
{
  std::map<unsigned int,std::vector<unsigned int>> *p_attr_random_pool_map; // rsi
  uint32_t slot_count; // ecx
  char v4; // al

  std::vector<unsigned int>::vector(&this->attr_vec, &a2->attr_vec);
  std::vector<unsigned int>::vector(&this->aim_attr_vec, &a2->aim_attr_vec);
  p_attr_random_pool_map = &a2->attr_random_pool_map;
  std::map<unsigned int,std::vector<unsigned int>>::map(&this->attr_random_pool_map, p_attr_random_pool_map);
  if ( *(_BYTE *)(((unsigned __int64)&a2->slot_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->slot_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->slot_count);
  }
  slot_count = a2->slot_count;
  v4 = *(_BYTE *)(((unsigned __int64)&this->slot_count >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(p_attr_random_pool_map) = v4 != 0;
    __asan_report_store4(&this->slot_count, p_attr_random_pool_map, &this->slot_count);
  }
  this->slot_count = slot_count;
  std::vector<unsigned int>::vector(&this->chosen_skill_vec, &a2->chosen_skill_vec);
};

// Line 108: range 00000000149F5650-00000000149F569A
void __cdecl VintageMarketStoreData::~VintageMarketStoreData(VintageMarketStoreData *const this)
{
  std::vector<unsigned int>::~vector(&this->chosen_skill_vec);
  std::map<unsigned int,std::vector<unsigned int>>::~map(&this->attr_random_pool_map);
  std::vector<unsigned int>::~vector(&this->aim_attr_vec);
  std::vector<unsigned int>::~vector(&this->attr_vec);
};

// Line 117: range 0000000014D2469A-0000000014D246C4
void __cdecl VintageActivity::~VintageActivity(VintageActivity *const this)
{
  VintageActivity::~VintageActivity(this);
  operator delete(this, 0x6F0uLL);
};

// Line 117: range 0000000014D2453E-0000000014D24699
void __cdecl VintageActivity::~VintageActivity(VintageActivity *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'VintageActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  std::map<unsigned int,std::pair<unsigned int,unsigned int>>::~map(&this->dividend_info_map_);
  std::unordered_set<unsigned int>::~unordered_set(&this->viewed_skill_set_);
  std::unordered_set<unsigned int>::~unordered_set(&this->unlock_skill_set_);
  std::unordered_map<unsigned int,std::pair<unsigned int,bool>>::~unordered_map(&this->npc_to_round_finish_map_);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->env_to_round_map_);
  std::vector<unsigned int>::~vector(&this->store_round_income_vec_);
  std::map<unsigned int,VintageMarketStoreData>::~map(&this->store_map_);
  std::unordered_map<unsigned int,std::pair<unsigned int,bool>>::~unordered_map(&this->bargain_price_map_);
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::~unordered_map(&this->trader_deal_item_map_);
  std::map<std::type_index,std::weak_ptr<Observer>>::~map(&this->event_observer_map_);
  std::map<unsigned int,VintageCampChallengeStageData>::~map(&this->camp_stage_map_);
  std::set<unsigned int>::~set(&this->taken_reward_present_id_set_);
  std::map<unsigned int,VintagePresentStageData>::~map(&this->present_stage_map_);
  std::map<unsigned int,VintageHuntingStageData>::~map(&this->hunting_stage_map_);
  std::map<proto::VirtualItem,unsigned int>::~map(&this->activity_coin_map_);
  BaseActivity::~BaseActivity((BaseActivity *const)this);
};

// Line 120: range 000000001702CE7C-000000001702D583
void __fastcall ZN15VintageActivityCI212BaseActivityER6Playerj(VintageActivity *const this, Player *a2, int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int (**v6)(...); // rdx
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
  __int64 v21; // rdx
  char v23[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ZN15VintageActivityCI212BaseActivityER6Playerj;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  BaseActivity::BaseActivity((BaseActivity *const)this, a2, *(_DWORD *)(v3 + 32));
  v6 = (int (**)(...))(&`vtable for'VintageActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_DescribalBase = v6;
  HuntingTransferContext::HuntingTransferContext(&this->transfer_context_);
  std::map<proto::VirtualItem,unsigned int>::map(&this->activity_coin_map_);
  std::map<unsigned int,VintageHuntingStageData>::map(&this->hunting_stage_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->boss_weak_times_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->boss_weak_times_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->boss_weak_times_, a2, &this->boss_weak_times_);
  }
  this->boss_weak_times_ = 0;
  std::map<unsigned int,VintagePresentStageData>::map(&this->present_stage_map_);
  VintageBoothUsedItemData::VintageBoothUsedItemData(&this->booth_data_);
  if ( *(_BYTE *)(((unsigned __int64)&this->collected_item_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->collected_item_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->collected_item_num_, a2, &this->collected_item_num_);
  }
  this->collected_item_num_ = 0;
  std::set<unsigned int>::set(&this->taken_reward_present_id_set_);
  std::map<unsigned int,VintageCampChallengeStageData>::map(&this->camp_stage_map_);
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_content_closed_, a2, &this->is_content_closed_);
  this->is_content_closed_ = 0;
  std::map<std::type_index,std::weak_ptr<Observer>>::map(&this->event_observer_map_);
  if ( *(char *)(((unsigned __int64)&this->is_market_content_open_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_market_content_open_, a2, &this->is_market_content_open_);
  this->is_market_content_open_ = 0;
  v7 = ((_BYTE)this - 15) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->is_market_content_finish_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->is_market_content_finish_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->is_market_content_finish_, v7, v8);
  this->is_market_content_finish_ = 0;
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::unordered_map(&this->trader_deal_item_map_);
  std::unordered_map<unsigned int,std::pair<unsigned int,bool>>::unordered_map(&this->bargain_price_map_);
  if ( *(char *)(((unsigned __int64)&this->is_store_content_finish_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_store_content_finish_, v7, &this->is_store_content_finish_);
  this->is_store_content_finish_ = 0;
  v9 = ((_BYTE)this + 105) & 7;
  v10 = (*(_BYTE *)(((unsigned __int64)&this->is_store_content_interrupt_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)&this->is_store_content_interrupt_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_store1(&this->is_store_content_interrupt_, v9, v10);
  this->is_store_content_interrupt_ = 0;
  std::map<unsigned int,VintageMarketStoreData>::map(&this->store_map_);
  std::vector<unsigned int>::vector(&this->store_round_income_vec_);
  if ( *(_BYTE *)(((unsigned __int64)&this->store_round_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->store_round_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->store_round_, v9, &this->store_round_);
  }
  this->store_round_ = 0;
  v11 = (((_BYTE)this - 68) & 7u) + 3;
  v12 = (*(_BYTE *)(((unsigned __int64)&this->prev_coin_b_num_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->prev_coin_b_num_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v12 )
    __asan_report_store4(&this->prev_coin_b_num_, v11, v12);
  this->prev_coin_b_num_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->prev_coin_c_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->prev_coin_c_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->prev_coin_c_num_, v11, &this->prev_coin_c_num_);
  }
  this->prev_coin_c_num_ = 0;
  v13 = ((_BYTE)this - 60) & 7;
  v14 = (*(_BYTE *)(((unsigned __int64)&this->is_round_tips_view_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v13 >= *(_BYTE *)(((unsigned __int64)&this->is_round_tips_view_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v14 )
    __asan_report_store1(&this->is_round_tips_view_, v13, v14);
  this->is_round_tips_view_ = 0;
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->env_to_round_map_);
  std::unordered_map<unsigned int,std::pair<unsigned int,bool>>::unordered_map(&this->npc_to_round_finish_map_);
  std::unordered_set<unsigned int>::unordered_set(&this->unlock_skill_set_);
  std::unordered_set<unsigned int>::unordered_set(&this->viewed_skill_set_);
  if ( *(char *)(((unsigned __int64)&this->is_strategy_module_open_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_strategy_module_open_, v13, &this->is_strategy_module_open_);
  this->is_strategy_module_open_ = 0;
  v15 = ((_BYTE)this - 87) & 7;
  v16 = (*(_BYTE *)(((unsigned __int64)&this->is_help_module_open_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v15 >= *(_BYTE *)(((unsigned __int64)&this->is_help_module_open_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v16 )
    __asan_report_store1(&this->is_help_module_open_, v15, v16);
  this->is_help_module_open_ = 0;
  v17 = (((_BYTE)this - 84) & 7u) + 3;
  v18 = (*(_BYTE *)(((unsigned __int64)&this->next_can_use_help_round_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->next_can_use_help_round_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v18 )
    __asan_report_store4(&this->next_can_use_help_round_, v17, v18);
  this->next_can_use_help_round_ = 0;
  if ( *(char *)(((unsigned __int64)&this->is_in_store_settle_duration_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_in_store_settle_duration_, v17, &this->is_in_store_settle_duration_);
  this->is_in_store_settle_duration_ = 0;
  v19 = (((_BYTE)this - 76) & 7u) + 3;
  v20 = (*(_BYTE *)(((unsigned __int64)&this->help_skill_id_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->help_skill_id_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v20 )
    __asan_report_store4(&this->help_skill_id_, v19, v20);
  this->help_skill_id_ = 0;
  std::map<unsigned int,std::pair<unsigned int,unsigned int>>::map(&this->dividend_info_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->dividend_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dividend_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dividend_id_, v19, &this->dividend_id_);
  }
  this->dividend_id_ = 0;
  v21 = (*(_BYTE *)(((unsigned __int64)&this->dividend_reward_count_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dividend_reward_count_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v21 )
    __asan_report_store4(&this->dividend_reward_count_, (((_BYTE)this - 20) & 7u) + 3, v21);
  this->dividend_reward_count_ = 0;
  if ( v23 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 151: range 00000000149EE818-00000000149EE826
proto::FriendBriefRequestReason __cdecl VintageActivity::getGiveReasonType(VintageActivity *const this)
{
  return 5;
};
