// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/basic/player_basic_comp.h

// Line 50: range 000000001742E5E0-000000001742E819
void __cdecl SecurityAntiOfflineData::SecurityAntiOfflineData(SecurityAntiOfflineData *const this)
{
  __int64 v1; // rdx
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx

  v1 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7)
                                                                                              + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
  if ( (_BYTE)v1 )
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3, v1);
  this->security_check_type = SECURITY_CHECK_NONE;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->security_level >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->security_level >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store4(&this->security_level, (((_BYTE)this + 4) & 7u) + 3, v2);
  this->security_level = 0;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->succ_num >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->succ_num >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store4(&this->succ_num, (((_BYTE)this + 8) & 7u) + 3, v3);
  this->succ_num = 0;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->empty_num >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->empty_num >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->empty_num, (((_BYTE)this + 12) & 7u) + 3, v4);
  this->empty_num = 0;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->decrypt_fail_num >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->decrypt_fail_num >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store4(&this->decrypt_fail_num, (((_BYTE)this + 16) & 7u) + 3, v5);
  this->decrypt_fail_num = 0;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->verify_fail_num >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->verify_fail_num >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store4(&this->verify_fail_num, (((_BYTE)this + 20) & 7u) + 3, v6);
  this->verify_fail_num = 0;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->cur_succ_num >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_succ_num >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->cur_succ_num, (((_BYTE)this + 24) & 7u) + 3, v7);
  this->cur_succ_num = 0;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->cur_fail_num >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_fail_num >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store4(&this->cur_fail_num, (((_BYTE)this + 28) & 7u) + 3, v8);
  this->cur_fail_num = 0;
};

// Line 61: range 000000001384427E-00000000138442F9
uint64_t __cdecl PlayerBasicComp::getClientTotalTickTimeMs(const PlayerBasicComp *const this)
{
  double v1; // xmm0_8

  if ( *(_BYTE *)(((unsigned __int64)&this->client_total_tick_time_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->client_total_tick_time_);
  v1 = 1000.0 * this->client_total_tick_time_;
  if ( v1 >= 9.223372036854776e18 )
    return (unsigned int)(int)(v1 - 9.223372036854776e18) ^ 0x8000000000000000LL;
  else
    return (unsigned int)(int)v1;
};

// Line 63: range 000000001721886C-0000000017218A32
void __cdecl ClimateResistInfo::ClimateResistInfo(ClimateResistInfo *const this)
{
  __int64 v1; // rsi
  uint32_t *p_source_type; // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx

  std::weak_ptr<BaseAbilityMixin>::weak_ptr(&this->base_ability_mixin_wtr);
  std::vector<unsigned int>::vector(&this->climate_type_vec);
  p_source_type = &this->source_type;
  if ( *(_BYTE *)(((unsigned __int64)p_source_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_source_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->source_type, v1, p_source_type);
  }
  this->source_type = 0;
  v3 = (((_BYTE)this + 44) & 7u) + 3;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->trend_type >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->trend_type >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->trend_type, v3, v4);
  this->trend_type = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->resist_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->resist_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->resist_ratio, v3, &this->resist_ratio);
  }
  this->resist_ratio = 0.0;
  v5 = (((_BYTE)this + 52) & 7u) + 3;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->avatar_stage_type >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->avatar_stage_type >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store4(&this->avatar_stage_type, v5, v6);
  this->avatar_stage_type = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_guid >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->avatar_guid, v5);
  this->avatar_guid = 0LL;
  std::string::basic_string(&this->ability_name);
  std::string::basic_string(&this->modifier_name);
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->avatar_id, v5, &this->avatar_id);
  }
  this->avatar_id = 0;
};

// Line 63: range 0000000017340788-0000000017340ACA
void __cdecl ClimateResistInfo::ClimateResistInfo(ClimateResistInfo *const this, ClimateResistInfo *a2)
{
  std::vector<unsigned int> *p_climate_type_vec; // rsi
  uint32_t source_type; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t trend_type; // ecx
  char v7; // dl
  __int64 v8; // rdx
  float resist_ratio; // xmm0_4
  __int64 v10; // rsi
  uint32_t avatar_stage_type; // ecx
  char v12; // dl
  __int64 v13; // rdx
  uint64_t avatar_guid; // rdx
  std::string *p_modifier_name; // rsi
  uint32_t avatar_id; // ecx
  char v17; // al

  std::weak_ptr<BaseAbilityMixin>::weak_ptr(&this->base_ability_mixin_wtr, &a2->base_ability_mixin_wtr);
  p_climate_type_vec = &a2->climate_type_vec;
  std::vector<unsigned int>::vector(&this->climate_type_vec, p_climate_type_vec);
  if ( *(_BYTE *)(((unsigned __int64)&a2->source_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->source_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->source_type);
  }
  source_type = a2->source_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->source_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(p_climate_type_vec) = v4 != 0;
    __asan_report_store4(&this->source_type, p_climate_type_vec, &this->source_type);
  }
  this->source_type = source_type;
  v5 = (((_BYTE)a2 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->trend_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->trend_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->trend_type);
  }
  trend_type = a2->trend_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->trend_type >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v7 != 0;
  v8 = (v7 != 0) & (unsigned __int8)((char)((((_BYTE)this + 44) & 7) + 3) >= v7);
  if ( (_BYTE)v8 )
    __asan_report_store4(&this->trend_type, v5, v8);
  this->trend_type = trend_type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->resist_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->resist_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->resist_ratio);
  }
  resist_ratio = a2->resist_ratio;
  if ( *(_BYTE *)(((unsigned __int64)&this->resist_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->resist_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->resist_ratio, v5, &this->resist_ratio);
  }
  this->resist_ratio = resist_ratio;
  v10 = (((_BYTE)a2 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->avatar_stage_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->avatar_stage_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->avatar_stage_type);
  }
  avatar_stage_type = a2->avatar_stage_type;
  v12 = *(_BYTE *)(((unsigned __int64)&this->avatar_stage_type >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v12 != 0;
  v13 = (v12 != 0) & (unsigned __int8)((char)((((_BYTE)this + 52) & 7) + 3) >= v12);
  if ( (_BYTE)v13 )
    __asan_report_store4(&this->avatar_stage_type, v10, v13);
  this->avatar_stage_type = avatar_stage_type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->avatar_guid >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->avatar_guid);
  avatar_guid = a2->avatar_guid;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_guid >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->avatar_guid, v10);
  this->avatar_guid = avatar_guid;
  std::string::basic_string(&this->ability_name, &a2->ability_name);
  p_modifier_name = &a2->modifier_name;
  std::string::basic_string(&this->modifier_name, &a2->modifier_name);
  if ( *(_BYTE *)(((unsigned __int64)&a2->avatar_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->avatar_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->avatar_id);
  }
  avatar_id = a2->avatar_id;
  v17 = *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000);
  if ( v17 != 0 && v17 <= 3 )
  {
    LOBYTE(p_modifier_name) = v17 != 0;
    __asan_report_store4(&this->avatar_id, p_modifier_name, &this->avatar_id);
  }
  this->avatar_id = avatar_id;
};

