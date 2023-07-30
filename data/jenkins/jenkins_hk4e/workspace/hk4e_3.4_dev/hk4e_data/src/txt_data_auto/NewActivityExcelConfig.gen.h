// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/NewActivityExcelConfig.gen.h

// Line 75: range 000000000F19DF94-000000000F19E069
void __cdecl data::NewActivityExec::NewActivityExec(data::NewActivityExec *const this, const data::NewActivityExec *a2)
{
  int (**v2)(...); // rdx
  data::NewActivityActionType type; // ecx
  char v4; // al
  const data::NewActivityExec *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::NewActivityExec + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_NewActivityExec = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->type);
  }
  type = a2->type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->type, a2);
  }
  this->type = type;
  std::vector<std::string>::vector(&this->param, &v5->param);
};

// Line 508: range 000000000F19E230-000000000F19E469
void __cdecl data::NewActivityItemLimitExcelConfig::NewActivityItemLimitExcelConfig(
        data::NewActivityItemLimitExcelConfig *const this,
        const data::NewActivityItemLimitExcelConfig *a2)
{
  int (**v2)(...); // rdx
  data::NewActivityType activity_type; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::ItemLimitType reward_item_limit_type; // ecx
  char v7; // dl
  data::ItemLimitType drop_item_limit_type; // ecx
  char v9; // al
  __int64 v10; // rsi
  data::ItemLimitType avatar_limit_type; // ecx
  char v12; // dl
  const data::NewActivityItemLimitExcelConfig *v13; // [rsp+0h] [rbp-10h]

  v13 = a2;
  v2 = (int (**)(...))(&`vtable for'data::NewActivityItemLimitExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_NewActivityItemLimitExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->activity_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->activity_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->activity_type);
  }
  activity_type = a2->activity_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->activity_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->activity_type, a2);
  }
  this->activity_type = activity_type;
  v5 = (((_BYTE)v13 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->reward_item_limit_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->reward_item_limit_type >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->reward_item_limit_type);
  }
  reward_item_limit_type = v13->reward_item_limit_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->reward_item_limit_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->reward_item_limit_type, v5);
  }
  this->reward_item_limit_type = reward_item_limit_type;
  if ( *(_BYTE *)(((unsigned __int64)&v13->drop_item_limit_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->drop_item_limit_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->drop_item_limit_type);
  }
  drop_item_limit_type = v13->drop_item_limit_type;
  v9 = *(_BYTE *)(((unsigned __int64)&this->drop_item_limit_type >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->drop_item_limit_type, v5);
  }
  this->drop_item_limit_type = drop_item_limit_type;
  v10 = (((_BYTE)v13 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->avatar_limit_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->avatar_limit_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->avatar_limit_type);
  }
  avatar_limit_type = v13->avatar_limit_type;
  v12 = *(_BYTE *)(((unsigned __int64)&this->avatar_limit_type >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->avatar_limit_type, v10);
  }
  this->avatar_limit_type = avatar_limit_type;
};

// Line 511: range 000000000F1C60D8-000000000F1C6119
void __cdecl data::NewActivityItemLimitExcelConfig::~NewActivityItemLimitExcelConfig(
        data::NewActivityItemLimitExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::NewActivityItemLimitExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_NewActivityItemLimitExcelConfig = v2;
};

// Line 511: range 000000000F1C611A-000000000F1C6144
void __cdecl data::NewActivityItemLimitExcelConfig::~NewActivityItemLimitExcelConfig(
        data::NewActivityItemLimitExcelConfig *const this)
{
  data::NewActivityItemLimitExcelConfig::~NewActivityItemLimitExcelConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 525: range 000000000F01EEC8-000000000F01F083
void __cdecl data::NewActivityExcelConfig::NewActivityExcelConfig(data::NewActivityExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rdx

  v2 = (int (**)(...))(&`vtable for'data::NewActivityExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_NewActivityExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->activity_id, v1);
  }
  this->activity_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->activity_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->activity_type, v3);
  }
  this->activity_type = NEW_ACTIVITY_GENERAL;
  if ( *(char *)(((unsigned __int64)&this->is_load_terrain >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_load_terrain, v3, &this->is_load_terrain);
  this->is_load_terrain = 0;
  std::vector<unsigned int>::vector(&this->cond_group_id);
  std::vector<unsigned int>::vector(&this->watcher_id);
  if ( *(char *)(((unsigned __int64)&this->is_ban_client_ui >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_ban_client_ui, v3, &this->is_ban_client_ui);
  this->is_ban_client_ui = 0;
  v4 = ((_BYTE)this + 73) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->is_clear_activity_bin >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->is_clear_activity_bin >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->is_clear_activity_bin, v4, v5);
  this->is_clear_activity_bin = 0;
  std::vector<unsigned int>::vector(&this->activity_coin_id_list);
  std::vector<unsigned int>::vector(&this->dungeon_id_list);
};

// Line 525: range 000000000F19E5AA-000000000F19E912
void __cdecl data::NewActivityExcelConfig::NewActivityExcelConfig(
        data::NewActivityExcelConfig *const this,
        const data::NewActivityExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t activity_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::NewActivityType activity_type; // ecx
  char v7; // dl
  bool is_load_terrain; // cl
  char v9; // al
  std::vector<unsigned int> *p_watcher_id; // rsi
  bool is_ban_client_ui; // cl
  char v12; // al
  __int64 v13; // rsi
  __int64 v14; // rdx
  bool is_clear_activity_bin; // cl
  char v16; // dl
  __int64 v17; // rdx
  const data::NewActivityExcelConfig *v18; // [rsp+0h] [rbp-20h]

  v18 = a2;
  v2 = (int (**)(...))(&`vtable for'data::NewActivityExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_NewActivityExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->activity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->activity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->activity_id);
  }
  activity_id = a2->activity_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->activity_id, a2);
  }
  this->activity_id = activity_id;
  v5 = (((_BYTE)v18 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->activity_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->activity_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->activity_type);
  }
  activity_type = v18->activity_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->activity_type >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v7 != 0;
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
    __asan_report_store4(&this->activity_type, v5);
  this->activity_type = activity_type;
  if ( *(char *)(((unsigned __int64)&v18->is_load_terrain >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v18->is_load_terrain, v5, &v18->is_load_terrain);
  is_load_terrain = v18->is_load_terrain;
  v9 = *(_BYTE *)(((unsigned __int64)&this->is_load_terrain >> 3) + 0x7FFF8000);
  if ( v9 < 0 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store1(&this->is_load_terrain, v5, &this->is_load_terrain);
  }
  this->is_load_terrain = is_load_terrain;
  std::vector<unsigned int>::vector(&this->cond_group_id, &v18->cond_group_id);
  p_watcher_id = &v18->watcher_id;
  std::vector<unsigned int>::vector(&this->watcher_id, &v18->watcher_id);
  if ( *(char *)(((unsigned __int64)&v18->is_ban_client_ui >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v18->is_ban_client_ui, p_watcher_id, &v18->is_ban_client_ui);
  is_ban_client_ui = v18->is_ban_client_ui;
  v12 = *(_BYTE *)(((unsigned __int64)&this->is_ban_client_ui >> 3) + 0x7FFF8000);
  if ( v12 < 0 )
  {
    LOBYTE(p_watcher_id) = v12 != 0;
    __asan_report_store1(&this->is_ban_client_ui, p_watcher_id, &this->is_ban_client_ui);
  }
  this->is_ban_client_ui = is_ban_client_ui;
  v13 = ((_BYTE)v18 + 73) & 7;
  v14 = (*(_BYTE *)(((unsigned __int64)&v18->is_clear_activity_bin >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v13 >= *(_BYTE *)(((unsigned __int64)&v18->is_clear_activity_bin >> 3) + 0x7FFF8000));
  if ( (_BYTE)v14 )
    __asan_report_load1(&v18->is_clear_activity_bin, v13, v14);
  is_clear_activity_bin = v18->is_clear_activity_bin;
  v16 = *(_BYTE *)(((unsigned __int64)&this->is_clear_activity_bin >> 3) + 0x7FFF8000);
  LOBYTE(v13) = v16 != 0;
  v17 = (v16 != 0) & (unsigned __int8)((((unsigned __int8)this + 73) & 7) >= v16);
  if ( (_BYTE)v17 )
    __asan_report_store1(&this->is_clear_activity_bin, v13, v17);
  this->is_clear_activity_bin = is_clear_activity_bin;
  std::vector<unsigned int>::vector(&this->activity_coin_id_list, &v18->activity_coin_id_list);
  std::vector<unsigned int>::vector(&this->dungeon_id_list, &v18->dungeon_id_list);
};

// Line 528: range 000000000F1C602A-000000000F1C60AB
void __cdecl data::NewActivityExcelConfig::~NewActivityExcelConfig(data::NewActivityExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::NewActivityExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_NewActivityExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->dungeon_id_list);
  std::vector<unsigned int>::~vector(&this->activity_coin_id_list);
  std::vector<unsigned int>::~vector(&this->watcher_id);
  std::vector<unsigned int>::~vector(&this->cond_group_id);
};

// Line 528: range 000000000F1C60AC-000000000F1C60D6
void __cdecl data::NewActivityExcelConfig::~NewActivityExcelConfig(data::NewActivityExcelConfig *const this)
{
  data::NewActivityExcelConfig::~NewActivityExcelConfig(this);
  operator delete(this, 0x80uLL);
};

// Line 547: range 000000000F180480-000000000F18050F
void __cdecl data::NewActivityScheduleCond::NewActivityScheduleCond(data::NewActivityScheduleCond *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::NewActivityScheduleCond + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_NewActivityScheduleCond = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->type, v1);
  }
  this->type = NEW_ACTIVITY_SCHEDULE_COND_NONE;
  std::vector<int>::vector(&this->param);
};

// Line 547: range 000000000F19DD0C-000000000F19DDE1
void __cdecl data::NewActivityScheduleCond::NewActivityScheduleCond(
        data::NewActivityScheduleCond *const this,
        const data::NewActivityScheduleCond *a2)
{
  int (**v2)(...); // rdx
  data::NewActivityScheduleCondType type; // ecx
  char v4; // al
  const data::NewActivityScheduleCond *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::NewActivityScheduleCond + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_NewActivityScheduleCond = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->type);
  }
  type = a2->type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->type, a2);
  }
  this->type = type;
  std::vector<int>::vector(&this->param, &v5->param);
};

// Line 550: range 000000000F155880-000000000F1558AA
void __cdecl data::NewActivityScheduleCond::~NewActivityScheduleCond(data::NewActivityScheduleCond *const this)
{
  data::NewActivityScheduleCond::~NewActivityScheduleCond(this);
  operator delete(this, 0x28uLL);
};

// Line 550: range 000000000F15582E-000000000F15587F
void __cdecl data::NewActivityScheduleCond::~NewActivityScheduleCond(data::NewActivityScheduleCond *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::NewActivityScheduleCond + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_NewActivityScheduleCond = v2;
  std::vector<int>::~vector(&this->param);
};

// Line 560: range 000000000F01F0D8-000000000F01F2E9
void __cdecl data::NewActivityScheduleExcelConfig::NewActivityScheduleExcelConfig(
        data::NewActivityScheduleExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rdx

  v2 = (int (**)(...))(&`vtable for'data::NewActivityScheduleExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_NewActivityScheduleExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->schedule_id, v1);
  }
  this->schedule_id = 0;
  std::string::basic_string(&this->begin_time_str);
  std::string::basic_string(&this->end_time_str);
  if ( *(_BYTE *)(((unsigned __int64)&this->begin_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->begin_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->begin_time, v1);
  }
  this->begin_time = 0;
  v3 = (((_BYTE)this + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->end_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->end_time, v3);
  }
  this->end_time = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->activity_id, v3);
  }
  this->activity_id = 0;
  v4 = ((_BYTE)this + 92) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->allow_quick_open >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->allow_quick_open >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->allow_quick_open, v4, v5);
  this->allow_quick_open = 0;
  std::vector<unsigned int>::vector(&this->quick_open_pre_quest_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->cond_comb >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cond_comb >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cond_comb, v4);
  }
  this->cond_comb = LOGIC_NONE;
  std::vector<data::NewActivityScheduleCond>::vector(&this->cond);
  std::string::basic_string(&this->schedule_version);
};

