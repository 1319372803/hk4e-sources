// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ActivitySeaLampV3ExcelConfig.gen.h

// Line 41: range 0000000013BD49BC-0000000013BD4BEE
void __cdecl data::LanV3BoatBaseExcelConfig::LanV3BoatBaseExcelConfig(data::LanV3BoatBaseExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  v2 = (int (**)(...))(&`vtable for'data::LanV3BoatBaseExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_LanV3BoatBaseExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->schedule_id, v1);
  }
  this->schedule_id = 0;
  std::vector<unsigned int>::vector(&this->stage_max_score_limit);
  std::string::basic_string(&this->boat_revive_progress_gv_key);
  std::string::basic_string(&this->boat_coin_collect_gv_key);
  std::string::basic_string(&this->boat_life_count_gv_key);
  std::string::basic_string(&this->boat_max_life_count_gv_key);
  if ( *(_BYTE *)(((unsigned __int64)&this->settle_player_card_show_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->settle_player_card_show_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->settle_player_card_show_time, v1);
  }
  this->settle_player_card_show_time = 0.0;
  v3 = (((_BYTE)this - 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->vehicle_gadget_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->vehicle_gadget_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->vehicle_gadget_id, v3);
  }
  this->vehicle_gadget_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->pre_quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->pre_quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->pre_quest_id, v3);
  }
  this->pre_quest_id = 0;
  v4 = (((_BYTE)this - 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->match_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->match_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->match_id, v4);
  }
  this->match_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->draft_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->draft_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->draft_id, v4);
  }
  this->draft_id = 0;
};

// Line 41: range 0000000014188514-000000001418895E
void __cdecl data::LanV3BoatBaseExcelConfig::LanV3BoatBaseExcelConfig(
        data::LanV3BoatBaseExcelConfig *const this,
        const data::LanV3BoatBaseExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t schedule_id; // ecx
  char v4; // al
  float settle_player_card_show_time; // xmm0_4
  __int64 v6; // rsi
  uint32_t vehicle_gadget_id; // ecx
  char v8; // dl
  uint32_t pre_quest_id; // ecx
  char v10; // al
  __int64 v11; // rsi
  uint32_t match_id; // ecx
  char v13; // dl
  uint32_t draft_id; // ecx
  char v15; // al
  const data::LanV3BoatBaseExcelConfig *v16; // [rsp+0h] [rbp-20h]

  v16 = a2;
  v2 = (int (**)(...))(&`vtable for'data::LanV3BoatBaseExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_LanV3BoatBaseExcelConfig = v2;
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
  std::vector<unsigned int>::vector(&this->stage_max_score_limit, &v16->stage_max_score_limit);
  std::string::basic_string(&this->boat_revive_progress_gv_key, &v16->boat_revive_progress_gv_key);
  std::string::basic_string(&this->boat_coin_collect_gv_key, &v16->boat_coin_collect_gv_key);
  std::string::basic_string(&this->boat_life_count_gv_key, &v16->boat_life_count_gv_key);
  std::string::basic_string(&this->boat_max_life_count_gv_key, &v16->boat_max_life_count_gv_key);
  if ( *(_BYTE *)(((unsigned __int64)&v16->settle_player_card_show_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v16->settle_player_card_show_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v16->settle_player_card_show_time);
  }
  settle_player_card_show_time = v16->settle_player_card_show_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->settle_player_card_show_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->settle_player_card_show_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->settle_player_card_show_time, &v16->boat_max_life_count_gv_key);
  }
  this->settle_player_card_show_time = settle_player_card_show_time;
  v6 = (((_BYTE)v16 - 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v16->vehicle_gadget_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v16 - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v16->vehicle_gadget_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v16->vehicle_gadget_id);
  }
  vehicle_gadget_id = v16->vehicle_gadget_id;
  v8 = *(_BYTE *)(((unsigned __int64)&this->vehicle_gadget_id >> 3) + 0x7FFF8000);
  if ( v8 != 0 && (char)((((_BYTE)this - 84) & 7) + 3) >= v8 )
  {
    LOBYTE(v6) = v8 != 0;
    __asan_report_store4(&this->vehicle_gadget_id, v6);
  }
  this->vehicle_gadget_id = vehicle_gadget_id;
  if ( *(_BYTE *)(((unsigned __int64)&v16->pre_quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v16->pre_quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v16->pre_quest_id);
  }
  pre_quest_id = v16->pre_quest_id;
  v10 = *(_BYTE *)(((unsigned __int64)&this->pre_quest_id >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(v6) = v10 != 0;
    __asan_report_store4(&this->pre_quest_id, v6);
  }
  this->pre_quest_id = pre_quest_id;
  v11 = (((_BYTE)v16 - 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v16->match_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v16 - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v16->match_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v16->match_id);
  }
  match_id = v16->match_id;
  v13 = *(_BYTE *)(((unsigned __int64)&this->match_id >> 3) + 0x7FFF8000);
  if ( v13 != 0 && (char)((((_BYTE)this - 76) & 7) + 3) >= v13 )
  {
    LOBYTE(v11) = v13 != 0;
    __asan_report_store4(&this->match_id, v11);
  }
  this->match_id = match_id;
  if ( *(_BYTE *)(((unsigned __int64)&v16->draft_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v16->draft_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v16->draft_id);
  }
  draft_id = v16->draft_id;
  v15 = *(_BYTE *)(((unsigned __int64)&this->draft_id >> 3) + 0x7FFF8000);
  if ( v15 != 0 && v15 <= 3 )
  {
    LOBYTE(v11) = v15 != 0;
    __asan_report_store4(&this->draft_id, v11);
  }
  this->draft_id = draft_id;
};

// Line 44: range 00000000142A23DA-00000000142A246D
void __cdecl data::LanV3BoatBaseExcelConfig::~LanV3BoatBaseExcelConfig(data::LanV3BoatBaseExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::LanV3BoatBaseExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_LanV3BoatBaseExcelConfig = v2;
  std::string::~string(&this->boat_max_life_count_gv_key);
  std::string::~string(&this->boat_life_count_gv_key);
  std::string::~string(&this->boat_coin_collect_gv_key);
  std::string::~string(&this->boat_revive_progress_gv_key);
  std::vector<unsigned int>::~vector(&this->stage_max_score_limit);
};

// Line 44: range 00000000142A246E-00000000142A2498
void __cdecl data::LanV3BoatBaseExcelConfig::~LanV3BoatBaseExcelConfig(data::LanV3BoatBaseExcelConfig *const this)
{
  data::LanV3BoatBaseExcelConfig::~LanV3BoatBaseExcelConfig(this);
  operator delete(this, 0xC0uLL);
};

// Line 65: range 0000000013BD4BF0-0000000013BD4E1B
void __cdecl data::LanV3BoatExcelConfig::LanV3BoatExcelConfig(data::LanV3BoatExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi

  v2 = (int (**)(...))(&`vtable for'data::LanV3BoatExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_LanV3BoatExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->map_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->map_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->map_id, v1);
  }
  this->map_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->type, v3);
  }
  this->type = LAN_V3_BOAT_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gallery_id, v3);
  }
  this->gallery_id = 0;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->control_group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->control_group_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->control_group_id, v4);
  }
  this->control_group_id = 0;
  std::vector<unsigned int>::vector(&this->player_config_id_list);
  std::vector<unsigned int>::vector(&this->vehicle_config_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->prepare_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->prepare_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->prepare_time, v4);
  }
  this->prepare_time = 0;
  v5 = (((_BYTE)this + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->play_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->play_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->play_time, v5);
  }
  this->play_time = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->settle_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->settle_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->settle_time, v5);
  }
  this->settle_time = 0;
};

// Line 65: range 0000000014188AA0-0000000014188EA5
void __cdecl data::LanV3BoatExcelConfig::LanV3BoatExcelConfig(
        data::LanV3BoatExcelConfig *const this,
        const data::LanV3BoatExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t map_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::LanV3BoatType type; // ecx
  char v7; // dl
  uint32_t gallery_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t control_group_id; // ecx
  char v12; // dl
  std::vector<unsigned int> *p_vehicle_config_id_list; // rsi
  uint32_t prepare_time; // ecx
  char v15; // al
  __int64 v16; // rsi
  uint32_t play_time; // ecx
  char v18; // dl
  uint32_t settle_time; // ecx
  char v20; // al
  const data::LanV3BoatExcelConfig *v21; // [rsp+0h] [rbp-20h]

  v21 = a2;
  v2 = (int (**)(...))(&`vtable for'data::LanV3BoatExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_LanV3BoatExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->map_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->map_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->map_id);
  }
  map_id = a2->map_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->map_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->map_id, a2);
  }
  this->map_id = map_id;
  v5 = (((_BYTE)v21 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v21->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v21 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v21->type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v21->type);
  }
  type = v21->type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->type, v5);
  }
  this->type = type;
  if ( *(_BYTE *)(((unsigned __int64)&v21->gallery_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v21->gallery_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v21->gallery_id);
  }
  gallery_id = v21->gallery_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->gallery_id, v5);
  }
  this->gallery_id = gallery_id;
  v10 = (((_BYTE)v21 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v21->control_group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v21 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v21->control_group_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v21->control_group_id);
  }
  control_group_id = v21->control_group_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->control_group_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->control_group_id, v10);
  }
  this->control_group_id = control_group_id;
  std::vector<unsigned int>::vector(&this->player_config_id_list, &v21->player_config_id_list);
  p_vehicle_config_id_list = &v21->vehicle_config_id_list;
  std::vector<unsigned int>::vector(&this->vehicle_config_id_list, &v21->vehicle_config_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&v21->prepare_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v21->prepare_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v21->prepare_time);
  }
  prepare_time = v21->prepare_time;
  v15 = *(_BYTE *)(((unsigned __int64)&this->prepare_time >> 3) + 0x7FFF8000);
  if ( v15 != 0 && v15 <= 3 )
  {
    LOBYTE(p_vehicle_config_id_list) = v15 != 0;
    __asan_report_store4(&this->prepare_time, p_vehicle_config_id_list);
  }
  this->prepare_time = prepare_time;
  v16 = (((_BYTE)v21 + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v21->play_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v21 + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v21->play_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v21->play_time);
  }
  play_time = v21->play_time;
  v18 = *(_BYTE *)(((unsigned __int64)&this->play_time >> 3) + 0x7FFF8000);
  if ( v18 != 0 && (char)((((_BYTE)this + 76) & 7) + 3) >= v18 )
  {
    LOBYTE(v16) = v18 != 0;
    __asan_report_store4(&this->play_time, v16);
  }
  this->play_time = play_time;
  if ( *(_BYTE *)(((unsigned __int64)&v21->settle_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v21->settle_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v21->settle_time);
  }
  settle_time = v21->settle_time;
  v20 = *(_BYTE *)(((unsigned __int64)&this->settle_time >> 3) + 0x7FFF8000);
  if ( v20 != 0 && v20 <= 3 )
  {
    LOBYTE(v16) = v20 != 0;
    __asan_report_store4(&this->settle_time, v16);
  }
  this->settle_time = settle_time;
};

