// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/MatchExcelConfig.gen.h

// Line 70: range 0000000013353932-00000000133539F7
void __cdecl data::MatchCond::MatchCond(data::MatchCond *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::MatchCond + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MatchCond = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->type, v1);
  }
  this->type = MATCH_LIMIT_TYPE_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->param >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->param >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->param, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->param = 0;
};

// Line 70: range 00000000134121A0-00000000134122DF
void __cdecl data::MatchCond::MatchCond(data::MatchCond *const this, const data::MatchCond *a2)
{
  int (**v2)(...); // rdx
  data::MatchLimitType type; // ecx
  char v4; // al
  __int64 v5; // rsi
  int32_t param; // ecx
  char v7; // dl
  const data::MatchCond *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::MatchCond + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_MatchCond = v2;
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
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->param >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->param);
  }
  param = v8->param;
  v7 = *(_BYTE *)(((unsigned __int64)&this->param >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->param, v5);
  }
  this->param = param;
};

// Line 73: range 00000000132BE060-00000000132BE0A1
void __cdecl data::MatchCond::~MatchCond(data::MatchCond *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::MatchCond + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MatchCond = v2;
};

// Line 73: range 00000000132BE0A2-00000000132BE0CC
void __cdecl data::MatchCond::~MatchCond(data::MatchCond *const this)
{
  data::MatchCond::~MatchCond(this);
  operator delete(this, 0x10uLL);
};

// Line 83: range 0000000012EC9E22-0000000012EC9EB1
void __cdecl data::MatchLimitExcelConfig::MatchLimitExcelConfig(data::MatchLimitExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::MatchLimitExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MatchLimitExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  std::vector<data::MatchCond>::vector(&this->cond);
};

// Line 83: range 00000000133A63AA-00000000133A647F
void __cdecl data::MatchLimitExcelConfig::MatchLimitExcelConfig(
        data::MatchLimitExcelConfig *const this,
        const data::MatchLimitExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  const data::MatchLimitExcelConfig *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::MatchLimitExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_MatchLimitExcelConfig = v2;
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
  std::vector<data::MatchCond>::vector(&this->cond, &v5->cond);
};

// Line 86: range 0000000012EC9EB2-0000000012EC9F03
void __cdecl data::MatchLimitExcelConfig::~MatchLimitExcelConfig(data::MatchLimitExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::MatchLimitExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MatchLimitExcelConfig = v2;
  std::vector<data::MatchCond>::~vector(&this->cond);
};

