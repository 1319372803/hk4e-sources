// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ActivityDeliveryExcelConfig.gen.h

// Line 17: range 0000000012EB8A62-0000000012EB8B2F
void __cdecl data::ActivityDeliveryExcelConfig::ActivityDeliveryExcelConfig(
        data::ActivityDeliveryExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityDeliveryExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityDeliveryExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->schedule_id, v1);
  }
  this->schedule_id = 0;
  std::vector<unsigned int>::vector(&this->daily_config_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->need_player_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->need_player_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->need_player_level, v1);
  }
  this->need_player_level = 0;
};

// Line 17: range 0000000013398C94-0000000013398DDE
void __cdecl data::ActivityDeliveryExcelConfig::ActivityDeliveryExcelConfig(
        data::ActivityDeliveryExcelConfig *const this,
        const data::ActivityDeliveryExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t schedule_id; // ecx
  char v4; // al
  std::vector<unsigned int> *p_daily_config_id_list; // rsi
  uint32_t need_player_level; // ecx
  char v7; // al
  const data::ActivityDeliveryExcelConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ActivityDeliveryExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivityDeliveryExcelConfig = v2;
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
  p_daily_config_id_list = &v8->daily_config_id_list;
  std::vector<unsigned int>::vector(&this->daily_config_id_list, &v8->daily_config_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&v8->need_player_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v8->need_player_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v8->need_player_level);
  }
  need_player_level = v8->need_player_level;
  v7 = *(_BYTE *)(((unsigned __int64)&this->need_player_level >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_daily_config_id_list) = v7 != 0;
    __asan_report_store4(&this->need_player_level, p_daily_config_id_list);
  }
  this->need_player_level = need_player_level;
};

// Line 20: range 00000000134265CC-000000001342661D
void __cdecl data::ActivityDeliveryExcelConfig::~ActivityDeliveryExcelConfig(
        data::ActivityDeliveryExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityDeliveryExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityDeliveryExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->daily_config_id_list);
};

// Line 20: range 000000001342661E-0000000013426648
void __cdecl data::ActivityDeliveryExcelConfig::~ActivityDeliveryExcelConfig(
        data::ActivityDeliveryExcelConfig *const this)
{
  data::ActivityDeliveryExcelConfig::~ActivityDeliveryExcelConfig(this);
  operator delete(this, 0x30uLL);
};

// Line 33: range 0000000013323138-00000000133232CF
void __cdecl data::DeliveryQuestConfig::DeliveryQuestConfig(data::DeliveryQuestConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  v2 = (int (**)(...))(&`vtable for'data::DeliveryQuestConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DeliveryQuestConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->parent_quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->parent_quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->parent_quest_id, v1);
  }
  this->parent_quest_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->delivery_quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->delivery_quest_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->delivery_quest_id, v3);
  }
  this->delivery_quest_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->start_quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->start_quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->start_quest_id, v3);
  }
  this->start_quest_id = 0;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->talk_quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->talk_quest_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->talk_quest_id, v4);
  }
  this->talk_quest_id = 0;
  std::vector<unsigned int>::vector(&this->watcher_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->item_id, v4);
  }
  this->item_id = 0;
};

// Line 33: range 0000000013398948-0000000013398C11
void __cdecl data::DeliveryQuestConfig::DeliveryQuestConfig(
        data::DeliveryQuestConfig *const this,
        const data::DeliveryQuestConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t parent_quest_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t delivery_quest_id; // ecx
  char v7; // dl
  uint32_t start_quest_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t talk_quest_id; // ecx
  char v12; // dl
  std::vector<unsigned int> *p_watcher_id; // rsi
  uint32_t item_id; // ecx
  char v15; // al
  const data::DeliveryQuestConfig *v16; // [rsp+0h] [rbp-10h]

  v16 = a2;
  v2 = (int (**)(...))(&`vtable for'data::DeliveryQuestConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_DeliveryQuestConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->parent_quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->parent_quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->parent_quest_id);
  }
  parent_quest_id = a2->parent_quest_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->parent_quest_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->parent_quest_id, a2);
  }
  this->parent_quest_id = parent_quest_id;
  v5 = (((_BYTE)v16 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v16->delivery_quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v16 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v16->delivery_quest_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v16->delivery_quest_id);
  }
  delivery_quest_id = v16->delivery_quest_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->delivery_quest_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->delivery_quest_id, v5);
  }
  this->delivery_quest_id = delivery_quest_id;
  if ( *(_BYTE *)(((unsigned __int64)&v16->start_quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v16->start_quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v16->start_quest_id);
  }
  start_quest_id = v16->start_quest_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->start_quest_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->start_quest_id, v5);
  }
  this->start_quest_id = start_quest_id;
  v10 = (((_BYTE)v16 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v16->talk_quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v16 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v16->talk_quest_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v16->talk_quest_id);
  }
  talk_quest_id = v16->talk_quest_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->talk_quest_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->talk_quest_id, v10);
  }
  this->talk_quest_id = talk_quest_id;
  p_watcher_id = &v16->watcher_id;
  std::vector<unsigned int>::vector(&this->watcher_id, &v16->watcher_id);
  if ( *(_BYTE *)(((unsigned __int64)&v16->item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v16->item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v16->item_id);
  }
  item_id = v16->item_id;
  v15 = *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000);
  if ( v15 != 0 && v15 <= 3 )
  {
    LOBYTE(p_watcher_id) = v15 != 0;
    __asan_report_store4(&this->item_id, p_watcher_id);
  }
  this->item_id = item_id;
};

