// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/OfferingExcelConfig.gen.h

// Line 69: range 0000000014800976-0000000014800A1B
data::OfferingActionContent *__cdecl data::OfferingActionContent::operator=(
        data::OfferingActionContent *const this,
        const data::OfferingActionContent *a2)
{
  data::OfferingActionType action_type; // ecx
  char v3; // al
  const data::OfferingActionContent *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->action_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->action_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->action_type);
  }
  action_type = a2->action_type;
  v3 = *(_BYTE *)(((unsigned __int64)&this->action_type >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->action_type, a2);
  }
  this->action_type = action_type;
  std::string::operator=(&this->param, &v5->param);
  return this;
};

// Line 69: range 0000000014CDE22C-0000000014CDE2BB
void __cdecl data::OfferingActionContent::OfferingActionContent(data::OfferingActionContent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::OfferingActionContent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_OfferingActionContent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->action_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->action_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->action_type, v1);
  }
  this->action_type = OFFERING_ACTION_NONE;
  std::string::basic_string(&this->param);
};

// Line 69: range 0000000014D5B5F8-0000000014D5B6CD
void __cdecl data::OfferingActionContent::OfferingActionContent(
        data::OfferingActionContent *const this,
        const data::OfferingActionContent *a2)
{
  int (**v2)(...); // rdx
  data::OfferingActionType action_type; // ecx
  char v4; // al
  const data::OfferingActionContent *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::OfferingActionContent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_OfferingActionContent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->action_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->action_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->action_type);
  }
  action_type = a2->action_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->action_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->action_type, a2);
  }
  this->action_type = action_type;
  std::string::basic_string(&this->param, &v5->param);
};

// Line 72: range 0000000014C268EC-0000000014C2693D
void __cdecl data::OfferingActionContent::~OfferingActionContent(data::OfferingActionContent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::OfferingActionContent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_OfferingActionContent = v2;
  std::string::~string(&this->param);
};

// Line 72: range 0000000014C2693E-0000000014C26968
void __cdecl data::OfferingActionContent::~OfferingActionContent(data::OfferingActionContent *const this)
{
  data::OfferingActionContent::~OfferingActionContent(this);
  operator delete(this, 0x30uLL);
};