// Line 63: range 0000000017218A34-0000000017218A7E
void __cdecl ClimateResistInfo::~ClimateResistInfo(ClimateResistInfo *const this)
{
  std::string::~string(&this->modifier_name);
  std::string::~string(&this->ability_name);
  std::vector<unsigned int>::~vector(&this->climate_type_vec);
  std::weak_ptr<BaseAbilityMixin>::~weak_ptr(&this->base_ability_mixin_wtr);
};

// Line 80: range 0000000017475DB4-0000000017475FA7
void __cdecl StaminaChangeParam::StaminaChangeParam(StaminaChangeParam *const this)
{
  __int64 v1; // rdx
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rdx

  v1 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7)
                                                                                              + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
  if ( (_BYTE)v1 )
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3, v1);
  this->type = 0;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->motion_state >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->motion_state >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store4(&this->motion_state, (((_BYTE)this + 4) & 7u) + 3, v2);
  this->motion_state = MOTION_NONE;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store4(&this->skill_id, (((_BYTE)this + 8) & 7u) + 3, v3);
  this->skill_id = 0;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->ability_name_hash >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->ability_name_hash >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->ability_name_hash, (((_BYTE)this + 12) & 7u) + 3, v4);
  this->ability_name_hash = 0;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->modifier_name_hash >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->modifier_name_hash >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store4(&this->modifier_name_hash, (((_BYTE)this + 16) & 7u) + 3, v5);
  this->modifier_name_hash = 0;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->local_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->local_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store4(&this->local_id, (((_BYTE)this + 20) & 7u) + 3, v6);
  this->local_id = 0;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->reason >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reason >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->reason, (((_BYTE)this + 24) & 7u) + 3, v7);
  this->reason = PROP_CHANGE_NONE;
};

// Line 92: range 00000000174B238C-00000000174B23B6
void __cdecl PlayerBasicComp::~PlayerBasicComp(PlayerBasicComp *const this)
{
  PlayerBasicComp::~PlayerBasicComp(this);
  operator delete(this, 0x5F0uLL);
};

// Line 92: range 00000000174B21DA-00000000174B238B
void __cdecl PlayerBasicComp::~PlayerBasicComp(PlayerBasicComp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerBasicComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PlayerCompBase = v2;
  StatLogReporter::~StatLogReporter(&this->stat_log_reporter_);
  PlayerTimer::~PlayerTimer(&this->climate_meter_timer_);
  PlayerUnixTimer::~PlayerUnixTimer(&this->natural_daily_refresh_timer_);
  PlayerUnixTimer::~PlayerUnixTimer(&this->brief_update_timer_);
  PlayerUnixTimer::~PlayerUnixTimer(&this->gametime_timer_);
  std::list<ClimateResistInfo>::~list(&this->climate_resist_list_);
  std::string::~string(&this->client_system_version_);
  std::string::~string(&this->client_device_info_);
  std::string::~string(&this->client_app_version_);
  std::map<proto::SecurityCheckType,SecurityAntiOfflineData>::~map(&this->security_anti_offline_data_map_);
  std::unordered_set<unsigned int>::~unordered_set(&this->reward_taken_level_set_);
  std::map<unsigned int,unsigned int>::~map(&this->open_state_map_);
  ContentAuditData::~ContentAuditData(&this->nickname_audit_data_);
  std::string::~string(&this->nickname_);
  std::string::~string(&this->ip_region_name_);
  std::string::~string(&this->ip_country_code_);
  std::string::~string(&this->psn_id_);
  std::string::~string(&this->online_id_);
  std::string::~string(&this->register_cps_);
  std::string::~string(&this->cps_);
  PlayerCompBase::~PlayerCompBase(this);
};

