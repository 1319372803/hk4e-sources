// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.h

// Line 142: range 00000000140C722E-00000000140C72FB
void __cdecl data::RogueDiaryRoundExcelConfig::RogueDiaryRoundExcelConfig(data::RogueDiaryRoundExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::RogueDiaryRoundExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RogueDiaryRoundExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->room_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->room_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->room_count, v1);
  }
  this->room_count = 0;
  std::vector<unsigned int>::vector(&this->round_room_config_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->hp_correction >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->hp_correction >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->hp_correction, v1);
  }
  this->hp_correction = 0;
};

// Line 142: range 000000001417FB4C-000000001417FC96
void __cdecl data::RogueDiaryRoundExcelConfig::RogueDiaryRoundExcelConfig(
        data::RogueDiaryRoundExcelConfig *const this,
        const data::RogueDiaryRoundExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t room_count; // ecx
  char v4; // al
  std::vector<unsigned int> *p_round_room_config_list; // rsi
  uint32_t hp_correction; // ecx
  char v7; // al
  const data::RogueDiaryRoundExcelConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::RogueDiaryRoundExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_RogueDiaryRoundExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->room_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->room_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->room_count);
  }
  room_count = a2->room_count;
  v4 = *(_BYTE *)(((unsigned __int64)&this->room_count >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->room_count, a2);
  }
  this->room_count = room_count;
  p_round_room_config_list = &v8->round_room_config_list;
  std::vector<unsigned int>::vector(&this->round_room_config_list, &v8->round_room_config_list);
  if ( *(_BYTE *)(((unsigned __int64)&v8->hp_correction >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v8->hp_correction >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v8->hp_correction);
  }
  hp_correction = v8->hp_correction;
  v7 = *(_BYTE *)(((unsigned __int64)&this->hp_correction >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_round_room_config_list) = v7 != 0;
    __asan_report_store4(&this->hp_correction, p_round_room_config_list);
  }
  this->hp_correction = hp_correction;
};

// Line 145: range 0000000013FD90C2-0000000013FD9113
void __cdecl data::RogueDiaryRoundExcelConfig::~RogueDiaryRoundExcelConfig(
        data::RogueDiaryRoundExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::RogueDiaryRoundExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RogueDiaryRoundExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->round_room_config_list);
};

// Line 145: range 0000000013FD9114-0000000013FD913E
void __cdecl data::RogueDiaryRoundExcelConfig::~RogueDiaryRoundExcelConfig(
        data::RogueDiaryRoundExcelConfig *const this)
{
  data::RogueDiaryRoundExcelConfig::~RogueDiaryRoundExcelConfig(this);
  operator delete(this, 0x30uLL);
};