// Line 36: range 000000001328144A-000000001328149B
void __cdecl data::DeliveryQuestConfig::~DeliveryQuestConfig(data::DeliveryQuestConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::DeliveryQuestConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DeliveryQuestConfig = v2;
  std::vector<unsigned int>::~vector(&this->watcher_id);
};

// Line 36: range 000000001328149C-00000000132814C6
void __cdecl data::DeliveryQuestConfig::~DeliveryQuestConfig(data::DeliveryQuestConfig *const this)
{
  data::DeliveryQuestConfig::~DeliveryQuestConfig(this);
  operator delete(this, 0x38uLL);
};

// Line 50: range 0000000012EB8B84-0000000012EB8C51
void __cdecl data::ActivityDeliveryDailyExcelConfig::ActivityDeliveryDailyExcelConfig(
        data::ActivityDeliveryDailyExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityDeliveryDailyExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityDeliveryDailyExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->daily_config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->daily_config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->daily_config_id, v1);
  }
  this->daily_config_id = 0;
  std::vector<data::DeliveryQuestConfig>::vector(&this->delivery_quest_config);
  if ( *(_BYTE *)(((unsigned __int64)&this->daily_reward_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->daily_reward_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->daily_reward_id, v1);
  }
  this->daily_reward_id = 0;
};

// Line 50: range 0000000013398F20-000000001339906A
void __cdecl data::ActivityDeliveryDailyExcelConfig::ActivityDeliveryDailyExcelConfig(
        data::ActivityDeliveryDailyExcelConfig *const this,
        const data::ActivityDeliveryDailyExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t daily_config_id; // ecx
  char v4; // al
  std::vector<data::DeliveryQuestConfig> *p_delivery_quest_config; // rsi
  uint32_t daily_reward_id; // ecx
  char v7; // al
  const data::ActivityDeliveryDailyExcelConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ActivityDeliveryDailyExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivityDeliveryDailyExcelConfig = v2;
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
  p_delivery_quest_config = &v8->delivery_quest_config;
  std::vector<data::DeliveryQuestConfig>::vector(&this->delivery_quest_config, &v8->delivery_quest_config);
  if ( *(_BYTE *)(((unsigned __int64)&v8->daily_reward_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v8->daily_reward_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v8->daily_reward_id);
  }
  daily_reward_id = v8->daily_reward_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->daily_reward_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_delivery_quest_config) = v7 != 0;
    __asan_report_store4(&this->daily_reward_id, p_delivery_quest_config);
  }
  this->daily_reward_id = daily_reward_id;
};

// Line 53: range 000000001342654E-000000001342659F
void __cdecl data::ActivityDeliveryDailyExcelConfig::~ActivityDeliveryDailyExcelConfig(
        data::ActivityDeliveryDailyExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityDeliveryDailyExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityDeliveryDailyExcelConfig = v2;
  std::vector<data::DeliveryQuestConfig>::~vector(&this->delivery_quest_config);
};

// Line 53: range 00000000134265A0-00000000134265CA
void __cdecl data::ActivityDeliveryDailyExcelConfig::~ActivityDeliveryDailyExcelConfig(
        data::ActivityDeliveryDailyExcelConfig *const this)
{
  data::ActivityDeliveryDailyExcelConfig::~ActivityDeliveryDailyExcelConfig(this);
  operator delete(this, 0x30uLL);
};

// Line 66: range 0000000012EB8C52-0000000012EB8C9F
void __cdecl data::ActivityDeliveryWatcherDataConfig::ActivityDeliveryWatcherDataConfig(
        data::ActivityDeliveryWatcherDataConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::WatcherConfig::WatcherConfig(this);
  v2 = (int (**)(...))(&`vtable for'data::ActivityDeliveryWatcherDataConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WatcherConfig = v2;
};

// Line 66: range 00000000133991AC-0000000013399204
void __cdecl data::ActivityDeliveryWatcherDataConfig::ActivityDeliveryWatcherDataConfig(
        data::ActivityDeliveryWatcherDataConfig *const this,
        const data::ActivityDeliveryWatcherDataConfig *a2)
{
  int (**v2)(...); // rdx

  data::WatcherConfig::WatcherConfig(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ActivityDeliveryWatcherDataConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_WatcherConfig = v2;
};

// Line 70: range 00000000134264D4-0000000013426521
void __cdecl data::ActivityDeliveryWatcherDataConfig::~ActivityDeliveryWatcherDataConfig(
        data::ActivityDeliveryWatcherDataConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityDeliveryWatcherDataConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WatcherConfig = v2;
  data::WatcherConfig::~WatcherConfig(this);
};

// Line 70: range 0000000013426522-000000001342654C
void __cdecl data::ActivityDeliveryWatcherDataConfig::~ActivityDeliveryWatcherDataConfig(
        data::ActivityDeliveryWatcherDataConfig *const this)
{
  data::ActivityDeliveryWatcherDataConfig::~ActivityDeliveryWatcherDataConfig(this);
  operator delete(this, 0x70uLL);
};
