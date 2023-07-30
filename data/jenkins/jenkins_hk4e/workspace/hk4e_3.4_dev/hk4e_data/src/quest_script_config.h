// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/quest_script_config.h

// Line 43: range 000000000F78FF58-000000000F79002E
void __cdecl QuestNpcScriptConfigPosition::QuestNpcScriptConfigPosition(QuestNpcScriptConfigPosition *const this)
{
  __int64 v1; // rsi

  std::string::basic_string(this);
  Vector3::Vector3(&this->pos, 0.0, 0.0, 0.0);
  Vector3::Vector3(&this->rot, 0.0, 0.0, 0.0);
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->scene_id, v1);
  }
  this->scene_id = 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->room_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->room_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->room_id, (((_BYTE)this + 60) & 7u) + 3);
  }
  this->room_id = 0;
};

// Line 43: range 000000000F8B3FA8-000000000F8B42A1
void __cdecl QuestNpcScriptConfigPosition::QuestNpcScriptConfigPosition(
        QuestNpcScriptConfigPosition *const this,
        QuestNpcScriptConfigPosition *a2)
{
  char v2; // dl
  __int64 v3; // rsi
  uint32_t scene_id; // ecx
  char v5; // al
  __int64 v6; // rsi
  uint32_t room_id; // ecx
  char v8; // dl

  std::string::basic_string(this, a2);
  if ( *(char *)(((unsigned __int64)&this->pos >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 43) & 7) >= *(_BYTE *)((((unsigned __int64)&this->pos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->pos, 12LL);
  }
  if ( *(char *)(((unsigned __int64)&a2->pos >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&a2->pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 43) & 7) >= *(_BYTE *)((((unsigned __int64)&a2->pos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->pos, 12LL);
  }
  this->pos = a2->pos;
  if ( (((unsigned __int8)this + 44) & 7) >= *(_BYTE *)(((unsigned __int64)&this->rot >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->rot >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->rot.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 55) & 7) >= *(_BYTE *)((((unsigned __int64)&this->rot.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->rot, 12LL);
  }
  v2 = *(_BYTE *)((((unsigned __int64)&a2->rot.z + 3) >> 3) + 0x7FFF8000);
  v3 = v2 != 0;
  if ( ((((unsigned __int8)a2 + 44) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->rot >> 3) + 0x7FFF8000)
     && *(_BYTE *)(((unsigned __int64)&a2->rot >> 3) + 0x7FFF8000) != 0) | (unsigned __int8)v3 & ((((unsigned __int8)a2
                                                                                                  + 55) & 7) >= v2) )
  {
    v3 = 12LL;
    __asan_report_load_n(&a2->rot, 12LL);
  }
  this->rot = a2->rot;
  if ( *(_BYTE *)(((unsigned __int64)&a2->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->scene_id);
  }
  scene_id = a2->scene_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->scene_id, v3);
  }
  this->scene_id = scene_id;
  v6 = (((_BYTE)a2 + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->room_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->room_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->room_id);
  }
  room_id = a2->room_id;
  v8 = *(_BYTE *)(((unsigned __int64)&this->room_id >> 3) + 0x7FFF8000);
  if ( v8 != 0 && (char)((((_BYTE)this + 60) & 7) + 3) >= v8 )
  {
    LOBYTE(v6) = v8 != 0;
    __asan_report_store4(&this->room_id, v6);
  }
  this->room_id = room_id;
};

// Line 43: range 000000000F790030-000000000F79004A
void __cdecl QuestNpcScriptConfigPosition::~QuestNpcScriptConfigPosition(QuestNpcScriptConfigPosition *const this)
{
  std::string::~string(this);
};

// Line 52: range 000000000F9DBF6A-000000000F9DBFC1
void __cdecl QuestNpcScriptConfig::QuestNpcScriptConfig(QuestNpcScriptConfig *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->npc_id = 0;
  std::vector<QuestNpcScriptConfigPosition>::vector(&this->pos_list);
};

// Line 52: range 000000000F997FC0-000000000F997FDE
void __cdecl QuestNpcScriptConfig::~QuestNpcScriptConfig(QuestNpcScriptConfig *const this)
{
  std::vector<QuestNpcScriptConfigPosition>::~vector(&this->pos_list);
};

// Line 58: range 000000000F9DB8C8-000000000F9DB9D5
void __cdecl QuestAvatarScriptConfig::QuestAvatarScriptConfig(QuestAvatarScriptConfig *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->scene_id = 3;
  std::string::basic_string(&this->pos_str);
  Vector3::Vector3(&this->pos, 0.0, 0.0, 0.0);
  Vector3::Vector3(&this->rot, 0.0, 0.0, 0.0);
  if ( *(_BYTE *)(((unsigned __int64)&this->offline_dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->offline_dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->offline_dungeon_id, v1);
  }
  this->offline_dungeon_id = 0;
  v2 = ((_BYTE)this + 68) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_loaded, v2, v3);
  this->is_loaded = 0;
};

// Line 58: range 000000000F997C18-000000000F997C36
void __cdecl QuestAvatarScriptConfig::~QuestAvatarScriptConfig(QuestAvatarScriptConfig *const this)
{
  std::string::~string(&this->pos_str);
};

// Line 68: range 000000000F79004C-000000000F790121
void __cdecl QuestTransmitPointScriptConfig::QuestTransmitPointScriptConfig(QuestTransmitPointScriptConfig *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->point_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->scene_id, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->scene_id = 3;
  std::string::basic_string(&this->pos_str);
  Vector3::Vector3(&this->pos, 0.0, 0.0, 0.0);
  Vector3::Vector3(&this->rot, 0.0, 0.0, 0.0);
};

// Line 68: range 000000000F9BE3B0-000000000F9BE6A7
void __cdecl QuestTransmitPointScriptConfig::QuestTransmitPointScriptConfig(
        QuestTransmitPointScriptConfig *const this,
        QuestTransmitPointScriptConfig *a2)
{
  uint32_t point_id; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t scene_id; // ecx
  char v6; // dl
  QuestTransmitPointScriptConfig *v7; // [rsp+0h] [rbp-10h]

  v7 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  point_id = a2->point_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->point_id = point_id;
  v4 = (((_BYTE)v7 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v7->scene_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v7 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v7->scene_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v7->scene_id);
  }
  scene_id = v7->scene_id;
  v6 = *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->scene_id, v4);
  }
  this->scene_id = scene_id;
  std::string::basic_string(&this->pos_str, &v7->pos_str);
  if ( *(char *)(((unsigned __int64)&this->pos >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 51) & 7) >= *(_BYTE *)((((unsigned __int64)&this->pos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->pos, 12LL);
  }
  if ( *(char *)(((unsigned __int64)&v7->pos >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&v7->pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v7 + 51) & 7) >= *(_BYTE *)((((unsigned __int64)&v7->pos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&v7->pos, 12LL);
  }
  this->pos = v7->pos;
  if ( (((unsigned __int8)this + 52) & 7) >= *(_BYTE *)(((unsigned __int64)&this->rot >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->rot >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->rot.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 63) & 7) >= *(_BYTE *)((((unsigned __int64)&this->rot.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->rot, 12LL);
  }
  if ( (((unsigned __int8)v7 + 52) & 7) >= *(_BYTE *)(((unsigned __int64)&v7->rot >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&v7->rot >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&v7->rot.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v7 + 63) & 7) >= *(_BYTE *)((((unsigned __int64)&v7->rot.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&v7->rot, 12LL);
  }
  this->rot = v7->rot;
};

// Line 68: range 000000000F790122-000000000F790140
void __cdecl QuestTransmitPointScriptConfig::~QuestTransmitPointScriptConfig(
        QuestTransmitPointScriptConfig *const this)
{
  std::string::~string(&this->pos_str);
};

// Line 77: range 000000000F790142-000000000F790217
void __cdecl QuestEnterDungeonPointScriptConfig::QuestEnterDungeonPointScriptConfig(
        QuestEnterDungeonPointScriptConfig *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->point_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->dungeon_id, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->dungeon_id = 0;
  std::string::basic_string(&this->pos_str);
  Vector3::Vector3(&this->pos, 0.0, 0.0, 0.0);
  Vector3::Vector3(&this->rot, 0.0, 0.0, 0.0);
};

// Line 77: range 000000000F9BE776-000000000F9BEA6D
void __cdecl QuestEnterDungeonPointScriptConfig::QuestEnterDungeonPointScriptConfig(
        QuestEnterDungeonPointScriptConfig *const this,
        QuestEnterDungeonPointScriptConfig *a2)
{
  uint32_t point_id; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t dungeon_id; // ecx
  char v6; // dl
  QuestEnterDungeonPointScriptConfig *v7; // [rsp+0h] [rbp-10h]

  v7 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  point_id = a2->point_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->point_id = point_id;
  v4 = (((_BYTE)v7 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v7->dungeon_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v7 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v7->dungeon_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v7->dungeon_id);
  }
  dungeon_id = v7->dungeon_id;
  v6 = *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->dungeon_id, v4);
  }
  this->dungeon_id = dungeon_id;
  std::string::basic_string(&this->pos_str, &v7->pos_str);
  if ( *(char *)(((unsigned __int64)&this->pos >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 51) & 7) >= *(_BYTE *)((((unsigned __int64)&this->pos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->pos, 12LL);
  }
  if ( *(char *)(((unsigned __int64)&v7->pos >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&v7->pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v7 + 51) & 7) >= *(_BYTE *)((((unsigned __int64)&v7->pos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&v7->pos, 12LL);
  }
  this->pos = v7->pos;
  if ( (((unsigned __int8)this + 52) & 7) >= *(_BYTE *)(((unsigned __int64)&this->rot >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->rot >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->rot.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 63) & 7) >= *(_BYTE *)((((unsigned __int64)&this->rot.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->rot, 12LL);
  }
  if ( (((unsigned __int8)v7 + 52) & 7) >= *(_BYTE *)(((unsigned __int64)&v7->rot >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&v7->rot >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&v7->rot.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v7 + 63) & 7) >= *(_BYTE *)((((unsigned __int64)&v7->rot.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&v7->rot, 12LL);
  }
  this->rot = v7->rot;
};

// Line 77: range 000000000F790218-000000000F790236
void __cdecl QuestEnterDungeonPointScriptConfig::~QuestEnterDungeonPointScriptConfig(
        QuestEnterDungeonPointScriptConfig *const this)
{
  std::string::~string(&this->pos_str);
};

// Line 86: range 000000000F9DBA46-000000000F9DBADA
void __cdecl QuestScriptConfig::QuestScriptConfig(QuestScriptConfig *const this)
{
  std::map<unsigned int,QuestNpcScriptConfig>::map(&this->npc_config_map);
  std::map<unsigned int,QuestMonsterScriptConfig>::map(&this->monster_config_map);
  std::map<unsigned int,QuestItemScriptConfig>::map(&this->item_config_map);
  std::map<std::pair<unsigned int,unsigned int>,QuestGadgetScriptConfig>::map(&this->gadget_config_map);
  QuestAvatarScriptConfig::QuestAvatarScriptConfig(&this->avatar_config);
  std::vector<int>::vector(&this->quest_var);
  std::map<unsigned int,QuestTransmitPointScriptConfig>::map(&this->transmit_point_map);
  std::map<unsigned int,QuestEnterDungeonPointScriptConfig>::map(&this->enter_dungeon_point_map);
};

// Line 86: range 000000000F997C70-000000000F997D04
void __cdecl QuestScriptConfig::~QuestScriptConfig(QuestScriptConfig *const this)
{
  std::map<unsigned int,QuestEnterDungeonPointScriptConfig>::~map(&this->enter_dungeon_point_map);
  std::map<unsigned int,QuestTransmitPointScriptConfig>::~map(&this->transmit_point_map);
  std::vector<int>::~vector(&this->quest_var);
  QuestAvatarScriptConfig::~QuestAvatarScriptConfig(&this->avatar_config);
  std::map<std::pair<unsigned int,unsigned int>,QuestGadgetScriptConfig>::~map(&this->gadget_config_map);
  std::map<unsigned int,QuestItemScriptConfig>::~map(&this->item_config_map);
  std::map<unsigned int,QuestMonsterScriptConfig>::~map(&this->monster_config_map);
  std::map<unsigned int,QuestNpcScriptConfig>::~map(&this->npc_config_map);
};

// Line 98: range 000000000F9BD952-000000000F9BD9B2
void __cdecl ParentQuestScriptConfig::ParentQuestScriptConfig(ParentQuestScriptConfig *const this)
{
  std::map<unsigned int,QuestScriptConfig>::map(&this->rewind_config_map);
  std::map<unsigned int,QuestScriptConfig>::map(&this->quest_config_map);
  std::vector<data::QuestExec>::vector(&this->finish_action_vec);
  std::vector<data::QuestExec>::vector(&this->fail_action_vec);
  std::vector<data::QuestExec>::vector(&this->cancel_action_vec);
};

// Line 98: range 000000000F972798-000000000F9727F8
void __cdecl ParentQuestScriptConfig::~ParentQuestScriptConfig(ParentQuestScriptConfig *const this)
{
  std::vector<data::QuestExec>::~vector(&this->cancel_action_vec);
  std::vector<data::QuestExec>::~vector(&this->fail_action_vec);
  std::vector<data::QuestExec>::~vector(&this->finish_action_vec);
  std::map<unsigned int,QuestScriptConfig>::~map(&this->quest_config_map);
  std::map<unsigned int,QuestScriptConfig>::~map(&this->rewind_config_map);
};
