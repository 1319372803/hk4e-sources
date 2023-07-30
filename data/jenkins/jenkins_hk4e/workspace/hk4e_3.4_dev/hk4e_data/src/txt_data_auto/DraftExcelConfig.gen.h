// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/DraftExcelConfig.gen.h

// Line 116: range 00000000141268E2-00000000141269A7
void __cdecl data::DraftTransferConfig::DraftTransferConfig(data::DraftTransferConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::DraftTransferConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DraftTransferConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->group_id, v1);
  }
  this->group_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->config_id, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->config_id = 0;
};

// Line 116: range 0000000014267BE0-0000000014267D1F
void __cdecl data::DraftTransferConfig::DraftTransferConfig(
        data::DraftTransferConfig *const this,
        const data::DraftTransferConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t group_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t config_id; // ecx
  char v7; // dl
  const data::DraftTransferConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::DraftTransferConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_DraftTransferConfig = v2;
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
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->config_id);
  }
  config_id = v8->config_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->config_id, v5);
  }
  this->config_id = config_id;
};

// Line 119: range 0000000014052566-00000000140525A7
void __cdecl data::DraftTransferConfig::~DraftTransferConfig(data::DraftTransferConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::DraftTransferConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DraftTransferConfig = v2;
};

// Line 119: range 00000000140525A8-00000000140525D2
void __cdecl data::DraftTransferConfig::~DraftTransferConfig(data::DraftTransferConfig *const this)
{
  data::DraftTransferConfig::~DraftTransferConfig(this);
  operator delete(this, 0x10uLL);
};

