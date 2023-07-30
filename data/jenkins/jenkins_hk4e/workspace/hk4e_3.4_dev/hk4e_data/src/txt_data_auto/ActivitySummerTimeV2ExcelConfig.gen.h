// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ActivitySummerTimeV2ExcelConfig.gen.h

// Line 17: range 0000000013BD69EA-0000000013BD6B91
void __cdecl data::SummerTimeV2DungeonStageExcelConfig::SummerTimeV2DungeonStageExcelConfig(
        data::SummerTimeV2DungeonStageExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  v2 = (int (**)(...))(&`vtable for'data::SummerTimeV2DungeonStageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SummerTimeV2DungeonStageExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->stage_id, v1);
  }
  this->stage_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->day_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->day_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->day_index, v3);
  }
  this->day_index = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->prev_dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->prev_dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->prev_dungeon_id, v3);
  }
  this->prev_dungeon_id = 0;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->cycle_dungeon_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cycle_dungeon_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cycle_dungeon_id, v4);
  }
  this->cycle_dungeon_id = 0;
  std::vector<unsigned int>::vector(&this->dungeon_exhibition_id_list);
  std::vector<unsigned int>::vector(&this->dungeon_card_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_reward_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_reward_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dungeon_reward_limit, v4);
  }
  this->dungeon_reward_limit = 0;
};

// Line 17: range 00000000133CE114-00000000133CE41F
void __cdecl data::SummerTimeV2DungeonStageExcelConfig::SummerTimeV2DungeonStageExcelConfig(
        data::SummerTimeV2DungeonStageExcelConfig *const this,
        const data::SummerTimeV2DungeonStageExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t stage_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t day_index; // ecx
  char v7; // dl
  uint32_t prev_dungeon_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t cycle_dungeon_id; // ecx
  char v12; // dl
  std::vector<unsigned int> *p_dungeon_card_id_list; // rsi
  uint32_t dungeon_reward_limit; // ecx
  char v15; // al
  const data::SummerTimeV2DungeonStageExcelConfig *v16; // [rsp+0h] [rbp-20h]

  v16 = a2;
  v2 = (int (**)(...))(&`vtable for'data::SummerTimeV2DungeonStageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_SummerTimeV2DungeonStageExcelConfig = v2;
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
  v5 = (((_BYTE)v16 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v16->day_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v16 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v16->day_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v16->day_index);
  }
  day_index = v16->day_index;
  v7 = *(_BYTE *)(((unsigned __int64)&this->day_index >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->day_index, v5);
  }
  this->day_index = day_index;
  if ( *(_BYTE *)(((unsigned __int64)&v16->prev_dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v16->prev_dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v16->prev_dungeon_id);
  }
  prev_dungeon_id = v16->prev_dungeon_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->prev_dungeon_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->prev_dungeon_id, v5);
  }
  this->prev_dungeon_id = prev_dungeon_id;
  v10 = (((_BYTE)v16 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v16->cycle_dungeon_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v16 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v16->cycle_dungeon_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v16->cycle_dungeon_id);
  }
  cycle_dungeon_id = v16->cycle_dungeon_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->cycle_dungeon_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->cycle_dungeon_id, v10);
  }
  this->cycle_dungeon_id = cycle_dungeon_id;
  std::vector<unsigned int>::vector(&this->dungeon_exhibition_id_list, &v16->dungeon_exhibition_id_list);
  p_dungeon_card_id_list = &v16->dungeon_card_id_list;
  std::vector<unsigned int>::vector(&this->dungeon_card_id_list, &v16->dungeon_card_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&v16->dungeon_reward_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v16->dungeon_reward_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v16->dungeon_reward_limit);
  }
  dungeon_reward_limit = v16->dungeon_reward_limit;
  v15 = *(_BYTE *)(((unsigned __int64)&this->dungeon_reward_limit >> 3) + 0x7FFF8000);
  if ( v15 != 0 && v15 <= 3 )
  {
    LOBYTE(p_dungeon_card_id_list) = v15 != 0;
    __asan_report_store4(&this->dungeon_reward_limit, p_dungeon_card_id_list);
  }
  this->dungeon_reward_limit = dungeon_reward_limit;
};

// Line 20: range 00000000132F74D0-00000000132F7531
void __cdecl data::SummerTimeV2DungeonStageExcelConfig::~SummerTimeV2DungeonStageExcelConfig(
        data::SummerTimeV2DungeonStageExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::SummerTimeV2DungeonStageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SummerTimeV2DungeonStageExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->dungeon_card_id_list);
  std::vector<unsigned int>::~vector(&this->dungeon_exhibition_id_list);
};

// Line 20: range 00000000132F7532-00000000132F755C
void __cdecl data::SummerTimeV2DungeonStageExcelConfig::~SummerTimeV2DungeonStageExcelConfig(
        data::SummerTimeV2DungeonStageExcelConfig *const this)
{
  data::SummerTimeV2DungeonStageExcelConfig::~SummerTimeV2DungeonStageExcelConfig(this);
  operator delete(this, 0x50uLL);
};

