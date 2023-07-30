// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ActivityTreasureMapExcelConfig.gen.h

// Line 19: range 00000000141913D6-0000000014191D5D
void __cdecl data::TreasureMapExcelConfig::TreasureMapExcelConfig(
        data::TreasureMapExcelConfig *const this,
        const data::TreasureMapExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t activity_id; // ecx
  char v7; // dl
  uint32_t preview_reward_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t treasure_days; // ecx
  char v12; // dl
  uint32_t quest_id; // ecx
  char v14; // al
  float monster_probability; // xmm0_4
  __int64 v16; // rsi
  uint32_t reward_worktop_gadget_id; // ecx
  char v18; // al
  __int64 v19; // rsi
  uint32_t token_material_id; // ecx
  char v21; // dl
  uint32_t unit_token_drop_id; // ecx
  char v23; // al
  __int64 v24; // rsi
  uint32_t mp_reward_id; // ecx
  char v26; // dl
  uint32_t host_reward_limit; // ecx
  char v28; // al
  __int64 v29; // rsi
  uint32_t guest_reward_limit; // ecx
  char v31; // dl
  uint32_t mp_challenge_index; // ecx
  char v33; // al
  __int64 v34; // rsi
  uint32_t bonus_challenge_index; // ecx
  char v36; // dl
  uint32_t challenge_gadget_suite; // ecx
  char v38; // al
  __int64 v39; // rsi
  uint32_t spot_revise_level_id; // ecx
  char v41; // dl
  uint32_t detector_material_id; // ecx
  char v43; // al
  __int64 v44; // rsi
  uint32_t guide_child_quest_id; // ecx
  char v46; // dl
  uint32_t front_child_quest_id; // ecx
  char v48; // al
  const data::TreasureMapExcelConfig *v49; // [rsp+0h] [rbp-10h]

  v49 = a2;
  v2 = (int (**)(...))(&`vtable for'data::TreasureMapExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_TreasureMapExcelConfig = v2;
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
  v5 = (((_BYTE)v49 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v49->activity_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v49 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v49->activity_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v49->activity_id);
  }
  activity_id = v49->activity_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->activity_id, v5);
  }
  this->activity_id = activity_id;
  if ( *(_BYTE *)(((unsigned __int64)&v49->preview_reward_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v49->preview_reward_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v49->preview_reward_id);
  }
  preview_reward_id = v49->preview_reward_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->preview_reward_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->preview_reward_id, v5);
  }
  this->preview_reward_id = preview_reward_id;
  v10 = (((_BYTE)v49 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v49->treasure_days >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v49 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v49->treasure_days >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v49->treasure_days);
  }
  treasure_days = v49->treasure_days;
  v12 = *(_BYTE *)(((unsigned __int64)&this->treasure_days >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->treasure_days, v10);
  }
  this->treasure_days = treasure_days;
  if ( *(_BYTE *)(((unsigned __int64)&v49->quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v49->quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v49->quest_id);
  }
  quest_id = v49->quest_id;
  v14 = *(_BYTE *)(((unsigned __int64)&this->quest_id >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->quest_id, v10);
  }
  this->quest_id = quest_id;
  if ( *(_BYTE *)(((unsigned __int64)&v49->monster_probability >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v49 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v49->monster_probability >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v49->monster_probability);
  }
  monster_probability = v49->monster_probability;
  v16 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->monster_probability >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->monster_probability >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->monster_probability, v16);
  }
  this->monster_probability = monster_probability;
  if ( *(_BYTE *)(((unsigned __int64)&v49->reward_worktop_gadget_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v49->reward_worktop_gadget_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v49->reward_worktop_gadget_id);
  }
  reward_worktop_gadget_id = v49->reward_worktop_gadget_id;
  v18 = *(_BYTE *)(((unsigned __int64)&this->reward_worktop_gadget_id >> 3) + 0x7FFF8000);
  if ( v18 != 0 && v18 <= 3 )
  {
    LOBYTE(v16) = v18 != 0;
    __asan_report_store4(&this->reward_worktop_gadget_id, v16);
  }
  this->reward_worktop_gadget_id = reward_worktop_gadget_id;
  v19 = (((_BYTE)v49 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v49->token_material_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v49 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v49->token_material_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v49->token_material_id);
  }
  token_material_id = v49->token_material_id;
  v21 = *(_BYTE *)(((unsigned __int64)&this->token_material_id >> 3) + 0x7FFF8000);
  if ( v21 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v21 )
  {
    LOBYTE(v19) = v21 != 0;
    __asan_report_store4(&this->token_material_id, v19);
  }
  this->token_material_id = token_material_id;
  if ( *(_BYTE *)(((unsigned __int64)&v49->unit_token_drop_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v49->unit_token_drop_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v49->unit_token_drop_id);
  }
  unit_token_drop_id = v49->unit_token_drop_id;
  v23 = *(_BYTE *)(((unsigned __int64)&this->unit_token_drop_id >> 3) + 0x7FFF8000);
  if ( v23 != 0 && v23 <= 3 )
  {
    LOBYTE(v19) = v23 != 0;
    __asan_report_store4(&this->unit_token_drop_id, v19);
  }
  this->unit_token_drop_id = unit_token_drop_id;
  v24 = (((_BYTE)v49 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v49->mp_reward_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v49 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v49->mp_reward_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v49->mp_reward_id);
  }
  mp_reward_id = v49->mp_reward_id;
  v26 = *(_BYTE *)(((unsigned __int64)&this->mp_reward_id >> 3) + 0x7FFF8000);
  if ( v26 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v26 )
  {
    LOBYTE(v24) = v26 != 0;
    __asan_report_store4(&this->mp_reward_id, v24);
  }
  this->mp_reward_id = mp_reward_id;
  if ( *(_BYTE *)(((unsigned __int64)&v49->host_reward_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v49->host_reward_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v49->host_reward_limit);
  }
  host_reward_limit = v49->host_reward_limit;
  v28 = *(_BYTE *)(((unsigned __int64)&this->host_reward_limit >> 3) + 0x7FFF8000);
  if ( v28 != 0 && v28 <= 3 )
  {
    LOBYTE(v24) = v28 != 0;
    __asan_report_store4(&this->host_reward_limit, v24);
  }
  this->host_reward_limit = host_reward_limit;
  v29 = (((_BYTE)v49 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v49->guest_reward_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v49 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v49->guest_reward_limit >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v49->guest_reward_limit);
  }
  guest_reward_limit = v49->guest_reward_limit;
  v31 = *(_BYTE *)(((unsigned __int64)&this->guest_reward_limit >> 3) + 0x7FFF8000);
  if ( v31 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v31 )
  {
    LOBYTE(v29) = v31 != 0;
    __asan_report_store4(&this->guest_reward_limit, v29);
  }
  this->guest_reward_limit = guest_reward_limit;
  if ( *(_BYTE *)(((unsigned __int64)&v49->mp_challenge_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v49->mp_challenge_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v49->mp_challenge_index);
  }
  mp_challenge_index = v49->mp_challenge_index;
  v33 = *(_BYTE *)(((unsigned __int64)&this->mp_challenge_index >> 3) + 0x7FFF8000);
  if ( v33 != 0 && v33 <= 3 )
  {
    LOBYTE(v29) = v33 != 0;
    __asan_report_store4(&this->mp_challenge_index, v29);
  }
  this->mp_challenge_index = mp_challenge_index;
  v34 = (((_BYTE)v49 + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v49->bonus_challenge_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v49 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v49->bonus_challenge_index >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v49->bonus_challenge_index);
  }
  bonus_challenge_index = v49->bonus_challenge_index;
  v36 = *(_BYTE *)(((unsigned __int64)&this->bonus_challenge_index >> 3) + 0x7FFF8000);
  if ( v36 != 0 && (char)((((_BYTE)this + 60) & 7) + 3) >= v36 )
  {
    LOBYTE(v34) = v36 != 0;
    __asan_report_store4(&this->bonus_challenge_index, v34);
  }
  this->bonus_challenge_index = bonus_challenge_index;
  if ( *(_BYTE *)(((unsigned __int64)&v49->challenge_gadget_suite >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v49->challenge_gadget_suite >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v49->challenge_gadget_suite);
  }
  challenge_gadget_suite = v49->challenge_gadget_suite;
  v38 = *(_BYTE *)(((unsigned __int64)&this->challenge_gadget_suite >> 3) + 0x7FFF8000);
  if ( v38 != 0 && v38 <= 3 )
  {
    LOBYTE(v34) = v38 != 0;
    __asan_report_store4(&this->challenge_gadget_suite, v34);
  }
  this->challenge_gadget_suite = challenge_gadget_suite;
  v39 = (((_BYTE)v49 + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v49->spot_revise_level_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v49 + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v49->spot_revise_level_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v49->spot_revise_level_id);
  }
  spot_revise_level_id = v49->spot_revise_level_id;
  v41 = *(_BYTE *)(((unsigned __int64)&this->spot_revise_level_id >> 3) + 0x7FFF8000);
  if ( v41 != 0 && (char)((((_BYTE)this + 68) & 7) + 3) >= v41 )
  {
    LOBYTE(v39) = v41 != 0;
    __asan_report_store4(&this->spot_revise_level_id, v39);
  }
  this->spot_revise_level_id = spot_revise_level_id;
  if ( *(_BYTE *)(((unsigned __int64)&v49->detector_material_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v49->detector_material_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v49->detector_material_id);
  }
  detector_material_id = v49->detector_material_id;
  v43 = *(_BYTE *)(((unsigned __int64)&this->detector_material_id >> 3) + 0x7FFF8000);
  if ( v43 != 0 && v43 <= 3 )
  {
    LOBYTE(v39) = v43 != 0;
    __asan_report_store4(&this->detector_material_id, v39);
  }
  this->detector_material_id = detector_material_id;
  v44 = (((_BYTE)v49 + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v49->guide_child_quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v49 + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v49->guide_child_quest_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v49->guide_child_quest_id);
  }
  guide_child_quest_id = v49->guide_child_quest_id;
  v46 = *(_BYTE *)(((unsigned __int64)&this->guide_child_quest_id >> 3) + 0x7FFF8000);
  if ( v46 != 0 && (char)((((_BYTE)this + 76) & 7) + 3) >= v46 )
  {
    LOBYTE(v44) = v46 != 0;
    __asan_report_store4(&this->guide_child_quest_id, v44);
  }
  this->guide_child_quest_id = guide_child_quest_id;
  if ( *(_BYTE *)(((unsigned __int64)&v49->front_child_quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v49->front_child_quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v49->front_child_quest_id);
  }
  front_child_quest_id = v49->front_child_quest_id;
  v48 = *(_BYTE *)(((unsigned __int64)&this->front_child_quest_id >> 3) + 0x7FFF8000);
  if ( v48 != 0 && v48 <= 3 )
  {
    LOBYTE(v44) = v48 != 0;
    __asan_report_store4(&this->front_child_quest_id, v44);
  }
  this->front_child_quest_id = front_child_quest_id;
};

// Line 22: range 00000000142A40CC-00000000142A40F6
void __cdecl data::TreasureMapExcelConfig::~TreasureMapExcelConfig(data::TreasureMapExcelConfig *const this)
{
  data::TreasureMapExcelConfig::~TreasureMapExcelConfig(this);
  operator delete(this, 0x58uLL);
};

// Line 22: range 00000000142A408A-00000000142A40CB
void __cdecl data::TreasureMapExcelConfig::~TreasureMapExcelConfig(data::TreasureMapExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::TreasureMapExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_TreasureMapExcelConfig = v2;
};

// Line 51: range 0000000014191E9E-00000000141921D1
void __cdecl data::TreasureMapBonusRegionExcelConfig::TreasureMapBonusRegionExcelConfig(
        data::TreasureMapBonusRegionExcelConfig *const this,
        const data::TreasureMapBonusRegionExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t unlock_region_id; // ecx
  char v7; // dl
  uint32_t group_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t reward_id; // ecx
  char v12; // dl
  uint32_t revise_level; // ecx
  char v14; // al
  __int64 v15; // rsi
  uint32_t fragment_num; // ecx
  char v17; // dl
  const data::TreasureMapBonusRegionExcelConfig *v18; // [rsp+0h] [rbp-10h]

  v18 = a2;
  v2 = (int (**)(...))(&`vtable for'data::TreasureMapBonusRegionExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_TreasureMapBonusRegionExcelConfig = v2;
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
  v5 = (((_BYTE)v18 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->unlock_region_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->unlock_region_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->unlock_region_id);
  }
  unlock_region_id = v18->unlock_region_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->unlock_region_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->unlock_region_id, v5);
  }
  this->unlock_region_id = unlock_region_id;
  if ( *(_BYTE *)(((unsigned __int64)&v18->group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->group_id);
  }
  group_id = v18->group_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->group_id, v5);
  }
  this->group_id = group_id;
  v10 = (((_BYTE)v18 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->reward_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->reward_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->reward_id);
  }
  reward_id = v18->reward_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->reward_id, v10);
  }
  this->reward_id = reward_id;
  if ( *(_BYTE *)(((unsigned __int64)&v18->revise_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->revise_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->revise_level);
  }
  revise_level = v18->revise_level;
  v14 = *(_BYTE *)(((unsigned __int64)&this->revise_level >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->revise_level, v10);
  }
  this->revise_level = revise_level;
  v15 = (((_BYTE)v18 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->fragment_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->fragment_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->fragment_num);
  }
  fragment_num = v18->fragment_num;
  v17 = *(_BYTE *)(((unsigned __int64)&this->fragment_num >> 3) + 0x7FFF8000);
  if ( v17 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v17 )
  {
    LOBYTE(v15) = v17 != 0;
    __asan_report_store4(&this->fragment_num, v15);
  }
  this->fragment_num = fragment_num;
};