// Line 86: range 0000000012EC9F04-0000000012EC9F2E
void __cdecl data::MatchLimitExcelConfig::~MatchLimitExcelConfig(data::MatchLimitExcelConfig *const this)
{
  data::MatchLimitExcelConfig::~MatchLimitExcelConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 96: range 000000001476BE96-000000001476C06D
void __cdecl data::MatchExcelConfig::MatchExcelConfig(data::MatchExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rdx

  v2 = (int (**)(...))(&`vtable for'data::MatchExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MatchExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->match_sub_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->match_sub_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->match_sub_type, v3);
  }
  this->match_sub_type = MATCH_SUB_TYPE_NONE;
  std::vector<unsigned int>::vector(&this->match_limit_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->min_player_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->min_player_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->min_player_num, v3);
  }
  this->min_player_num = 0;
  v4 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_player_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_player_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_player_num, v4);
  }
  this->max_player_num = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->confirm_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->confirm_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->confirm_time, v4);
  }
  this->confirm_time = 0;
  v5 = ((_BYTE)this + 52) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->is_continue_match >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->is_continue_match >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->is_continue_match, v5, v6);
  this->is_continue_match = 0;
};

// Line 96: range 0000000014D4B404-0000000014D4B74D
void __cdecl data::MatchExcelConfig::MatchExcelConfig(
        data::MatchExcelConfig *const this,
        const data::MatchExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::MatchSubType match_sub_type; // ecx
  char v7; // dl
  std::vector<unsigned int> *p_match_limit_list; // rsi
  uint32_t min_player_num; // ecx
  char v10; // al
  __int64 v11; // rsi
  uint32_t max_player_num; // ecx
  char v13; // dl
  uint32_t confirm_time; // ecx
  char v15; // al
  __int64 v16; // rsi
  __int64 v17; // rdx
  bool is_continue_match; // cl
  char v19; // dl
  __int64 v20; // rdx
  const data::MatchExcelConfig *v21; // [rsp+0h] [rbp-10h]

  v21 = a2;
  v2 = (int (**)(...))(&`vtable for'data::MatchExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_MatchExcelConfig = v2;
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
  v5 = (((_BYTE)v21 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v21->match_sub_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v21 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v21->match_sub_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v21->match_sub_type);
  }
  match_sub_type = v21->match_sub_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->match_sub_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->match_sub_type, v5);
  }
  this->match_sub_type = match_sub_type;
  p_match_limit_list = &v21->match_limit_list;
  std::vector<unsigned int>::vector(&this->match_limit_list, &v21->match_limit_list);
  if ( *(_BYTE *)(((unsigned __int64)&v21->min_player_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v21->min_player_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v21->min_player_num);
  }
  min_player_num = v21->min_player_num;
  v10 = *(_BYTE *)(((unsigned __int64)&this->min_player_num >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(p_match_limit_list) = v10 != 0;
    __asan_report_store4(&this->min_player_num, p_match_limit_list);
  }
  this->min_player_num = min_player_num;
  v11 = (((_BYTE)v21 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v21->max_player_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v21 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v21->max_player_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v21->max_player_num);
  }
  max_player_num = v21->max_player_num;
  v13 = *(_BYTE *)(((unsigned __int64)&this->max_player_num >> 3) + 0x7FFF8000);
  if ( v13 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v13 )
  {
    LOBYTE(v11) = v13 != 0;
    __asan_report_store4(&this->max_player_num, v11);
  }
  this->max_player_num = max_player_num;
  if ( *(_BYTE *)(((unsigned __int64)&v21->confirm_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v21->confirm_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v21->confirm_time);
  }
  confirm_time = v21->confirm_time;
  v15 = *(_BYTE *)(((unsigned __int64)&this->confirm_time >> 3) + 0x7FFF8000);
  if ( v15 != 0 && v15 <= 3 )
  {
    LOBYTE(v11) = v15 != 0;
    __asan_report_store4(&this->confirm_time, v11);
  }
  this->confirm_time = confirm_time;
  v16 = ((_BYTE)v21 + 52) & 7;
  v17 = (*(_BYTE *)(((unsigned __int64)&v21->is_continue_match >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v16 >= *(_BYTE *)(((unsigned __int64)&v21->is_continue_match >> 3) + 0x7FFF8000));
  if ( (_BYTE)v17 )
    __asan_report_load1(&v21->is_continue_match, v16, v17);
  is_continue_match = v21->is_continue_match;
  v19 = *(_BYTE *)(((unsigned __int64)&this->is_continue_match >> 3) + 0x7FFF8000);
  LOBYTE(v16) = v19 != 0;
  v20 = (v19 != 0) & (unsigned __int8)((((unsigned __int8)this + 52) & 7) >= v19);
  if ( (_BYTE)v20 )
    __asan_report_store1(&this->is_continue_match, v16, v20);
  this->is_continue_match = is_continue_match;
};

// Line 99: range 0000000014DE867C-0000000014DE86CD
void __cdecl data::MatchExcelConfig::~MatchExcelConfig(data::MatchExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::MatchExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MatchExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->match_limit_list);
};

// Line 99: range 0000000014DE86CE-0000000014DE86F8
void __cdecl data::MatchExcelConfig::~MatchExcelConfig(data::MatchExcelConfig *const this)
{
  data::MatchExcelConfig::~MatchExcelConfig(this);
  operator delete(this, 0x38uLL);
};

// Line 116: range 0000000014D4B88E-0000000014D4B9CD
void __cdecl data::MatchPunishExcelConfig::MatchPunishExcelConfig(
        data::MatchPunishExcelConfig *const this,
        const data::MatchPunishExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t times; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t punish_time; // ecx
  char v7; // dl
  const data::MatchPunishExcelConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::MatchPunishExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_MatchPunishExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->times >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->times >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->times);
  }
  times = a2->times;
  v4 = *(_BYTE *)(((unsigned __int64)&this->times >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->times, a2);
  }
  this->times = times;
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->punish_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->punish_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->punish_time);
  }
  punish_time = v8->punish_time;
  v7 = *(_BYTE *)(((unsigned __int64)&this->punish_time >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->punish_time, v5);
  }
  this->punish_time = punish_time;
};