// Line 68: range 00000000142A234C-00000000142A23AD
void __cdecl data::LanV3BoatExcelConfig::~LanV3BoatExcelConfig(data::LanV3BoatExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::LanV3BoatExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_LanV3BoatExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->vehicle_config_id_list);
  std::vector<unsigned int>::~vector(&this->player_config_id_list);
};

// Line 68: range 00000000142A23AE-00000000142A23D8
void __cdecl data::LanV3BoatExcelConfig::~LanV3BoatExcelConfig(data::LanV3BoatExcelConfig *const this)
{
  data::LanV3BoatExcelConfig::~LanV3BoatExcelConfig(this);
  operator delete(this, 0x58uLL);
};

// Line 87: range 0000000013BD4E1C-0000000013BD4FFD
void __cdecl data::LanV3RaceExcelConfig::LanV3RaceExcelConfig(data::LanV3RaceExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  v2 = (int (**)(...))(&`vtable for'data::LanV3RaceExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_LanV3RaceExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->stage_id, v3);
  }
  this->stage_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gallery_id, v3);
  }
  this->gallery_id = 0;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_link_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->group_link_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->group_link_id, v4);
  }
  this->group_link_id = 0;
  std::vector<unsigned int>::vector(&this->score_watcher_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->time_factor >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_factor >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_factor, v4);
  }
  this->time_factor = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->gold_factor >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gold_factor >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gold_factor, (((_BYTE)this + 52) & 7u) + 3);
  }
  this->gold_factor = 0.0;
};

// Line 87: range 0000000014188FE6-000000001418933A
void __cdecl data::LanV3RaceExcelConfig::LanV3RaceExcelConfig(
        data::LanV3RaceExcelConfig *const this,
        const data::LanV3RaceExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t stage_id; // ecx
  char v7; // dl
  uint32_t gallery_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t group_link_id; // ecx
  char v12; // dl
  float time_factor; // xmm0_4
  float gold_factor; // xmm0_4
  const data::LanV3RaceExcelConfig *v15; // [rsp+0h] [rbp-10h]

  v15 = a2;
  v2 = (int (**)(...))(&`vtable for'data::LanV3RaceExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_LanV3RaceExcelConfig = v2;
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
  v5 = (((_BYTE)v15 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v15->stage_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v15 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->stage_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v15->stage_id);
  }
  stage_id = v15->stage_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->stage_id, v5);
  }
  this->stage_id = stage_id;
  if ( *(_BYTE *)(((unsigned __int64)&v15->gallery_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v15->gallery_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v15->gallery_id);
  }
  gallery_id = v15->gallery_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->gallery_id, v5);
  }
  this->gallery_id = gallery_id;
  v10 = (((_BYTE)v15 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v15->group_link_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v15 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->group_link_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v15->group_link_id);
  }
  group_link_id = v15->group_link_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->group_link_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->group_link_id, v10);
  }
  this->group_link_id = group_link_id;
  std::vector<unsigned int>::vector(&this->score_watcher_list, &v15->score_watcher_list);
  if ( *(_BYTE *)(((unsigned __int64)&v15->time_factor >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v15->time_factor >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v15->time_factor);
  }
  time_factor = v15->time_factor;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_factor >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_factor >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_factor, &v15->score_watcher_list);
  }
  this->time_factor = time_factor;
  if ( *(_BYTE *)(((unsigned __int64)&v15->gold_factor >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v15 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->gold_factor >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v15->gold_factor);
  }
  gold_factor = v15->gold_factor;
  if ( *(_BYTE *)(((unsigned __int64)&this->gold_factor >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gold_factor >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gold_factor, (((_BYTE)this + 52) & 7u) + 3);
  }
  this->gold_factor = gold_factor;
};

// Line 90: range 00000000142A2320-00000000142A234A
void __cdecl data::LanV3RaceExcelConfig::~LanV3RaceExcelConfig(data::LanV3RaceExcelConfig *const this)
{
  data::LanV3RaceExcelConfig::~LanV3RaceExcelConfig(this);
  operator delete(this, 0x38uLL);
};

// Line 90: range 00000000142A22CE-00000000142A231F
void __cdecl data::LanV3RaceExcelConfig::~LanV3RaceExcelConfig(data::LanV3RaceExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::LanV3RaceExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_LanV3RaceExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->score_watcher_list);
};