// Line 96: range 0000000017475FA8-00000000174777B0
void __cdecl ZN15PlayerBasicCompCI214PlayerCompBaseER6Player(PlayerBasicComp *const this, Player *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx
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
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // rsi
  __int64 v36; // rdx
  __int64 v37; // rdx
  PlayerBasicComp **v38; // r8
  const std::_Placeholder<1> *v39; // r9
  PlayerBasicComp **v40; // r8
  const std::_Placeholder<1> *v41; // r9
  PlayerBasicComp **v42; // r8
  const std::_Placeholder<1> *v43; // r9
  PlayerBasicComp **v44; // r9
  __int64 v45; // rsi
  __int64 v46; // rdx
  StatLogReporter *p_stat_log_reporter; // rdx
  Player *v48; // rsi
  __int64 v49; // rsi
  __int64 v50; // rdx
  PlayerBasicComp *thisa; // [rsp+8h] [rbp-D8h]
  std::allocator<char> __a; // [rsp+1Fh] [rbp-C1h] BYREF
  PlayerBasicComp *v54; // [rsp+20h] [rbp-C0h] BYREF
  PlayerBasicComp *v55; // [rsp+28h] [rbp-B8h] BYREF
  PlayerBasicComp *v56; // [rsp+30h] [rbp-B0h] BYREF
  PlayerBasicComp *v57; // [rsp+38h] [rbp-A8h] BYREF
  void (*__f[2])(PlayerBasicComp *, unsigned __int64); // [rsp+40h] [rbp-A0h] BYREF
  void (*v59[2])(PlayerBasicComp *, unsigned __int64); // [rsp+50h] [rbp-90h] BYREF
  void (*v60[2])(PlayerBasicComp *, unsigned __int64); // [rsp+60h] [rbp-80h] BYREF
  PlayerPtr v61; // [rsp+70h] [rbp-70h] BYREF
  PlayerPtr p_player_ptr; // [rsp+80h] [rbp-60h] BYREF
  std::_Bind_helper<false,void (PlayerBasicComp::*)(long unsigned int),PlayerBasicComp*,const std::_Placeholder<1>&>::type p___f; // [rsp+90h] [rbp-50h] BYREF
  std::function<void(long unsigned int)> p_callback; // [rsp+B0h] [rbp-30h] BYREF

  PlayerCompBase::PlayerCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'PlayerBasicComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_PlayerCompBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level_, a2, &this->level_);
  }
  this->level_ = 1;
  v3 = (((_BYTE)this + 36) & 7u) + 3;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->exp_, v3, v4);
  this->exp_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->persist_stamina_limit_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->persist_stamina_limit_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->persist_stamina_limit_, v3, &this->persist_stamina_limit_);
  }
  this->persist_stamina_limit_ = 0.0;
  v5 = (((_BYTE)this + 44) & 7u) + 3;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->cur_persist_stamina_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_persist_stamina_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store4(&this->cur_persist_stamina_, v5, v6);
  this->cur_persist_stamina_ = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_temporary_stamina_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_temporary_stamina_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_temporary_stamina_, v5, &this->cur_temporary_stamina_);
  }
  this->cur_temporary_stamina_ = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_stamina_cost_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->last_stamina_cost_time_ms_, v5);
  this->last_stamina_cost_time_ms_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->player_time_ms_, v5);
  this->player_time_ms_ = 0LL;
  if ( *(char *)(((unsigned __int64)&this->is_rebate_mail_sent_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_rebate_mail_sent_, v5, &this->is_rebate_mail_sent_);
  this->is_rebate_mail_sent_ = 0;
  v7 = ((_BYTE)this + 73) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->is_rebate_mail_received_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->is_rebate_mail_received_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->is_rebate_mail_received_, v7, v8);
  this->is_rebate_mail_received_ = 0;
  v9 = (((_BYTE)this + 76) & 7u) + 3;
  v10 = (*(_BYTE *)(((unsigned __int64)&this->cur_json_climate_type_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_json_climate_type_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_store4(&this->cur_json_climate_type_, v9, v10);
  this->cur_json_climate_type_ = Normal;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_climate_meter_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_climate_meter_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_climate_meter_, v9, &this->cur_climate_meter_);
  }
  this->cur_climate_meter_ = 0.0;
  std::allocator<char>::allocator(&__a, v9);
  std::string::basic_string<std::allocator<char>>(&this->cps_, byte_25FB4240, &__a);
  std::allocator<char>::~allocator(&__a);
  std::allocator<char>::allocator(&__a, byte_25FB4240);
  std::string::basic_string<std::allocator<char>>(&this->register_cps_, byte_25FB4240, &__a);
  std::allocator<char>::~allocator(&__a);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_logout_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_logout_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_logout_time_, byte_25FB4240, &this->last_logout_time_);
  }
  this->last_logout_time_ = 0;
  v11 = (((_BYTE)this - 100) & 7u) + 3;
  v12 = (*(_BYTE *)(((unsigned __int64)&this->data_version_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->data_version_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v12 )
    __asan_report_store4(&this->data_version_, v11, v12);
  this->data_version_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_daily_refresh_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_daily_refresh_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_daily_refresh_time_, v11, &this->last_daily_refresh_time_);
  }
  this->last_daily_refresh_time_ = 0;
  v13 = ((_BYTE)this - 92) & 7;
  v14 = (*(_BYTE *)(((unsigned __int64)&this->is_auto_unlock_specific_equip_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v13 >= *(_BYTE *)(((unsigned __int64)&this->is_auto_unlock_specific_equip_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v14 )
    __asan_report_store1(&this->is_auto_unlock_specific_equip_, v13, v14);
  this->is_auto_unlock_specific_equip_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_login_platform_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_login_platform_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_login_platform_, v13, &this->last_login_platform_);
  }
  this->last_login_platform_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_stat_id_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->player_stat_id_, v13);
  this->player_stat_id_ = 0LL;
  std::allocator<char>::allocator(&__a, v13);
  std::string::basic_string<std::allocator<char>>(&this->online_id_, byte_25FB4240, &__a);
  std::allocator<char>::~allocator(&__a);
  std::allocator<char>::allocator(&__a, byte_25FB4240);
  std::string::basic_string<std::allocator<char>>(&this->psn_id_, byte_25FB4240, &__a);
  std::allocator<char>::~allocator(&__a);
  std::allocator<char>::allocator(&__a, byte_25FB4240);
  std::string::basic_string<std::allocator<char>>(&this->ip_country_code_, byte_25FB4240, &__a);
  std::allocator<char>::~allocator(&__a);
  std::allocator<char>::allocator(&__a, byte_25FB4240);
  std::string::basic_string<std::allocator<char>>(&this->ip_region_name_, byte_25FB4240, &__a);
  std::allocator<char>::~allocator(&__a);
  ProfilePicture::ProfilePicture(&this->profile_picture_);
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_finish_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_finish_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dungeon_finish_count_, byte_25FB4240, &this->dungeon_finish_count_);
  }
  this->dungeon_finish_count_ = 0;
  v15 = (((_BYTE)this + 68) & 7u) + 3;
  v16 = (*(_BYTE *)(((unsigned __int64)&this->encounter_finish_count_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->encounter_finish_count_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v16 )
    __asan_report_store4(&this->encounter_finish_count_, v15, v16);
  this->encounter_finish_count_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->daily_play_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->daily_play_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->daily_play_time, v15, &this->daily_play_time);
  }
  this->daily_play_time = 0;
  v17 = ((_BYTE)this + 76) & 7;
  v18 = (*(_BYTE *)(((unsigned __int64)&this->is_paused_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v17 >= *(_BYTE *)(((unsigned __int64)&this->is_paused_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v18 )
    __asan_report_store1(&this->is_paused_, v17, v18);
  this->is_paused_ = 0;
  v19 = ((_BYTE)this + 77) & 7;
  v20 = (*(_BYTE *)(((unsigned __int64)&this->is_in_transfer_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v19 >= *(_BYTE *)(((unsigned __int64)&this->is_in_transfer_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v20 )
    __asan_report_store1(&this->is_in_transfer_, v19, v20);
  this->is_in_transfer_ = 0;
  std::string::basic_string(&this->nickname_);
  ContentAuditData::ContentAuditData(&this->nickname_audit_data_);
  if ( *(char *)(((unsigned __int64)&this->is_proficient_player_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_proficient_player_, v19, &this->is_proficient_player_);
  this->is_proficient_player_ = 0;
  v21 = ((_BYTE)this - 95) & 7;
  v22 = (*(_BYTE *)(((unsigned __int64)&this->is_weather_locked_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v21 >= *(_BYTE *)(((unsigned __int64)&this->is_weather_locked_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v22 )
    __asan_report_store1(&this->is_weather_locked_, v21, v22);
  this->is_weather_locked_ = 1;
  v23 = ((_BYTE)this - 94) & 7;
  v24 = (*(_BYTE *)(((unsigned __int64)&this->is_game_time_locked_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v23 >= *(_BYTE *)(((unsigned __int64)&this->is_game_time_locked_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v24 )
    __asan_report_store1(&this->is_game_time_locked_, v23, v24);
  this->is_game_time_locked_ = 1;
  v25 = ((_BYTE)this - 93) & 7;
  v26 = (*(_BYTE *)(((unsigned __int64)&this->is_game_time_locked_by_client_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v25 >= *(_BYTE *)(((unsigned __int64)&this->is_game_time_locked_by_client_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v26 )
    __asan_report_store1(&this->is_game_time_locked_by_client_, v25, v26);
  this->is_game_time_locked_by_client_ = 0;
  v27 = (((_BYTE)this - 92) & 7u) + 3;
  v28 = (*(_BYTE *)(((unsigned __int64)&this->game_time_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->game_time_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v28 )
    __asan_report_store4(&this->game_time_, v27, v28);
  this->game_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->trans_no_count_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->trans_no_count_, v27);
  this->trans_no_count_ = 0LL;
  std::map<unsigned int,unsigned int>::map(&this->open_state_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->register_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->register_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->register_time_, v27, &this->register_time_);
  }
  this->register_time_ = 0;
  v29 = (((_BYTE)this - 28) & 7u) + 3;
  v30 = (*(_BYTE *)(((unsigned __int64)&this->last_login_time_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_login_time_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v30 )
    __asan_report_store4(&this->last_login_time_, v29, v30);
  this->last_login_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_login_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_login_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_login_time_, v29, &this->cur_login_time_);
  }
  this->cur_login_time_ = 0;
  v31 = (((_BYTE)this - 20) & 7u) + 3;
  v32 = (*(_BYTE *)(((unsigned __int64)&this->total_login_days_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total_login_days_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v32 )
    __asan_report_store4(&this->total_login_days_, v31, v32);
  this->total_login_days_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->update_login_days_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->update_login_days_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->update_login_days_time_, v31, &this->update_login_days_time_);
  }
  this->update_login_days_time_ = 0;
  std::unordered_set<unsigned int>::unordered_set(&this->reward_taken_level_set_);
  if ( *(_BYTE *)(((unsigned __int64)&this->online_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->online_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->online_time_, v31, &this->online_time_);
  }
  this->online_time_ = 0;
  v33 = ((_BYTE)this + 52) & 7;
  v34 = (*(_BYTE *)(((unsigned __int64)&this->is_online_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v33 >= *(_BYTE *)(((unsigned __int64)&this->is_online_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v34 )
    __asan_report_store1(&this->is_online_, v33, v34);
  this->is_online_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->set_language_tag_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->set_language_tag_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->set_language_tag_, v33, &this->set_language_tag_);
  }
  this->set_language_tag_ = 0;
  std::map<proto::SecurityCheckType,SecurityAntiOfflineData>::map(&this->security_anti_offline_data_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->client_language_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->client_language_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->client_language_type_, v33, &this->client_language_type_);
  }
  this->client_language_type_ = LANGUAGE_NONE;
  std::string::basic_string(&this->client_app_version_);
  std::string::basic_string(&this->client_device_info_);
  std::string::basic_string(&this->client_system_version_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_game_time_update_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_game_time_update_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_game_time_update_time_, v33, &this->last_game_time_update_time_);
  }
  this->last_game_time_update_time_ = 0;
  v35 = (((_BYTE)this - 36) & 7u) + 3;
  v36 = (*(_BYTE *)(((unsigned __int64)&this->last_server_time_notify_time_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_server_time_notify_time_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v36 )
    __asan_report_store4(&this->last_server_time_notify_time_, v35, v36);
  this->last_server_time_notify_time_ = 0;
  Vector3::Vector3(&this->check_climate_position_, 0.0, 0.0, 0.0);
  if ( *(_BYTE *)(((unsigned __int64)&this->rest_climate_damping_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->rest_climate_damping_time_ms_, v35);
  this->rest_climate_damping_time_ms_ = 0LL;
  std::list<ClimateResistInfo>::list(&this->climate_resist_list_);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_climate_area_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_climate_area_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_climate_area_id_, v35, &this->cur_climate_area_id_);
  }
  this->cur_climate_area_id_ = 0;
  v37 = (*(_BYTE *)(((unsigned __int64)&this->cur_area_climate_type_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_area_climate_type_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v37 )
    __asan_report_store4(&this->cur_area_climate_type_, (((_BYTE)this + 20) & 7u) + 3, v37);
  this->cur_area_climate_type_ = Normal;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  toPtr<Player,Player>((Player *)&p_player_ptr);
  v54 = this;
  __f[0] = (void (*)(PlayerBasicComp *, unsigned __int64))PlayerBasicComp::onGameTimer;
  __f[1] = 0LL;
  std::bind<void (PlayerBasicComp::*)(unsigned long),PlayerBasicComp*,std::_Placeholder<1> const&>(
    &p___f,
    __f,
    &v54,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v38,
    v39);
  std::function<void ()(unsigned long)>::function<std::_Bind<void (PlayerBasicComp::*)(unsigned long) ()(PlayerBasicComp*,std::_Placeholder<1>)>,void,void>(
    &p_callback,
    &p___f);
  PlayerUnixTimer::PlayerUnixTimer(&this->gametime_timer_, &p_player_ptr, &p_callback);
  std::function<void ()(unsigned long)>::~function(&p_callback);
  std::shared_ptr<Player>::~shared_ptr(&p_player_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  toPtr<Player,Player>((Player *)&p_player_ptr);
  v55 = this;
  v59[0] = (void (*)(PlayerBasicComp *, unsigned __int64))PlayerBasicComp::notifyPlayerDataToMulti;
  v59[1] = 0LL;
  std::bind<void (PlayerBasicComp::*)(unsigned long),PlayerBasicComp*,std::_Placeholder<1> const&>(
    &p___f,
    v59,
    &v55,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v40,
    v41);
  std::function<void ()(unsigned long)>::function<std::_Bind<void (PlayerBasicComp::*)(unsigned long) ()(PlayerBasicComp*,std::_Placeholder<1>)>,void,void>(
    &p_callback,
    &p___f);
  PlayerUnixTimer::PlayerUnixTimer(&this->brief_update_timer_, &p_player_ptr, &p_callback);
  std::function<void ()(unsigned long)>::~function(&p_callback);
  std::shared_ptr<Player>::~shared_ptr(&p_player_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  toPtr<Player,Player>((Player *)&p_player_ptr);
  v56 = this;
  v60[0] = (void (*)(PlayerBasicComp *, unsigned __int64))PlayerBasicComp::onNaturalDailyRefresh;
  v60[1] = 0LL;
  std::bind<void (PlayerBasicComp::*)(unsigned long),PlayerBasicComp*,std::_Placeholder<1> const&>(
    &p___f,
    v60,
    &v56,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v42,
    v43);
  std::function<void ()(unsigned long)>::function<std::_Bind<void (PlayerBasicComp::*)(unsigned long) ()(PlayerBasicComp*,std::_Placeholder<1>)>,void,void>(
    &p_callback,
    &p___f);
  PlayerUnixTimer::PlayerUnixTimer(&this->natural_daily_refresh_timer_, &p_player_ptr, &p_callback);
  std::function<void ()(unsigned long)>::~function(&p_callback);
  std::shared_ptr<Player>::~shared_ptr(&p_player_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  toPtr<Player,Player>((Player *)&v61);
  v57 = this;
  p_player_ptr._M_ptr = (std::__shared_ptr<Player,(__gnu_cxx::_Lock_policy)2>::element_type *)PlayerBasicComp::updateClimateMeter;
  p_player_ptr._M_refcount._M_pi = 0LL;
  std::bind<void (PlayerBasicComp::*)(unsigned long,std::optional<float>),PlayerBasicComp*,std::_Placeholder<1> const&,std::nullopt_t const&>(
    (std::_Bind_helper<false,void (PlayerBasicComp::*)(long unsigned int,std::optional<float>),PlayerBasicComp*,const std::_Placeholder<1>&,const std::nullopt_t&>::type *)&p___f,
    (void (**)(PlayerBasicComp *, unsigned __int64, std::optional<float>))&p_player_ptr,
    &v57,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    &std::nullopt,
    v44,
    (const std::_Placeholder<1> *)a2,
    (const std::nullopt_t *)this);
  std::function<void ()(unsigned long)>::function<std::_Bind<void (PlayerBasicComp::*)(unsigned long,std::optional<float>) ()(PlayerBasicComp*,std::_Placeholder<1>,std::nullopt_t)>,void,void>(
    &p_callback,
    (std::_Bind<void (PlayerBasicComp::*(PlayerBasicComp*,std::_Placeholder<1>,std::nullopt_t))(long unsigned int,std::optional<float>)> *)&p___f);
  PlayerTimer::PlayerTimer(&this->climate_meter_timer_, &v61, &p_callback);
  std::function<void ()(unsigned long)>::~function(&p_callback);
  std::shared_ptr<Player>::~shared_ptr(&v61);
  if ( *(_BYTE *)(((unsigned __int64)&thisa->guid_seq_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&thisa->guid_seq_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&thisa->guid_seq_id_, &v61, &thisa->guid_seq_id_);
  }
  thisa->guid_seq_id_ = 0;
  v45 = ((_BYTE)thisa + 124) & 7;
  v46 = (*(_BYTE *)(((unsigned __int64)&thisa->is_guid_init_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v45 >= *(_BYTE *)(((unsigned __int64)&thisa->is_guid_init_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v46 )
    __asan_report_store1(&thisa->is_guid_init_, v45, v46);
  thisa->is_guid_init_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->last_world_level_limit_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&thisa->last_world_level_limit_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&thisa->last_world_level_limit_, v45, &thisa->last_world_level_limit_);
  }
  thisa->last_world_level_limit_ = 0;
  p_stat_log_reporter = &thisa->stat_log_reporter_;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&thisa->player_);
  v48 = thisa->player_;
  StatLogReporter::StatLogReporter(p_stat_log_reporter, v48);
  if ( *(_BYTE *)(((unsigned __int64)&thisa->last_set_game_time_by_client_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&thisa->last_set_game_time_by_client_time_ms_, v48);
  thisa->last_set_game_time_by_client_time_ms_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->pivot_client_time_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&thisa->pivot_client_time_, v48);
  thisa->pivot_client_time_ = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->pivot_unix_time_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&thisa->pivot_unix_time_, v48);
  thisa->pivot_unix_time_ = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->client_total_tick_time_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&thisa->client_total_tick_time_, v48);
  thisa->client_total_tick_time_ = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->client_total_tick_time_anticheat_log_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&thisa->client_total_tick_time_anticheat_log_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(
      &thisa->client_total_tick_time_anticheat_log_count_,
      v48,
      &thisa->client_total_tick_time_anticheat_log_count_);
  }
  thisa->client_total_tick_time_anticheat_log_count_ = 0;
  v49 = (((_BYTE)thisa - 52) & 7u) + 3;
  v50 = (*(_BYTE *)(((unsigned __int64)&thisa->anticheat_stamina_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)thisa - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->anticheat_stamina_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v50 )
    __asan_report_store4(&thisa->anticheat_stamina_, v49, v50);
  thisa->anticheat_stamina_ = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->anticheat_stamina_log_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&thisa->anticheat_stamina_log_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&thisa->anticheat_stamina_log_count_, v49, &thisa->anticheat_stamina_log_count_);
  }
  thisa->anticheat_stamina_log_count_ = 0;
  StaminaChangeParam::StaminaChangeParam(&thisa->stamina_change_param_);
};

// Line 187: range 000000001720E7F4-000000001720E846
bool __cdecl PlayerBasicComp::getIsWeatherLocked(PlayerBasicComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_weather_locked_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 95) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_weather_locked_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_weather_locked_);
  }
  return this->is_weather_locked_;
};

// Line 188: range 000000001720E848-000000001720E8F3
bool __cdecl PlayerBasicComp::getIsGameTimeLocked(PlayerBasicComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_game_time_locked_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 94) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_game_time_locked_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_game_time_locked_);
  }
  if ( this->is_game_time_locked_ )
    return 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_game_time_locked_by_client_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 93) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_game_time_locked_by_client_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_game_time_locked_by_client_);
  }
  return this->is_game_time_locked_by_client_;
};

// Line 189: range 0000000015D36740-0000000015D36792
bool __cdecl PlayerBasicComp::getIsGameTimeLockedByClient(PlayerBasicComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_game_time_locked_by_client_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 93) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_game_time_locked_by_client_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_game_time_locked_by_client_);
  }
  return this->is_game_time_locked_by_client_;
};

// Line 198: range 0000000015D36794-0000000015D367E8
uint32_t __cdecl PlayerBasicComp::getLastLoginTime(const PlayerBasicComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->last_login_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_login_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->last_login_time_);
  }
  return this->last_login_time_;
};

// Line 199: range 0000000016050712-000000001605075E
uint32_t __cdecl PlayerBasicComp::getCurLoginTime(const PlayerBasicComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_login_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_login_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_login_time_);
  }
  return this->cur_login_time_;
};

// Line 200: range 00000000169047E2-000000001690482E
uint32_t __cdecl PlayerBasicComp::getRegisterTime(const PlayerBasicComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->register_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->register_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->register_time_);
  }
  return this->register_time_;
};

// Line 202: range 000000001720E8F4-000000001720E907
const std::string *__cdecl PlayerBasicComp::getClientAppVersion[abi:cxx11](const PlayerBasicComp *const this)
{
  return &this->client_app_version_;
};

// Line 225: range 0000000017D687D8-0000000017D68832
void __cdecl PlayerBasicComp::setDataVersionByGm(PlayerBasicComp *const this, uint32_t data_version)
{
  __int64 v2; // rdx

  v2 = (*(_BYTE *)(((unsigned __int64)&this->data_version_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->data_version_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store4(&this->data_version_, (((_BYTE)this - 100) & 7u) + 3, v2);
  this->data_version_ = data_version;
};

// Line 306: range 000000001720E908-000000001720E955
bool __cdecl PlayerBasicComp::isProficientPlayer(PlayerBasicComp *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_proficient_player_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_proficient_player_);
  return this->is_proficient_player_;
};

// Line 350: range 0000000013EBA0DA-0000000013EBA0ED
StatLogReporter *__cdecl PlayerBasicComp::getStatLogReporter(PlayerBasicComp *const this)
{
  return &this->stat_log_reporter_;
};

// Line 350: range 0000000013EBA0EE-0000000013EBA13A
uint32_t __cdecl PlayerBasicComp::getCurClimateAreaId(const PlayerBasicComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_climate_area_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_climate_area_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_climate_area_id_);
  }
  return this->cur_climate_area_id_;
};

// Line 355: range 0000000014616E48-0000000014616E5B
const ProfilePicture *__cdecl PlayerBasicComp::getProfilePicture(PlayerBasicComp *const this)
{
  return &this->profile_picture_;
};

// Line 356: range 0000000016D60BC4-0000000016D60C64
// local variable allocation has failed, the output may be wrong!
void __cdecl PlayerBasicComp::setProfilePicture(PlayerBasicComp *const this, uint32_t avatar_id, uint32_t costume_id)
{
  __int64 v3; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&this->profile_picture_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->profile_picture_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->profile_picture_, *(_QWORD *)&avatar_id, &this->profile_picture_);
  }
  this->profile_picture_.avatar_id = avatar_id;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->profile_picture_.costume_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->profile_picture_.costume_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store4(&this->profile_picture_.costume_id, (((_BYTE)this + 60) & 7u) + 3, v3);
  this->profile_picture_.costume_id = costume_id;
};

// Line 365: range 0000000014F77D0E-0000000014F77D39
int32_t __cdecl PlayerBasicComp::getProfilePictureToClient(
        PlayerBasicComp *const this,
        proto::ProfilePicture *profile_picture)
{
  return ProfilePicture::toClient(&this->profile_picture_, profile_picture);
};

// Line 369: range 0000000016D60C66-0000000016D60C91
int32_t __cdecl PlayerBasicComp::getProfilePictureToBin(
        PlayerBasicComp *const this,
        proto::ProfilePictureBin *profile_picture_bin)
{
  return ProfilePicture::toBin(&this->profile_picture_, profile_picture_bin);
};

// Line 383: range 0000000016050760-00000000160507A0
double __cdecl PlayerBasicComp::getClientTotalTickTime(const PlayerBasicComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->client_total_tick_time_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->client_total_tick_time_);
  return this->client_total_tick_time_;
};

// Line 456: range 00000000131D4C06-00000000131D4C4D
uint32_t __cdecl PlayerBasicComp::getLevel(const PlayerBasicComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->level_);
  }
  return this->level_;
};

// Line 457: range 0000000015D367EA-0000000015D36839
uint32_t __cdecl PlayerBasicComp::getExp(const PlayerBasicComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->exp_);
  }
  return this->exp_;
};

// Line 458: range 000000001720E956-000000001720E99F
float __cdecl PlayerBasicComp::getPersistStaminaLimit(const PlayerBasicComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->persist_stamina_limit_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->persist_stamina_limit_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->persist_stamina_limit_);
  }
  return this->persist_stamina_limit_;
};

// Line 459: range 000000001720E9A0-000000001720E9F1
float __cdecl PlayerBasicComp::getCurPersistStamina(const PlayerBasicComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_persist_stamina_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_persist_stamina_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_persist_stamina_);
  }
  return this->cur_persist_stamina_;
};

