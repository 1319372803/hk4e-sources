// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/BattlePassExcelConfig.gen.h

// Line 64: range 0000000013BE5366-0000000013BE56FE
void __cdecl data::BattlePassScheduleExcelConfig::BattlePassScheduleExcelConfig(
        data::BattlePassScheduleExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rsi

  v2 = (int (**)(...))(&`vtable for'data::BattlePassScheduleExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BattlePassScheduleExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  std::string::basic_string(&this->begin_date_str);
  std::string::basic_string(&this->end_date_str);
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
  std::vector<unsigned int>::vector(&this->cycle_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->extra_paid_reward_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->extra_paid_reward_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->extra_paid_reward_id, v3);
  }
  this->extra_paid_reward_id = 0;
  v4 = (((_BYTE)this + 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->extra_paid_add_point >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->extra_paid_add_point >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->extra_paid_add_point, v4);
  }
  this->extra_paid_add_point = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->buy_level_cost_coin_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->buy_level_cost_coin_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->buy_level_cost_coin_num, v4);
  }
  this->buy_level_cost_coin_num = 0;
  v5 = (((_BYTE)this + 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->cycle_point_upper_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cycle_point_upper_limit >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cycle_point_upper_limit, v5);
  }
  this->cycle_point_upper_limit = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->over_limit_mail_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->over_limit_mail_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->over_limit_mail_id, v5);
  }
  this->over_limit_mail_id = 0;
  v6 = (((_BYTE)this - 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_reward_index_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_reward_index_id >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->level_reward_index_id, v6);
  }
  this->level_reward_index_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->finish_mail_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->finish_mail_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->finish_mail_id, v6);
  }
  this->finish_mail_id = 0;
  v7 = (((_BYTE)this - 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->mail_day_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->mail_day_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->mail_day_count, v7);
  }
  this->mail_day_count = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->mail_config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mail_config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->mail_config_id, v7);
  }
  this->mail_config_id = 0;
};

// Line 64: range 00000000141A3EF4-00000000141A45C0
void __cdecl data::BattlePassScheduleExcelConfig::BattlePassScheduleExcelConfig(
        data::BattlePassScheduleExcelConfig *const this,
        const data::BattlePassScheduleExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  std::string *p_end_date_str; // rsi
  uint32_t begin_time; // ecx
  char v7; // al
  __int64 v8; // rsi
  uint32_t end_time; // ecx
  char v10; // dl
  std::vector<unsigned int> *p_cycle_list; // rsi
  uint32_t extra_paid_reward_id; // ecx
  char v13; // al
  __int64 v14; // rsi
  uint32_t extra_paid_add_point; // ecx
  char v16; // dl
  uint32_t buy_level_cost_coin_num; // ecx
  char v18; // al
  __int64 v19; // rsi
  uint32_t cycle_point_upper_limit; // ecx
  char v21; // dl
  uint32_t over_limit_mail_id; // ecx
  char v23; // al
  __int64 v24; // rsi
  uint32_t level_reward_index_id; // ecx
  char v26; // dl
  uint32_t finish_mail_id; // ecx
  char v28; // al
  __int64 v29; // rsi
  uint32_t mail_day_count; // ecx
  char v31; // dl
  uint32_t mail_config_id; // ecx
  char v33; // al
  const data::BattlePassScheduleExcelConfig *v34; // [rsp+0h] [rbp-20h]

  v34 = a2;
  v2 = (int (**)(...))(&`vtable for'data::BattlePassScheduleExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BattlePassScheduleExcelConfig = v2;
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
  std::string::basic_string(&this->begin_date_str, &v34->begin_date_str);
  p_end_date_str = &v34->end_date_str;
  std::string::basic_string(&this->end_date_str, &v34->end_date_str);
  if ( *(_BYTE *)(((unsigned __int64)&v34->begin_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v34->begin_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v34->begin_time);
  }
  begin_time = v34->begin_time;
  v7 = *(_BYTE *)(((unsigned __int64)&this->begin_time >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_end_date_str) = v7 != 0;
    __asan_report_store4(&this->begin_time, p_end_date_str);
  }
  this->begin_time = begin_time;
  v8 = (((_BYTE)v34 + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v34->end_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v34 + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v34->end_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v34->end_time);
  }
  end_time = v34->end_time;
  v10 = *(_BYTE *)(((unsigned __int64)&this->end_time >> 3) + 0x7FFF8000);
  if ( v10 != 0 && (char)((((_BYTE)this + 84) & 7) + 3) >= v10 )
  {
    LOBYTE(v8) = v10 != 0;
    __asan_report_store4(&this->end_time, v8);
  }
  this->end_time = end_time;
  p_cycle_list = &v34->cycle_list;
  std::vector<unsigned int>::vector(&this->cycle_list, &v34->cycle_list);
  if ( *(_BYTE *)(((unsigned __int64)&v34->extra_paid_reward_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v34->extra_paid_reward_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v34->extra_paid_reward_id);
  }
  extra_paid_reward_id = v34->extra_paid_reward_id;
  v13 = *(_BYTE *)(((unsigned __int64)&this->extra_paid_reward_id >> 3) + 0x7FFF8000);
  if ( v13 != 0 && v13 <= 3 )
  {
    LOBYTE(p_cycle_list) = v13 != 0;
    __asan_report_store4(&this->extra_paid_reward_id, p_cycle_list);
  }
  this->extra_paid_reward_id = extra_paid_reward_id;
  v14 = (((_BYTE)v34 + 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v34->extra_paid_add_point >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v34 + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v34->extra_paid_add_point >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&v34->extra_paid_add_point);
  }
  extra_paid_add_point = v34->extra_paid_add_point;
  v16 = *(_BYTE *)(((unsigned __int64)&this->extra_paid_add_point >> 3) + 0x7FFF8000);
  if ( v16 != 0 && (char)((((_BYTE)this + 116) & 7) + 3) >= v16 )
  {
    LOBYTE(v14) = v16 != 0;
    __asan_report_store4(&this->extra_paid_add_point, v14);
  }
  this->extra_paid_add_point = extra_paid_add_point;
  if ( *(_BYTE *)(((unsigned __int64)&v34->buy_level_cost_coin_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v34->buy_level_cost_coin_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v34->buy_level_cost_coin_num);
  }
  buy_level_cost_coin_num = v34->buy_level_cost_coin_num;
  v18 = *(_BYTE *)(((unsigned __int64)&this->buy_level_cost_coin_num >> 3) + 0x7FFF8000);
  if ( v18 != 0 && v18 <= 3 )
  {
    LOBYTE(v14) = v18 != 0;
    __asan_report_store4(&this->buy_level_cost_coin_num, v14);
  }
  this->buy_level_cost_coin_num = buy_level_cost_coin_num;
  v19 = (((_BYTE)v34 + 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v34->cycle_point_upper_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v34 + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v34->cycle_point_upper_limit >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&v34->cycle_point_upper_limit);
  }
  cycle_point_upper_limit = v34->cycle_point_upper_limit;
  v21 = *(_BYTE *)(((unsigned __int64)&this->cycle_point_upper_limit >> 3) + 0x7FFF8000);
  if ( v21 != 0 && (char)((((_BYTE)this + 124) & 7) + 3) >= v21 )
  {
    LOBYTE(v19) = v21 != 0;
    __asan_report_store4(&this->cycle_point_upper_limit, v19);
  }
  this->cycle_point_upper_limit = cycle_point_upper_limit;
  if ( *(_BYTE *)(((unsigned __int64)&v34->over_limit_mail_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v34->over_limit_mail_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v34->over_limit_mail_id);
  }
  over_limit_mail_id = v34->over_limit_mail_id;
  v23 = *(_BYTE *)(((unsigned __int64)&this->over_limit_mail_id >> 3) + 0x7FFF8000);
  if ( v23 != 0 && v23 <= 3 )
  {
    LOBYTE(v19) = v23 != 0;
    __asan_report_store4(&this->over_limit_mail_id, v19);
  }
  this->over_limit_mail_id = over_limit_mail_id;
  v24 = (((_BYTE)v34 - 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v34->level_reward_index_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v34 - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v34->level_reward_index_id >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&v34->level_reward_index_id);
  }
  level_reward_index_id = v34->level_reward_index_id;
  v26 = *(_BYTE *)(((unsigned __int64)&this->level_reward_index_id >> 3) + 0x7FFF8000);
  if ( v26 != 0 && (char)((((_BYTE)this - 124) & 7) + 3) >= v26 )
  {
    LOBYTE(v24) = v26 != 0;
    __asan_report_store4(&this->level_reward_index_id, v24);
  }
  this->level_reward_index_id = level_reward_index_id;
  if ( *(_BYTE *)(((unsigned __int64)&v34->finish_mail_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v34->finish_mail_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v34->finish_mail_id);
  }
  finish_mail_id = v34->finish_mail_id;
  v28 = *(_BYTE *)(((unsigned __int64)&this->finish_mail_id >> 3) + 0x7FFF8000);
  if ( v28 != 0 && v28 <= 3 )
  {
    LOBYTE(v24) = v28 != 0;
    __asan_report_store4(&this->finish_mail_id, v24);
  }
  this->finish_mail_id = finish_mail_id;
  v29 = (((_BYTE)v34 - 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v34->mail_day_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v34 - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v34->mail_day_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v34->mail_day_count);
  }
  mail_day_count = v34->mail_day_count;
  v31 = *(_BYTE *)(((unsigned __int64)&this->mail_day_count >> 3) + 0x7FFF8000);
  if ( v31 != 0 && (char)((((_BYTE)this - 116) & 7) + 3) >= v31 )
  {
    LOBYTE(v29) = v31 != 0;
    __asan_report_store4(&this->mail_day_count, v29);
  }
  this->mail_day_count = mail_day_count;
  if ( *(_BYTE *)(((unsigned __int64)&v34->mail_config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v34->mail_config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v34->mail_config_id);
  }
  mail_config_id = v34->mail_config_id;
  v33 = *(_BYTE *)(((unsigned __int64)&this->mail_config_id >> 3) + 0x7FFF8000);
  if ( v33 != 0 && v33 <= 3 )
  {
    LOBYTE(v29) = v33 != 0;
    __asan_report_store4(&this->mail_config_id, v29);
  }
  this->mail_config_id = mail_config_id;
};

// Line 67: range 00000000142A4FE0-00000000142A500A
void __cdecl data::BattlePassScheduleExcelConfig::~BattlePassScheduleExcelConfig(
        data::BattlePassScheduleExcelConfig *const this)
{
  data::BattlePassScheduleExcelConfig::~BattlePassScheduleExcelConfig(this);
  operator delete(this, 0x98uLL);
};

// Line 67: range 00000000142A4F6E-00000000142A4FDF
void __cdecl data::BattlePassScheduleExcelConfig::~BattlePassScheduleExcelConfig(
        data::BattlePassScheduleExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BattlePassScheduleExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BattlePassScheduleExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->cycle_list);
  std::string::~string(&this->end_date_str);
  std::string::~string(&this->begin_date_str);
};

// Line 92: range 00000000141A4702-00000000141A4841
void __cdecl data::BattlePassLevelExcelConfig::BattlePassLevelExcelConfig(
        data::BattlePassLevelExcelConfig *const this,
        const data::BattlePassLevelExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t level; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t level_up_need_point; // ecx
  char v7; // dl
  const data::BattlePassLevelExcelConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::BattlePassLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BattlePassLevelExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->level);
  }
  level = a2->level;
  v4 = *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->level, a2);
  }
  this->level = level;
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->level_up_need_point >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->level_up_need_point >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->level_up_need_point);
  }
  level_up_need_point = v8->level_up_need_point;
  v7 = *(_BYTE *)(((unsigned __int64)&this->level_up_need_point >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->level_up_need_point, v5);
  }
  this->level_up_need_point = level_up_need_point;
};