// Line 107: range 0000000013BD4FFE-0000000013BD50DB
void __cdecl data::LanV3OverAllExcelConfig::LanV3OverAllExcelConfig(data::LanV3OverAllExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::LanV3OverAllExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_LanV3OverAllExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->activity_id, v1);
  }
  this->activity_id = 0;
  std::vector<unsigned int>::vector(&this->open_time);
  std::vector<unsigned int>::vector(&this->festival_watcher_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_invitation_watcher >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->avatar_invitation_watcher >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->avatar_invitation_watcher, v1);
  }
  this->avatar_invitation_watcher = 0;
};

// Line 107: range 000000001418947C-0000000014189608
void __cdecl data::LanV3OverAllExcelConfig::LanV3OverAllExcelConfig(
        data::LanV3OverAllExcelConfig *const this,
        const data::LanV3OverAllExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t activity_id; // ecx
  char v4; // al
  std::vector<unsigned int> *p_festival_watcher_list; // rsi
  uint32_t avatar_invitation_watcher; // ecx
  char v7; // al
  const data::LanV3OverAllExcelConfig *v8; // [rsp+0h] [rbp-20h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::LanV3OverAllExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_LanV3OverAllExcelConfig = v2;
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
  std::vector<unsigned int>::vector(&this->open_time, &v8->open_time);
  p_festival_watcher_list = &v8->festival_watcher_list;
  std::vector<unsigned int>::vector(&this->festival_watcher_list, &v8->festival_watcher_list);
  if ( *(_BYTE *)(((unsigned __int64)&v8->avatar_invitation_watcher >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v8->avatar_invitation_watcher >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v8->avatar_invitation_watcher);
  }
  avatar_invitation_watcher = v8->avatar_invitation_watcher;
  v7 = *(_BYTE *)(((unsigned __int64)&this->avatar_invitation_watcher >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_festival_watcher_list) = v7 != 0;
    __asan_report_store4(&this->avatar_invitation_watcher, p_festival_watcher_list);
  }
  this->avatar_invitation_watcher = avatar_invitation_watcher;
};

// Line 110: range 00000000142A22A2-00000000142A22CC
void __cdecl data::LanV3OverAllExcelConfig::~LanV3OverAllExcelConfig(data::LanV3OverAllExcelConfig *const this)
{
  data::LanV3OverAllExcelConfig::~LanV3OverAllExcelConfig(this);
  operator delete(this, 0x48uLL);
};

// Line 110: range 00000000142A2240-00000000142A22A1
void __cdecl data::LanV3OverAllExcelConfig::~LanV3OverAllExcelConfig(data::LanV3OverAllExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::LanV3OverAllExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_LanV3OverAllExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->festival_watcher_list);
  std::vector<unsigned int>::~vector(&this->open_time);
};