// Line 560: range 000000000F19EA54-000000000F19EE64
void __cdecl data::NewActivityScheduleExcelConfig::NewActivityScheduleExcelConfig(
        data::NewActivityScheduleExcelConfig *const this,
        const data::NewActivityScheduleExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t schedule_id; // ecx
  char v4; // al
  std::string *p_end_time_str; // rsi
  uint32_t begin_time; // ecx
  char v7; // al
  __int64 v8; // rsi
  uint32_t end_time; // ecx
  char v10; // dl
  uint32_t activity_id; // ecx
  char v12; // al
  __int64 v13; // rsi
  __int64 v14; // rdx
  bool allow_quick_open; // cl
  char v16; // dl
  __int64 v17; // rdx
  std::vector<unsigned int> *p_quick_open_pre_quest_list; // rsi
  data::LogicType cond_comb; // ecx
  char v20; // al
  const data::NewActivityScheduleExcelConfig *v21; // [rsp+0h] [rbp-20h]

  v21 = a2;
  v2 = (int (**)(...))(&`vtable for'data::NewActivityScheduleExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_NewActivityScheduleExcelConfig = v2;
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
  std::string::basic_string(&this->begin_time_str, &v21->begin_time_str);
  p_end_time_str = &v21->end_time_str;
  std::string::basic_string(&this->end_time_str, &v21->end_time_str);
  if ( *(_BYTE *)(((unsigned __int64)&v21->begin_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v21->begin_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v21->begin_time);
  }
  begin_time = v21->begin_time;
  v7 = *(_BYTE *)(((unsigned __int64)&this->begin_time >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_end_time_str) = v7 != 0;
    __asan_report_store4(&this->begin_time, p_end_time_str);
  }
  this->begin_time = begin_time;
  v8 = (((_BYTE)v21 + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v21->end_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v21 + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v21->end_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v21->end_time);
  }
  end_time = v21->end_time;
  v10 = *(_BYTE *)(((unsigned __int64)&this->end_time >> 3) + 0x7FFF8000);
  if ( v10 != 0 && (char)((((_BYTE)this + 84) & 7) + 3) >= v10 )
  {
    LOBYTE(v8) = v10 != 0;
    __asan_report_store4(&this->end_time, v8);
  }
  this->end_time = end_time;
  if ( *(_BYTE *)(((unsigned __int64)&v21->activity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v21->activity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v21->activity_id);
  }
  activity_id = v21->activity_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(v8) = v12 != 0;
    __asan_report_store4(&this->activity_id, v8);
  }
  this->activity_id = activity_id;
  v13 = ((_BYTE)v21 + 92) & 7;
  v14 = (*(_BYTE *)(((unsigned __int64)&v21->allow_quick_open >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v13 >= *(_BYTE *)(((unsigned __int64)&v21->allow_quick_open >> 3) + 0x7FFF8000));
  if ( (_BYTE)v14 )
    __asan_report_load1(&v21->allow_quick_open, v13, v14);
  allow_quick_open = v21->allow_quick_open;
  v16 = *(_BYTE *)(((unsigned __int64)&this->allow_quick_open >> 3) + 0x7FFF8000);
  LOBYTE(v13) = v16 != 0;
  v17 = (v16 != 0) & (unsigned __int8)((((unsigned __int8)this + 92) & 7) >= v16);
  if ( (_BYTE)v17 )
    __asan_report_store1(&this->allow_quick_open, v13, v17);
  this->allow_quick_open = allow_quick_open;
  p_quick_open_pre_quest_list = &v21->quick_open_pre_quest_list;
  std::vector<unsigned int>::vector(&this->quick_open_pre_quest_list, &v21->quick_open_pre_quest_list);
  if ( *(_BYTE *)(((unsigned __int64)&v21->cond_comb >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v21->cond_comb >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v21->cond_comb);
  }
  cond_comb = v21->cond_comb;
  v20 = *(_BYTE *)(((unsigned __int64)&this->cond_comb >> 3) + 0x7FFF8000);
  if ( v20 != 0 && v20 <= 3 )
  {
    LOBYTE(p_quick_open_pre_quest_list) = v20 != 0;
    __asan_report_store4(&this->cond_comb, p_quick_open_pre_quest_list);
  }
  this->cond_comb = cond_comb;
  std::vector<data::NewActivityScheduleCond>::vector(&this->cond, &v21->cond);
  std::string::basic_string(&this->schedule_version, &v21->schedule_version);
};

// Line 563: range 000000000F1C5F6A-000000000F1C5FFD
void __cdecl data::NewActivityScheduleExcelConfig::~NewActivityScheduleExcelConfig(
        data::NewActivityScheduleExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::NewActivityScheduleExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_NewActivityScheduleExcelConfig = v2;
  std::string::~string(&this->schedule_version);
  std::vector<data::NewActivityScheduleCond>::~vector(&this->cond);
  std::vector<unsigned int>::~vector(&this->quick_open_pre_quest_list);
  std::string::~string(&this->end_time_str);
  std::string::~string(&this->begin_time_str);
};

// Line 563: range 000000000F1C5FFE-000000000F1C6028
void __cdecl data::NewActivityScheduleExcelConfig::~NewActivityScheduleExcelConfig(
        data::NewActivityScheduleExcelConfig *const this)
{
  data::NewActivityScheduleExcelConfig::~NewActivityScheduleExcelConfig(this);
  operator delete(this, 0xB8uLL);
};

// Line 584: range 000000000F01F2EA-000000000F01F379
void __cdecl data::NewActivityCondGroupExcelConfig::NewActivityCondGroupExcelConfig(
        data::NewActivityCondGroupExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::NewActivityCondGroupExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_NewActivityCondGroupExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->group_id, v1);
  }
  this->group_id = 0;
  std::vector<unsigned int>::vector(&this->cond_id);
};

// Line 584: range 000000000F19EFA6-000000000F19F07B
void __cdecl data::NewActivityCondGroupExcelConfig::NewActivityCondGroupExcelConfig(
        data::NewActivityCondGroupExcelConfig *const this,
        const data::NewActivityCondGroupExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t group_id; // ecx
  char v4; // al
  const data::NewActivityCondGroupExcelConfig *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::NewActivityCondGroupExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_NewActivityCondGroupExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->group_id);
  }
  group_id = a2->group_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->group_id, a2);
  }
  this->group_id = group_id;
  std::vector<unsigned int>::vector(&this->cond_id, &v5->cond_id);
};

// Line 587: range 000000000F1C5EEC-000000000F1C5F3D
void __cdecl data::NewActivityCondGroupExcelConfig::~NewActivityCondGroupExcelConfig(
        data::NewActivityCondGroupExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::NewActivityCondGroupExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_NewActivityCondGroupExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->cond_id);
};

// Line 587: range 000000000F1C5F3E-000000000F1C5F68
void __cdecl data::NewActivityCondGroupExcelConfig::~NewActivityCondGroupExcelConfig(
        data::NewActivityCondGroupExcelConfig *const this)
{
  data::NewActivityCondGroupExcelConfig::~NewActivityCondGroupExcelConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 599: range 00000000135F2E6E-00000000135F2F13
data::NewActivityCond *__cdecl data::NewActivityCond::operator=(
        data::NewActivityCond *const this,
        const data::NewActivityCond *a2)
{
  data::NewActivityCondType type; // ecx
  char v3; // al
  const data::NewActivityCond *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->type);
  }
  type = a2->type;
  v3 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->type, a2);
  }
  this->type = type;
  std::vector<int>::operator=(&this->param, &v5->param);
  return this;
};

// Line 599: range 000000000F180672-000000000F180701
void __cdecl data::NewActivityCond::NewActivityCond(data::NewActivityCond *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::NewActivityCond + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_NewActivityCond = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->type, v1);
  }
  this->type = NEW_ACTIVITY_COND_NONE;
  std::vector<int>::vector(&this->param);
};

// Line 599: range 000000000F19DE50-000000000F19DF25
void __cdecl data::NewActivityCond::NewActivityCond(data::NewActivityCond *const this, const data::NewActivityCond *a2)
{
  int (**v2)(...); // rdx
  data::NewActivityCondType type; // ecx
  char v4; // al
  const data::NewActivityCond *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::NewActivityCond + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_NewActivityCond = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->type);
  }
  type = a2->type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->type, a2);
  }
  this->type = type;
  std::vector<int>::vector(&this->param, &v5->param);
};

// Line 602: range 000000000F15651E-000000000F156548
void __cdecl data::NewActivityCond::~NewActivityCond(data::NewActivityCond *const this)
{
  data::NewActivityCond::~NewActivityCond(this);
  operator delete(this, 0x28uLL);
};

// Line 602: range 000000000F1564CC-000000000F15651D
void __cdecl data::NewActivityCond::~NewActivityCond(data::NewActivityCond *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::NewActivityCond + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_NewActivityCond = v2;
  std::vector<int>::~vector(&this->param);
};

// Line 612: range 000000000F180864-000000000F1808F3
void __cdecl data::NewActivityExec::NewActivityExec(data::NewActivityExec *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::NewActivityExec + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_NewActivityExec = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->type, v1);
  }
  this->type = NEW_ACTIVITY_ACTION_NONE;
  std::vector<std::string>::vector(&this->param);
};

// Line 615: range 000000000F1565BA-000000000F15660B
void __cdecl data::NewActivityExec::~NewActivityExec(data::NewActivityExec *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::NewActivityExec + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_NewActivityExec = v2;
  std::vector<std::string>::~vector(&this->param);
};

// Line 615: range 000000000F15660C-000000000F156636
void __cdecl data::NewActivityExec::~NewActivityExec(data::NewActivityExec *const this)
{
  data::NewActivityExec::~NewActivityExec(this);
  operator delete(this, 0x28uLL);
};

// Line 625: range 000000000F01F422-000000000F01F5D3
void __cdecl data::NewActivityCondExcelConfig::NewActivityCondExcelConfig(data::NewActivityCondExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  v2 = (int (**)(...))(&`vtable for'data::NewActivityCondExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_NewActivityCondExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->cond_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cond_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cond_id, v1);
  }
  this->cond_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->default_state >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->default_state >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->default_state, v3);
  }
  this->default_state = NEW_ACTIVITY_COND_DEFAULT_STATE_FALSE;
  if ( *(char *)(((unsigned __int64)&this->is_notify_client >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_notify_client, v3, &this->is_notify_client);
  this->is_notify_client = 0;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->cond_comb >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cond_comb >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cond_comb, v4);
  }
  this->cond_comb = LOGIC_NONE;
  std::vector<data::NewActivityCond>::vector(&this->cond);
  std::vector<data::NewActivityExec>::vector(&this->meet_exec);
  std::vector<data::NewActivityExec>::vector(&this->expire_exec);
  if ( *(char *)(((unsigned __int64)&this->is_only_meet_once >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_only_meet_once, v4, &this->is_only_meet_once);
  this->is_only_meet_once = 0;
};

// Line 625: range 000000000F19F1BC-000000000F19F4F9
void __cdecl data::NewActivityCondExcelConfig::NewActivityCondExcelConfig(
        data::NewActivityCondExcelConfig *const this,
        const data::NewActivityCondExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t cond_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::NewActivityCondDefaultStateType default_state; // ecx
  char v7; // dl
  bool is_notify_client; // cl
  char v9; // al
  __int64 v10; // rsi
  data::LogicType cond_comb; // ecx
  char v12; // dl
  std::vector<data::NewActivityExec> *p_expire_exec; // rsi
  bool is_only_meet_once; // cl
  char v15; // al
  const data::NewActivityCondExcelConfig *v16; // [rsp+0h] [rbp-20h]

  v16 = a2;
  v2 = (int (**)(...))(&`vtable for'data::NewActivityCondExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_NewActivityCondExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->cond_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->cond_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->cond_id);
  }
  cond_id = a2->cond_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->cond_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->cond_id, a2);
  }
  this->cond_id = cond_id;
  v5 = (((_BYTE)v16 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v16->default_state >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v16 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v16->default_state >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v16->default_state);
  }
  default_state = v16->default_state;
  v7 = *(_BYTE *)(((unsigned __int64)&this->default_state >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v7 != 0;
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
    __asan_report_store4(&this->default_state, v5);
  this->default_state = default_state;
  if ( *(char *)(((unsigned __int64)&v16->is_notify_client >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v16->is_notify_client, v5, &v16->is_notify_client);
  is_notify_client = v16->is_notify_client;
  v9 = *(_BYTE *)(((unsigned __int64)&this->is_notify_client >> 3) + 0x7FFF8000);
  if ( v9 < 0 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store1(&this->is_notify_client, v5, &this->is_notify_client);
  }
  this->is_notify_client = is_notify_client;
  v10 = (((_BYTE)v16 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v16->cond_comb >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v16 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v16->cond_comb >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v16->cond_comb);
  }
  cond_comb = v16->cond_comb;
  v12 = *(_BYTE *)(((unsigned __int64)&this->cond_comb >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->cond_comb, v10);
  }
  this->cond_comb = cond_comb;
  std::vector<data::NewActivityCond>::vector(&this->cond, &v16->cond);
  std::vector<data::NewActivityExec>::vector(&this->meet_exec, &v16->meet_exec);
  p_expire_exec = &v16->expire_exec;
  std::vector<data::NewActivityExec>::vector(&this->expire_exec, &v16->expire_exec);
  if ( *(char *)(((unsigned __int64)&v16->is_only_meet_once >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v16->is_only_meet_once, p_expire_exec, &v16->is_only_meet_once);
  is_only_meet_once = v16->is_only_meet_once;
  v15 = *(_BYTE *)(((unsigned __int64)&this->is_only_meet_once >> 3) + 0x7FFF8000);
  if ( v15 < 0 )
  {
    LOBYTE(p_expire_exec) = v15 != 0;
    __asan_report_store1(&this->is_only_meet_once, p_expire_exec, &this->is_only_meet_once);
  }
  this->is_only_meet_once = is_only_meet_once;
};

// Line 628: range 000000000F1C5E4E-000000000F1C5EBF
void __cdecl data::NewActivityCondExcelConfig::~NewActivityCondExcelConfig(
        data::NewActivityCondExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::NewActivityCondExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_NewActivityCondExcelConfig = v2;
  std::vector<data::NewActivityExec>::~vector(&this->expire_exec);
  std::vector<data::NewActivityExec>::~vector(&this->meet_exec);
  std::vector<data::NewActivityCond>::~vector(&this->cond);
};

// Line 628: range 000000000F1C5EC0-000000000F1C5EEA
void __cdecl data::NewActivityCondExcelConfig::~NewActivityCondExcelConfig(
        data::NewActivityCondExcelConfig *const this)
{
  data::NewActivityCondExcelConfig::~NewActivityCondExcelConfig(this);
  operator delete(this, 0x68uLL);
};

// Line 646: range 000000000F180A56-000000000F180AE5
void __cdecl data::NewActivityDropSubjectConfig::NewActivityDropSubjectConfig(
        data::NewActivityDropSubjectConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::NewActivityDropSubjectConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_NewActivityDropSubjectConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->subject_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->subject_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->subject_type, v1);
  }
  this->subject_type = NEW_ACTIVITY_DROP_TYPE_NONE;
  std::string::basic_string(&this->drop_param);
};

// Line 646: range 000000000F19E0D8-000000000F19E1AD
void __cdecl data::NewActivityDropSubjectConfig::NewActivityDropSubjectConfig(
        data::NewActivityDropSubjectConfig *const this,
        const data::NewActivityDropSubjectConfig *a2)
{
  int (**v2)(...); // rdx
  data::NewActivityDropType subject_type; // ecx
  char v4; // al
  const data::NewActivityDropSubjectConfig *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::NewActivityDropSubjectConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_NewActivityDropSubjectConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->subject_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->subject_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->subject_type);
  }
  subject_type = a2->subject_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->subject_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->subject_type, a2);
  }
  this->subject_type = subject_type;
  std::string::basic_string(&this->drop_param, &v5->drop_param);
};

// Line 649: range 000000000F156C80-000000000F156CD1
void __cdecl data::NewActivityDropSubjectConfig::~NewActivityDropSubjectConfig(
        data::NewActivityDropSubjectConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::NewActivityDropSubjectConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_NewActivityDropSubjectConfig = v2;
  std::string::~string(&this->drop_param);
};

// Line 649: range 000000000F156CD2-000000000F156CFC
void __cdecl data::NewActivityDropSubjectConfig::~NewActivityDropSubjectConfig(
        data::NewActivityDropSubjectConfig *const this)
{
  data::NewActivityDropSubjectConfig::~NewActivityDropSubjectConfig(this);
  operator delete(this, 0x30uLL);
};

// Line 659: range 000000000F01F628-000000000F01F74B
void __cdecl data::NewActivityDropExcelConfig::NewActivityDropExcelConfig(data::NewActivityDropExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::NewActivityDropExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_NewActivityDropExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->activity_id, v1);
  }
  this->activity_id = 0;
  std::vector<unsigned int>::vector(&this->cond_id);
  std::vector<data::NewActivityDropSubjectConfig>::vector(&this->activity_drop_subject);
  if ( *(_BYTE *)(((unsigned __int64)&this->min_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->min_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->min_level, v1);
  }
  this->min_level = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->drop_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->drop_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->drop_id, (((_BYTE)this + 68) & 7u) + 3);
  }
  this->drop_id = 0;
};

// Line 659: range 000000000F0B0912-000000000F0B0B23
void __cdecl data::NewActivityDropExcelConfig::NewActivityDropExcelConfig(
        data::NewActivityDropExcelConfig *const this,
        const data::NewActivityDropExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t activity_id; // ecx
  char v4; // al
  std::vector<data::NewActivityDropSubjectConfig> *p_activity_drop_subject; // rsi
  uint32_t min_level; // ecx
  char v7; // al
  __int64 v8; // rsi
  uint32_t drop_id; // ecx
  char v10; // dl
  const data::NewActivityDropExcelConfig *v11; // [rsp+0h] [rbp-20h]

  v11 = a2;
  v2 = (int (**)(...))(&`vtable for'data::NewActivityDropExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_NewActivityDropExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->activity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->activity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->activity_id);
  }
  activity_id = a2->activity_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->activity_id, a2);
  }
  this->activity_id = activity_id;
  std::vector<unsigned int>::vector(&this->cond_id, &v11->cond_id);
  p_activity_drop_subject = &v11->activity_drop_subject;
  std::vector<data::NewActivityDropSubjectConfig>::vector(&this->activity_drop_subject, &v11->activity_drop_subject);
  if ( *(_BYTE *)(((unsigned __int64)&v11->min_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v11->min_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v11->min_level);
  }
  min_level = v11->min_level;
  v7 = *(_BYTE *)(((unsigned __int64)&this->min_level >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_activity_drop_subject) = v7 != 0;
    __asan_report_store4(&this->min_level, p_activity_drop_subject);
  }
  this->min_level = min_level;
  v8 = (((_BYTE)v11 + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v11->drop_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v11 + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v11->drop_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v11->drop_id);
  }
  drop_id = v11->drop_id;
  v10 = *(_BYTE *)(((unsigned __int64)&this->drop_id >> 3) + 0x7FFF8000);
  if ( v10 != 0 && (char)((((_BYTE)this + 68) & 7) + 3) >= v10 )
  {
    LOBYTE(v8) = v10 != 0;
    __asan_report_store4(&this->drop_id, v8);
  }
  this->drop_id = drop_id;
};

