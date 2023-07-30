// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/basic/stat_log_reporter.h

// Line 32: range 000000001518F9FA-000000001518FC23
void __cdecl CombatStatHurtLogHead::CombatStatHurtLogHead(CombatStatHurtLogHead *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, this);
  }
  this->target_type = TARGET_NONE;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->target_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->target_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store4(&this->target_id, v2, v3);
  this->target_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->ability_name_hash >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->ability_name_hash >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->ability_name_hash, v2, &this->ability_name_hash);
  }
  this->ability_name_hash = 0;
  v4 = (((_BYTE)this + 12) & 7u) + 3;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->modifier_name_hash >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->modifier_name_hash >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store4(&this->modifier_name_hash, v4, v5);
  this->modifier_name_hash = 0;
  std::string::basic_string(&this->attack_tag);
  if ( *(_BYTE *)(((unsigned __int64)&this->element_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->element_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->element_type, v4, &this->element_type);
  }
  this->element_type = 0;
  v6 = (((_BYTE)this + 52) & 7u) + 3;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->anim_event_id_hash >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->anim_event_id_hash >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->anim_event_id_hash, v6, v7);
  this->anim_event_id_hash = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->source_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->source_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->source_type, v6, &this->source_type);
  }
  this->source_type = 0;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->source_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->source_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store4(&this->source_id, (((_BYTE)this + 60) & 7u) + 3, v8);
  this->source_id = 0;
};

// Line 32: range 00000000153BF074-00000000153BF47F
void __cdecl CombatStatHurtLogHead::CombatStatHurtLogHead(
        CombatStatHurtLogHead *const this,
        const CombatStatHurtLogHead *a2)
{
  proto_log::TargetType target_type; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t target_id; // ecx
  char v6; // dl
  __int64 v7; // rdx
  uint32_t ability_name_hash; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t modifier_name_hash; // ecx
  char v12; // dl
  __int64 v13; // rdx
  std::string *p_attack_tag; // rsi
  uint32_t element_type; // ecx
  char v16; // al
  __int64 v17; // rsi
  uint32_t anim_event_id_hash; // ecx
  char v19; // dl
  __int64 v20; // rdx
  uint32_t source_type; // ecx
  char v22; // al
  __int64 v23; // rsi
  uint32_t source_id; // ecx
  char v25; // dl
  __int64 v26; // rdx
  const CombatStatHurtLogHead *v27; // [rsp+0h] [rbp-10h]

  v27 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  target_type = a2->target_type;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2, this);
  }
  this->target_type = target_type;
  v4 = (((_BYTE)v27 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v27->target_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v27 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v27->target_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v27->target_id);
  }
  target_id = v27->target_id;
  v6 = *(_BYTE *)(((unsigned __int64)&this->target_id >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->target_id, v4, v7);
  this->target_id = target_id;
  if ( *(_BYTE *)(((unsigned __int64)&v27->ability_name_hash >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v27->ability_name_hash >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v27->ability_name_hash);
  }
  ability_name_hash = v27->ability_name_hash;
  v9 = *(_BYTE *)(((unsigned __int64)&this->ability_name_hash >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v4) = v9 != 0;
    __asan_report_store4(&this->ability_name_hash, v4, &this->ability_name_hash);
  }
  this->ability_name_hash = ability_name_hash;
  v10 = (((_BYTE)v27 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v27->modifier_name_hash >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v27 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v27->modifier_name_hash >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v27->modifier_name_hash);
  }
  modifier_name_hash = v27->modifier_name_hash;
  v12 = *(_BYTE *)(((unsigned __int64)&this->modifier_name_hash >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v12 != 0;
  v13 = (v12 != 0) & (unsigned __int8)((char)((((_BYTE)this + 12) & 7) + 3) >= v12);
  if ( (_BYTE)v13 )
    __asan_report_store4(&this->modifier_name_hash, v10, v13);
  this->modifier_name_hash = modifier_name_hash;
  p_attack_tag = &v27->attack_tag;
  std::string::basic_string(&this->attack_tag, &v27->attack_tag);
  if ( *(_BYTE *)(((unsigned __int64)&v27->element_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v27->element_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v27->element_type);
  }
  element_type = v27->element_type;
  v16 = *(_BYTE *)(((unsigned __int64)&this->element_type >> 3) + 0x7FFF8000);
  if ( v16 != 0 && v16 <= 3 )
  {
    LOBYTE(p_attack_tag) = v16 != 0;
    __asan_report_store4(&this->element_type, p_attack_tag, &this->element_type);
  }
  this->element_type = element_type;
  v17 = (((_BYTE)v27 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v27->anim_event_id_hash >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v27 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v27->anim_event_id_hash >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v27->anim_event_id_hash);
  }
  anim_event_id_hash = v27->anim_event_id_hash;
  v19 = *(_BYTE *)(((unsigned __int64)&this->anim_event_id_hash >> 3) + 0x7FFF8000);
  LOBYTE(v17) = v19 != 0;
  v20 = (v19 != 0) & (unsigned __int8)((char)((((_BYTE)this + 52) & 7) + 3) >= v19);
  if ( (_BYTE)v20 )
    __asan_report_store4(&this->anim_event_id_hash, v17, v20);
  this->anim_event_id_hash = anim_event_id_hash;
  if ( *(_BYTE *)(((unsigned __int64)&v27->source_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v27->source_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v27->source_type);
  }
  source_type = v27->source_type;
  v22 = *(_BYTE *)(((unsigned __int64)&this->source_type >> 3) + 0x7FFF8000);
  if ( v22 != 0 && v22 <= 3 )
  {
    LOBYTE(v17) = v22 != 0;
    __asan_report_store4(&this->source_type, v17, &this->source_type);
  }
  this->source_type = source_type;
  v23 = (((_BYTE)v27 + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v27->source_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v27 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v27->source_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v27->source_id);
  }
  source_id = v27->source_id;
  v25 = *(_BYTE *)(((unsigned __int64)&this->source_id >> 3) + 0x7FFF8000);
  LOBYTE(v23) = v25 != 0;
  v26 = (v25 != 0) & (unsigned __int8)((char)((((_BYTE)this + 60) & 7) + 3) >= v25);
  if ( (_BYTE)v26 )
    __asan_report_store4(&this->source_id, v23, v26);
  this->source_id = source_id;
};

// Line 32: range 000000001518FC24-000000001518FC42
void __cdecl CombatStatHurtLogHead::~CombatStatHurtLogHead(CombatStatHurtLogHead *const this)
{
  std::string::~string(&this->attack_tag);
};

// Line 45: range 00000000153BF480-00000000153BF627
void __cdecl CombatStatAccumulatedDamage::CombatStatAccumulatedDamage(CombatStatAccumulatedDamage *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, this);
  }
  this->ori_hurt = 0.0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->block_shield_hurt >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->block_shield_hurt >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store4(&this->block_shield_hurt, v2, v3);
  this->block_shield_hurt = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->ratio_hurt >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->ratio_hurt >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->ratio_hurt, v2, &this->ratio_hurt);
  }
  this->ratio_hurt = 0.0;
  v4 = (((_BYTE)this + 12) & 7u) + 3;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->real_hurt >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->real_hurt >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store4(&this->real_hurt, v4, v5);
  this->real_hurt = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->total_damage_extra >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->total_damage_extra >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->total_damage_extra, v4, &this->total_damage_extra);
  }
  this->total_damage_extra = 0.0;
  std::map<unsigned int,float>::map(&this->damage_extra_map);
  if ( *(_BYTE *)(((unsigned __int64)&this->hurt_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->hurt_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->hurt_count, v4, &this->hurt_count);
  }
  this->hurt_count = 0;
};

