// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ActivityPlantFlowerExcelConfig.gen.h

// Line 17: range 0000000012ED2B26-0000000012ED2D4F
void __cdecl data::ActivityPlantFlowerMainExcelConfig::ActivityPlantFlowerMainExcelConfig(
        data::ActivityPlantFlowerMainExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::ActivityPlantFlowerMainExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityPlantFlowerMainExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->schedule_id, v1);
  }
  this->schedule_id = 0;
  std::vector<unsigned int>::vector(&this->seed_reward_id_list);
  std::vector<unsigned int>::vector(&this->flower_id_list);
  std::vector<unsigned int>::vector(&this->seed_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->max_wish_flower_kinds >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_wish_flower_kinds >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_wish_flower_kinds, v1);
  }
  this->max_wish_flower_kinds = 0;
  v3 = (((_BYTE)this + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->reward_preview_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reward_preview_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->reward_preview_id, v3);
  }
  this->reward_preview_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->guarantee_start_times >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->guarantee_start_times >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->guarantee_start_times, v3);
  }
  this->guarantee_start_times = 0;
  std::vector<unsigned int>::vector(&this->pre_quest_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->open_quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->open_quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->open_quest_id, v3);
  }
  this->open_quest_id = 0;
  std::vector<unsigned int>::vector(&this->group_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->content_day >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->content_day >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->content_day, v3);
  }
  this->content_day = 0;
  std::vector<unsigned int>::vector(&this->daily_config_id_list);
};

// Line 17: range 00000000133C74E2-00000000133C792E
void __cdecl data::ActivityPlantFlowerMainExcelConfig::ActivityPlantFlowerMainExcelConfig(
        data::ActivityPlantFlowerMainExcelConfig *const this,
        const data::ActivityPlantFlowerMainExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t schedule_id; // ecx
  char v4; // al
  std::vector<unsigned int> *p_seed_id_list; // rsi
  uint32_t max_wish_flower_kinds; // ecx
  char v7; // al
  __int64 v8; // rsi
  uint32_t reward_preview_id; // ecx
  char v10; // dl
  uint32_t guarantee_start_times; // ecx
  char v12; // al
  std::vector<unsigned int> *p_pre_quest_id_list; // rsi
  uint32_t open_quest_id; // ecx
  char v15; // al
  std::vector<unsigned int> *p_group_id_list; // rsi
  uint32_t content_day; // ecx
  char v18; // al
  const data::ActivityPlantFlowerMainExcelConfig *v19; // [rsp+0h] [rbp-20h]

  v19 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ActivityPlantFlowerMainExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivityPlantFlowerMainExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->schedule_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->schedule_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->schedule_id);
  }
  schedule_id = a2->schedule_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->schedule_id, a2);
  }
  this->schedule_id = schedule_id;
  std::vector<unsigned int>::vector(&this->seed_reward_id_list, &v19->seed_reward_id_list);
  std::vector<unsigned int>::vector(&this->flower_id_list, &v19->flower_id_list);
  p_seed_id_list = &v19->seed_id_list;
  std::vector<unsigned int>::vector(&this->seed_id_list, &v19->seed_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&v19->max_wish_flower_kinds >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v19->max_wish_flower_kinds >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v19->max_wish_flower_kinds);
  }
  max_wish_flower_kinds = v19->max_wish_flower_kinds;
  v7 = *(_BYTE *)(((unsigned __int64)&this->max_wish_flower_kinds >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_seed_id_list) = v7 != 0;
    __asan_report_store4(&this->max_wish_flower_kinds, p_seed_id_list);
  }
  this->max_wish_flower_kinds = max_wish_flower_kinds;
  v8 = (((_BYTE)v19 + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v19->reward_preview_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v19 + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v19->reward_preview_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v19->reward_preview_id);
  }
  reward_preview_id = v19->reward_preview_id;
  v10 = *(_BYTE *)(((unsigned __int64)&this->reward_preview_id >> 3) + 0x7FFF8000);
  if ( v10 != 0 && (char)((((_BYTE)this + 92) & 7) + 3) >= v10 )
  {
    LOBYTE(v8) = v10 != 0;
    __asan_report_store4(&this->reward_preview_id, v8);
  }
  this->reward_preview_id = reward_preview_id;
  if ( *(_BYTE *)(((unsigned __int64)&v19->guarantee_start_times >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v19->guarantee_start_times >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v19->guarantee_start_times);
  }
  guarantee_start_times = v19->guarantee_start_times;
  v12 = *(_BYTE *)(((unsigned __int64)&this->guarantee_start_times >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(v8) = v12 != 0;
    __asan_report_store4(&this->guarantee_start_times, v8);
  }
  this->guarantee_start_times = guarantee_start_times;
  p_pre_quest_id_list = &v19->pre_quest_id_list;
  std::vector<unsigned int>::vector(&this->pre_quest_id_list, &v19->pre_quest_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&v19->open_quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v19->open_quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v19->open_quest_id);
  }
  open_quest_id = v19->open_quest_id;
  v15 = *(_BYTE *)(((unsigned __int64)&this->open_quest_id >> 3) + 0x7FFF8000);
  if ( v15 != 0 && v15 <= 3 )
  {
    LOBYTE(p_pre_quest_id_list) = v15 != 0;
    __asan_report_store4(&this->open_quest_id, p_pre_quest_id_list);
  }
  this->open_quest_id = open_quest_id;
  p_group_id_list = &v19->group_id_list;
  std::vector<unsigned int>::vector(&this->group_id_list, &v19->group_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&v19->content_day >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v19->content_day >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v19->content_day);
  }
  content_day = v19->content_day;
  v18 = *(_BYTE *)(((unsigned __int64)&this->content_day >> 3) + 0x7FFF8000);
  if ( v18 != 0 && v18 <= 3 )
  {
    LOBYTE(p_group_id_list) = v18 != 0;
    __asan_report_store4(&this->content_day, p_group_id_list);
  }
  this->content_day = content_day;
  std::vector<unsigned int>::vector(&this->daily_config_id_list, &v19->daily_config_id_list);
};