// Line 662: range 000000000F1C5E22-000000000F1C5E4C
void __cdecl data::NewActivityDropExcelConfig::~NewActivityDropExcelConfig(
        data::NewActivityDropExcelConfig *const this)
{
  data::NewActivityDropExcelConfig::~NewActivityDropExcelConfig(this);
  operator delete(this, 0x48uLL);
};

// Line 662: range 000000000F1C5DC0-000000000F1C5E21
void __cdecl data::NewActivityDropExcelConfig::~NewActivityDropExcelConfig(
        data::NewActivityDropExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::NewActivityDropExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_NewActivityDropExcelConfig = v2;
  std::vector<data::NewActivityDropSubjectConfig>::~vector(&this->activity_drop_subject);
  std::vector<unsigned int>::~vector(&this->cond_id);
};

// Line 677: range 000000000F01F74C-000000000F01F81A
void __cdecl data::NewActivityWatcherConfig::NewActivityWatcherConfig(data::NewActivityWatcherConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::WatcherConfig::WatcherConfig((data::WatcherConfig *const)this);
  v2 = (int (**)(...))(&`vtable for'data::NewActivityWatcherConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WatcherConfig = v2;
  v3 = (((_BYTE)this + 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->reward_id, v3);
  }
  this->reward_id = 0;
  if ( *(char *)(((unsigned __int64)&this->is_auto_grant >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_auto_grant, v3, &this->is_auto_grant);
  this->is_auto_grant = 0;
};

// Line 677: range 000000000F19F888-000000000F19F9DB
void __cdecl data::NewActivityWatcherConfig::NewActivityWatcherConfig(
        data::NewActivityWatcherConfig *const this,
        const data::NewActivityWatcherConfig *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  uint32_t reward_id; // ecx
  char v5; // dl
  bool is_auto_grant; // cl
  char v7; // al

  data::WatcherConfig::WatcherConfig((data::WatcherConfig *const)this, (const data::WatcherConfig *)a2);
  v2 = (int (**)(...))(&`vtable for'data::NewActivityWatcherConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_WatcherConfig = v2;
  v3 = (((_BYTE)a2 + 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->reward_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->reward_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->reward_id);
  }
  reward_id = a2->reward_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v5 != 0;
  if ( v5 != 0 && (char)((((_BYTE)this + 108) & 7) + 3) >= v5 )
    __asan_report_store4(&this->reward_id, v3);
  this->reward_id = reward_id;
  if ( *(char *)(((unsigned __int64)&a2->is_auto_grant >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_auto_grant, v3, &a2->is_auto_grant);
  is_auto_grant = a2->is_auto_grant;
  v7 = *(_BYTE *)(((unsigned __int64)&this->is_auto_grant >> 3) + 0x7FFF8000);
  if ( v7 < 0 )
  {
    LOBYTE(v3) = v7 != 0;
    __asan_report_store1(&this->is_auto_grant, v3, &this->is_auto_grant);
  }
  this->is_auto_grant = is_auto_grant;
};

// Line 681: range 000000000F1C5D94-000000000F1C5DBE
void __cdecl data::NewActivityWatcherConfig::~NewActivityWatcherConfig(data::NewActivityWatcherConfig *const this)
{
  data::NewActivityWatcherConfig::~NewActivityWatcherConfig(this);
  operator delete(this, 0x78uLL);
};

// Line 681: range 000000000F1C5D46-000000000F1C5D93
void __cdecl data::NewActivityWatcherConfig::~NewActivityWatcherConfig(data::NewActivityWatcherConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::NewActivityWatcherConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WatcherConfig = v2;
  data::WatcherConfig::~WatcherConfig((data::WatcherConfig *const)this);
};

// Line 693: range 000000000F19FB1C-000000000F19FCD0
void __cdecl data::NewActivityEntryConfig::NewActivityEntryConfig(
        data::NewActivityEntryConfig *const this,
        const data::NewActivityEntryConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::NewActivityType activity_type; // ecx
  char v7; // dl
  uint32_t duration; // ecx
  char v9; // al
  const data::NewActivityEntryConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::NewActivityEntryConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_NewActivityEntryConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->id);
  }
  id = a2->id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->id, a2);
  }
  this->id = id;
  v5 = (((_BYTE)v10 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->activity_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->activity_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->activity_type);
  }
  activity_type = v10->activity_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->activity_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->activity_type, v5);
  }
  this->activity_type = activity_type;
  if ( *(_BYTE *)(((unsigned __int64)&v10->duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->duration);
  }
  duration = v10->duration;
  v9 = *(_BYTE *)(((unsigned __int64)&this->duration >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->duration, v5);
  }
  this->duration = duration;
};