// Line 45: range 0000000015335498-00000000153354B6
void __cdecl CombatStatAccumulatedDamage::~CombatStatAccumulatedDamage(CombatStatAccumulatedDamage *const this)
{
  std::map<unsigned int,float>::~map(&this->damage_extra_map);
};

// Line 88: range 000000001720E790-000000001720E7F2
void __cdecl StatLogReporter::~StatLogReporter(StatLogReporter *const this)
{
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->avatar_present_time_map_);
  std::unordered_map<CombatStatHealLogHead,std::pair<float,float>>::~unordered_map(&this->combined_be_heal_stat_log_map_);
  std::unordered_map<CombatStatHurtLogHead,CombatStatAccumulatedDamage>::~unordered_map(&this->combined_be_hurt_stat_log_map_);
  std::unordered_map<CombatStatHurtLogHead,CombatStatAccumulatedDamage>::~unordered_map(&this->combined_do_hurt_stat_log_map_);
  std::string::~string(&this->transaction_);
};

// Line 91: range 000000001720E63E-000000001720E78F
void __cdecl StatLogReporter::StatLogReporter(StatLogReporter *const this, Player *player)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, player);
  this->player_ = player;
  if ( *(_BYTE *)(((unsigned __int64)&this->trans_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->trans_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->trans_type_, player, &this->trans_type_);
  }
  this->trans_type_ = TRANS_NONE;
  std::string::basic_string(&this->transaction_);
  if ( *(_BYTE *)(((unsigned __int64)&this->transaction_start_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->transaction_start_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->transaction_start_time_, player, &this->transaction_start_time_);
  }
  this->transaction_start_time_ = 0;
  std::unordered_map<CombatStatHurtLogHead,CombatStatAccumulatedDamage>::unordered_map(&this->combined_do_hurt_stat_log_map_);
  std::unordered_map<CombatStatHurtLogHead,CombatStatAccumulatedDamage>::unordered_map(&this->combined_be_hurt_stat_log_map_);
  std::unordered_map<CombatStatHealLogHead,std::pair<float,float>>::unordered_map(&this->combined_be_heal_stat_log_map_);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->avatar_present_time_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_present_start_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->avatar_present_start_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->avatar_present_start_time_, player, &this->avatar_present_start_time_);
  }
  this->avatar_present_start_time_ = 0;
};

// Line 101: range 000000001518A5E6-000000001518A632
bool __cdecl StatLogReporter::hasCombatStatLogTransaction(const StatLogReporter *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->trans_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->trans_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->trans_type_);
  }
  return this->trans_type_ != TRANS_NONE;
};