// Line 119: range 0000000014DE860E-0000000014DE864F
void __cdecl data::MatchPunishExcelConfig::~MatchPunishExcelConfig(data::MatchPunishExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::MatchPunishExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MatchPunishExcelConfig = v2;
};

// Line 119: range 0000000014DE8650-0000000014DE867A
void __cdecl data::MatchPunishExcelConfig::~MatchPunishExcelConfig(data::MatchPunishExcelConfig *const this)
{
  data::MatchPunishExcelConfig::~MatchPunishExcelConfig(this);
  operator delete(this, 0x10uLL);
};

// Line 131: range 00000000149C5724-00000000149C59CD
void __cdecl data::MatchNewRuleExcelConfig::MatchNewRuleExcelConfig(
        data::MatchNewRuleExcelConfig *const this,
        const data::MatchNewRuleExcelConfig *a2)
{
  int (**v2)(...); // rdx
  data::DungeonSubType dungeon_sub_type; // ecx
  char v4; // al
  __int64 v5; // rsi
  __int64 v6; // rdx
  bool is_enable; // cl
  char v8; // dl
  __int64 v9; // rdx
  uint32_t min_level; // ecx
  char v11; // al
  __int64 v12; // rsi
  uint32_t player_level_boundary; // ecx
  char v14; // dl
  uint32_t time_boundary; // ecx
  char v16; // al
  const data::MatchNewRuleExcelConfig *v17; // [rsp+0h] [rbp-10h]

  v17 = a2;
  v2 = (int (**)(...))(&`vtable for'data::MatchNewRuleExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_MatchNewRuleExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->dungeon_sub_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->dungeon_sub_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->dungeon_sub_type);
  }
  dungeon_sub_type = a2->dungeon_sub_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->dungeon_sub_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->dungeon_sub_type, a2);
  }
  this->dungeon_sub_type = dungeon_sub_type;
  v5 = ((_BYTE)v17 + 12) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&v17->is_enable >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&v17->is_enable >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_load1(&v17->is_enable, v5, v6);
  is_enable = v17->is_enable;
  v8 = *(_BYTE *)(((unsigned __int64)&this->is_enable >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v8 != 0;
  v9 = (v8 != 0) & (unsigned __int8)((((unsigned __int8)this + 12) & 7) >= v8);
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->is_enable, v5, v9);
  this->is_enable = is_enable;
  if ( *(_BYTE *)(((unsigned __int64)&v17->min_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v17->min_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v17->min_level);
  }
  min_level = v17->min_level;
  v11 = *(_BYTE *)(((unsigned __int64)&this->min_level >> 3) + 0x7FFF8000);
  if ( v11 != 0 && v11 <= 3 )
  {
    LOBYTE(v5) = v11 != 0;
    __asan_report_store4(&this->min_level, v5);
  }
  this->min_level = min_level;
  v12 = (((_BYTE)v17 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v17->player_level_boundary >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v17 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v17->player_level_boundary >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v17->player_level_boundary);
  }
  player_level_boundary = v17->player_level_boundary;
  v14 = *(_BYTE *)(((unsigned __int64)&this->player_level_boundary >> 3) + 0x7FFF8000);
  if ( v14 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v14 )
  {
    LOBYTE(v12) = v14 != 0;
    __asan_report_store4(&this->player_level_boundary, v12);
  }
  this->player_level_boundary = player_level_boundary;
  if ( *(_BYTE *)(((unsigned __int64)&v17->time_boundary >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v17->time_boundary >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v17->time_boundary);
  }
  time_boundary = v17->time_boundary;
  v16 = *(_BYTE *)(((unsigned __int64)&this->time_boundary >> 3) + 0x7FFF8000);
  if ( v16 != 0 && v16 <= 3 )
  {
    LOBYTE(v12) = v16 != 0;
    __asan_report_store4(&this->time_boundary, v12);
  }
  this->time_boundary = time_boundary;
};

// Line 134: range 0000000014DE85A0-0000000014DE85E1
void __cdecl data::MatchNewRuleExcelConfig::~MatchNewRuleExcelConfig(data::MatchNewRuleExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::MatchNewRuleExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MatchNewRuleExcelConfig = v2;
};

// Line 134: range 0000000014DE85E2-0000000014DE860C
void __cdecl data::MatchNewRuleExcelConfig::~MatchNewRuleExcelConfig(data::MatchNewRuleExcelConfig *const this)
{
  data::MatchNewRuleExcelConfig::~MatchNewRuleExcelConfig(this);
  operator delete(this, 0x20uLL);
};

// Line 149: range 0000000014D4BB64-0000000014D4BD98
void __cdecl data::MatchNewRuleSpecifiedExcelConfig::MatchNewRuleSpecifiedExcelConfig(
        data::MatchNewRuleSpecifiedExcelConfig *const this,
        const data::MatchNewRuleSpecifiedExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t dungeon_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  __int64 v6; // rdx
  bool is_enable; // cl
  char v8; // dl
  __int64 v9; // rdx
  uint32_t player_level_boundary; // ecx
  char v11; // al
  __int64 v12; // rsi
  uint32_t time_boundary; // ecx
  char v14; // dl
  const data::MatchNewRuleSpecifiedExcelConfig *v15; // [rsp+0h] [rbp-10h]

  v15 = a2;
  v2 = (int (**)(...))(&`vtable for'data::MatchNewRuleSpecifiedExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_MatchNewRuleSpecifiedExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->dungeon_id);
  }
  dungeon_id = a2->dungeon_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->dungeon_id, a2);
  }
  this->dungeon_id = dungeon_id;
  v5 = ((_BYTE)v15 + 12) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&v15->is_enable >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&v15->is_enable >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_load1(&v15->is_enable, v5, v6);
  is_enable = v15->is_enable;
  v8 = *(_BYTE *)(((unsigned __int64)&this->is_enable >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v8 != 0;
  v9 = (v8 != 0) & (unsigned __int8)((((unsigned __int8)this + 12) & 7) >= v8);
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->is_enable, v5, v9);
  this->is_enable = is_enable;
  if ( *(_BYTE *)(((unsigned __int64)&v15->player_level_boundary >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v15->player_level_boundary >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v15->player_level_boundary);
  }
  player_level_boundary = v15->player_level_boundary;
  v11 = *(_BYTE *)(((unsigned __int64)&this->player_level_boundary >> 3) + 0x7FFF8000);
  if ( v11 != 0 && v11 <= 3 )
  {
    LOBYTE(v5) = v11 != 0;
    __asan_report_store4(&this->player_level_boundary, v5);
  }
  this->player_level_boundary = player_level_boundary;
  v12 = (((_BYTE)v15 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v15->time_boundary >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v15 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->time_boundary >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v15->time_boundary);
  }
  time_boundary = v15->time_boundary;
  v14 = *(_BYTE *)(((unsigned __int64)&this->time_boundary >> 3) + 0x7FFF8000);
  if ( v14 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v14 )
  {
    LOBYTE(v12) = v14 != 0;
    __asan_report_store4(&this->time_boundary, v12);
  }
  this->time_boundary = time_boundary;
};

// Line 152: range 0000000014DE8532-0000000014DE8573
void __cdecl data::MatchNewRuleSpecifiedExcelConfig::~MatchNewRuleSpecifiedExcelConfig(
        data::MatchNewRuleSpecifiedExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::MatchNewRuleSpecifiedExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MatchNewRuleSpecifiedExcelConfig = v2;
};

// Line 152: range 0000000014DE8574-0000000014DE859E
void __cdecl data::MatchNewRuleSpecifiedExcelConfig::~MatchNewRuleSpecifiedExcelConfig(
        data::MatchNewRuleSpecifiedExcelConfig *const this)
{
  data::MatchNewRuleSpecifiedExcelConfig::~MatchNewRuleSpecifiedExcelConfig(this);
  operator delete(this, 0x18uLL);
};