// Line 696: range 000000000F1C5CD8-000000000F1C5D19
void __cdecl data::NewActivityEntryConfig::~NewActivityEntryConfig(data::NewActivityEntryConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::NewActivityEntryConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_NewActivityEntryConfig = v2;
};

// Line 696: range 000000000F1C5D1A-000000000F1C5D44
void __cdecl data::NewActivityEntryConfig::~NewActivityEntryConfig(data::NewActivityEntryConfig *const this)
{
  data::NewActivityEntryConfig::~NewActivityEntryConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 709: range 000000000F01F81C-000000000F01F8F1
void __cdecl data::NewActivitySaleExcelConfig::NewActivitySaleExcelConfig(data::NewActivitySaleExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::NewActivitySaleExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_NewActivitySaleExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->sale_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->sale_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->sale_type, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->sale_type = NEW_ACTIVITY_SALE_TYPE_NONE;
  std::vector<std::string>::vector(&this->sale_param);
};

// Line 709: range 000000000F19FE12-000000000F19FF6C
void __cdecl data::NewActivitySaleExcelConfig::NewActivitySaleExcelConfig(
        data::NewActivitySaleExcelConfig *const this,
        const data::NewActivitySaleExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::NewActivitySaleType sale_type; // ecx
  char v7; // dl
  const data::NewActivitySaleExcelConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::NewActivitySaleExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_NewActivitySaleExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->id);
  }
  id = a2->id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->id, a2);
  }
  this->id = id;
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->sale_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->sale_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->sale_type);
  }
  sale_type = v8->sale_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->sale_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->sale_type, v5);
  }
  this->sale_type = sale_type;
  std::vector<std::string>::vector(&this->sale_param, &v8->sale_param);
};