// Line 20: range 0000000013423C2C-0000000013423CD1
void __cdecl data::ActivityPlantFlowerMainExcelConfig::~ActivityPlantFlowerMainExcelConfig(
        data::ActivityPlantFlowerMainExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityPlantFlowerMainExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityPlantFlowerMainExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->daily_config_id_list);
  std::vector<unsigned int>::~vector(&this->group_id_list);
  std::vector<unsigned int>::~vector(&this->pre_quest_id_list);
  std::vector<unsigned int>::~vector(&this->seed_id_list);
  std::vector<unsigned int>::~vector(&this->flower_id_list);
  std::vector<unsigned int>::~vector(&this->seed_reward_id_list);
};

// Line 20: range 0000000013423CD2-0000000013423CFC
void __cdecl data::ActivityPlantFlowerMainExcelConfig::~ActivityPlantFlowerMainExcelConfig(
        data::ActivityPlantFlowerMainExcelConfig *const this)
{
  data::ActivityPlantFlowerMainExcelConfig::~ActivityPlantFlowerMainExcelConfig(this);
  operator delete(this, 0xC0uLL);
};

// Line 42: range 0000000012ED2D50-0000000012ED2DEF
void __cdecl data::ActivityPlantFlowerDailyExcelConfig::ActivityPlantFlowerDailyExcelConfig(
        data::ActivityPlantFlowerDailyExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityPlantFlowerDailyExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityPlantFlowerDailyExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->daily_config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->daily_config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->daily_config_id, v1);
  }
  this->daily_config_id = 0;
  std::vector<data::IdCountConfig>::vector(&this->cost_item_list);
  std::vector<unsigned int>::vector(&this->reward_id_list);
};

// Line 42: range 00000000133C7A70-00000000133C7B87
void __cdecl data::ActivityPlantFlowerDailyExcelConfig::ActivityPlantFlowerDailyExcelConfig(
        data::ActivityPlantFlowerDailyExcelConfig *const this,
        const data::ActivityPlantFlowerDailyExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t daily_config_id; // ecx
  char v4; // al
  const data::ActivityPlantFlowerDailyExcelConfig *v5; // [rsp+0h] [rbp-20h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ActivityPlantFlowerDailyExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivityPlantFlowerDailyExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->daily_config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->daily_config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->daily_config_id);
  }
  daily_config_id = a2->daily_config_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->daily_config_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->daily_config_id, a2);
  }
  this->daily_config_id = daily_config_id;
  std::vector<data::IdCountConfig>::vector(&this->cost_item_list, &v5->cost_item_list);
  std::vector<unsigned int>::vector(&this->reward_id_list, &v5->reward_id_list);
};

// Line 45: range 0000000013423B9E-0000000013423BFF
void __cdecl data::ActivityPlantFlowerDailyExcelConfig::~ActivityPlantFlowerDailyExcelConfig(
        data::ActivityPlantFlowerDailyExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityPlantFlowerDailyExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityPlantFlowerDailyExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->reward_id_list);
  std::vector<data::IdCountConfig>::~vector(&this->cost_item_list);
};

// Line 45: range 0000000013423C00-0000000013423C2A
void __cdecl data::ActivityPlantFlowerDailyExcelConfig::~ActivityPlantFlowerDailyExcelConfig(
        data::ActivityPlantFlowerDailyExcelConfig *const this)
{
  data::ActivityPlantFlowerDailyExcelConfig::~ActivityPlantFlowerDailyExcelConfig(this);
  operator delete(this, 0x40uLL);
};
