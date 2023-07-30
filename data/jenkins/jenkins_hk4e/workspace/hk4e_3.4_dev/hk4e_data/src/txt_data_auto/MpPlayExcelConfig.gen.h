// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/MpPlayExcelConfig.gen.h

// Line 144: range 0000000014CD88F8-0000000014CD89FB
void __cdecl data::MpCrucibleRewardConfig::MpCrucibleRewardConfig(data::MpCrucibleRewardConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::MpCrucibleRewardConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MpCrucibleRewardConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->drop_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->drop_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->drop_id, v1);
  }
  this->drop_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->reward_id, v3);
  }
  this->reward_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->reward_preview >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reward_preview >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reward_preview, v3);
  }
  this->reward_preview = 0;
};

// Line 144: range 0000000014DCEB44-0000000014DCECF8
void __cdecl data::MpCrucibleRewardConfig::MpCrucibleRewardConfig(
        data::MpCrucibleRewardConfig *const this,
        const data::MpCrucibleRewardConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t drop_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t reward_id; // ecx
  char v7; // dl
  uint32_t reward_preview; // ecx
  char v9; // al
  const data::MpCrucibleRewardConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::MpCrucibleRewardConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_MpCrucibleRewardConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->drop_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->drop_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->drop_id);
  }
  drop_id = a2->drop_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->drop_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->drop_id, a2);
  }
  this->drop_id = drop_id;
  v5 = (((_BYTE)v10 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->reward_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->reward_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->reward_id);
  }
  reward_id = v10->reward_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->reward_id, v5);
  }
  this->reward_id = reward_id;
  if ( *(_BYTE *)(((unsigned __int64)&v10->reward_preview >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->reward_preview >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->reward_preview);
  }
  reward_preview = v10->reward_preview;
  v9 = *(_BYTE *)(((unsigned __int64)&this->reward_preview >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->reward_preview, v5);
  }
  this->reward_preview = reward_preview;
};

// Line 147: range 0000000014C1FE62-0000000014C1FEA3
void __cdecl data::MpCrucibleRewardConfig::~MpCrucibleRewardConfig(data::MpCrucibleRewardConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::MpCrucibleRewardConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MpCrucibleRewardConfig = v2;
};