// Line 156: range 0000000013BCFCDE-0000000013BCFF29
void __cdecl data::RogueDiaryStageExcelConfig::RogueDiaryStageExcelConfig(data::RogueDiaryStageExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  v2 = (int (**)(...))(&`vtable for'data::RogueDiaryStageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RogueDiaryStageExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  std::vector<unsigned int>::vector(&this->normal_dungeon_id_list);
  std::vector<unsigned int>::vector(&this->hard_dungeon_id_list);
  std::vector<unsigned int>::vector(&this->insane_dungeon_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->optional_card_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->optional_card_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->optional_card_count, v1);
  }
  this->optional_card_count = 0;
  v3 = (((_BYTE)this + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->chosen_card_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->chosen_card_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->chosen_card_count, v3);
  }
  this->chosen_card_count = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_depot_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->card_depot_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->card_depot_id, v3);
  }
  this->card_depot_id = 0;
  v4 = (((_BYTE)this + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->tired_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->tired_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->tired_type, v4);
  }
  this->tired_type = ROGUE_DIARY_TIRED_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->tired_reserve_avatar_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->tired_reserve_avatar_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->tired_reserve_avatar_count, v4);
  }
  this->tired_reserve_avatar_count = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->tired_round_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->tired_round_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->tired_round_count, (((_BYTE)this + 108) & 7u) + 3);
  }
  this->tired_round_count = 0;
  std::vector<unsigned int>::vector(&this->trial_avatar_list);
};

// Line 156: range 000000001417FE2C-0000000014180291
void __cdecl data::RogueDiaryStageExcelConfig::RogueDiaryStageExcelConfig(
        data::RogueDiaryStageExcelConfig *const this,
        const data::RogueDiaryStageExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  std::vector<unsigned int> *p_insane_dungeon_id_list; // rsi
  uint32_t optional_card_count; // ecx
  char v7; // al
  __int64 v8; // rsi
  uint32_t chosen_card_count; // ecx
  char v10; // dl
  uint32_t card_depot_id; // ecx
  char v12; // al
  __int64 v13; // rsi
  data::RogueDiaryTiredType tired_type; // ecx
  char v15; // dl
  uint32_t tired_reserve_avatar_count; // ecx
  char v17; // al
  __int64 v18; // rsi
  uint32_t tired_round_count; // ecx
  char v20; // dl
  const data::RogueDiaryStageExcelConfig *v21; // [rsp+0h] [rbp-20h]

  v21 = a2;
  v2 = (int (**)(...))(&`vtable for'data::RogueDiaryStageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_RogueDiaryStageExcelConfig = v2;
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
  std::vector<unsigned int>::vector(&this->normal_dungeon_id_list, &v21->normal_dungeon_id_list);
  std::vector<unsigned int>::vector(&this->hard_dungeon_id_list, &v21->hard_dungeon_id_list);
  p_insane_dungeon_id_list = &v21->insane_dungeon_id_list;
  std::vector<unsigned int>::vector(&this->insane_dungeon_id_list, &v21->insane_dungeon_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&v21->optional_card_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v21->optional_card_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v21->optional_card_count);
  }
  optional_card_count = v21->optional_card_count;
  v7 = *(_BYTE *)(((unsigned __int64)&this->optional_card_count >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_insane_dungeon_id_list) = v7 != 0;
    __asan_report_store4(&this->optional_card_count, p_insane_dungeon_id_list);
  }
  this->optional_card_count = optional_card_count;
  v8 = (((_BYTE)v21 + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v21->chosen_card_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v21 + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v21->chosen_card_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v21->chosen_card_count);
  }
  chosen_card_count = v21->chosen_card_count;
  v10 = *(_BYTE *)(((unsigned __int64)&this->chosen_card_count >> 3) + 0x7FFF8000);
  if ( v10 != 0 && (char)((((_BYTE)this + 92) & 7) + 3) >= v10 )
  {
    LOBYTE(v8) = v10 != 0;
    __asan_report_store4(&this->chosen_card_count, v8);
  }
  this->chosen_card_count = chosen_card_count;
  if ( *(_BYTE *)(((unsigned __int64)&v21->card_depot_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v21->card_depot_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v21->card_depot_id);
  }
  card_depot_id = v21->card_depot_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->card_depot_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(v8) = v12 != 0;
    __asan_report_store4(&this->card_depot_id, v8);
  }
  this->card_depot_id = card_depot_id;
  v13 = (((_BYTE)v21 + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v21->tired_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v21 + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v21->tired_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v21->tired_type);
  }
  tired_type = v21->tired_type;
  v15 = *(_BYTE *)(((unsigned __int64)&this->tired_type >> 3) + 0x7FFF8000);
  if ( v15 != 0 && (char)((((_BYTE)this + 100) & 7) + 3) >= v15 )
  {
    LOBYTE(v13) = v15 != 0;
    __asan_report_store4(&this->tired_type, v13);
  }
  this->tired_type = tired_type;
  if ( *(_BYTE *)(((unsigned __int64)&v21->tired_reserve_avatar_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v21->tired_reserve_avatar_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v21->tired_reserve_avatar_count);
  }
  tired_reserve_avatar_count = v21->tired_reserve_avatar_count;
  v17 = *(_BYTE *)(((unsigned __int64)&this->tired_reserve_avatar_count >> 3) + 0x7FFF8000);
  if ( v17 != 0 && v17 <= 3 )
  {
    LOBYTE(v13) = v17 != 0;
    __asan_report_store4(&this->tired_reserve_avatar_count, v13);
  }
  this->tired_reserve_avatar_count = tired_reserve_avatar_count;
  v18 = (((_BYTE)v21 + 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v21->tired_round_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v21 + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v21->tired_round_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v21->tired_round_count);
  }
  tired_round_count = v21->tired_round_count;
  v20 = *(_BYTE *)(((unsigned __int64)&this->tired_round_count >> 3) + 0x7FFF8000);
  if ( v20 != 0 && (char)((((_BYTE)this + 108) & 7) + 3) >= v20 )
  {
    LOBYTE(v18) = v20 != 0;
    __asan_report_store4(&this->tired_round_count, v18);
  }
  this->tired_round_count = tired_round_count;
  std::vector<unsigned int>::vector(&this->trial_avatar_list, &v21->trial_avatar_list);
};

// Line 159: range 00000000142A7156-00000000142A7180
void __cdecl data::RogueDiaryStageExcelConfig::~RogueDiaryStageExcelConfig(
        data::RogueDiaryStageExcelConfig *const this)
{
  data::RogueDiaryStageExcelConfig::~RogueDiaryStageExcelConfig(this);
  operator delete(this, 0x88uLL);
};

// Line 159: range 00000000142A70D4-00000000142A7155
void __cdecl data::RogueDiaryStageExcelConfig::~RogueDiaryStageExcelConfig(
        data::RogueDiaryStageExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::RogueDiaryStageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RogueDiaryStageExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->trial_avatar_list);
  std::vector<unsigned int>::~vector(&this->insane_dungeon_id_list);
  std::vector<unsigned int>::~vector(&this->hard_dungeon_id_list);
  std::vector<unsigned int>::~vector(&this->normal_dungeon_id_list);
};