// Line 712: range 000000000F1C5C5A-000000000F1C5CAB
void __cdecl data::NewActivitySaleExcelConfig::~NewActivitySaleExcelConfig(
        data::NewActivitySaleExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::NewActivitySaleExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_NewActivitySaleExcelConfig = v2;
  std::vector<std::string>::~vector(&this->sale_param);
};

// Line 712: range 000000000F1C5CAC-000000000F1C5CD6
void __cdecl data::NewActivitySaleExcelConfig::~NewActivitySaleExcelConfig(
        data::NewActivitySaleExcelConfig *const this)
{
  data::NewActivitySaleExcelConfig::~NewActivitySaleExcelConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 725: range 000000000F01F8F2-000000000F01FA6D
void __cdecl data::NewActivityAvatarSelectionExcelConfig::NewActivityAvatarSelectionExcelConfig(
        data::NewActivityAvatarSelectionExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::NewActivityAvatarSelectionExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_NewActivityAvatarSelectionExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->schedule_id, v1);
  }
  this->schedule_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->cond_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cond_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cond_id, v3);
  }
  this->cond_id = 0;
  std::vector<unsigned int>::vector(&this->watcher_id_list);
  std::vector<unsigned int>::vector(&this->avatar_reward_list);
  if ( *(char *)(((unsigned __int64)&this->is_not_consume_item >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_not_consume_item, v3, &this->is_not_consume_item);
  this->is_not_consume_item = 0;
  std::vector<unsigned int>::vector(&this->cost_item_id_list);
  std::vector<unsigned int>::vector(&this->cost_item_num_list);
  if ( *(char *)(((unsigned __int64)&this->is_blocked >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_blocked, v3, &this->is_blocked);
  this->is_blocked = 0;
};

// Line 725: range 000000000F1A00AE-000000000F1A0396
void __cdecl data::NewActivityAvatarSelectionExcelConfig::NewActivityAvatarSelectionExcelConfig(
        data::NewActivityAvatarSelectionExcelConfig *const this,
        const data::NewActivityAvatarSelectionExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t schedule_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t cond_id; // ecx
  char v7; // dl
  std::vector<unsigned int> *p_avatar_reward_list; // rsi
  bool is_not_consume_item; // cl
  char v10; // al
  std::vector<unsigned int> *p_cost_item_num_list; // rsi
  bool is_blocked; // cl
  char v13; // al
  const data::NewActivityAvatarSelectionExcelConfig *v14; // [rsp+0h] [rbp-20h]

  v14 = a2;
  v2 = (int (**)(...))(&`vtable for'data::NewActivityAvatarSelectionExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_NewActivityAvatarSelectionExcelConfig = v2;
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
  v5 = (((_BYTE)v14 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v14->cond_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v14 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v14->cond_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v14->cond_id);
  }
  cond_id = v14->cond_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->cond_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->cond_id, v5);
  }
  this->cond_id = cond_id;
  std::vector<unsigned int>::vector(&this->watcher_id_list, &v14->watcher_id_list);
  p_avatar_reward_list = &v14->avatar_reward_list;
  std::vector<unsigned int>::vector(&this->avatar_reward_list, &v14->avatar_reward_list);
  if ( *(char *)(((unsigned __int64)&v14->is_not_consume_item >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v14->is_not_consume_item, p_avatar_reward_list, &v14->is_not_consume_item);
  is_not_consume_item = v14->is_not_consume_item;
  v10 = *(_BYTE *)(((unsigned __int64)&this->is_not_consume_item >> 3) + 0x7FFF8000);
  if ( v10 < 0 )
  {
    LOBYTE(p_avatar_reward_list) = v10 != 0;
    __asan_report_store1(&this->is_not_consume_item, p_avatar_reward_list, &this->is_not_consume_item);
  }
  this->is_not_consume_item = is_not_consume_item;
  std::vector<unsigned int>::vector(&this->cost_item_id_list, &v14->cost_item_id_list);
  p_cost_item_num_list = &v14->cost_item_num_list;
  std::vector<unsigned int>::vector(&this->cost_item_num_list, &v14->cost_item_num_list);
  if ( *(char *)(((unsigned __int64)&v14->is_blocked >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v14->is_blocked, p_cost_item_num_list, &v14->is_blocked);
  is_blocked = v14->is_blocked;
  v13 = *(_BYTE *)(((unsigned __int64)&this->is_blocked >> 3) + 0x7FFF8000);
  if ( v13 < 0 )
  {
    LOBYTE(p_cost_item_num_list) = v13 != 0;
    __asan_report_store1(&this->is_blocked, p_cost_item_num_list, &this->is_blocked);
  }
  this->is_blocked = is_blocked;
};

// Line 728: range 000000000F1C5BAC-000000000F1C5C2D
void __cdecl data::NewActivityAvatarSelectionExcelConfig::~NewActivityAvatarSelectionExcelConfig(
        data::NewActivityAvatarSelectionExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::NewActivityAvatarSelectionExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_NewActivityAvatarSelectionExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->cost_item_num_list);
  std::vector<unsigned int>::~vector(&this->cost_item_id_list);
  std::vector<unsigned int>::~vector(&this->avatar_reward_list);
  std::vector<unsigned int>::~vector(&this->watcher_id_list);
};

// Line 728: range 000000000F1C5C2E-000000000F1C5C58
void __cdecl data::NewActivityAvatarSelectionExcelConfig::~NewActivityAvatarSelectionExcelConfig(
        data::NewActivityAvatarSelectionExcelConfig *const this)
{
  data::NewActivityAvatarSelectionExcelConfig::~NewActivityAvatarSelectionExcelConfig(this);
  operator delete(this, 0x80uLL);
};

// Line 746: range 000000000F1A04D8-000000000F1A068C
void __cdecl data::NewActivityScoreLimitExcelConfig::NewActivityScoreLimitExcelConfig(
        data::NewActivityScoreLimitExcelConfig *const this,
        const data::NewActivityScoreLimitExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t activity_id; // ecx
  char v7; // dl
  uint32_t limit_value; // ecx
  char v9; // al
  const data::NewActivityScoreLimitExcelConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::NewActivityScoreLimitExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_NewActivityScoreLimitExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->id);
  }
  id = a2->id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->id, a2);
  }
  this->id = id;
  v5 = (((_BYTE)v10 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->activity_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->activity_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->activity_id);
  }
  activity_id = v10->activity_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->activity_id, v5);
  }
  this->activity_id = activity_id;
  if ( *(_BYTE *)(((unsigned __int64)&v10->limit_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->limit_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->limit_value);
  }
  limit_value = v10->limit_value;
  v9 = *(_BYTE *)(((unsigned __int64)&this->limit_value >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->limit_value, v5);
  }
  this->limit_value = limit_value;
};

// Line 749: range 000000000F1C5B3E-000000000F1C5B7F
void __cdecl data::NewActivityScoreLimitExcelConfig::~NewActivityScoreLimitExcelConfig(
        data::NewActivityScoreLimitExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::NewActivityScoreLimitExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_NewActivityScoreLimitExcelConfig = v2;
};

// Line 749: range 000000000F1C5B80-000000000F1C5BAA
void __cdecl data::NewActivityScoreLimitExcelConfig::~NewActivityScoreLimitExcelConfig(
        data::NewActivityScoreLimitExcelConfig *const this)
{
  data::NewActivityScoreLimitExcelConfig::~NewActivityScoreLimitExcelConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 762: range 000000000F1A07CE-000000000F1A0A07
void __cdecl data::NewActivityScoreRewardExcelConfig::NewActivityScoreRewardExcelConfig(
        data::NewActivityScoreRewardExcelConfig *const this,
        const data::NewActivityScoreRewardExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t activity_id; // ecx
  char v7; // dl
  uint32_t reward_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t score; // ecx
  char v12; // dl
  const data::NewActivityScoreRewardExcelConfig *v13; // [rsp+0h] [rbp-10h]

  v13 = a2;
  v2 = (int (**)(...))(&`vtable for'data::NewActivityScoreRewardExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_NewActivityScoreRewardExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->id);
  }
  id = a2->id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->id, a2);
  }
  this->id = id;
  v5 = (((_BYTE)v13 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->activity_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->activity_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->activity_id);
  }
  activity_id = v13->activity_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->activity_id, v5);
  }
  this->activity_id = activity_id;
  if ( *(_BYTE *)(((unsigned __int64)&v13->reward_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->reward_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->reward_id);
  }
  reward_id = v13->reward_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->reward_id, v5);
  }
  this->reward_id = reward_id;
  v10 = (((_BYTE)v13 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->score >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->score);
  }
  score = v13->score;
  v12 = *(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->score, v10);
  }
  this->score = score;
};