// Line 147: range 0000000014C1FEA4-0000000014C1FECE
void __cdecl data::MpCrucibleRewardConfig::~MpCrucibleRewardConfig(data::MpCrucibleRewardConfig *const this)
{
  data::MpCrucibleRewardConfig::~MpCrucibleRewardConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 158: range 0000000014D5747E-0000000014D57927
void __cdecl data::MpPlayMatchExcelConfig::MpPlayMatchExcelConfig(
        data::MpPlayMatchExcelConfig *const this,
        const data::MpPlayMatchExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::MpPlayType play_type; // ecx
  char v7; // dl
  bool is_auto_match; // cl
  char v9; // al
  __int64 v10; // rsi
  uint32_t min_players; // ecx
  char v12; // dl
  uint32_t max_players; // ecx
  char v14; // al
  __int64 v15; // rsi
  __int64 v16; // rdx
  bool is_allow_in_any_time; // cl
  char v18; // dl
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // rdx
  bool is_match_necessary; // cl
  char v23; // dl
  __int64 v24; // rdx
  data::MpPlaySettleType settle_type; // ecx
  char v26; // al
  __int64 v27; // rsi
  uint32_t series_id; // ecx
  char v29; // dl
  const data::MpPlayMatchExcelConfig *v30; // [rsp+0h] [rbp-10h]

  v30 = a2;
  v2 = (int (**)(...))(&`vtable for'data::MpPlayMatchExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_MpPlayMatchExcelConfig = v2;
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
  v5 = (((_BYTE)v30 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v30->play_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v30 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v30->play_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v30->play_type);
  }
  play_type = v30->play_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->play_type >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v7 != 0;
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
    __asan_report_store4(&this->play_type, v5);
  this->play_type = play_type;
  if ( *(char *)(((unsigned __int64)&v30->is_auto_match >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v30->is_auto_match, v5, &v30->is_auto_match);
  is_auto_match = v30->is_auto_match;
  v9 = *(_BYTE *)(((unsigned __int64)&this->is_auto_match >> 3) + 0x7FFF8000);
  if ( v9 < 0 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store1(&this->is_auto_match, v5, &this->is_auto_match);
  }
  this->is_auto_match = is_auto_match;
  v10 = (((_BYTE)v30 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v30->min_players >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v30 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v30->min_players >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v30->min_players);
  }
  min_players = v30->min_players;
  v12 = *(_BYTE *)(((unsigned __int64)&this->min_players >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->min_players, v10);
  }
  this->min_players = min_players;
  if ( *(_BYTE *)(((unsigned __int64)&v30->max_players >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v30->max_players >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v30->max_players);
  }
  max_players = v30->max_players;
  v14 = *(_BYTE *)(((unsigned __int64)&this->max_players >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->max_players, v10);
  }
  this->max_players = max_players;
  v15 = ((_BYTE)v30 + 28) & 7;
  v16 = (*(_BYTE *)(((unsigned __int64)&v30->is_allow_in_any_time >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v15 >= *(_BYTE *)(((unsigned __int64)&v30->is_allow_in_any_time >> 3) + 0x7FFF8000));
  if ( (_BYTE)v16 )
    __asan_report_load1(&v30->is_allow_in_any_time, v15, v16);
  is_allow_in_any_time = v30->is_allow_in_any_time;
  v18 = *(_BYTE *)(((unsigned __int64)&this->is_allow_in_any_time >> 3) + 0x7FFF8000);
  LOBYTE(v15) = v18 != 0;
  v19 = (v18 != 0) & (unsigned __int8)((((unsigned __int8)this + 28) & 7) >= v18);
  if ( (_BYTE)v19 )
    __asan_report_store1(&this->is_allow_in_any_time, v15, v19);
  this->is_allow_in_any_time = is_allow_in_any_time;
  v20 = ((_BYTE)v30 + 29) & 7;
  v21 = (*(_BYTE *)(((unsigned __int64)&v30->is_match_necessary >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v20 >= *(_BYTE *)(((unsigned __int64)&v30->is_match_necessary >> 3) + 0x7FFF8000));
  if ( (_BYTE)v21 )
    __asan_report_load1(&v30->is_match_necessary, v20, v21);
  is_match_necessary = v30->is_match_necessary;
  v23 = *(_BYTE *)(((unsigned __int64)&this->is_match_necessary >> 3) + 0x7FFF8000);
  LOBYTE(v20) = v23 != 0;
  v24 = (v23 != 0) & (unsigned __int8)((((unsigned __int8)this + 29) & 7) >= v23);
  if ( (_BYTE)v24 )
    __asan_report_store1(&this->is_match_necessary, v20, v24);
  this->is_match_necessary = is_match_necessary;
  if ( *(_BYTE *)(((unsigned __int64)&v30->settle_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v30->settle_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v30->settle_type);
  }
  settle_type = v30->settle_type;
  v26 = *(_BYTE *)(((unsigned __int64)&this->settle_type >> 3) + 0x7FFF8000);
  if ( v26 != 0 && v26 <= 3 )
  {
    LOBYTE(v20) = v26 != 0;
    __asan_report_store4(&this->settle_type, v20);
  }
  this->settle_type = settle_type;
  v27 = (((_BYTE)v30 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v30->series_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v30 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v30->series_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v30->series_id);
  }
  series_id = v30->series_id;
  v29 = *(_BYTE *)(((unsigned __int64)&this->series_id >> 3) + 0x7FFF8000);
  if ( v29 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v29 )
  {
    LOBYTE(v27) = v29 != 0;
    __asan_report_store4(&this->series_id, v27);
  }
  this->series_id = series_id;
};

// Line 161: range 0000000014DE9FD8-0000000014DEA002
void __cdecl data::MpPlayMatchExcelConfig::~MpPlayMatchExcelConfig(data::MpPlayMatchExcelConfig *const this)
{
  data::MpPlayMatchExcelConfig::~MpPlayMatchExcelConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 161: range 0000000014DE9F96-0000000014DE9FD7
void __cdecl data::MpPlayMatchExcelConfig::~MpPlayMatchExcelConfig(data::MpPlayMatchExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::MpPlayMatchExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MpPlayMatchExcelConfig = v2;
};

// Line 180: range 0000000014778BA4-0000000014779212
void __cdecl data::MpPlayGroupExcelConfig::MpPlayGroupExcelConfig(data::MpPlayGroupExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // rsi
  __int64 v10; // rsi
  __int64 v11; // rsi

  v2 = (int (**)(...))(&`vtable for'data::MpPlayGroupExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MpPlayGroupExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->entry_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->entry_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->entry_id, v1);
  }
  this->entry_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->play_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->play_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->play_id, v3);
  }
  this->play_id = 0;
  std::vector<unsigned int>::vector(&this->server_lua_call_group_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->resin_cost >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->resin_cost >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->resin_cost, v3);
  }
  this->resin_cost = 0;
  v4 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->material_cost_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->material_cost_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->material_cost_id, v4);
  }
  this->material_cost_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->material_cost_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->material_cost_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->material_cost_num, v4);
  }
  this->material_cost_num = 0;
  v5 = ((_BYTE)this + 52) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->is_direct_to_bag >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->is_direct_to_bag >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->is_direct_to_bag, v5, v6);
  this->is_direct_to_bag = 0;
  std::vector<unsigned int>::vector(&this->up_avatar_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->client_show_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->client_show_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->client_show_type, v5);
  }
  this->client_show_type = MP_PLAY_SHOW_NORMAL;
  std::vector<data::MpCrucibleRewardConfig>::vector(&this->reward_vec);
  std::vector<unsigned int>::vector(&this->activate_group_list);
  std::vector<unsigned int>::vector(&this->group_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->born_group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->born_group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->born_group_id, v5);
  }
  this->born_group_id = 0;
  v7 = (((_BYTE)this - 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->born_config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->born_config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->born_config_id, v7);
  }
  this->born_config_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->safe_group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->safe_group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->safe_group_id, v7);
  }
  this->safe_group_id = 0;
  v8 = (((_BYTE)this - 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->safe_config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->safe_config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->safe_config_id, v8);
  }
  this->safe_config_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->reborn_group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reborn_group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reborn_group_id, v8);
  }
  this->reborn_group_id = 0;
  v9 = (((_BYTE)this - 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->reborn_config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reborn_config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->reborn_config_id, v9);
  }
  this->reborn_config_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->reward_group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reward_group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reward_group_id, v9);
  }
  this->reward_group_id = 0;
  v10 = (((_BYTE)this - 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->reward_config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reward_config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->reward_config_id, v10);
  }
  this->reward_config_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->general_reward_config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->general_reward_config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->general_reward_config_id, v10);
  }
  this->general_reward_config_id = 0;
  v11 = (((_BYTE)this - 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->prepare_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->prepare_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->prepare_time, v11);
  }
  this->prepare_time = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->single_prepare_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->single_prepare_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->single_prepare_time, v11);
  }
  this->single_prepare_time = 0;
  std::vector<float>::vector(&this->center_pos_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->center_radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->center_radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->center_radius, v11);
  }
  this->center_radius = 0;
  std::vector<float>::vector(&this->target_pos_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->revise_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->revise_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->revise_id, v11);
  }
  this->revise_id = 0;
  std::vector<unsigned int>::vector(&this->notify_group_vec);
  std::vector<unsigned int>::vector(&this->ability_group_list);
  if ( *(char *)(((unsigned __int64)&this->is_disabled >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_disabled, v11, &this->is_disabled);
  this->is_disabled = 0;
};

// Line 180: range 0000000014D57A68-0000000014D5871F
void __cdecl data::MpPlayGroupExcelConfig::MpPlayGroupExcelConfig(
        data::MpPlayGroupExcelConfig *const this,
        const data::MpPlayGroupExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t entry_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t play_id; // ecx
  char v7; // dl
  std::vector<unsigned int> *p_server_lua_call_group_list; // rsi
  uint32_t resin_cost; // ecx
  char v10; // al
  __int64 v11; // rsi
  uint32_t material_cost_id; // ecx
  char v13; // dl
  uint32_t material_cost_num; // ecx
  char v15; // al
  __int64 v16; // rsi
  __int64 v17; // rdx
  bool is_direct_to_bag; // cl
  char v19; // dl
  __int64 v20; // rdx
  std::vector<unsigned int> *p_up_avatar_list; // rsi
  data::MpPlayShowType client_show_type; // ecx
  char v23; // al
  std::vector<unsigned int> *p_group_list; // rsi
  uint32_t born_group_id; // ecx
  char v26; // al
  __int64 v27; // rsi
  uint32_t born_config_id; // ecx
  char v29; // dl
  uint32_t safe_group_id; // ecx
  char v31; // al
  __int64 v32; // rsi
  uint32_t safe_config_id; // ecx
  char v34; // dl
  uint32_t reborn_group_id; // ecx
  char v36; // al
  __int64 v37; // rsi
  uint32_t reborn_config_id; // ecx
  char v39; // dl
  uint32_t reward_group_id; // ecx
  char v41; // al
  __int64 v42; // rsi
  uint32_t reward_config_id; // ecx
  char v44; // dl
  uint32_t general_reward_config_id; // ecx
  char v46; // al
  __int64 v47; // rsi
  uint32_t prepare_time; // ecx
  char v49; // dl
  uint32_t single_prepare_time; // ecx
  char v51; // al
  std::vector<float> *p_center_pos_list; // rsi
  uint32_t center_radius; // ecx
  char v54; // al
  std::vector<float> *p_target_pos_list; // rsi
  uint32_t revise_id; // ecx
  char v57; // al
  std::vector<unsigned int> *p_ability_group_list; // rsi
  bool is_disabled; // cl
  char v60; // al
  const data::MpPlayGroupExcelConfig *v61; // [rsp+0h] [rbp-20h]

  v61 = a2;
  v2 = (int (**)(...))(&`vtable for'data::MpPlayGroupExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_MpPlayGroupExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->entry_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->entry_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->entry_id);
  }
  entry_id = a2->entry_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->entry_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->entry_id, a2);
  }
  this->entry_id = entry_id;
  v5 = (((_BYTE)v61 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v61->play_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v61 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v61->play_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v61->play_id);
  }
  play_id = v61->play_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->play_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->play_id, v5);
  }
  this->play_id = play_id;
  p_server_lua_call_group_list = &v61->server_lua_call_group_list;
  std::vector<unsigned int>::vector(&this->server_lua_call_group_list, &v61->server_lua_call_group_list);
  if ( *(_BYTE *)(((unsigned __int64)&v61->resin_cost >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v61->resin_cost >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v61->resin_cost);
  }
  resin_cost = v61->resin_cost;
  v10 = *(_BYTE *)(((unsigned __int64)&this->resin_cost >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(p_server_lua_call_group_list) = v10 != 0;
    __asan_report_store4(&this->resin_cost, p_server_lua_call_group_list);
  }
  this->resin_cost = resin_cost;
  v11 = (((_BYTE)v61 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v61->material_cost_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v61 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v61->material_cost_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v61->material_cost_id);
  }
  material_cost_id = v61->material_cost_id;
  v13 = *(_BYTE *)(((unsigned __int64)&this->material_cost_id >> 3) + 0x7FFF8000);
  if ( v13 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v13 )
  {
    LOBYTE(v11) = v13 != 0;
    __asan_report_store4(&this->material_cost_id, v11);
  }
  this->material_cost_id = material_cost_id;
  if ( *(_BYTE *)(((unsigned __int64)&v61->material_cost_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v61->material_cost_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v61->material_cost_num);
  }
  material_cost_num = v61->material_cost_num;
  v15 = *(_BYTE *)(((unsigned __int64)&this->material_cost_num >> 3) + 0x7FFF8000);
  if ( v15 != 0 && v15 <= 3 )
  {
    LOBYTE(v11) = v15 != 0;
    __asan_report_store4(&this->material_cost_num, v11);
  }
  this->material_cost_num = material_cost_num;
  v16 = ((_BYTE)v61 + 52) & 7;
  v17 = (*(_BYTE *)(((unsigned __int64)&v61->is_direct_to_bag >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v16 >= *(_BYTE *)(((unsigned __int64)&v61->is_direct_to_bag >> 3) + 0x7FFF8000));
  if ( (_BYTE)v17 )
    __asan_report_load1(&v61->is_direct_to_bag, v16, v17);
  is_direct_to_bag = v61->is_direct_to_bag;
  v19 = *(_BYTE *)(((unsigned __int64)&this->is_direct_to_bag >> 3) + 0x7FFF8000);
  LOBYTE(v16) = v19 != 0;
  v20 = (v19 != 0) & (unsigned __int8)((((unsigned __int8)this + 52) & 7) >= v19);
  if ( (_BYTE)v20 )
    __asan_report_store1(&this->is_direct_to_bag, v16, v20);
  this->is_direct_to_bag = is_direct_to_bag;
  p_up_avatar_list = &v61->up_avatar_list;
  std::vector<unsigned int>::vector(&this->up_avatar_list, &v61->up_avatar_list);
  if ( *(_BYTE *)(((unsigned __int64)&v61->client_show_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v61->client_show_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v61->client_show_type);
  }
  client_show_type = v61->client_show_type;
  v23 = *(_BYTE *)(((unsigned __int64)&this->client_show_type >> 3) + 0x7FFF8000);
  if ( v23 != 0 && v23 <= 3 )
  {
    LOBYTE(p_up_avatar_list) = v23 != 0;
    __asan_report_store4(&this->client_show_type, p_up_avatar_list);
  }
  this->client_show_type = client_show_type;
  std::vector<data::MpCrucibleRewardConfig>::vector(&this->reward_vec, &v61->reward_vec);
  std::vector<unsigned int>::vector(&this->activate_group_list, &v61->activate_group_list);
  p_group_list = &v61->group_list;
  std::vector<unsigned int>::vector(&this->group_list, &v61->group_list);
  if ( *(_BYTE *)(((unsigned __int64)&v61->born_group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v61->born_group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v61->born_group_id);
  }
  born_group_id = v61->born_group_id;
  v26 = *(_BYTE *)(((unsigned __int64)&this->born_group_id >> 3) + 0x7FFF8000);
  if ( v26 != 0 && v26 <= 3 )
  {
    LOBYTE(p_group_list) = v26 != 0;
    __asan_report_store4(&this->born_group_id, p_group_list);
  }
  this->born_group_id = born_group_id;
  v27 = (((_BYTE)v61 - 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v61->born_config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v61 - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v61->born_config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v61->born_config_id);
  }
  born_config_id = v61->born_config_id;
  v29 = *(_BYTE *)(((unsigned __int64)&this->born_config_id >> 3) + 0x7FFF8000);
  if ( v29 != 0 && (char)((((_BYTE)this - 92) & 7) + 3) >= v29 )
  {
    LOBYTE(v27) = v29 != 0;
    __asan_report_store4(&this->born_config_id, v27);
  }
  this->born_config_id = born_config_id;
  if ( *(_BYTE *)(((unsigned __int64)&v61->safe_group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v61->safe_group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v61->safe_group_id);
  }
  safe_group_id = v61->safe_group_id;
  v31 = *(_BYTE *)(((unsigned __int64)&this->safe_group_id >> 3) + 0x7FFF8000);
  if ( v31 != 0 && v31 <= 3 )
  {
    LOBYTE(v27) = v31 != 0;
    __asan_report_store4(&this->safe_group_id, v27);
  }
  this->safe_group_id = safe_group_id;
  v32 = (((_BYTE)v61 - 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v61->safe_config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v61 - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v61->safe_config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v61->safe_config_id);
  }
  safe_config_id = v61->safe_config_id;
  v34 = *(_BYTE *)(((unsigned __int64)&this->safe_config_id >> 3) + 0x7FFF8000);
  if ( v34 != 0 && (char)((((_BYTE)this - 84) & 7) + 3) >= v34 )
  {
    LOBYTE(v32) = v34 != 0;
    __asan_report_store4(&this->safe_config_id, v32);
  }
  this->safe_config_id = safe_config_id;
  if ( *(_BYTE *)(((unsigned __int64)&v61->reborn_group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v61->reborn_group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v61->reborn_group_id);
  }
  reborn_group_id = v61->reborn_group_id;
  v36 = *(_BYTE *)(((unsigned __int64)&this->reborn_group_id >> 3) + 0x7FFF8000);
  if ( v36 != 0 && v36 <= 3 )
  {
    LOBYTE(v32) = v36 != 0;
    __asan_report_store4(&this->reborn_group_id, v32);
  }
  this->reborn_group_id = reborn_group_id;
  v37 = (((_BYTE)v61 - 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v61->reborn_config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v61 - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v61->reborn_config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v61->reborn_config_id);
  }
  reborn_config_id = v61->reborn_config_id;
  v39 = *(_BYTE *)(((unsigned __int64)&this->reborn_config_id >> 3) + 0x7FFF8000);
  if ( v39 != 0 && (char)((((_BYTE)this - 76) & 7) + 3) >= v39 )
  {
    LOBYTE(v37) = v39 != 0;
    __asan_report_store4(&this->reborn_config_id, v37);
  }
  this->reborn_config_id = reborn_config_id;
  if ( *(_BYTE *)(((unsigned __int64)&v61->reward_group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v61->reward_group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v61->reward_group_id);
  }
  reward_group_id = v61->reward_group_id;
  v41 = *(_BYTE *)(((unsigned __int64)&this->reward_group_id >> 3) + 0x7FFF8000);
  if ( v41 != 0 && v41 <= 3 )
  {
    LOBYTE(v37) = v41 != 0;
    __asan_report_store4(&this->reward_group_id, v37);
  }
  this->reward_group_id = reward_group_id;
  v42 = (((_BYTE)v61 - 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v61->reward_config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v61 - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v61->reward_config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v61->reward_config_id);
  }
  reward_config_id = v61->reward_config_id;
  v44 = *(_BYTE *)(((unsigned __int64)&this->reward_config_id >> 3) + 0x7FFF8000);
  if ( v44 != 0 && (char)((((_BYTE)this - 68) & 7) + 3) >= v44 )
  {
    LOBYTE(v42) = v44 != 0;
    __asan_report_store4(&this->reward_config_id, v42);
  }
  this->reward_config_id = reward_config_id;
  if ( *(_BYTE *)(((unsigned __int64)&v61->general_reward_config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v61->general_reward_config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v61->general_reward_config_id);
  }
  general_reward_config_id = v61->general_reward_config_id;
  v46 = *(_BYTE *)(((unsigned __int64)&this->general_reward_config_id >> 3) + 0x7FFF8000);
  if ( v46 != 0 && v46 <= 3 )
  {
    LOBYTE(v42) = v46 != 0;
    __asan_report_store4(&this->general_reward_config_id, v42);
  }
  this->general_reward_config_id = general_reward_config_id;
  v47 = (((_BYTE)v61 - 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v61->prepare_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v61 - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v61->prepare_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v61->prepare_time);
  }
  prepare_time = v61->prepare_time;
  v49 = *(_BYTE *)(((unsigned __int64)&this->prepare_time >> 3) + 0x7FFF8000);
  if ( v49 != 0 && (char)((((_BYTE)this - 60) & 7) + 3) >= v49 )
  {
    LOBYTE(v47) = v49 != 0;
    __asan_report_store4(&this->prepare_time, v47);
  }
  this->prepare_time = prepare_time;
  if ( *(_BYTE *)(((unsigned __int64)&v61->single_prepare_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v61->single_prepare_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v61->single_prepare_time);
  }
  single_prepare_time = v61->single_prepare_time;
  v51 = *(_BYTE *)(((unsigned __int64)&this->single_prepare_time >> 3) + 0x7FFF8000);
  if ( v51 != 0 && v51 <= 3 )
  {
    LOBYTE(v47) = v51 != 0;
    __asan_report_store4(&this->single_prepare_time, v47);
  }
  this->single_prepare_time = single_prepare_time;
  p_center_pos_list = &v61->center_pos_list;
  std::vector<float>::vector(&this->center_pos_list, &v61->center_pos_list);
  if ( *(_BYTE *)(((unsigned __int64)&v61->center_radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v61->center_radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v61->center_radius);
  }
  center_radius = v61->center_radius;
  v54 = *(_BYTE *)(((unsigned __int64)&this->center_radius >> 3) + 0x7FFF8000);
  if ( v54 != 0 && v54 <= 3 )
  {
    LOBYTE(p_center_pos_list) = v54 != 0;
    __asan_report_store4(&this->center_radius, p_center_pos_list);
  }
  this->center_radius = center_radius;
  p_target_pos_list = &v61->target_pos_list;
  std::vector<float>::vector(&this->target_pos_list, &v61->target_pos_list);
  if ( *(_BYTE *)(((unsigned __int64)&v61->revise_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v61->revise_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v61->revise_id);
  }
  revise_id = v61->revise_id;
  v57 = *(_BYTE *)(((unsigned __int64)&this->revise_id >> 3) + 0x7FFF8000);
  if ( v57 != 0 && v57 <= 3 )
  {
    LOBYTE(p_target_pos_list) = v57 != 0;
    __asan_report_store4(&this->revise_id, p_target_pos_list);
  }
  this->revise_id = revise_id;
  std::vector<unsigned int>::vector(&this->notify_group_vec, &v61->notify_group_vec);
  p_ability_group_list = &v61->ability_group_list;
  std::vector<unsigned int>::vector(&this->ability_group_list, &v61->ability_group_list);
  if ( *(char *)(((unsigned __int64)&v61->is_disabled >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v61->is_disabled, p_ability_group_list, &v61->is_disabled);
  is_disabled = v61->is_disabled;
  v60 = *(_BYTE *)(((unsigned __int64)&this->is_disabled >> 3) + 0x7FFF8000);
  if ( v60 < 0 )
  {
    LOBYTE(p_ability_group_list) = v60 != 0;
    __asan_report_store1(&this->is_disabled, p_ability_group_list, &this->is_disabled);
  }
  this->is_disabled = is_disabled;
};

// Line 183: range 0000000014DE9F6A-0000000014DE9F94
void __cdecl data::MpPlayGroupExcelConfig::~MpPlayGroupExcelConfig(data::MpPlayGroupExcelConfig *const this)
{
  data::MpPlayGroupExcelConfig::~MpPlayGroupExcelConfig(this);
  operator delete(this, 0x148uLL);
};

// Line 183: range 0000000014DE9E8E-0000000014DE9F69
void __cdecl data::MpPlayGroupExcelConfig::~MpPlayGroupExcelConfig(data::MpPlayGroupExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::MpPlayGroupExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MpPlayGroupExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->ability_group_list);
  std::vector<unsigned int>::~vector(&this->notify_group_vec);
  std::vector<float>::~vector(&this->target_pos_list);
  std::vector<float>::~vector(&this->center_pos_list);
  std::vector<unsigned int>::~vector(&this->group_list);
  std::vector<unsigned int>::~vector(&this->activate_group_list);
  std::vector<data::MpCrucibleRewardConfig>::~vector(&this->reward_vec);
  std::vector<unsigned int>::~vector(&this->up_avatar_list);
  std::vector<unsigned int>::~vector(&this->server_lua_call_group_list);
};

// Line 223: range 0000000014779214-0000000014779325
void __cdecl data::MpPlayWatcherConfig::MpPlayWatcherConfig(data::MpPlayWatcherConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rdx

  data::WatcherConfig::WatcherConfig((data::WatcherConfig *const)this);
  v2 = (int (**)(...))(&`vtable for'data::MpPlayWatcherConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WatcherConfig = v2;
  v3 = (((_BYTE)this + 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->mp_play_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->mp_play_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->mp_play_id, v3);
  }
  this->mp_play_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->priority, v3);
  }
  this->priority = 0;
  v4 = ((_BYTE)this + 116) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->is_store >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->is_store >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->is_store, v4, v5);
  this->is_store = 0;
};