// Line 82: range 0000000014B30B56-0000000014B30DFC
data::OfferingLevelUpExcelConfig *__cdecl data::OfferingLevelUpExcelConfig::operator=(
        data::OfferingLevelUpExcelConfig *const this,
        const data::OfferingLevelUpExcelConfig *a2)
{
  uint32_t offering_id; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t level; // ecx
  char v6; // dl
  bool is_max_level; // cl
  char v8; // al
  std::vector<data::IdCountConfig> *p_consume_item_config_vec; // rsi
  uint32_t reward_id; // ecx
  char v11; // al
  std::vector<data::OfferingActionContent> *p_action_vec; // rsi
  bool is_auto_take_reward; // cl
  char v14; // al
  const data::OfferingLevelUpExcelConfig *v16; // [rsp+0h] [rbp-10h]

  v16 = a2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->offering_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->offering_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->offering_id);
  }
  offering_id = a2->offering_id;
  v3 = *(_BYTE *)(((unsigned __int64)&this->offering_id >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->offering_id, a2);
  }
  this->offering_id = offering_id;
  v4 = (((_BYTE)v16 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v16->level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v16 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v16->level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v16->level);
  }
  level = v16->level;
  v6 = *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v6 != 0;
  if ( v6 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v6 )
    __asan_report_store4(&this->level, v4);
  this->level = level;
  if ( *(char *)(((unsigned __int64)&v16->is_max_level >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v16->is_max_level, v4, &v16->is_max_level);
  is_max_level = v16->is_max_level;
  v8 = *(_BYTE *)(((unsigned __int64)&this->is_max_level >> 3) + 0x7FFF8000);
  if ( v8 < 0 )
  {
    LOBYTE(v4) = v8 != 0;
    __asan_report_store1(&this->is_max_level, v4, &this->is_max_level);
  }
  this->is_max_level = is_max_level;
  p_consume_item_config_vec = &v16->consume_item_config_vec;
  std::vector<data::IdCountConfig>::operator=(&this->consume_item_config_vec, &v16->consume_item_config_vec);
  if ( *(_BYTE *)(((unsigned __int64)&v16->reward_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v16->reward_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v16->reward_id);
  }
  reward_id = v16->reward_id;
  v11 = *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000);
  if ( v11 != 0 && v11 <= 3 )
  {
    LOBYTE(p_consume_item_config_vec) = v11 != 0;
    __asan_report_store4(&this->reward_id, p_consume_item_config_vec);
  }
  this->reward_id = reward_id;
  p_action_vec = &v16->action_vec;
  std::vector<data::OfferingActionContent>::operator=(&this->action_vec, &v16->action_vec);
  if ( *(char *)(((unsigned __int64)&v16->is_auto_take_reward >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v16->is_auto_take_reward, p_action_vec, &v16->is_auto_take_reward);
  is_auto_take_reward = v16->is_auto_take_reward;
  v14 = *(_BYTE *)(((unsigned __int64)&this->is_auto_take_reward >> 3) + 0x7FFF8000);
  if ( v14 < 0 )
  {
    LOBYTE(p_action_vec) = v14 != 0;
    __asan_report_store1(&this->is_auto_take_reward, p_action_vec, &this->is_auto_take_reward);
  }
  this->is_auto_take_reward = is_auto_take_reward;
  return this;
};

// Line 82: range 000000001477BA92-000000001477BC2B
void __cdecl data::OfferingLevelUpExcelConfig::OfferingLevelUpExcelConfig(data::OfferingLevelUpExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::OfferingLevelUpExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_OfferingLevelUpExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->offering_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->offering_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->offering_id, v1);
  }
  this->offering_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->level, v3);
  }
  this->level = 0;
  if ( *(char *)(((unsigned __int64)&this->is_max_level >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_max_level, v3, &this->is_max_level);
  this->is_max_level = 0;
  std::vector<data::IdCountConfig>::vector(&this->consume_item_config_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reward_id, v3);
  }
  this->reward_id = 0;
  std::vector<data::OfferingActionContent>::vector(&this->action_vec);
  if ( *(char *)(((unsigned __int64)&this->is_auto_take_reward >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_auto_take_reward, v3, &this->is_auto_take_reward);
  this->is_auto_take_reward = 0;
};

// Line 82: range 00000000149E0FAC-00000000149E12A9
void __cdecl data::OfferingLevelUpExcelConfig::OfferingLevelUpExcelConfig(
        data::OfferingLevelUpExcelConfig *const this,
        const data::OfferingLevelUpExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t offering_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t level; // ecx
  char v7; // dl
  bool is_max_level; // cl
  char v9; // al
  std::vector<data::IdCountConfig> *p_consume_item_config_vec; // rsi
  uint32_t reward_id; // ecx
  char v12; // al
  std::vector<data::OfferingActionContent> *p_action_vec; // rsi
  bool is_auto_take_reward; // cl
  char v15; // al
  const data::OfferingLevelUpExcelConfig *v16; // [rsp+0h] [rbp-20h]

  v16 = a2;
  v2 = (int (**)(...))(&`vtable for'data::OfferingLevelUpExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_OfferingLevelUpExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->offering_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->offering_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->offering_id);
  }
  offering_id = a2->offering_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->offering_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->offering_id, a2);
  }
  this->offering_id = offering_id;
  v5 = (((_BYTE)v16 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v16->level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v16 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v16->level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v16->level);
  }
  level = v16->level;
  v7 = *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v7 != 0;
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
    __asan_report_store4(&this->level, v5);
  this->level = level;
  if ( *(char *)(((unsigned __int64)&v16->is_max_level >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v16->is_max_level, v5, &v16->is_max_level);
  is_max_level = v16->is_max_level;
  v9 = *(_BYTE *)(((unsigned __int64)&this->is_max_level >> 3) + 0x7FFF8000);
  if ( v9 < 0 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store1(&this->is_max_level, v5, &this->is_max_level);
  }
  this->is_max_level = is_max_level;
  p_consume_item_config_vec = &v16->consume_item_config_vec;
  std::vector<data::IdCountConfig>::vector(&this->consume_item_config_vec, &v16->consume_item_config_vec);
  if ( *(_BYTE *)(((unsigned __int64)&v16->reward_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v16->reward_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v16->reward_id);
  }
  reward_id = v16->reward_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(p_consume_item_config_vec) = v12 != 0;
    __asan_report_store4(&this->reward_id, p_consume_item_config_vec);
  }
  this->reward_id = reward_id;
  p_action_vec = &v16->action_vec;
  std::vector<data::OfferingActionContent>::vector(&this->action_vec, &v16->action_vec);
  if ( *(char *)(((unsigned __int64)&v16->is_auto_take_reward >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v16->is_auto_take_reward, p_action_vec, &v16->is_auto_take_reward);
  is_auto_take_reward = v16->is_auto_take_reward;
  v15 = *(_BYTE *)(((unsigned __int64)&this->is_auto_take_reward >> 3) + 0x7FFF8000);
  if ( v15 < 0 )
  {
    LOBYTE(p_action_vec) = v15 != 0;
    __asan_report_store1(&this->is_auto_take_reward, p_action_vec, &this->is_auto_take_reward);
  }
  this->is_auto_take_reward = is_auto_take_reward;
};

// Line 85: range 0000000014DE9268-0000000014DE92C9
void __cdecl data::OfferingLevelUpExcelConfig::~OfferingLevelUpExcelConfig(
        data::OfferingLevelUpExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::OfferingLevelUpExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_OfferingLevelUpExcelConfig = v2;
  std::vector<data::OfferingActionContent>::~vector(&this->action_vec);
  std::vector<data::IdCountConfig>::~vector(&this->consume_item_config_vec);
};

// Line 85: range 0000000014DE92CA-0000000014DE92F4
void __cdecl data::OfferingLevelUpExcelConfig::~OfferingLevelUpExcelConfig(
        data::OfferingLevelUpExcelConfig *const this)
{
  data::OfferingLevelUpExcelConfig::~OfferingLevelUpExcelConfig(this);
  operator delete(this, 0x58uLL);
};

// Line 102: range 0000000014D5B99E-0000000014D5BD42
void __cdecl data::OfferingOpenStateConfig::OfferingOpenStateConfig(
        data::OfferingOpenStateConfig *const this,
        const data::OfferingOpenStateConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t offering_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::OpenStateType open_state; // ecx
  char v7; // dl
  data::ItemLimitType item_limit; // ecx
  char v9; // al
  __int64 v10; // rsi
  __int64 v11; // rdx
  bool is_continuous_level_up; // cl
  char v13; // dl
  __int64 v14; // rdx
  data::OfferingMaxLevelLimitType max_level_limit_type; // ecx
  char v16; // al
  __int64 v17; // rsi
  uint32_t activity_id; // ecx
  char v19; // dl
  bool is_allow_host_in_mp_mode; // cl
  char v21; // al
  const data::OfferingOpenStateConfig *v22; // [rsp+0h] [rbp-10h]

  v22 = a2;
  v2 = (int (**)(...))(&`vtable for'data::OfferingOpenStateConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_OfferingOpenStateConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->offering_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->offering_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->offering_id);
  }
  offering_id = a2->offering_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->offering_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->offering_id, a2);
  }
  this->offering_id = offering_id;
  v5 = (((_BYTE)v22 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v22->open_state >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v22 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v22->open_state >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v22->open_state);
  }
  open_state = v22->open_state;
  v7 = *(_BYTE *)(((unsigned __int64)&this->open_state >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->open_state, v5);
  }
  this->open_state = open_state;
  if ( *(_BYTE *)(((unsigned __int64)&v22->item_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v22->item_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v22->item_limit);
  }
  item_limit = v22->item_limit;
  v9 = *(_BYTE *)(((unsigned __int64)&this->item_limit >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->item_limit, v5);
  }
  this->item_limit = item_limit;
  v10 = ((_BYTE)v22 + 20) & 7;
  v11 = (*(_BYTE *)(((unsigned __int64)&v22->is_continuous_level_up >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v10 >= *(_BYTE *)(((unsigned __int64)&v22->is_continuous_level_up >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
    __asan_report_load1(&v22->is_continuous_level_up, v10, v11);
  is_continuous_level_up = v22->is_continuous_level_up;
  v13 = *(_BYTE *)(((unsigned __int64)&this->is_continuous_level_up >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v13 != 0;
  v14 = (v13 != 0) & (unsigned __int8)((((unsigned __int8)this + 20) & 7) >= v13);
  if ( (_BYTE)v14 )
    __asan_report_store1(&this->is_continuous_level_up, v10, v14);
  this->is_continuous_level_up = is_continuous_level_up;
  if ( *(_BYTE *)(((unsigned __int64)&v22->max_level_limit_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v22->max_level_limit_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v22->max_level_limit_type);
  }
  max_level_limit_type = v22->max_level_limit_type;
  v16 = *(_BYTE *)(((unsigned __int64)&this->max_level_limit_type >> 3) + 0x7FFF8000);
  if ( v16 != 0 && v16 <= 3 )
  {
    LOBYTE(v10) = v16 != 0;
    __asan_report_store4(&this->max_level_limit_type, v10);
  }
  this->max_level_limit_type = max_level_limit_type;
  v17 = (((_BYTE)v22 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v22->activity_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v22 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v22->activity_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v22->activity_id);
  }
  activity_id = v22->activity_id;
  v19 = *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000);
  LOBYTE(v17) = v19 != 0;
  if ( v19 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v19 )
    __asan_report_store4(&this->activity_id, v17);
  this->activity_id = activity_id;
  if ( *(char *)(((unsigned __int64)&v22->is_allow_host_in_mp_mode >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v22->is_allow_host_in_mp_mode, v17, &v22->is_allow_host_in_mp_mode);
  is_allow_host_in_mp_mode = v22->is_allow_host_in_mp_mode;
  v21 = *(_BYTE *)(((unsigned __int64)&this->is_allow_host_in_mp_mode >> 3) + 0x7FFF8000);
  if ( v21 < 0 )
  {
    LOBYTE(v17) = v21 != 0;
    __asan_report_store1(&this->is_allow_host_in_mp_mode, v17, &this->is_allow_host_in_mp_mode);
  }
  this->is_allow_host_in_mp_mode = is_allow_host_in_mp_mode;
};

// Line 105: range 0000000014DE923C-0000000014DE9266
void __cdecl data::OfferingOpenStateConfig::~OfferingOpenStateConfig(data::OfferingOpenStateConfig *const this)
{
  data::OfferingOpenStateConfig::~OfferingOpenStateConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 105: range 0000000014DE91FA-0000000014DE923B
void __cdecl data::OfferingOpenStateConfig::~OfferingOpenStateConfig(data::OfferingOpenStateConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::OfferingOpenStateConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_OfferingOpenStateConfig = v2;
};

// Line 122: range 0000000014D5BE84-0000000014D5C0BD
void __cdecl data::OraionokamiDataExcelConfig::OraionokamiDataExcelConfig(
        data::OraionokamiDataExcelConfig *const this,
        const data::OraionokamiDataExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t config_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t gadget_chain_id; // ecx
  char v7; // dl
  uint32_t gadget_chain_level; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t server_buff_id; // ecx
  char v12; // dl
  const data::OraionokamiDataExcelConfig *v13; // [rsp+0h] [rbp-10h]

  v13 = a2;
  v2 = (int (**)(...))(&`vtable for'data::OraionokamiDataExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_OraionokamiDataExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->config_id);
  }
  config_id = a2->config_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->config_id, a2);
  }
  this->config_id = config_id;
  v5 = (((_BYTE)v13 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->gadget_chain_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->gadget_chain_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->gadget_chain_id);
  }
  gadget_chain_id = v13->gadget_chain_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->gadget_chain_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->gadget_chain_id, v5);
  }
  this->gadget_chain_id = gadget_chain_id;
  if ( *(_BYTE *)(((unsigned __int64)&v13->gadget_chain_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->gadget_chain_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->gadget_chain_level);
  }
  gadget_chain_level = v13->gadget_chain_level;
  v9 = *(_BYTE *)(((unsigned __int64)&this->gadget_chain_level >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->gadget_chain_level, v5);
  }
  this->gadget_chain_level = gadget_chain_level;
  v10 = (((_BYTE)v13 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->server_buff_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->server_buff_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->server_buff_id);
  }
  server_buff_id = v13->server_buff_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->server_buff_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->server_buff_id, v10);
  }
  this->server_buff_id = server_buff_id;
};

// Line 125: range 0000000014DE91CE-0000000014DE91F8
void __cdecl data::OraionokamiDataExcelConfig::~OraionokamiDataExcelConfig(
        data::OraionokamiDataExcelConfig *const this)
{
  data::OraionokamiDataExcelConfig::~OraionokamiDataExcelConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 125: range 0000000014DE918C-0000000014DE91CD
void __cdecl data::OraionokamiDataExcelConfig::~OraionokamiDataExcelConfig(
        data::OraionokamiDataExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::OraionokamiDataExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_OraionokamiDataExcelConfig = v2;
};

// Line 139: range 0000000014D5C1FE-0000000014D5C2B8
void __cdecl data::OraionokamiDescExcelConfig::OraionokamiDescExcelConfig(
        data::OraionokamiDescExcelConfig *const this,
        const data::OraionokamiDescExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t desc_id; // ecx
  char v4; // al

  v2 = (int (**)(...))(&`vtable for'data::OraionokamiDescExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_OraionokamiDescExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->desc_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->desc_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->desc_id);
  }
  desc_id = a2->desc_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->desc_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->desc_id, a2);
  }
  this->desc_id = desc_id;
};

// Line 142: range 0000000014DE9160-0000000014DE918A
void __cdecl data::OraionokamiDescExcelConfig::~OraionokamiDescExcelConfig(
        data::OraionokamiDescExcelConfig *const this)
{
  data::OraionokamiDescExcelConfig::~OraionokamiDescExcelConfig(this);
  operator delete(this, 0x10uLL);
};

// Line 142: range 0000000014DE911E-0000000014DE915F
void __cdecl data::OraionokamiDescExcelConfig::~OraionokamiDescExcelConfig(
        data::OraionokamiDescExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::OraionokamiDescExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_OraionokamiDescExcelConfig = v2;
};

// Line 153: range 0000000014D5C3FA-0000000014D5C539
void __cdecl data::MichiaeOfferingDataExcelConfig::MichiaeOfferingDataExcelConfig(
        data::MichiaeOfferingDataExcelConfig *const this,
        const data::MichiaeOfferingDataExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t config_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t level; // ecx
  char v7; // dl
  const data::MichiaeOfferingDataExcelConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::MichiaeOfferingDataExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_MichiaeOfferingDataExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->config_id);
  }
  config_id = a2->config_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->config_id, a2);
  }
  this->config_id = config_id;
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->level);
  }
  level = v8->level;
  v7 = *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->level, v5);
  }
  this->level = level;
};

// Line 156: range 0000000014DE90B0-0000000014DE90F1
void __cdecl data::MichiaeOfferingDataExcelConfig::~MichiaeOfferingDataExcelConfig(
        data::MichiaeOfferingDataExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::MichiaeOfferingDataExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MichiaeOfferingDataExcelConfig = v2;
};

// Line 156: range 0000000014DE90F2-0000000014DE911C
void __cdecl data::MichiaeOfferingDataExcelConfig::~MichiaeOfferingDataExcelConfig(
        data::MichiaeOfferingDataExcelConfig *const this)
{
  data::MichiaeOfferingDataExcelConfig::~MichiaeOfferingDataExcelConfig(this);
  operator delete(this, 0x10uLL);
};

// Line 168: range 0000000014D5C67A-0000000014D5C82E
void __cdecl data::OfferingVersionExcelConfig::OfferingVersionExcelConfig(
        data::OfferingVersionExcelConfig *const this,
        const data::OfferingVersionExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t offering_id; // ecx
  char v7; // dl
  uint32_t level_limit; // ecx
  char v9; // al
  const data::OfferingVersionExcelConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::OfferingVersionExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_OfferingVersionExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v10->offering_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->offering_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->offering_id);
  }
  offering_id = v10->offering_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->offering_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->offering_id, v5);
  }
  this->offering_id = offering_id;
  if ( *(_BYTE *)(((unsigned __int64)&v10->level_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->level_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->level_limit);
  }
  level_limit = v10->level_limit;
  v9 = *(_BYTE *)(((unsigned __int64)&this->level_limit >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->level_limit, v5);
  }
  this->level_limit = level_limit;
};