// Line 129: range 0000000013C0337E-0000000013C03756
void __cdecl data::DraftExcelConfig::DraftExcelConfig(data::DraftExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdx

  v2 = (int (**)(...))(&`vtable for'data::DraftExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DraftExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  std::vector<data::DraftTransferConfig>::vector(&this->transfer_config);
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->scene_id, v1);
  }
  this->scene_id = 0;
  v3 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->exec >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->exec >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->exec, v3);
  }
  this->exec = DRAFT_EXEC_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->exec_sub_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->exec_sub_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->exec_sub_type, v3);
  }
  this->exec_sub_type = DRAFT_EXEC_SUB_NONE;
  v4 = (((_BYTE)this + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->param >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->param >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->param, v4);
  }
  this->param = 0;
  if ( *(char *)(((unsigned __int64)&this->enable_mp >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->enable_mp, v4, &this->enable_mp);
  this->enable_mp = 0;
  v5 = ((_BYTE)this + 57) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->is_need_all_agree >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->is_need_all_agree >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->is_need_all_agree, v5, v6);
  this->is_need_all_agree = 0;
  v7 = (((_BYTE)this + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->confirm_count_down >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->confirm_count_down >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->confirm_count_down, v7);
  }
  this->confirm_count_down = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->min_player_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->min_player_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->min_player_count, v7);
  }
  this->min_player_count = 0;
  v8 = ((_BYTE)this + 68) & 7;
  v9 = (*(_BYTE *)(((unsigned __int64)&this->is_need_twice_confirm >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&this->is_need_twice_confirm >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->is_need_twice_confirm, v8, v9);
  this->is_need_twice_confirm = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->twice_confirm_count_down >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->twice_confirm_count_down >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->twice_confirm_count_down, v8);
  }
  this->twice_confirm_count_down = 0;
  v10 = ((_BYTE)this + 76) & 7;
  v11 = (*(_BYTE *)(((unsigned __int64)&this->is_exec_when_count_down_over >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v10 >= *(_BYTE *)(((unsigned __int64)&this->is_exec_when_count_down_over >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
    __asan_report_store1(&this->is_exec_when_count_down_over, v10, v11);
  this->is_exec_when_count_down_over = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->invite_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->invite_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->invite_type, v10);
  }
  this->invite_type = DRAFT_INVITE_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->start_limit_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->start_limit_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->start_limit_type, (((_BYTE)this + 84) & 7u) + 3);
  }
  this->start_limit_type = DRAFT_START_LIMIT_NONE;
};

// Line 129: range 00000000141C1FBE-00000000141C26E6
void __cdecl data::DraftExcelConfig::DraftExcelConfig(
        data::DraftExcelConfig *const this,
        const data::DraftExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  std::vector<data::DraftTransferConfig> *p_transfer_config; // rsi
  uint32_t scene_id; // ecx
  char v7; // al
  __int64 v8; // rsi
  data::DraftExecType exec; // ecx
  char v10; // dl
  data::DraftExecSubType exec_sub_type; // ecx
  char v12; // al
  __int64 v13; // rsi
  uint32_t param; // ecx
  char v15; // dl
  bool enable_mp; // cl
  char v17; // al
  __int64 v18; // rsi
  __int64 v19; // rdx
  bool is_need_all_agree; // cl
  char v21; // dl
  __int64 v22; // rdx
  __int64 v23; // rsi
  uint32_t confirm_count_down; // ecx
  char v25; // dl
  uint32_t min_player_count; // ecx
  char v27; // al
  __int64 v28; // rsi
  __int64 v29; // rdx
  bool is_need_twice_confirm; // cl
  char v31; // dl
  __int64 v32; // rdx
  uint32_t twice_confirm_count_down; // ecx
  char v34; // al
  __int64 v35; // rsi
  __int64 v36; // rdx
  bool is_exec_when_count_down_over; // cl
  char v38; // dl
  __int64 v39; // rdx
  data::DraftInviteType invite_type; // ecx
  char v41; // al
  __int64 v42; // rsi
  data::DraftStartLimitType start_limit_type; // ecx
  char v44; // dl
  const data::DraftExcelConfig *v45; // [rsp+0h] [rbp-10h]

  v45 = a2;
  v2 = (int (**)(...))(&`vtable for'data::DraftExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_DraftExcelConfig = v2;
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
  p_transfer_config = &v45->transfer_config;
  std::vector<data::DraftTransferConfig>::vector(&this->transfer_config, &v45->transfer_config);
  if ( *(_BYTE *)(((unsigned __int64)&v45->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v45->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v45->scene_id);
  }
  scene_id = v45->scene_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_transfer_config) = v7 != 0;
    __asan_report_store4(&this->scene_id, p_transfer_config);
  }
  this->scene_id = scene_id;
  v8 = (((_BYTE)v45 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v45->exec >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v45 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v45->exec >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v45->exec);
  }
  exec = v45->exec;
  v10 = *(_BYTE *)(((unsigned __int64)&this->exec >> 3) + 0x7FFF8000);
  if ( v10 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v10 )
  {
    LOBYTE(v8) = v10 != 0;
    __asan_report_store4(&this->exec, v8);
  }
  this->exec = exec;
  if ( *(_BYTE *)(((unsigned __int64)&v45->exec_sub_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v45->exec_sub_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v45->exec_sub_type);
  }
  exec_sub_type = v45->exec_sub_type;
  v12 = *(_BYTE *)(((unsigned __int64)&this->exec_sub_type >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(v8) = v12 != 0;
    __asan_report_store4(&this->exec_sub_type, v8);
  }
  this->exec_sub_type = exec_sub_type;
  v13 = (((_BYTE)v45 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v45->param >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v45 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v45->param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v45->param);
  }
  param = v45->param;
  v15 = *(_BYTE *)(((unsigned __int64)&this->param >> 3) + 0x7FFF8000);
  LOBYTE(v13) = v15 != 0;
  if ( v15 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v15 )
    __asan_report_store4(&this->param, v13);
  this->param = param;
  if ( *(char *)(((unsigned __int64)&v45->enable_mp >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v45->enable_mp, v13, &v45->enable_mp);
  enable_mp = v45->enable_mp;
  v17 = *(_BYTE *)(((unsigned __int64)&this->enable_mp >> 3) + 0x7FFF8000);
  if ( v17 < 0 )
  {
    LOBYTE(v13) = v17 != 0;
    __asan_report_store1(&this->enable_mp, v13, &this->enable_mp);
  }
  this->enable_mp = enable_mp;
  v18 = ((_BYTE)v45 + 57) & 7;
  v19 = (*(_BYTE *)(((unsigned __int64)&v45->is_need_all_agree >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v18 >= *(_BYTE *)(((unsigned __int64)&v45->is_need_all_agree >> 3) + 0x7FFF8000));
  if ( (_BYTE)v19 )
    __asan_report_load1(&v45->is_need_all_agree, v18, v19);
  is_need_all_agree = v45->is_need_all_agree;
  v21 = *(_BYTE *)(((unsigned __int64)&this->is_need_all_agree >> 3) + 0x7FFF8000);
  LOBYTE(v18) = v21 != 0;
  v22 = (v21 != 0) & (unsigned __int8)((((unsigned __int8)this + 57) & 7) >= v21);
  if ( (_BYTE)v22 )
    __asan_report_store1(&this->is_need_all_agree, v18, v22);
  this->is_need_all_agree = is_need_all_agree;
  v23 = (((_BYTE)v45 + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v45->confirm_count_down >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v45 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v45->confirm_count_down >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v45->confirm_count_down);
  }
  confirm_count_down = v45->confirm_count_down;
  v25 = *(_BYTE *)(((unsigned __int64)&this->confirm_count_down >> 3) + 0x7FFF8000);
  if ( v25 != 0 && (char)((((_BYTE)this + 60) & 7) + 3) >= v25 )
  {
    LOBYTE(v23) = v25 != 0;
    __asan_report_store4(&this->confirm_count_down, v23);
  }
  this->confirm_count_down = confirm_count_down;
  if ( *(_BYTE *)(((unsigned __int64)&v45->min_player_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v45->min_player_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v45->min_player_count);
  }
  min_player_count = v45->min_player_count;
  v27 = *(_BYTE *)(((unsigned __int64)&this->min_player_count >> 3) + 0x7FFF8000);
  if ( v27 != 0 && v27 <= 3 )
  {
    LOBYTE(v23) = v27 != 0;
    __asan_report_store4(&this->min_player_count, v23);
  }
  this->min_player_count = min_player_count;
  v28 = ((_BYTE)v45 + 68) & 7;
  v29 = (*(_BYTE *)(((unsigned __int64)&v45->is_need_twice_confirm >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v28 >= *(_BYTE *)(((unsigned __int64)&v45->is_need_twice_confirm >> 3) + 0x7FFF8000));
  if ( (_BYTE)v29 )
    __asan_report_load1(&v45->is_need_twice_confirm, v28, v29);
  is_need_twice_confirm = v45->is_need_twice_confirm;
  v31 = *(_BYTE *)(((unsigned __int64)&this->is_need_twice_confirm >> 3) + 0x7FFF8000);
  LOBYTE(v28) = v31 != 0;
  v32 = (v31 != 0) & (unsigned __int8)((((unsigned __int8)this + 68) & 7) >= v31);
  if ( (_BYTE)v32 )
    __asan_report_store1(&this->is_need_twice_confirm, v28, v32);
  this->is_need_twice_confirm = is_need_twice_confirm;
  if ( *(_BYTE *)(((unsigned __int64)&v45->twice_confirm_count_down >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v45->twice_confirm_count_down >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v45->twice_confirm_count_down);
  }
  twice_confirm_count_down = v45->twice_confirm_count_down;
  v34 = *(_BYTE *)(((unsigned __int64)&this->twice_confirm_count_down >> 3) + 0x7FFF8000);
  if ( v34 != 0 && v34 <= 3 )
  {
    LOBYTE(v28) = v34 != 0;
    __asan_report_store4(&this->twice_confirm_count_down, v28);
  }
  this->twice_confirm_count_down = twice_confirm_count_down;
  v35 = ((_BYTE)v45 + 76) & 7;
  v36 = (*(_BYTE *)(((unsigned __int64)&v45->is_exec_when_count_down_over >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v35 >= *(_BYTE *)(((unsigned __int64)&v45->is_exec_when_count_down_over >> 3) + 0x7FFF8000));
  if ( (_BYTE)v36 )
    __asan_report_load1(&v45->is_exec_when_count_down_over, v35, v36);
  is_exec_when_count_down_over = v45->is_exec_when_count_down_over;
  v38 = *(_BYTE *)(((unsigned __int64)&this->is_exec_when_count_down_over >> 3) + 0x7FFF8000);
  LOBYTE(v35) = v38 != 0;
  v39 = (v38 != 0) & (unsigned __int8)((((unsigned __int8)this + 76) & 7) >= v38);
  if ( (_BYTE)v39 )
    __asan_report_store1(&this->is_exec_when_count_down_over, v35, v39);
  this->is_exec_when_count_down_over = is_exec_when_count_down_over;
  if ( *(_BYTE *)(((unsigned __int64)&v45->invite_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v45->invite_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v45->invite_type);
  }
  invite_type = v45->invite_type;
  v41 = *(_BYTE *)(((unsigned __int64)&this->invite_type >> 3) + 0x7FFF8000);
  if ( v41 != 0 && v41 <= 3 )
  {
    LOBYTE(v35) = v41 != 0;
    __asan_report_store4(&this->invite_type, v35);
  }
  this->invite_type = invite_type;
  v42 = (((_BYTE)v45 + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v45->start_limit_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v45 + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v45->start_limit_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v45->start_limit_type);
  }
  start_limit_type = v45->start_limit_type;
  v44 = *(_BYTE *)(((unsigned __int64)&this->start_limit_type >> 3) + 0x7FFF8000);
  if ( v44 != 0 && (char)((((_BYTE)this + 84) & 7) + 3) >= v44 )
  {
    LOBYTE(v42) = v44 != 0;
    __asan_report_store4(&this->start_limit_type, v42);
  }
  this->start_limit_type = start_limit_type;
};

// Line 132: range 00000000142A3ABC-00000000142A3B0D
void __cdecl data::DraftExcelConfig::~DraftExcelConfig(data::DraftExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::DraftExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DraftExcelConfig = v2;
  std::vector<data::DraftTransferConfig>::~vector(&this->transfer_config);
};

// Line 132: range 00000000142A3B0E-00000000142A3B38
void __cdecl data::DraftExcelConfig::~DraftExcelConfig(data::DraftExcelConfig *const this)
{
  data::DraftExcelConfig::~DraftExcelConfig(this);
  operator delete(this, 0x58uLL);
};