// Line 223: range 0000000014D58860-0000000014D58A32
void __cdecl data::MpPlayWatcherConfig::MpPlayWatcherConfig(
        data::MpPlayWatcherConfig *const this,
        const data::MpPlayWatcherConfig *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  uint32_t mp_play_id; // ecx
  char v5; // dl
  uint32_t priority; // ecx
  char v7; // al
  __int64 v8; // rsi
  __int64 v9; // rdx
  bool is_store; // cl
  char v11; // dl
  __int64 v12; // rdx

  data::WatcherConfig::WatcherConfig((data::WatcherConfig *const)this, (const data::WatcherConfig *)a2);
  v2 = (int (**)(...))(&`vtable for'data::MpPlayWatcherConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_WatcherConfig = v2;
  v3 = (((_BYTE)a2 + 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->mp_play_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->mp_play_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->mp_play_id);
  }
  mp_play_id = a2->mp_play_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->mp_play_id >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 108) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->mp_play_id, v3);
  }
  this->mp_play_id = mp_play_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->priority >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->priority >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->priority);
  }
  priority = a2->priority;
  v7 = *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(v3) = v7 != 0;
    __asan_report_store4(&this->priority, v3);
  }
  this->priority = priority;
  v8 = ((_BYTE)a2 + 116) & 7;
  v9 = (*(_BYTE *)(((unsigned __int64)&a2->is_store >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&a2->is_store >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_load1(&a2->is_store, v8, v9);
  is_store = a2->is_store;
  v11 = *(_BYTE *)(((unsigned __int64)&this->is_store >> 3) + 0x7FFF8000);
  LOBYTE(v8) = v11 != 0;
  v12 = (v11 != 0) & (unsigned __int8)((((unsigned __int8)this + 116) & 7) >= v11);
  if ( (_BYTE)v12 )
    __asan_report_store1(&this->is_store, v8, v12);
  this->is_store = is_store;
};

// Line 227: range 0000000014DE9E14-0000000014DE9E61
void __cdecl data::MpPlayWatcherConfig::~MpPlayWatcherConfig(data::MpPlayWatcherConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::MpPlayWatcherConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WatcherConfig = v2;
  data::WatcherConfig::~WatcherConfig((data::WatcherConfig *const)this);
};

// Line 227: range 0000000014DE9E62-0000000014DE9E8C
void __cdecl data::MpPlayWatcherConfig::~MpPlayWatcherConfig(data::MpPlayWatcherConfig *const this)
{
  data::MpPlayWatcherConfig::~MpPlayWatcherConfig(this);
  operator delete(this, 0x78uLL);
};

// Line 240: range 0000000014779326-000000001477950E
void __cdecl data::MpPlayStatisticConfig::MpPlayStatisticConfig(data::MpPlayStatisticConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::MpPlayStatisticConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MpPlayStatisticConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->mp_play_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->mp_play_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->mp_play_id, v3);
  }
  this->mp_play_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->settle_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->settle_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->settle_type, v3);
  }
  this->settle_type = MP_PLAY_SETTLE_TYPE_NONE;
  std::vector<std::string>::vector(&this->settle_param);
  if ( *(_BYTE *)(((unsigned __int64)&this->client_sync_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->client_sync_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->client_sync_type, v3);
  }
  this->client_sync_type = MP_PLAY_SETTLE_SYNC_TYPE_NONE;
  std::string::basic_string(&this->client_sync_param);
  std::string::basic_string(&this->mpchallengetitle);
  std::string::basic_string(&this->mpchallenge);
  std::string::basic_string(&this->mpchallengestyle);
  std::string::basic_string(&this->image);
  if ( *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->priority, v3);
  }
  this->priority = 0;
};

// Line 240: range 0000000014D58B74-0000000014D58F45
void __cdecl data::MpPlayStatisticConfig::MpPlayStatisticConfig(
        data::MpPlayStatisticConfig *const this,
        const data::MpPlayStatisticConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t mp_play_id; // ecx
  char v7; // dl
  data::MpPlayerSettleType settle_type; // ecx
  char v9; // al
  std::vector<std::string> *p_settle_param; // rsi
  data::MpPlayerSettleSyncType client_sync_type; // ecx
  char v12; // al
  std::string *p_image; // rsi
  uint32_t priority; // ecx
  char v15; // al
  const data::MpPlayStatisticConfig *v16; // [rsp+0h] [rbp-20h]

  v16 = a2;
  v2 = (int (**)(...))(&`vtable for'data::MpPlayStatisticConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_MpPlayStatisticConfig = v2;
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
  v5 = (((_BYTE)v16 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v16->mp_play_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v16 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v16->mp_play_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v16->mp_play_id);
  }
  mp_play_id = v16->mp_play_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->mp_play_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->mp_play_id, v5);
  }
  this->mp_play_id = mp_play_id;
  if ( *(_BYTE *)(((unsigned __int64)&v16->settle_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v16->settle_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v16->settle_type);
  }
  settle_type = v16->settle_type;
  v9 = *(_BYTE *)(((unsigned __int64)&this->settle_type >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->settle_type, v5);
  }
  this->settle_type = settle_type;
  p_settle_param = &v16->settle_param;
  std::vector<std::string>::vector(&this->settle_param, &v16->settle_param);
  if ( *(_BYTE *)(((unsigned __int64)&v16->client_sync_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v16->client_sync_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v16->client_sync_type);
  }
  client_sync_type = v16->client_sync_type;
  v12 = *(_BYTE *)(((unsigned __int64)&this->client_sync_type >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(p_settle_param) = v12 != 0;
    __asan_report_store4(&this->client_sync_type, p_settle_param);
  }
  this->client_sync_type = client_sync_type;
  std::string::basic_string(&this->client_sync_param, &v16->client_sync_param);
  std::string::basic_string(&this->mpchallengetitle, &v16->mpchallengetitle);
  std::string::basic_string(&this->mpchallenge, &v16->mpchallenge);
  std::string::basic_string(&this->mpchallengestyle, &v16->mpchallengestyle);
  p_image = &v16->image;
  std::string::basic_string(&this->image, &v16->image);
  if ( *(_BYTE *)(((unsigned __int64)&v16->priority >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v16->priority >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v16->priority);
  }
  priority = v16->priority;
  v15 = *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000);
  if ( v15 != 0 && v15 <= 3 )
  {
    LOBYTE(p_image) = v15 != 0;
    __asan_report_store4(&this->priority, p_image);
  }
  this->priority = priority;
};

// Line 243: range 0000000014DE9D42-0000000014DE9DE7
void __cdecl data::MpPlayStatisticConfig::~MpPlayStatisticConfig(data::MpPlayStatisticConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::MpPlayStatisticConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MpPlayStatisticConfig = v2;
  std::string::~string(&this->image);
  std::string::~string(&this->mpchallengestyle);
  std::string::~string(&this->mpchallenge);
  std::string::~string(&this->mpchallengetitle);
  std::string::~string(&this->client_sync_param);
  std::vector<std::string>::~vector(&this->settle_param);
};

// Line 243: range 0000000014DE9DE8-0000000014DE9E12
void __cdecl data::MpPlayStatisticConfig::~MpPlayStatisticConfig(data::MpPlayStatisticConfig *const this)
{
  data::MpPlayStatisticConfig::~MpPlayStatisticConfig(this);
  operator delete(this, 0xE0uLL);
};

// Line 264: range 0000000014779510-00000000147795DA
void __cdecl data::MpPlayScoreExcelConfig::MpPlayScoreExcelConfig(data::MpPlayScoreExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::MpPlayScoreExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MpPlayScoreExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->play_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->play_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->play_type, v1);
  }
  this->play_type = MP_PLAY_NONE;
  std::vector<unsigned int>::vector(&this->param);
  if ( *(char *)(((unsigned __int64)&this->is_calc_score >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_calc_score, v1, &this->is_calc_score);
  this->is_calc_score = 0;
};

// Line 264: range 00000000149DBBC2-00000000149DBD0D
void __cdecl data::MpPlayScoreExcelConfig::MpPlayScoreExcelConfig(
        data::MpPlayScoreExcelConfig *const this,
        const data::MpPlayScoreExcelConfig *a2)
{
  int (**v2)(...); // rdx
  data::MpPlayType play_type; // ecx
  char v4; // al
  std::vector<unsigned int> *p_param; // rsi
  bool is_calc_score; // cl
  char v7; // al
  const data::MpPlayScoreExcelConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::MpPlayScoreExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_MpPlayScoreExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->play_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->play_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->play_type);
  }
  play_type = a2->play_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->play_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->play_type, a2);
  }
  this->play_type = play_type;
  p_param = &v8->param;
  std::vector<unsigned int>::vector(&this->param, &v8->param);
  if ( *(char *)(((unsigned __int64)&v8->is_calc_score >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v8->is_calc_score, p_param, &v8->is_calc_score);
  is_calc_score = v8->is_calc_score;
  v7 = *(_BYTE *)(((unsigned __int64)&this->is_calc_score >> 3) + 0x7FFF8000);
  if ( v7 < 0 )
  {
    LOBYTE(p_param) = v7 != 0;
    __asan_report_store1(&this->is_calc_score, p_param, &this->is_calc_score);
  }
  this->is_calc_score = is_calc_score;
};

// Line 267: range 0000000014DE9D16-0000000014DE9D40
void __cdecl data::MpPlayScoreExcelConfig::~MpPlayScoreExcelConfig(data::MpPlayScoreExcelConfig *const this)
{
  data::MpPlayScoreExcelConfig::~MpPlayScoreExcelConfig(this);
  operator delete(this, 0x30uLL);
};

// Line 267: range 0000000014DE9CC4-0000000014DE9D15
void __cdecl data::MpPlayScoreExcelConfig::~MpPlayScoreExcelConfig(data::MpPlayScoreExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::MpPlayScoreExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MpPlayScoreExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->param);
};