// Line 180: range 0000000013BCFF7E-0000000013BD001D
void __cdecl data::RogueDiaryDungeonExcelConfig::RogueDiaryDungeonExcelConfig(
        data::RogueDiaryDungeonExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::RogueDiaryDungeonExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RogueDiaryDungeonExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dungeon_id, v1);
  }
  this->dungeon_id = 0;
  std::vector<unsigned int>::vector(&this->group_list);
  std::vector<data::RogueDiaryRoundExcelConfig>::vector(&this->round_list);
};

// Line 180: range 00000000141803D2-00000000141804E9
void __cdecl data::RogueDiaryDungeonExcelConfig::RogueDiaryDungeonExcelConfig(
        data::RogueDiaryDungeonExcelConfig *const this,
        const data::RogueDiaryDungeonExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t dungeon_id; // ecx
  char v4; // al
  const data::RogueDiaryDungeonExcelConfig *v5; // [rsp+0h] [rbp-20h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::RogueDiaryDungeonExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_RogueDiaryDungeonExcelConfig = v2;
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
  std::vector<unsigned int>::vector(&this->group_list, &v5->group_list);
  std::vector<data::RogueDiaryRoundExcelConfig>::vector(&this->round_list, &v5->round_list);
};

// Line 183: range 00000000142A70A8-00000000142A70D2
void __cdecl data::RogueDiaryDungeonExcelConfig::~RogueDiaryDungeonExcelConfig(
        data::RogueDiaryDungeonExcelConfig *const this)
{
  data::RogueDiaryDungeonExcelConfig::~RogueDiaryDungeonExcelConfig(this);
  operator delete(this, 0x40uLL);
};

// Line 183: range 00000000142A7046-00000000142A70A7
void __cdecl data::RogueDiaryDungeonExcelConfig::~RogueDiaryDungeonExcelConfig(
        data::RogueDiaryDungeonExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::RogueDiaryDungeonExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RogueDiaryDungeonExcelConfig = v2;
  std::vector<data::RogueDiaryRoundExcelConfig>::~vector(&this->round_list);
  std::vector<unsigned int>::~vector(&this->group_list);
};