// Line 124: range 0000000013BD50DC-0000000013BD517B
void __cdecl data::LanV3ShadowStageExcelConfig::LanV3ShadowStageExcelConfig(
        data::LanV3ShadowStageExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::LanV3ShadowStageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_LanV3ShadowStageExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->stage_id, v1);
  }
  this->stage_id = 0;
  std::string::basic_string(&this->stage_name);
  std::vector<unsigned int>::vector(&this->stage_level_list);
};

// Line 124: range 000000001418974A-0000000014189861
void __cdecl data::LanV3ShadowStageExcelConfig::LanV3ShadowStageExcelConfig(
        data::LanV3ShadowStageExcelConfig *const this,
        const data::LanV3ShadowStageExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t stage_id; // ecx
  char v4; // al
  const data::LanV3ShadowStageExcelConfig *v5; // [rsp+0h] [rbp-20h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::LanV3ShadowStageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_LanV3ShadowStageExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->stage_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->stage_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->stage_id);
  }
  stage_id = a2->stage_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->stage_id, a2);
  }
  this->stage_id = stage_id;
  std::string::basic_string(&this->stage_name, &v5->stage_name);
  std::vector<unsigned int>::vector(&this->stage_level_list, &v5->stage_level_list);
};

// Line 127: range 00000000142A2214-00000000142A223E
void __cdecl data::LanV3ShadowStageExcelConfig::~LanV3ShadowStageExcelConfig(
        data::LanV3ShadowStageExcelConfig *const this)
{
  data::LanV3ShadowStageExcelConfig::~LanV3ShadowStageExcelConfig(this);
  operator delete(this, 0x48uLL);
};