// Line 280: range 00000000147795DC-00000000147796A9
void __cdecl data::MpPlayAbilityGroupExcelConfig::MpPlayAbilityGroupExcelConfig(
        data::MpPlayAbilityGroupExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::MpPlayAbilityGroupExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MpPlayAbilityGroupExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->index, v1);
  }
  this->index = 0;
  std::string::basic_string(&this->ability_group_name);
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->avatar_id, v1);
  }
  this->avatar_id = 0;
};

// Line 280: range 00000000149E8D0C-00000000149E8E56
void __cdecl data::MpPlayAbilityGroupExcelConfig::MpPlayAbilityGroupExcelConfig(
        data::MpPlayAbilityGroupExcelConfig *const this,
        const data::MpPlayAbilityGroupExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t index; // ecx
  char v4; // al
  std::string *p_ability_group_name; // rsi
  uint32_t avatar_id; // ecx
  char v7; // al
  const data::MpPlayAbilityGroupExcelConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::MpPlayAbilityGroupExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_MpPlayAbilityGroupExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->index);
  }
  index = a2->index;
  v4 = *(_BYTE *)(((unsigned __int64)&this->index >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->index, a2);
  }
  this->index = index;
  p_ability_group_name = &v8->ability_group_name;
  std::string::basic_string(&this->ability_group_name, &v8->ability_group_name);
  if ( *(_BYTE *)(((unsigned __int64)&v8->avatar_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v8->avatar_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v8->avatar_id);
  }
  avatar_id = v8->avatar_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_ability_group_name) = v7 != 0;
    __asan_report_store4(&this->avatar_id, p_ability_group_name);
  }
  this->avatar_id = avatar_id;
};

// Line 283: range 0000000014DE9C98-0000000014DE9CC2
void __cdecl data::MpPlayAbilityGroupExcelConfig::~MpPlayAbilityGroupExcelConfig(
        data::MpPlayAbilityGroupExcelConfig *const this)
{
  data::MpPlayAbilityGroupExcelConfig::~MpPlayAbilityGroupExcelConfig(this);
  operator delete(this, 0x38uLL);
};

// Line 283: range 0000000014DE9C46-0000000014DE9C97
void __cdecl data::MpPlayAbilityGroupExcelConfig::~MpPlayAbilityGroupExcelConfig(
        data::MpPlayAbilityGroupExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::MpPlayAbilityGroupExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MpPlayAbilityGroupExcelConfig = v2;
  std::string::~string(&this->ability_group_name);
};