// Line 460: range 000000001720E9F2-000000001720EA3B
float __cdecl PlayerBasicComp::getCurTemporaryStamina(const PlayerBasicComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_temporary_stamina_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_temporary_stamina_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_temporary_stamina_);
  }
  return this->cur_temporary_stamina_;
};

// Line 461: range 00000000138442FA-0000000013844334
uint64_t __cdecl PlayerBasicComp::getLastStaminaCostTimeMs(const PlayerBasicComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->last_stamina_cost_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->last_stamina_cost_time_ms_);
  return this->last_stamina_cost_time_ms_;
};

// Line 461: range 0000000013844336-0000000013844379
void __cdecl PlayerBasicComp::setLastStaminaCostTimeMs(
        PlayerBasicComp *const this,
        uint64_t last_stamina_cost_time_ms__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->last_stamina_cost_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->last_stamina_cost_time_ms_, last_stamina_cost_time_ms__out);
  this->last_stamina_cost_time_ms_ = last_stamina_cost_time_ms__out;
};

// Line 462: range 000000001384437A-00000000138443B4
uint64_t __cdecl PlayerBasicComp::getPlayerTimeMs(const PlayerBasicComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->player_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_time_ms_);
  return this->player_time_ms_;
};

// Line 462: range 00000000155C4EC2-00000000155C4F05
void __cdecl PlayerBasicComp::setPlayerTimeMs(PlayerBasicComp *const this, uint64_t player_time_ms__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->player_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->player_time_ms_, player_time_ms__out);
  this->player_time_ms_ = player_time_ms__out;
};