// Line 37: range 00000000133CE4D6-00000000133CE903
void __cdecl data::SummerTimeV2BoatStageExcelConfig::SummerTimeV2BoatStageExcelConfig(
        data::SummerTimeV2BoatStageExcelConfig *const this,
        const data::SummerTimeV2BoatStageExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t stage_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t day_index; // ecx
  char v7; // dl
  uint32_t gallery_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t group_link_id; // ecx
  char v12; // dl
  uint32_t vehicle_gadget_id; // ecx
  char v14; // al
  __int64 v15; // rsi
  uint32_t revive_point_group_id; // ecx
  char v17; // dl
  uint32_t avatar_revive_point_config_id; // ecx
  char v19; // al
  __int64 v20; // rsi
  uint32_t vehicle_revive_point_config_id; // ecx
  char v22; // dl
  const data::SummerTimeV2BoatStageExcelConfig *v23; // [rsp+0h] [rbp-10h]

  v23 = a2;
  v2 = (int (**)(...))(&`vtable for'data::SummerTimeV2BoatStageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_SummerTimeV2BoatStageExcelConfig = v2;
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
  v5 = (((_BYTE)v23 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->day_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->day_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->day_index);
  }
  day_index = v23->day_index;
  v7 = *(_BYTE *)(((unsigned __int64)&this->day_index >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->day_index, v5);
  }
  this->day_index = day_index;
  if ( *(_BYTE *)(((unsigned __int64)&v23->gallery_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->gallery_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->gallery_id);
  }
  gallery_id = v23->gallery_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->gallery_id, v5);
  }
  this->gallery_id = gallery_id;
  v10 = (((_BYTE)v23 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->group_link_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->group_link_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->group_link_id);
  }
  group_link_id = v23->group_link_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->group_link_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->group_link_id, v10);
  }
  this->group_link_id = group_link_id;
  if ( *(_BYTE *)(((unsigned __int64)&v23->vehicle_gadget_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->vehicle_gadget_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->vehicle_gadget_id);
  }
  vehicle_gadget_id = v23->vehicle_gadget_id;
  v14 = *(_BYTE *)(((unsigned __int64)&this->vehicle_gadget_id >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->vehicle_gadget_id, v10);
  }
  this->vehicle_gadget_id = vehicle_gadget_id;
  v15 = (((_BYTE)v23 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->revive_point_group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->revive_point_group_id >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->revive_point_group_id);
  }
  revive_point_group_id = v23->revive_point_group_id;
  v17 = *(_BYTE *)(((unsigned __int64)&this->revive_point_group_id >> 3) + 0x7FFF8000);
  if ( v17 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v17 )
  {
    LOBYTE(v15) = v17 != 0;
    __asan_report_store4(&this->revive_point_group_id, v15);
  }
  this->revive_point_group_id = revive_point_group_id;
  if ( *(_BYTE *)(((unsigned __int64)&v23->avatar_revive_point_config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->avatar_revive_point_config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->avatar_revive_point_config_id);
  }
  avatar_revive_point_config_id = v23->avatar_revive_point_config_id;
  v19 = *(_BYTE *)(((unsigned __int64)&this->avatar_revive_point_config_id >> 3) + 0x7FFF8000);
  if ( v19 != 0 && v19 <= 3 )
  {
    LOBYTE(v15) = v19 != 0;
    __asan_report_store4(&this->avatar_revive_point_config_id, v15);
  }
  this->avatar_revive_point_config_id = avatar_revive_point_config_id;
  v20 = (((_BYTE)v23 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->vehicle_revive_point_config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->vehicle_revive_point_config_id >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->vehicle_revive_point_config_id);
  }
  vehicle_revive_point_config_id = v23->vehicle_revive_point_config_id;
  v22 = *(_BYTE *)(((unsigned __int64)&this->vehicle_revive_point_config_id >> 3) + 0x7FFF8000);
  if ( v22 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v22 )
  {
    LOBYTE(v20) = v22 != 0;
    __asan_report_store4(&this->vehicle_revive_point_config_id, v20);
  }
  this->vehicle_revive_point_config_id = vehicle_revive_point_config_id;
};

// Line 40: range 00000000132F757E-00000000132F75BF
void __cdecl data::SummerTimeV2BoatStageExcelConfig::~SummerTimeV2BoatStageExcelConfig(
        data::SummerTimeV2BoatStageExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::SummerTimeV2BoatStageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SummerTimeV2BoatStageExcelConfig = v2;
};

// Line 40: range 00000000132F75C0-00000000132F75EA
void __cdecl data::SummerTimeV2BoatStageExcelConfig::~SummerTimeV2BoatStageExcelConfig(
        data::SummerTimeV2BoatStageExcelConfig *const this)
{
  data::SummerTimeV2BoatStageExcelConfig::~SummerTimeV2BoatStageExcelConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 58: range 000000001418D4C8-000000001418D607
void __cdecl data::SummerTimeV2OverallExcelConfig::SummerTimeV2OverallExcelConfig(
        data::SummerTimeV2OverallExcelConfig *const this,
        const data::SummerTimeV2OverallExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t activity_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t dungeon_reward_id; // ecx
  char v7; // dl
  const data::SummerTimeV2OverallExcelConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::SummerTimeV2OverallExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_SummerTimeV2OverallExcelConfig = v2;
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
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->dungeon_reward_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->dungeon_reward_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->dungeon_reward_id);
  }
  dungeon_reward_id = v8->dungeon_reward_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->dungeon_reward_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->dungeon_reward_id, v5);
  }
  this->dungeon_reward_id = dungeon_reward_id;
};

// Line 61: range 00000000142A2CAA-00000000142A2CEB
void __cdecl data::SummerTimeV2OverallExcelConfig::~SummerTimeV2OverallExcelConfig(
        data::SummerTimeV2OverallExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::SummerTimeV2OverallExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SummerTimeV2OverallExcelConfig = v2;
};

// Line 61: range 00000000142A2CEC-00000000142A2D16
void __cdecl data::SummerTimeV2OverallExcelConfig::~SummerTimeV2OverallExcelConfig(
        data::SummerTimeV2OverallExcelConfig *const this)
{
  data::SummerTimeV2OverallExcelConfig::~SummerTimeV2OverallExcelConfig(this);
  operator delete(this, 0x10uLL);
};