// Line 95: range 00000000142A4F42-00000000142A4F6C
void __cdecl data::BattlePassLevelExcelConfig::~BattlePassLevelExcelConfig(
        data::BattlePassLevelExcelConfig *const this)
{
  data::BattlePassLevelExcelConfig::~BattlePassLevelExcelConfig(this);
  operator delete(this, 0x10uLL);
};

// Line 95: range 00000000142A4F00-00000000142A4F41
void __cdecl data::BattlePassLevelExcelConfig::~BattlePassLevelExcelConfig(
        data::BattlePassLevelExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BattlePassLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BattlePassLevelExcelConfig = v2;
};

// Line 107: range 0000000013BE5700-0000000013BE5820
void __cdecl data::BattlePassRewardExcelConfig::BattlePassRewardExcelConfig(
        data::BattlePassRewardExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::BattlePassRewardExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BattlePassRewardExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->index_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->index_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->index_id, v1);
  }
  this->index_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->level, v3);
  }
  this->level = 0;
  std::vector<unsigned int>::vector(&this->free_reward_id_list);
  std::vector<unsigned int>::vector(&this->paid_reward_id_list);
  if ( *(char *)(((unsigned __int64)&this->show_up >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->show_up, v3, &this->show_up);
  this->show_up = 0;
};

// Line 107: range 0000000013DEF73C-0000000013DEF94E
void __cdecl data::BattlePassRewardExcelConfig::BattlePassRewardExcelConfig(
        data::BattlePassRewardExcelConfig *const this,
        const data::BattlePassRewardExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t index_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t level; // ecx
  char v7; // dl
  std::vector<unsigned int> *p_paid_reward_id_list; // rsi
  bool show_up; // cl
  char v10; // al
  const data::BattlePassRewardExcelConfig *v11; // [rsp+0h] [rbp-20h]

  v11 = a2;
  v2 = (int (**)(...))(&`vtable for'data::BattlePassRewardExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BattlePassRewardExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->index_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->index_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->index_id);
  }
  index_id = a2->index_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->index_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->index_id, a2);
  }
  this->index_id = index_id;
  v5 = (((_BYTE)v11 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v11->level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v11 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v11->level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v11->level);
  }
  level = v11->level;
  v7 = *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->level, v5);
  }
  this->level = level;
  std::vector<unsigned int>::vector(&this->free_reward_id_list, &v11->free_reward_id_list);
  p_paid_reward_id_list = &v11->paid_reward_id_list;
  std::vector<unsigned int>::vector(&this->paid_reward_id_list, &v11->paid_reward_id_list);
  if ( *(char *)(((unsigned __int64)&v11->show_up >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v11->show_up, p_paid_reward_id_list, &v11->show_up);
  show_up = v11->show_up;
  v10 = *(_BYTE *)(((unsigned __int64)&this->show_up >> 3) + 0x7FFF8000);
  if ( v10 < 0 )
  {
    LOBYTE(p_paid_reward_id_list) = v10 != 0;
    __asan_report_store1(&this->show_up, p_paid_reward_id_list, &this->show_up);
  }
  this->show_up = show_up;
};

// Line 110: range 00000000142A4E72-00000000142A4ED3
void __cdecl data::BattlePassRewardExcelConfig::~BattlePassRewardExcelConfig(
        data::BattlePassRewardExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BattlePassRewardExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BattlePassRewardExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->paid_reward_id_list);
  std::vector<unsigned int>::~vector(&this->free_reward_id_list);
};

// Line 110: range 00000000142A4ED4-00000000142A4EFE
void __cdecl data::BattlePassRewardExcelConfig::~BattlePassRewardExcelConfig(
        data::BattlePassRewardExcelConfig *const this)
{
  data::BattlePassRewardExcelConfig::~BattlePassRewardExcelConfig(this);
  operator delete(this, 0x48uLL);
};

// Line 125: range 0000000013BE5822-0000000013BE5974
void __cdecl data::BattlePassMissionExcelConfig::BattlePassMissionExcelConfig(
        data::BattlePassMissionExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  data::WatcherConfig::WatcherConfig((data::WatcherConfig *const)this);
  v2 = (int (**)(...))(&`vtable for'data::BattlePassMissionExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WatcherConfig = v2;
  v3 = (((_BYTE)this + 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->refresh_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->refresh_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->refresh_type, v3);
  }
  this->refresh_type = BATTLE_PASS_MISSION_REFRESH_DAILY;
  if ( *(char *)(((unsigned __int64)&this->is_force >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_force, v3, &this->is_force);
  this->is_force = 0;
  v4 = (((_BYTE)this + 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->add_point >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->add_point >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->add_point, v4);
  }
  this->add_point = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->schedule_id, v4);
  }
  this->schedule_id = 0;
};

// Line 125: range 00000000141A49F0-00000000141A4C3D
void __cdecl data::BattlePassMissionExcelConfig::BattlePassMissionExcelConfig(
        data::BattlePassMissionExcelConfig *const this,
        const data::BattlePassMissionExcelConfig *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::BattlePassMissionRefreshType refresh_type; // ecx
  char v5; // dl
  bool is_force; // cl
  char v7; // al
  __int64 v8; // rsi
  uint32_t add_point; // ecx
  char v10; // dl
  uint32_t schedule_id; // ecx
  char v12; // al

  data::WatcherConfig::WatcherConfig((data::WatcherConfig *const)this, (const data::WatcherConfig *)a2);
  v2 = (int (**)(...))(&`vtable for'data::BattlePassMissionExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_WatcherConfig = v2;
  v3 = (((_BYTE)a2 + 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->refresh_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->refresh_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->refresh_type);
  }
  refresh_type = a2->refresh_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->refresh_type >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v5 != 0;
  if ( v5 != 0 && (char)((((_BYTE)this + 108) & 7) + 3) >= v5 )
    __asan_report_store4(&this->refresh_type, v3);
  this->refresh_type = refresh_type;
  if ( *(char *)(((unsigned __int64)&a2->is_force >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_force, v3, &a2->is_force);
  is_force = a2->is_force;
  v7 = *(_BYTE *)(((unsigned __int64)&this->is_force >> 3) + 0x7FFF8000);
  if ( v7 < 0 )
  {
    LOBYTE(v3) = v7 != 0;
    __asan_report_store1(&this->is_force, v3, &this->is_force);
  }
  this->is_force = is_force;
  v8 = (((_BYTE)a2 + 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->add_point >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->add_point >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->add_point);
  }
  add_point = a2->add_point;
  v10 = *(_BYTE *)(((unsigned __int64)&this->add_point >> 3) + 0x7FFF8000);
  if ( v10 != 0 && (char)((((_BYTE)this + 116) & 7) + 3) >= v10 )
  {
    LOBYTE(v8) = v10 != 0;
    __asan_report_store4(&this->add_point, v8);
  }
  this->add_point = add_point;
  if ( *(_BYTE *)(((unsigned __int64)&a2->schedule_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->schedule_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->schedule_id);
  }
  schedule_id = a2->schedule_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(v8) = v12 != 0;
    __asan_report_store4(&this->schedule_id, v8);
  }
  this->schedule_id = schedule_id;
};

// Line 129: range 00000000142A4E46-00000000142A4E70
void __cdecl data::BattlePassMissionExcelConfig::~BattlePassMissionExcelConfig(
        data::BattlePassMissionExcelConfig *const this)
{
  data::BattlePassMissionExcelConfig::~BattlePassMissionExcelConfig(this);
  operator delete(this, 0x80uLL);
};

// Line 129: range 00000000142A4DF8-00000000142A4E45
void __cdecl data::BattlePassMissionExcelConfig::~BattlePassMissionExcelConfig(
        data::BattlePassMissionExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BattlePassMissionExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WatcherConfig = v2;
  data::WatcherConfig::~WatcherConfig((data::WatcherConfig *const)this);
};