// Line 464: range 000000001763274A-0000000017632797
bool __cdecl PlayerBasicComp::getIsRebateMailReceived(const PlayerBasicComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_rebate_mail_received_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 73) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_rebate_mail_received_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_rebate_mail_received_);
  }
  return this->is_rebate_mail_received_;
};

// Line 464: range 0000000017632798-00000000176327EE
void __cdecl PlayerBasicComp::setIsRebateMailReceived(PlayerBasicComp *const this, bool is_rebate_mail_received__out)
{
  __int64 v2; // rsi
  __int64 v3; // rdx

  v2 = ((_BYTE)this + 73) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_rebate_mail_received_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_rebate_mail_received_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_rebate_mail_received_, v2, v3);
  this->is_rebate_mail_received_ = is_rebate_mail_received__out;
};

// Line 465: range 00000000149EDA2E-00000000149EDA7D
data::JsonClimateType __cdecl PlayerBasicComp::getCurJsonClimateType(const PlayerBasicComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_json_climate_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_json_climate_type_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_json_climate_type_);
  }
  return this->cur_json_climate_type_;
};

// Line 465: range 00000000149EDA7E-00000000149EDAC7
float __cdecl PlayerBasicComp::getCurClimateMeter(const PlayerBasicComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_climate_meter_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_climate_meter_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_climate_meter_);
  }
  return this->cur_climate_meter_;
};