// Line 196: range 00000000140C7466-00000000140C74C7
void __cdecl data::RogueDiaryRoomTypeConfig::RogueDiaryRoomTypeConfig(data::RogueDiaryRoomTypeConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::RogueDiaryRoomTypeConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RogueDiaryRoomTypeConfig = v2;
  std::vector<unsigned int>::vector(&this->normal_room_config_list);
  std::vector<unsigned int>::vector(&this->hard_room_config_list);
};

// Line 196: range 000000001417FD06-000000001417FDA8
void __cdecl data::RogueDiaryRoomTypeConfig::RogueDiaryRoomTypeConfig(
        data::RogueDiaryRoomTypeConfig *const this,
        const data::RogueDiaryRoomTypeConfig *a2)
{
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::RogueDiaryRoomTypeConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_RogueDiaryRoomTypeConfig = v2;
  std::vector<unsigned int>::vector(&this->normal_room_config_list, &a2->normal_room_config_list);
  std::vector<unsigned int>::vector(&this->hard_room_config_list, &a2->hard_room_config_list);
};

// Line 199: range 0000000013FD97EA-0000000013FD9814
void __cdecl data::RogueDiaryRoomTypeConfig::~RogueDiaryRoomTypeConfig(data::RogueDiaryRoomTypeConfig *const this)
{
  data::RogueDiaryRoomTypeConfig::~RogueDiaryRoomTypeConfig(this);
  operator delete(this, 0x38uLL);
};

// Line 199: range 0000000013FD9788-0000000013FD97E9
void __cdecl data::RogueDiaryRoomTypeConfig::~RogueDiaryRoomTypeConfig(data::RogueDiaryRoomTypeConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::RogueDiaryRoomTypeConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RogueDiaryRoomTypeConfig = v2;
  std::vector<unsigned int>::~vector(&this->hard_room_config_list);
  std::vector<unsigned int>::~vector(&this->normal_room_config_list);
};

// Line 209: range 0000000013BD0072-0000000013BD0147
void __cdecl data::RogueDiaryRoundRoomExcelConfig::RogueDiaryRoundRoomExcelConfig(
        data::RogueDiaryRoundRoomExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::RogueDiaryRoundRoomExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RogueDiaryRoundRoomExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->hard_room_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->hard_room_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->hard_room_count, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->hard_room_count = 0;
  std::vector<data::RogueDiaryRoomTypeConfig>::vector(&this->room_type_config_list);
};

// Line 209: range 000000001418062A-0000000014180784
void __cdecl data::RogueDiaryRoundRoomExcelConfig::RogueDiaryRoundRoomExcelConfig(
        data::RogueDiaryRoundRoomExcelConfig *const this,
        const data::RogueDiaryRoundRoomExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t hard_room_count; // ecx
  char v7; // dl
  const data::RogueDiaryRoundRoomExcelConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::RogueDiaryRoundRoomExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_RogueDiaryRoundRoomExcelConfig = v2;
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
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->hard_room_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->hard_room_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->hard_room_count);
  }
  hard_room_count = v8->hard_room_count;
  v7 = *(_BYTE *)(((unsigned __int64)&this->hard_room_count >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->hard_room_count, v5);
  }
  this->hard_room_count = hard_room_count;
  std::vector<data::RogueDiaryRoomTypeConfig>::vector(&this->room_type_config_list, &v8->room_type_config_list);
};