// Line 765: range 000000000F1C5B12-000000000F1C5B3C
void __cdecl data::NewActivityScoreRewardExcelConfig::~NewActivityScoreRewardExcelConfig(
        data::NewActivityScoreRewardExcelConfig *const this)
{
  data::NewActivityScoreRewardExcelConfig::~NewActivityScoreRewardExcelConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 765: range 000000000F1C5AD0-000000000F1C5B11
void __cdecl data::NewActivityScoreRewardExcelConfig::~NewActivityScoreRewardExcelConfig(
        data::NewActivityScoreRewardExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::NewActivityScoreRewardExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_NewActivityScoreRewardExcelConfig = v2;
};

// Line 779: range 000000000F01FA6E-000000000F01FB0D
void __cdecl data::NewActivityTimeGroupExcelConfig::NewActivityTimeGroupExcelConfig(
        data::NewActivityTimeGroupExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::NewActivityTimeGroupExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_NewActivityTimeGroupExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  std::vector<unsigned int>::vector(&this->group_id_list);
  std::vector<unsigned int>::vector(&this->duration);
};

// Line 779: range 000000000F1A0B48-000000000F1A0C5F
void __cdecl data::NewActivityTimeGroupExcelConfig::NewActivityTimeGroupExcelConfig(
        data::NewActivityTimeGroupExcelConfig *const this,
        const data::NewActivityTimeGroupExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  const data::NewActivityTimeGroupExcelConfig *v5; // [rsp+0h] [rbp-20h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::NewActivityTimeGroupExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_NewActivityTimeGroupExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->id);
  }
  id = a2->id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->id, a2);
  }
  this->id = id;
  std::vector<unsigned int>::vector(&this->group_id_list, &v5->group_id_list);
  std::vector<unsigned int>::vector(&this->duration, &v5->duration);
};