// Line 467: range 000000001720EA3C-000000001720EA68
std::string *__cdecl PlayerBasicComp::getCps[abi:cxx11](std::string *retstr, const PlayerBasicComp *const this)
{
  std::string::basic_string(retstr, &this->cps_);
  return retstr;
};

// Line 468: range 00000000160507A2-00000000160507CE
std::string *__cdecl PlayerBasicComp::getRegisterCps[abi:cxx11](std::string *retstr, const PlayerBasicComp *const this)
{
  std::string::basic_string(retstr, &this->register_cps_);
  return retstr;
};

// Line 469: range 0000000016D60C92-0000000016D60CDE
uint32_t __cdecl PlayerBasicComp::getLastLogoutTime(const PlayerBasicComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->last_logout_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_logout_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_logout_time_);
  }
  return this->last_logout_time_;
};

// Line 470: range 000000001720EA6A-000000001720EABE
uint32_t __cdecl PlayerBasicComp::getDataVersion(const PlayerBasicComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->data_version_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->data_version_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->data_version_);
  }
  return this->data_version_;
};

// Line 470: range 000000001720EAC0-000000001720EB1B
void __cdecl PlayerBasicComp::setDataVersion(PlayerBasicComp *const this, uint32_t data_version__out)
{
  __int64 v2; // rdx

  v2 = (*(_BYTE *)(((unsigned __int64)&this->data_version_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->data_version_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store4(&this->data_version_, (((_BYTE)this - 100) & 7u) + 3, v2);
  this->data_version_ = data_version__out;
};

// Line 472: range 000000001518A634-000000001518A686
bool __cdecl PlayerBasicComp::getIsAutoUnlockSpecificEquip(const PlayerBasicComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_auto_unlock_specific_equip_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 92) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_auto_unlock_specific_equip_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_auto_unlock_specific_equip_);
  }
  return this->is_auto_unlock_specific_equip_;
};