// Line 212: range 00000000142A701A-00000000142A7044
void __cdecl data::RogueDiaryRoundRoomExcelConfig::~RogueDiaryRoundRoomExcelConfig(
        data::RogueDiaryRoundRoomExcelConfig *const this)
{
  data::RogueDiaryRoundRoomExcelConfig::~RogueDiaryRoundRoomExcelConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 212: range 00000000142A6FC8-00000000142A7019
void __cdecl data::RogueDiaryRoundRoomExcelConfig::~RogueDiaryRoundRoomExcelConfig(
        data::RogueDiaryRoundRoomExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::RogueDiaryRoundRoomExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RogueDiaryRoundRoomExcelConfig = v2;
  std::vector<data::RogueDiaryRoomTypeConfig>::~vector(&this->room_type_config_list);
};

// Line 225: range 00000000141808C6-0000000014180C6F
void __cdecl data::RogueDiaryRoomExcelConfig::RogueDiaryRoomExcelConfig(
        data::RogueDiaryRoomExcelConfig *const this,
        const data::RogueDiaryRoomExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t normal_tide_id; // ecx
  char v7; // dl
  uint32_t hard_tide_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t challenge_id; // ecx
  char v12; // dl
  uint32_t coin_reward_normal; // ecx
  char v14; // al
  __int64 v15; // rsi
  uint32_t coin_reward_hard; // ecx
  char v17; // dl
  bool is_boss; // cl
  char v19; // al
  const data::RogueDiaryRoomExcelConfig *v20; // [rsp+0h] [rbp-10h]

  v20 = a2;
  v2 = (int (**)(...))(&`vtable for'data::RogueDiaryRoomExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_RogueDiaryRoomExcelConfig = v2;
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
  v5 = (((_BYTE)v20 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v20->normal_tide_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v20 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v20->normal_tide_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v20->normal_tide_id);
  }
  normal_tide_id = v20->normal_tide_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->normal_tide_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->normal_tide_id, v5);
  }
  this->normal_tide_id = normal_tide_id;
  if ( *(_BYTE *)(((unsigned __int64)&v20->hard_tide_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v20->hard_tide_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v20->hard_tide_id);
  }
  hard_tide_id = v20->hard_tide_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->hard_tide_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->hard_tide_id, v5);
  }
  this->hard_tide_id = hard_tide_id;
  v10 = (((_BYTE)v20 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v20->challenge_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v20 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v20->challenge_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v20->challenge_id);
  }
  challenge_id = v20->challenge_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->challenge_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->challenge_id, v10);
  }
  this->challenge_id = challenge_id;
  if ( *(_BYTE *)(((unsigned __int64)&v20->coin_reward_normal >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v20->coin_reward_normal >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v20->coin_reward_normal);
  }
  coin_reward_normal = v20->coin_reward_normal;
  v14 = *(_BYTE *)(((unsigned __int64)&this->coin_reward_normal >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->coin_reward_normal, v10);
  }
  this->coin_reward_normal = coin_reward_normal;
  v15 = (((_BYTE)v20 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v20->coin_reward_hard >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v20 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v20->coin_reward_hard >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v20->coin_reward_hard);
  }
  coin_reward_hard = v20->coin_reward_hard;
  v17 = *(_BYTE *)(((unsigned __int64)&this->coin_reward_hard >> 3) + 0x7FFF8000);
  LOBYTE(v15) = v17 != 0;
  if ( v17 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v17 )
    __asan_report_store4(&this->coin_reward_hard, v15);
  this->coin_reward_hard = coin_reward_hard;
  if ( *(char *)(((unsigned __int64)&v20->is_boss >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v20->is_boss, v15, &v20->is_boss);
  is_boss = v20->is_boss;
  v19 = *(_BYTE *)(((unsigned __int64)&this->is_boss >> 3) + 0x7FFF8000);
  if ( v19 < 0 )
  {
    LOBYTE(v15) = v19 != 0;
    __asan_report_store1(&this->is_boss, v15, &this->is_boss);
  }
  this->is_boss = is_boss;
};

// Line 228: range 00000000142A6F9C-00000000142A6FC6
void __cdecl data::RogueDiaryRoomExcelConfig::~RogueDiaryRoomExcelConfig(data::RogueDiaryRoomExcelConfig *const this)
{
  data::RogueDiaryRoomExcelConfig::~RogueDiaryRoomExcelConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 228: range 00000000142A6F5A-00000000142A6F9B
void __cdecl data::RogueDiaryRoomExcelConfig::~RogueDiaryRoomExcelConfig(data::RogueDiaryRoomExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::RogueDiaryRoomExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RogueDiaryRoomExcelConfig = v2;
};

// Line 245: range 0000000013BD0148-0000000013BD025B
void __cdecl data::RogueDiaryBuffDataExcelConfig::RogueDiaryBuffDataExcelConfig(
        data::RogueDiaryBuffDataExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::RogueDiaryBuffDataExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RogueDiaryBuffDataExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->type, v3);
  }
  this->type = ROGUE_DIARY_BUFF_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->effect_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->effect_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->effect_type, v3);
  }
  this->effect_type = ROGUE_DIARY_BUFF_EFFECT_NONE;
  std::string::basic_string(&this->ability_group);
};

// Line 245: range 0000000014180DB0-0000000014180F7F
void __cdecl data::RogueDiaryBuffDataExcelConfig::RogueDiaryBuffDataExcelConfig(
        data::RogueDiaryBuffDataExcelConfig *const this,
        const data::RogueDiaryBuffDataExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::RogueDiaryBuffType type; // ecx
  char v7; // dl
  data::RogueDiaryBuffEffectType effect_type; // ecx
  char v9; // al
  const data::RogueDiaryBuffDataExcelConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::RogueDiaryBuffDataExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_RogueDiaryBuffDataExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v10->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->type);
  }
  type = v10->type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->type, v5);
  }
  this->type = type;
  if ( *(_BYTE *)(((unsigned __int64)&v10->effect_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->effect_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->effect_type);
  }
  effect_type = v10->effect_type;
  v9 = *(_BYTE *)(((unsigned __int64)&this->effect_type >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->effect_type, v5);
  }
  this->effect_type = effect_type;
  std::string::basic_string(&this->ability_group, &v10->ability_group);
};

// Line 248: range 00000000142A6F2E-00000000142A6F58
void __cdecl data::RogueDiaryBuffDataExcelConfig::~RogueDiaryBuffDataExcelConfig(
        data::RogueDiaryBuffDataExcelConfig *const this)
{
  data::RogueDiaryBuffDataExcelConfig::~RogueDiaryBuffDataExcelConfig(this);
  operator delete(this, 0x38uLL);
};

// Line 248: range 00000000142A6EDC-00000000142A6F2D
void __cdecl data::RogueDiaryBuffDataExcelConfig::~RogueDiaryBuffDataExcelConfig(
        data::RogueDiaryBuffDataExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::RogueDiaryBuffDataExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RogueDiaryBuffDataExcelConfig = v2;
  std::string::~string(&this->ability_group);
};

// Line 262: range 00000000141810C0-00000000141812F9
void __cdecl data::RogueDiaryCardWeightExcelConfig::RogueDiaryCardWeightExcelConfig(
        data::RogueDiaryCardWeightExcelConfig *const this,
        const data::RogueDiaryCardWeightExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t sr_count; // ecx
  char v7; // dl
  uint32_t weight; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t retry_weight; // ecx
  char v12; // dl
  const data::RogueDiaryCardWeightExcelConfig *v13; // [rsp+0h] [rbp-10h]

  v13 = a2;
  v2 = (int (**)(...))(&`vtable for'data::RogueDiaryCardWeightExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_RogueDiaryCardWeightExcelConfig = v2;
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
  v5 = (((_BYTE)v13 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->sr_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->sr_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->sr_count);
  }
  sr_count = v13->sr_count;
  v7 = *(_BYTE *)(((unsigned __int64)&this->sr_count >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->sr_count, v5);
  }
  this->sr_count = sr_count;
  if ( *(_BYTE *)(((unsigned __int64)&v13->weight >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->weight >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->weight);
  }
  weight = v13->weight;
  v9 = *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->weight, v5);
  }
  this->weight = weight;
  v10 = (((_BYTE)v13 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->retry_weight >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->retry_weight >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->retry_weight);
  }
  retry_weight = v13->retry_weight;
  v12 = *(_BYTE *)(((unsigned __int64)&this->retry_weight >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->retry_weight, v10);
  }
  this->retry_weight = retry_weight;
};

// Line 265: range 00000000142A6E6E-00000000142A6EAF
void __cdecl data::RogueDiaryCardWeightExcelConfig::~RogueDiaryCardWeightExcelConfig(
        data::RogueDiaryCardWeightExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::RogueDiaryCardWeightExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RogueDiaryCardWeightExcelConfig = v2;
};

// Line 265: range 00000000142A6EB0-00000000142A6EDA
void __cdecl data::RogueDiaryCardWeightExcelConfig::~RogueDiaryCardWeightExcelConfig(
        data::RogueDiaryCardWeightExcelConfig *const this)
{
  data::RogueDiaryCardWeightExcelConfig::~RogueDiaryCardWeightExcelConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 279: range 000000001418143A-00000000141816E8
void __cdecl data::RogueDiaryCardDepotExcelConfig::RogueDiaryCardDepotExcelConfig(
        data::RogueDiaryCardDepotExcelConfig *const this,
        const data::RogueDiaryCardDepotExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t depot_id; // ecx
  char v7; // dl
  uint32_t buff_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  data::RogueDiaryBuffType buff_type; // ecx
  char v12; // dl
  uint32_t weight; // ecx
  char v14; // al
  const data::RogueDiaryCardDepotExcelConfig *v15; // [rsp+0h] [rbp-10h]

  v15 = a2;
  v2 = (int (**)(...))(&`vtable for'data::RogueDiaryCardDepotExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_RogueDiaryCardDepotExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v15->depot_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v15 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->depot_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v15->depot_id);
  }
  depot_id = v15->depot_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->depot_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->depot_id, v5);
  }
  this->depot_id = depot_id;
  if ( *(_BYTE *)(((unsigned __int64)&v15->buff_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v15->buff_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v15->buff_id);
  }
  buff_id = v15->buff_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->buff_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->buff_id, v5);
  }
  this->buff_id = buff_id;
  v10 = (((_BYTE)v15 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v15->buff_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v15 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->buff_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v15->buff_type);
  }
  buff_type = v15->buff_type;
  v12 = *(_BYTE *)(((unsigned __int64)&this->buff_type >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->buff_type, v10);
  }
  this->buff_type = buff_type;
  if ( *(_BYTE *)(((unsigned __int64)&v15->weight >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v15->weight >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v15->weight);
  }
  weight = v15->weight;
  v14 = *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->weight, v10);
  }
  this->weight = weight;
};

// Line 282: range 00000000142A6E00-00000000142A6E41
void __cdecl data::RogueDiaryCardDepotExcelConfig::~RogueDiaryCardDepotExcelConfig(
        data::RogueDiaryCardDepotExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::RogueDiaryCardDepotExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RogueDiaryCardDepotExcelConfig = v2;
};

// Line 282: range 00000000142A6E42-00000000142A6E6C
void __cdecl data::RogueDiaryCardDepotExcelConfig::~RogueDiaryCardDepotExcelConfig(
        data::RogueDiaryCardDepotExcelConfig *const this)
{
  data::RogueDiaryCardDepotExcelConfig::~RogueDiaryCardDepotExcelConfig(this);
  operator delete(this, 0x20uLL);
};

// Line 297: range 000000001418182A-00000000141819DE
void __cdecl data::RogueDiaryPreviewExcelConfig::RogueDiaryPreviewExcelConfig(
        data::RogueDiaryPreviewExcelConfig *const this,
        const data::RogueDiaryPreviewExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t activity_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t room_scene_id; // ecx
  char v7; // dl
  uint32_t world_scene_id; // ecx
  char v9; // al
  const data::RogueDiaryPreviewExcelConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::RogueDiaryPreviewExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_RogueDiaryPreviewExcelConfig = v2;
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
  v5 = (((_BYTE)v10 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->room_scene_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->room_scene_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->room_scene_id);
  }
  room_scene_id = v10->room_scene_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->room_scene_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->room_scene_id, v5);
  }
  this->room_scene_id = room_scene_id;
  if ( *(_BYTE *)(((unsigned __int64)&v10->world_scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->world_scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->world_scene_id);
  }
  world_scene_id = v10->world_scene_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->world_scene_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->world_scene_id, v5);
  }
  this->world_scene_id = world_scene_id;
};

// Line 300: range 00000000142A6DD4-00000000142A6DFE
void __cdecl data::RogueDiaryPreviewExcelConfig::~RogueDiaryPreviewExcelConfig(
        data::RogueDiaryPreviewExcelConfig *const this)
{
  data::RogueDiaryPreviewExcelConfig::~RogueDiaryPreviewExcelConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 300: range 00000000142A6D92-00000000142A6DD3
void __cdecl data::RogueDiaryPreviewExcelConfig::~RogueDiaryPreviewExcelConfig(
        data::RogueDiaryPreviewExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::RogueDiaryPreviewExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RogueDiaryPreviewExcelConfig = v2;
};

// Line 313: range 0000000014181B20-0000000014181CD4
void __cdecl data::RogueDiaryResourceExcelConfig::RogueDiaryResourceExcelConfig(
        data::RogueDiaryResourceExcelConfig *const this,
        const data::RogueDiaryResourceExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::RogueDiaryResourceType type; // ecx
  char v7; // dl
  uint32_t value; // ecx
  char v9; // al
  const data::RogueDiaryResourceExcelConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::RogueDiaryResourceExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_RogueDiaryResourceExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v10->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->type);
  }
  type = v10->type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->type, v5);
  }
  this->type = type;
  if ( *(_BYTE *)(((unsigned __int64)&v10->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->value);
  }
  value = v10->value;
  v9 = *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->value, v5);
  }
  this->value = value;
};

// Line 316: range 00000000142A6D24-00000000142A6D65
void __cdecl data::RogueDiaryResourceExcelConfig::~RogueDiaryResourceExcelConfig(
        data::RogueDiaryResourceExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::RogueDiaryResourceExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RogueDiaryResourceExcelConfig = v2;
};

// Line 316: range 00000000142A6D66-00000000142A6D90
void __cdecl data::RogueDiaryResourceExcelConfig::~RogueDiaryResourceExcelConfig(
        data::RogueDiaryResourceExcelConfig *const this)
{
  data::RogueDiaryResourceExcelConfig::~RogueDiaryResourceExcelConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 329: range 0000000014181E16-0000000014181F55
void __cdecl data::RogueDiaryPortalExcelConfig::RogueDiaryPortalExcelConfig(
        data::RogueDiaryPortalExcelConfig *const this,
        const data::RogueDiaryPortalExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t group_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t point_id; // ecx
  char v7; // dl
  const data::RogueDiaryPortalExcelConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::RogueDiaryPortalExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_RogueDiaryPortalExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v8->point_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->point_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->point_id);
  }
  point_id = v8->point_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->point_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->point_id, v5);
  }
  this->point_id = point_id;
};

// Line 332: range 00000000142A6CB6-00000000142A6CF7
void __cdecl data::RogueDiaryPortalExcelConfig::~RogueDiaryPortalExcelConfig(
        data::RogueDiaryPortalExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::RogueDiaryPortalExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RogueDiaryPortalExcelConfig = v2;
};

// Line 332: range 00000000142A6CF8-00000000142A6D22
void __cdecl data::RogueDiaryPortalExcelConfig::~RogueDiaryPortalExcelConfig(
        data::RogueDiaryPortalExcelConfig *const this)
{
  data::RogueDiaryPortalExcelConfig::~RogueDiaryPortalExcelConfig(this);
  operator delete(this, 0x10uLL);
};