// Line 782: range 000000000F1C5A42-000000000F1C5AA3
void __cdecl data::NewActivityTimeGroupExcelConfig::~NewActivityTimeGroupExcelConfig(
        data::NewActivityTimeGroupExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::NewActivityTimeGroupExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_NewActivityTimeGroupExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->duration);
  std::vector<unsigned int>::~vector(&this->group_id_list);
};

// Line 782: range 000000000F1C5AA4-000000000F1C5ACE
void __cdecl data::NewActivityTimeGroupExcelConfig::~NewActivityTimeGroupExcelConfig(
        data::NewActivityTimeGroupExcelConfig *const this)
{
  data::NewActivityTimeGroupExcelConfig::~NewActivityTimeGroupExcelConfig(this);
  operator delete(this, 0x40uLL);
};

// Line 795: range 000000000F0B2922-000000000F0B29DC
void __cdecl data::NewActivityOverlapExcelConfig::NewActivityOverlapExcelConfig(
        data::NewActivityOverlapExcelConfig *const this,
        const data::NewActivityOverlapExcelConfig *a2)
{
  int (**v2)(...); // rdx
  data::NewActivityType activity_type; // ecx
  char v4; // al

  v2 = (int (**)(...))(&`vtable for'data::NewActivityOverlapExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_NewActivityOverlapExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->activity_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->activity_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->activity_type);
  }
  activity_type = a2->activity_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->activity_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->activity_type, a2);
  }
  this->activity_type = activity_type;
};

// Line 798: range 000000000F1C59D4-000000000F1C5A15
void __cdecl data::NewActivityOverlapExcelConfig::~NewActivityOverlapExcelConfig(
        data::NewActivityOverlapExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::NewActivityOverlapExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_NewActivityOverlapExcelConfig = v2;
};

// Line 798: range 000000000F1C5A16-000000000F1C5A40
void __cdecl data::NewActivityOverlapExcelConfig::~NewActivityOverlapExcelConfig(
        data::NewActivityOverlapExcelConfig *const this)
{
  data::NewActivityOverlapExcelConfig::~NewActivityOverlapExcelConfig(this);
  operator delete(this, 0x10uLL);
};

// Line 822: range 000000000F1A0DF6-000000000F1A102F
void __cdecl data::NewActivityPushTipsConfig::NewActivityPushTipsConfig(
        data::NewActivityPushTipsConfig *const this,
        const data::NewActivityPushTipsConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t push_tips_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t watcher_id; // ecx
  char v7; // dl
  uint32_t tutorial_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t activity_id; // ecx
  char v12; // dl
  const data::NewActivityPushTipsConfig *v13; // [rsp+0h] [rbp-10h]

  v13 = a2;
  v2 = (int (**)(...))(&`vtable for'data::NewActivityPushTipsConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_NewActivityPushTipsConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->push_tips_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->push_tips_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->push_tips_id);
  }
  push_tips_id = a2->push_tips_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->push_tips_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->push_tips_id, a2);
  }
  this->push_tips_id = push_tips_id;
  v5 = (((_BYTE)v13 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->watcher_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->watcher_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->watcher_id);
  }
  watcher_id = v13->watcher_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->watcher_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->watcher_id, v5);
  }
  this->watcher_id = watcher_id;
  if ( *(_BYTE *)(((unsigned __int64)&v13->tutorial_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->tutorial_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->tutorial_id);
  }
  tutorial_id = v13->tutorial_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->tutorial_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->tutorial_id, v5);
  }
  this->tutorial_id = tutorial_id;
  v10 = (((_BYTE)v13 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->activity_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->activity_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->activity_id);
  }
  activity_id = v13->activity_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->activity_id, v10);
  }
  this->activity_id = activity_id;
};

// Line 825: range 000000000F1C5966-000000000F1C59A7
void __cdecl data::NewActivityPushTipsConfig::~NewActivityPushTipsConfig(data::NewActivityPushTipsConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::NewActivityPushTipsConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_NewActivityPushTipsConfig = v2;
};

// Line 825: range 000000000F1C59A8-000000000F1C59D2
void __cdecl data::NewActivityPushTipsConfig::~NewActivityPushTipsConfig(data::NewActivityPushTipsConfig *const this)
{
  data::NewActivityPushTipsConfig::~NewActivityPushTipsConfig(this);
  operator delete(this, 0x18uLL);
};