// Line 472: range 000000001518A688-000000001518A6E3
void __cdecl PlayerBasicComp::setIsAutoUnlockSpecificEquip(
        PlayerBasicComp *const this,
        bool is_auto_unlock_specific_equip__out)
{
  __int64 v2; // rsi
  __int64 v3; // rdx

  v2 = ((_BYTE)this - 92) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_auto_unlock_specific_equip_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_auto_unlock_specific_equip_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_auto_unlock_specific_equip_, v2, v3);
  this->is_auto_unlock_specific_equip_ = is_auto_unlock_specific_equip__out;
};

// Line 473: range 000000001720EB1C-000000001720EB68
uint32_t __cdecl PlayerBasicComp::getLastLoginPlatform(const PlayerBasicComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->last_login_platform_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_login_platform_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_login_platform_);
  }
  return this->last_login_platform_;
};

// Line 473: range 000000001720EB6A-000000001720EBBD
// local variable allocation has failed, the output may be wrong!
void __cdecl PlayerBasicComp::setLastLoginPlatform(PlayerBasicComp *const this, uint32_t last_login_platform__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->last_login_platform_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_login_platform_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_login_platform_, *(_QWORD *)&last_login_platform__out, &this->last_login_platform_);
  }
  this->last_login_platform_ = last_login_platform__out;
};