// Line 171: range 0000000014DE9084-0000000014DE90AE
void __cdecl data::OfferingVersionExcelConfig::~OfferingVersionExcelConfig(
        data::OfferingVersionExcelConfig *const this)
{
  data::OfferingVersionExcelConfig::~OfferingVersionExcelConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 171: range 0000000014DE9042-0000000014DE9083
void __cdecl data::OfferingVersionExcelConfig::~OfferingVersionExcelConfig(
        data::OfferingVersionExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::OfferingVersionExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_OfferingVersionExcelConfig = v2;
};

// Line 184: range 0000000014D5C970-0000000014D5CAAF
void __cdecl data::OfferingLumenStoneExcelConfig::OfferingLumenStoneExcelConfig(
        data::OfferingLumenStoneExcelConfig *const this,
        const data::OfferingLumenStoneExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t config_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t level; // ecx
  char v7; // dl
  const data::OfferingLumenStoneExcelConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::OfferingLumenStoneExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_OfferingLumenStoneExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->config_id);
  }
  config_id = a2->config_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->config_id, a2);
  }
  this->config_id = config_id;
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->level);
  }
  level = v8->level;
  v7 = *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->level, v5);
  }
  this->level = level;
};

// Line 187: range 0000000014DE9016-0000000014DE9040
void __cdecl data::OfferingLumenStoneExcelConfig::~OfferingLumenStoneExcelConfig(
        data::OfferingLumenStoneExcelConfig *const this)
{
  data::OfferingLumenStoneExcelConfig::~OfferingLumenStoneExcelConfig(this);
  operator delete(this, 0x10uLL);
};

// Line 187: range 0000000014DE8FD4-0000000014DE9015
void __cdecl data::OfferingLumenStoneExcelConfig::~OfferingLumenStoneExcelConfig(
        data::OfferingLumenStoneExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::OfferingLumenStoneExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_OfferingLumenStoneExcelConfig = v2;
};