// Line 54: range 00000000142A405E-00000000142A4088
void __cdecl data::TreasureMapBonusRegionExcelConfig::~TreasureMapBonusRegionExcelConfig(
        data::TreasureMapBonusRegionExcelConfig *const this)
{
  data::TreasureMapBonusRegionExcelConfig::~TreasureMapBonusRegionExcelConfig(this);
  operator delete(this, 0x20uLL);
};

// Line 54: range 00000000142A401C-00000000142A405D
void __cdecl data::TreasureMapBonusRegionExcelConfig::~TreasureMapBonusRegionExcelConfig(
        data::TreasureMapBonusRegionExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::TreasureMapBonusRegionExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_TreasureMapBonusRegionExcelConfig = v2;
};

// Line 70: range 0000000013BD7F6C-0000000013BD82AE
void __cdecl data::TreasureMapRegionExcelConfig::TreasureMapRegionExcelConfig(
        data::TreasureMapRegionExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi

  v2 = (int (**)(...))(&`vtable for'data::TreasureMapRegionExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_TreasureMapRegionExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->unlock_day >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->unlock_day >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->unlock_day, v3);
  }
  this->unlock_day = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->token_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->token_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->token_num, v3);
  }
  this->token_num = 0;
  std::vector<float>::vector(&this->region_center);
  if ( *(_BYTE *)(((unsigned __int64)&this->region_radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->region_radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->region_radius, v3);
  }
  this->region_radius = 0;
  std::vector<unsigned int>::vector(&this->group_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->revise_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->revise_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->revise_level, v3);
  }
  this->revise_level = 0;
  std::vector<unsigned int>::vector(&this->spot_num_list);
  std::vector<unsigned int>::vector(&this->token_num_list);
  std::vector<unsigned int>::vector(&this->misc_drop_prob_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->misc_drop_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->misc_drop_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->misc_drop_id, v3);
  }
  this->misc_drop_id = 0;
  v4 = (((_BYTE)this - 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->mp_group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->mp_group_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->mp_group_id, v4);
  }
  this->mp_group_id = 0;
  std::vector<unsigned int>::vector(&this->backup_group_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->mp_token_threshold >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mp_token_threshold >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->mp_token_threshold, v4);
  }
  this->mp_token_threshold = 0;
  v5 = (((_BYTE)this - 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->mp_type_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->mp_type_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->mp_type_id, v5);
  }
  this->mp_type_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->fragment_bonus_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fragment_bonus_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fragment_bonus_id, v5);
  }
  this->fragment_bonus_id = 0;
};

// Line 70: range 0000000014192312-0000000014192974
void __cdecl data::TreasureMapRegionExcelConfig::TreasureMapRegionExcelConfig(
        data::TreasureMapRegionExcelConfig *const this,
        const data::TreasureMapRegionExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t unlock_day; // ecx
  char v7; // dl
  uint32_t token_num; // ecx
  char v9; // al
  std::vector<float> *p_region_center; // rsi
  uint32_t region_radius; // ecx
  char v12; // al
  std::vector<unsigned int> *p_group_list; // rsi
  uint32_t revise_level; // ecx
  char v15; // al
  std::vector<unsigned int> *p_misc_drop_prob_list; // rsi
  uint32_t misc_drop_id; // ecx
  char v18; // al
  __int64 v19; // rsi
  uint32_t mp_group_id; // ecx
  char v21; // dl
  std::vector<unsigned int> *p_backup_group_list; // rsi
  uint32_t mp_token_threshold; // ecx
  char v24; // al
  __int64 v25; // rsi
  uint32_t mp_type_id; // ecx
  char v27; // dl
  uint32_t fragment_bonus_id; // ecx
  char v29; // al
  const data::TreasureMapRegionExcelConfig *v30; // [rsp+0h] [rbp-20h]

  v30 = a2;
  v2 = (int (**)(...))(&`vtable for'data::TreasureMapRegionExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_TreasureMapRegionExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v30->unlock_day >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v30 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v30->unlock_day >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v30->unlock_day);
  }
  unlock_day = v30->unlock_day;
  v7 = *(_BYTE *)(((unsigned __int64)&this->unlock_day >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->unlock_day, v5);
  }
  this->unlock_day = unlock_day;
  if ( *(_BYTE *)(((unsigned __int64)&v30->token_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v30->token_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v30->token_num);
  }
  token_num = v30->token_num;
  v9 = *(_BYTE *)(((unsigned __int64)&this->token_num >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->token_num, v5);
  }
  this->token_num = token_num;
  p_region_center = &v30->region_center;
  std::vector<float>::vector(&this->region_center, &v30->region_center);
  if ( *(_BYTE *)(((unsigned __int64)&v30->region_radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v30->region_radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v30->region_radius);
  }
  region_radius = v30->region_radius;
  v12 = *(_BYTE *)(((unsigned __int64)&this->region_radius >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(p_region_center) = v12 != 0;
    __asan_report_store4(&this->region_radius, p_region_center);
  }
  this->region_radius = region_radius;
  p_group_list = &v30->group_list;
  std::vector<unsigned int>::vector(&this->group_list, &v30->group_list);
  if ( *(_BYTE *)(((unsigned __int64)&v30->revise_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v30->revise_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v30->revise_level);
  }
  revise_level = v30->revise_level;
  v15 = *(_BYTE *)(((unsigned __int64)&this->revise_level >> 3) + 0x7FFF8000);
  if ( v15 != 0 && v15 <= 3 )
  {
    LOBYTE(p_group_list) = v15 != 0;
    __asan_report_store4(&this->revise_level, p_group_list);
  }
  this->revise_level = revise_level;
  std::vector<unsigned int>::vector(&this->spot_num_list, &v30->spot_num_list);
  std::vector<unsigned int>::vector(&this->token_num_list, &v30->token_num_list);
  p_misc_drop_prob_list = &v30->misc_drop_prob_list;
  std::vector<unsigned int>::vector(&this->misc_drop_prob_list, &v30->misc_drop_prob_list);
  if ( *(_BYTE *)(((unsigned __int64)&v30->misc_drop_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v30->misc_drop_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v30->misc_drop_id);
  }
  misc_drop_id = v30->misc_drop_id;
  v18 = *(_BYTE *)(((unsigned __int64)&this->misc_drop_id >> 3) + 0x7FFF8000);
  if ( v18 != 0 && v18 <= 3 )
  {
    LOBYTE(p_misc_drop_prob_list) = v18 != 0;
    __asan_report_store4(&this->misc_drop_id, p_misc_drop_prob_list);
  }
  this->misc_drop_id = misc_drop_id;
  v19 = (((_BYTE)v30 - 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v30->mp_group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v30 - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v30->mp_group_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v30->mp_group_id);
  }
  mp_group_id = v30->mp_group_id;
  v21 = *(_BYTE *)(((unsigned __int64)&this->mp_group_id >> 3) + 0x7FFF8000);
  if ( v21 != 0 && (char)((((_BYTE)this - 92) & 7) + 3) >= v21 )
  {
    LOBYTE(v19) = v21 != 0;
    __asan_report_store4(&this->mp_group_id, v19);
  }
  this->mp_group_id = mp_group_id;
  p_backup_group_list = &v30->backup_group_list;
  std::vector<unsigned int>::vector(&this->backup_group_list, &v30->backup_group_list);
  if ( *(_BYTE *)(((unsigned __int64)&v30->mp_token_threshold >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v30->mp_token_threshold >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v30->mp_token_threshold);
  }
  mp_token_threshold = v30->mp_token_threshold;
  v24 = *(_BYTE *)(((unsigned __int64)&this->mp_token_threshold >> 3) + 0x7FFF8000);
  if ( v24 != 0 && v24 <= 3 )
  {
    LOBYTE(p_backup_group_list) = v24 != 0;
    __asan_report_store4(&this->mp_token_threshold, p_backup_group_list);
  }
  this->mp_token_threshold = mp_token_threshold;
  v25 = (((_BYTE)v30 - 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v30->mp_type_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v30 - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v30->mp_type_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v30->mp_type_id);
  }
  mp_type_id = v30->mp_type_id;
  v27 = *(_BYTE *)(((unsigned __int64)&this->mp_type_id >> 3) + 0x7FFF8000);
  if ( v27 != 0 && (char)((((_BYTE)this - 60) & 7) + 3) >= v27 )
  {
    LOBYTE(v25) = v27 != 0;
    __asan_report_store4(&this->mp_type_id, v25);
  }
  this->mp_type_id = mp_type_id;
  if ( *(_BYTE *)(((unsigned __int64)&v30->fragment_bonus_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v30->fragment_bonus_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v30->fragment_bonus_id);
  }
  fragment_bonus_id = v30->fragment_bonus_id;
  v29 = *(_BYTE *)(((unsigned __int64)&this->fragment_bonus_id >> 3) + 0x7FFF8000);
  if ( v29 != 0 && v29 <= 3 )
  {
    LOBYTE(v25) = v29 != 0;
    __asan_report_store4(&this->fragment_bonus_id, v25);
  }
  this->fragment_bonus_id = fragment_bonus_id;
};

// Line 73: range 00000000142A3FF0-00000000142A401A
void __cdecl data::TreasureMapRegionExcelConfig::~TreasureMapRegionExcelConfig(
        data::TreasureMapRegionExcelConfig *const this)
{
  data::TreasureMapRegionExcelConfig::~TreasureMapRegionExcelConfig(this);
  operator delete(this, 0xD0uLL);
};

// Line 73: range 00000000142A3F4A-00000000142A3FEF
void __cdecl data::TreasureMapRegionExcelConfig::~TreasureMapRegionExcelConfig(
        data::TreasureMapRegionExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::TreasureMapRegionExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_TreasureMapRegionExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->backup_group_list);
  std::vector<unsigned int>::~vector(&this->misc_drop_prob_list);
  std::vector<unsigned int>::~vector(&this->token_num_list);
  std::vector<unsigned int>::~vector(&this->spot_num_list);
  std::vector<unsigned int>::~vector(&this->group_list);
  std::vector<float>::~vector(&this->region_center);
};

// Line 99: range 0000000013BD82B0-0000000013BD833F
void __cdecl data::BonusTreasureSolutionExcelConfig::BonusTreasureSolutionExcelConfig(
        data::BonusTreasureSolutionExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BonusTreasureSolutionExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BonusTreasureSolutionExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  std::vector<unsigned int>::vector(&this->solution);
};

// Line 99: range 0000000014192AB6-0000000014192B8B
void __cdecl data::BonusTreasureSolutionExcelConfig::BonusTreasureSolutionExcelConfig(
        data::BonusTreasureSolutionExcelConfig *const this,
        const data::BonusTreasureSolutionExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  const data::BonusTreasureSolutionExcelConfig *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::BonusTreasureSolutionExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BonusTreasureSolutionExcelConfig = v2;
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
  std::vector<unsigned int>::vector(&this->solution, &v5->solution);
};

// Line 102: range 00000000142A3F1E-00000000142A3F48
void __cdecl data::BonusTreasureSolutionExcelConfig::~BonusTreasureSolutionExcelConfig(
        data::BonusTreasureSolutionExcelConfig *const this)
{
  data::BonusTreasureSolutionExcelConfig::~BonusTreasureSolutionExcelConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 102: range 00000000142A3ECC-00000000142A3F1D
void __cdecl data::BonusTreasureSolutionExcelConfig::~BonusTreasureSolutionExcelConfig(
        data::BonusTreasureSolutionExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BonusTreasureSolutionExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BonusTreasureSolutionExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->solution);
};