// Line 474: range 000000001720EBFE-000000001720EC2D
std::string *__cdecl PlayerBasicComp::getOnlineId[abi:cxx11](std::string *retstr, const PlayerBasicComp *const this)
{
  std::string::basic_string(retstr, &this->online_id_);
  return retstr;
};

// Line 474: range 000000001720EBBE-000000001720EBFD
uint64_t __cdecl PlayerBasicComp::getPlayerStatId(const PlayerBasicComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->player_stat_id_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_stat_id_);
  return this->player_stat_id_;
};

// Line 476: range 000000001720EC2E-000000001720EC5A
void __cdecl PlayerBasicComp::setOnlineId(PlayerBasicComp *const this, std::string *p_online_id__out)
{
  std::string::operator=(&this->online_id_, p_online_id__out);
};

// Line 477: range 000000001720EC5C-000000001720EC8B
std::string *__cdecl PlayerBasicComp::getPsnId[abi:cxx11](std::string *retstr, const PlayerBasicComp *const this)
{
  std::string::basic_string(retstr, &this->psn_id_);
  return retstr;
};

// Line 477: range 000000001720EC8C-000000001720ECB8
void __cdecl PlayerBasicComp::setPsnId(PlayerBasicComp *const this, std::string *p_psn_id__out)
{
  std::string::operator=(&this->psn_id_, p_psn_id__out);
};

// Line 479: range 0000000016D60CE0-0000000016D60D0F
std::string *__cdecl PlayerBasicComp::getIpCountryCode[abi:cxx11](
        std::string *retstr,
        const PlayerBasicComp *const this)
{
  std::string::basic_string(retstr, &this->ip_country_code_);
  return retstr;
};

// Line 479: range 000000001720ECBA-000000001720ECE6
void __cdecl PlayerBasicComp::setIpCountryCode(PlayerBasicComp *const this, std::string *p_ip_country_code__out)
{
  std::string::operator=(&this->ip_country_code_, p_ip_country_code__out);
};

// Line 480: range 0000000016D60D10-0000000016D60D3F
std::string *__cdecl PlayerBasicComp::getIpRegionName[abi:cxx11](
        std::string *retstr,
        const PlayerBasicComp *const this)
{
  std::string::basic_string(retstr, &this->ip_region_name_);
  return retstr;
};

// Line 480: range 000000001720ECE8-000000001720ED14
void __cdecl PlayerBasicComp::setIpRegionName(PlayerBasicComp *const this, std::string *p_ip_region_name__out)
{
  std::string::operator=(&this->ip_region_name_, p_ip_region_name__out);
};

// Line 486: range 0000000017D68834-0000000017D68880
uint32_t __cdecl PlayerBasicComp::getDungeonFinishCount(const PlayerBasicComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_finish_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_finish_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->dungeon_finish_count_);
  }
  return this->dungeon_finish_count_;
};

// Line 486: range 0000000017D68882-0000000017D688D5
// local variable allocation has failed, the output may be wrong!
void __cdecl PlayerBasicComp::setDungeonFinishCount(PlayerBasicComp *const this, uint32_t dungeon_finish_count__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_finish_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_finish_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(
      &this->dungeon_finish_count_,
      *(_QWORD *)&dungeon_finish_count__out,
      &this->dungeon_finish_count_);
  }
  this->dungeon_finish_count_ = dungeon_finish_count__out;
};

// Line 487: range 0000000017D688D6-0000000017D6892A
uint32_t __cdecl PlayerBasicComp::getEncounterFinishCount(const PlayerBasicComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->encounter_finish_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->encounter_finish_count_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->encounter_finish_count_);
  }
  return this->encounter_finish_count_;
};

// Line 487: range 0000000017D6892C-0000000017D68987
void __cdecl PlayerBasicComp::setEncounterFinishCount(
        PlayerBasicComp *const this,
        uint32_t encounter_finish_count__out)
{
  __int64 v2; // rdx

  v2 = (*(_BYTE *)(((unsigned __int64)&this->encounter_finish_count_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->encounter_finish_count_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store4(&this->encounter_finish_count_, (((_BYTE)this + 68) & 7u) + 3, v2);
  this->encounter_finish_count_ = encounter_finish_count__out;
};

// Line 488: range 0000000017D68988-0000000017D689D4
uint32_t __cdecl PlayerBasicComp::getDailyPlayTime(const PlayerBasicComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->daily_play_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->daily_play_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->daily_play_time);
  }
  return this->daily_play_time;
};

// Line 488: range 0000000017D689D6-0000000017D68A29
// local variable allocation has failed, the output may be wrong!
void __cdecl PlayerBasicComp::setDailyPlayTime(PlayerBasicComp *const this, uint32_t daily_play_time_out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->daily_play_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->daily_play_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->daily_play_time, *(_QWORD *)&daily_play_time_out, &this->daily_play_time);
  }
  this->daily_play_time = daily_play_time_out;
};

// Line 534: range 0000000013EBA13C-0000000013EBA190
data::JsonClimateType __cdecl PlayerBasicComp::getCurClimateAreaType(const PlayerBasicComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_area_climate_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_area_climate_type_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_area_climate_type_);
  }
  return this->cur_area_climate_type_;
};

// Line 545: range 0000000017A03BBE-0000000017A03C12
uint32_t __cdecl PlayerBasicComp::getTotalLoginDays(const PlayerBasicComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->total_login_days_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total_login_days_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->total_login_days_);
  }
  return this->total_login_days_;
};

// Line 565: range 000000001720ED15-000000001720ED1F
uint32_t __cdecl PlayerBasicComp::getType()
{
  return 1;
};