// Line 127: range 00000000142A21B2-00000000142A2213
void __cdecl data::LanV3ShadowStageExcelConfig::~LanV3ShadowStageExcelConfig(
        data::LanV3ShadowStageExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::LanV3ShadowStageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_LanV3ShadowStageExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->stage_level_list);
  std::string::~string(&this->stage_name);
};

// Line 140: range 00000000141899A2-0000000014189AE1
void __cdecl data::LanV3ShadowLevelExcelConfig::LanV3ShadowLevelExcelConfig(
        data::LanV3ShadowLevelExcelConfig *const this,
        const data::LanV3ShadowLevelExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t level_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t watcher_id; // ecx
  char v7; // dl
  const data::LanV3ShadowLevelExcelConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::LanV3ShadowLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_LanV3ShadowLevelExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->level_id);
  }
  level_id = a2->level_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->level_id, a2);
  }
  this->level_id = level_id;
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->watcher_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->watcher_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->watcher_id);
  }
  watcher_id = v8->watcher_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->watcher_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->watcher_id, v5);
  }
  this->watcher_id = watcher_id;
};

// Line 143: range 00000000142A2186-00000000142A21B0
void __cdecl data::LanV3ShadowLevelExcelConfig::~LanV3ShadowLevelExcelConfig(
        data::LanV3ShadowLevelExcelConfig *const this)
{
  data::LanV3ShadowLevelExcelConfig::~LanV3ShadowLevelExcelConfig(this);
  operator delete(this, 0x10uLL);
};

// Line 143: range 00000000142A2144-00000000142A2185
void __cdecl data::LanV3ShadowLevelExcelConfig::~LanV3ShadowLevelExcelConfig(
        data::LanV3ShadowLevelExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::LanV3ShadowLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_LanV3ShadowLevelExcelConfig = v2;
};

// Line 155: range 0000000013BD517C-0000000013BD521B
void __cdecl data::LanV3CampStageExcelConfig::LanV3CampStageExcelConfig(data::LanV3CampStageExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::LanV3CampStageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_LanV3CampStageExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->stage_id, v1);
  }
  this->stage_id = 0;
  std::string::basic_string(&this->stage_name);
  std::vector<unsigned int>::vector(&this->stage_watcher_list);
};

// Line 155: range 0000000014189C22-0000000014189D39
void __cdecl data::LanV3CampStageExcelConfig::LanV3CampStageExcelConfig(
        data::LanV3CampStageExcelConfig *const this,
        const data::LanV3CampStageExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t stage_id; // ecx
  char v4; // al
  const data::LanV3CampStageExcelConfig *v5; // [rsp+0h] [rbp-20h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::LanV3CampStageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_LanV3CampStageExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->stage_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->stage_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->stage_id);
  }
  stage_id = a2->stage_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->stage_id, a2);
  }
  this->stage_id = stage_id;
  std::string::basic_string(&this->stage_name, &v5->stage_name);
  std::vector<unsigned int>::vector(&this->stage_watcher_list, &v5->stage_watcher_list);
};

// Line 158: range 00000000142A2118-00000000142A2142
void __cdecl data::LanV3CampStageExcelConfig::~LanV3CampStageExcelConfig(data::LanV3CampStageExcelConfig *const this)
{
  data::LanV3CampStageExcelConfig::~LanV3CampStageExcelConfig(this);
  operator delete(this, 0x48uLL);
};

// Line 158: range 00000000142A20B6-00000000142A2117
void __cdecl data::LanV3CampStageExcelConfig::~LanV3CampStageExcelConfig(data::LanV3CampStageExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::LanV3CampStageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_LanV3CampStageExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->stage_watcher_list);
  std::string::~string(&this->stage_name);
};
