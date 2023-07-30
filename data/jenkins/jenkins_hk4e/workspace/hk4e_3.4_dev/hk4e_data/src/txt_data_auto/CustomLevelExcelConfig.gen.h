// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/CustomLevelExcelConfig.gen.h

// Line 64: range 0000000013BFA408-0000000013BFA6EA
void __cdecl data::CustomLevelComponentConfig::CustomLevelComponentConfig(data::CustomLevelComponentConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi

  v2 = (int (**)(...))(&`vtable for'data::CustomLevelComponentConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_CustomLevelComponentConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->component_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->component_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->component_id, v1);
  }
  this->component_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->type_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->type_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->type_id, v3);
  }
  this->type_id = 0;
  std::string::basic_string(&this->brick_name);
  if ( *(_BYTE *)(((unsigned __int64)&this->deploy_gadget_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->deploy_gadget_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->deploy_gadget_id, v3);
  }
  this->deploy_gadget_id = 0;
  v4 = (((_BYTE)this + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->server_gadget_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->server_gadget_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->server_gadget_id, v4);
  }
  this->server_gadget_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->config_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->config_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->config_level, v4);
  }
  this->config_level = 0;
  v5 = (((_BYTE)this + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->rotate_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->rotate_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->rotate_type, v5);
  }
  this->rotate_type = BRICK_ROTATE_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->component_cost >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->component_cost >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->component_cost, v5);
  }
  this->component_cost = 0;
  v6 = (((_BYTE)this + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_deploy_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_deploy_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_deploy_count, v6);
  }
  this->max_deploy_count = 0;
  if ( *(char *)(((unsigned __int64)&this->is_visable >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_visable, v6, &this->is_visable);
  this->is_visable = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->brick_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->brick_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->brick_type, (((_BYTE)this + 76) & 7u) + 3);
  }
  this->brick_type = BRICK_TYPE_NONE;
};

// Line 64: range 00000000141BB11E-00000000141BB661
void __cdecl data::CustomLevelComponentConfig::CustomLevelComponentConfig(
        data::CustomLevelComponentConfig *const this,
        const data::CustomLevelComponentConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t component_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t type_id; // ecx
  char v7; // dl
  std::string *p_brick_name; // rsi
  uint32_t deploy_gadget_id; // ecx
  char v10; // al
  __int64 v11; // rsi
  uint32_t server_gadget_id; // ecx
  char v13; // dl
  uint32_t config_level; // ecx
  char v15; // al
  __int64 v16; // rsi
  data::BrickRotateType rotate_type; // ecx
  char v18; // dl
  uint32_t component_cost; // ecx
  char v20; // al
  __int64 v21; // rsi
  uint32_t max_deploy_count; // ecx
  char v23; // dl
  bool is_visable; // cl
  char v25; // al
  __int64 v26; // rsi
  data::BrickType brick_type; // ecx
  char v28; // dl
  const data::CustomLevelComponentConfig *v29; // [rsp+0h] [rbp-10h]

  v29 = a2;
  v2 = (int (**)(...))(&`vtable for'data::CustomLevelComponentConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_CustomLevelComponentConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->component_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->component_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->component_id);
  }
  component_id = a2->component_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->component_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->component_id, a2);
  }
  this->component_id = component_id;
  v5 = (((_BYTE)v29 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v29->type_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v29 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v29->type_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v29->type_id);
  }
  type_id = v29->type_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->type_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->type_id, v5);
  }
  this->type_id = type_id;
  p_brick_name = &v29->brick_name;
  std::string::basic_string(&this->brick_name, &v29->brick_name);
  if ( *(_BYTE *)(((unsigned __int64)&v29->deploy_gadget_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v29->deploy_gadget_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v29->deploy_gadget_id);
  }
  deploy_gadget_id = v29->deploy_gadget_id;
  v10 = *(_BYTE *)(((unsigned __int64)&this->deploy_gadget_id >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(p_brick_name) = v10 != 0;
    __asan_report_store4(&this->deploy_gadget_id, p_brick_name);
  }
  this->deploy_gadget_id = deploy_gadget_id;
  v11 = (((_BYTE)v29 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v29->server_gadget_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v29 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v29->server_gadget_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v29->server_gadget_id);
  }
  server_gadget_id = v29->server_gadget_id;
  v13 = *(_BYTE *)(((unsigned __int64)&this->server_gadget_id >> 3) + 0x7FFF8000);
  if ( v13 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v13 )
  {
    LOBYTE(v11) = v13 != 0;
    __asan_report_store4(&this->server_gadget_id, v11);
  }
  this->server_gadget_id = server_gadget_id;
  if ( *(_BYTE *)(((unsigned __int64)&v29->config_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v29->config_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v29->config_level);
  }
  config_level = v29->config_level;
  v15 = *(_BYTE *)(((unsigned __int64)&this->config_level >> 3) + 0x7FFF8000);
  if ( v15 != 0 && v15 <= 3 )
  {
    LOBYTE(v11) = v15 != 0;
    __asan_report_store4(&this->config_level, v11);
  }
  this->config_level = config_level;
  v16 = (((_BYTE)v29 + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v29->rotate_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v29 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v29->rotate_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v29->rotate_type);
  }
  rotate_type = v29->rotate_type;
  v18 = *(_BYTE *)(((unsigned __int64)&this->rotate_type >> 3) + 0x7FFF8000);
  if ( v18 != 0 && (char)((((_BYTE)this + 60) & 7) + 3) >= v18 )
  {
    LOBYTE(v16) = v18 != 0;
    __asan_report_store4(&this->rotate_type, v16);
  }
  this->rotate_type = rotate_type;
  if ( *(_BYTE *)(((unsigned __int64)&v29->component_cost >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v29->component_cost >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v29->component_cost);
  }
  component_cost = v29->component_cost;
  v20 = *(_BYTE *)(((unsigned __int64)&this->component_cost >> 3) + 0x7FFF8000);
  if ( v20 != 0 && v20 <= 3 )
  {
    LOBYTE(v16) = v20 != 0;
    __asan_report_store4(&this->component_cost, v16);
  }
  this->component_cost = component_cost;
  v21 = (((_BYTE)v29 + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v29->max_deploy_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v29 + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v29->max_deploy_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v29->max_deploy_count);
  }
  max_deploy_count = v29->max_deploy_count;
  v23 = *(_BYTE *)(((unsigned __int64)&this->max_deploy_count >> 3) + 0x7FFF8000);
  LOBYTE(v21) = v23 != 0;
  if ( v23 != 0 && (char)((((_BYTE)this + 68) & 7) + 3) >= v23 )
    __asan_report_store4(&this->max_deploy_count, v21);
  this->max_deploy_count = max_deploy_count;
  if ( *(char *)(((unsigned __int64)&v29->is_visable >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v29->is_visable, v21, &v29->is_visable);
  is_visable = v29->is_visable;
  v25 = *(_BYTE *)(((unsigned __int64)&this->is_visable >> 3) + 0x7FFF8000);
  if ( v25 < 0 )
  {
    LOBYTE(v21) = v25 != 0;
    __asan_report_store1(&this->is_visable, v21, &this->is_visable);
  }
  this->is_visable = is_visable;
  v26 = (((_BYTE)v29 + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v29->brick_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v29 + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v29->brick_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v29->brick_type);
  }
  brick_type = v29->brick_type;
  v28 = *(_BYTE *)(((unsigned __int64)&this->brick_type >> 3) + 0x7FFF8000);
  if ( v28 != 0 && (char)((((_BYTE)this + 76) & 7) + 3) >= v28 )
  {
    LOBYTE(v26) = v28 != 0;
    __asan_report_store4(&this->brick_type, v26);
  }
  this->brick_type = brick_type;
};

// Line 67: range 00000000142A32E0-00000000142A330A
void __cdecl data::CustomLevelComponentConfig::~CustomLevelComponentConfig(
        data::CustomLevelComponentConfig *const this)
{
  data::CustomLevelComponentConfig::~CustomLevelComponentConfig(this);
  operator delete(this, 0x50uLL);
};

// Line 67: range 00000000142A328E-00000000142A32DF
void __cdecl data::CustomLevelComponentConfig::~CustomLevelComponentConfig(
        data::CustomLevelComponentConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::CustomLevelComponentConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_CustomLevelComponentConfig = v2;
  std::string::~string(&this->brick_name);
};

// Line 88: range 0000000013BFA6EC-0000000013BFA7E9
void __cdecl data::CustomLevelDungeonConfig::CustomLevelDungeonConfig(data::CustomLevelDungeonConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::CustomLevelDungeonConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_CustomLevelDungeonConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dungeon_id, v1);
  }
  this->dungeon_id = 0;
  std::string::basic_string(&this->json_path);
  std::string::basic_string(&this->map_prefab_path);
  if ( *(_BYTE *)(((unsigned __int64)&this->room_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->room_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->room_num, v1);
  }
  this->room_num = 0;
  std::string::basic_string(&this->corridors);
  std::vector<unsigned int>::vector(&this->count_brick_list);
};

// Line 88: range 00000000141BB7A2-00000000141BB98E
void __cdecl data::CustomLevelDungeonConfig::CustomLevelDungeonConfig(
        data::CustomLevelDungeonConfig *const this,
        const data::CustomLevelDungeonConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t dungeon_id; // ecx
  char v4; // al
  std::string *p_map_prefab_path; // rsi
  uint32_t room_num; // ecx
  char v7; // al
  const data::CustomLevelDungeonConfig *v8; // [rsp+0h] [rbp-20h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::CustomLevelDungeonConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_CustomLevelDungeonConfig = v2;
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
  std::string::basic_string(&this->json_path, &v8->json_path);
  p_map_prefab_path = &v8->map_prefab_path;
  std::string::basic_string(&this->map_prefab_path, &v8->map_prefab_path);
  if ( *(_BYTE *)(((unsigned __int64)&v8->room_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v8->room_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v8->room_num);
  }
  room_num = v8->room_num;
  v7 = *(_BYTE *)(((unsigned __int64)&this->room_num >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_map_prefab_path) = v7 != 0;
    __asan_report_store4(&this->room_num, p_map_prefab_path);
  }
  this->room_num = room_num;
  std::string::basic_string(&this->corridors, &v8->corridors);
  std::vector<unsigned int>::vector(&this->count_brick_list, &v8->count_brick_list);
};

// Line 91: range 00000000142A3262-00000000142A328C
void __cdecl data::CustomLevelDungeonConfig::~CustomLevelDungeonConfig(data::CustomLevelDungeonConfig *const this)
{
  data::CustomLevelDungeonConfig::~CustomLevelDungeonConfig(this);
  operator delete(this, 0x90uLL);
};

// Line 91: range 00000000142A31E0-00000000142A3261
void __cdecl data::CustomLevelDungeonConfig::~CustomLevelDungeonConfig(data::CustomLevelDungeonConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::CustomLevelDungeonConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_CustomLevelDungeonConfig = v2;
  std::vector<unsigned int>::~vector(&this->count_brick_list);
  std::string::~string(&this->corridors);
  std::string::~string(&this->map_prefab_path);
  std::string::~string(&this->json_path);
};

// Line 107: range 0000000013BFA7EA-0000000013BFAA15
void __cdecl data::CustomLevelGroupConfig::CustomLevelGroupConfig(data::CustomLevelGroupConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  v2 = (int (**)(...))(&`vtable for'data::CustomLevelGroupConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_CustomLevelGroupConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->group_id, v1);
  }
  this->group_id = 0;
  std::vector<unsigned int>::vector(&this->dungeon_list);
  std::vector<unsigned int>::vector(&this->activity_dungeon_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->max_edit_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_edit_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_edit_count, v1);
  }
  this->max_edit_count = 0;
  v3 = (((_BYTE)this + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->store_max_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->store_max_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->store_max_count, v3);
  }
  this->store_max_count = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->coin_challenge_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->coin_challenge_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->coin_challenge_id, v3);
  }
  this->coin_challenge_id = 0;
  v4 = (((_BYTE)this + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->coin_exhibition_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->coin_exhibition_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->coin_exhibition_id, v4);
  }
  this->coin_exhibition_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->finish_exhibition_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->finish_exhibition_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->finish_exhibition_id, v4);
  }
  this->finish_exhibition_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cost_alert >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cost_alert >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cost_alert, (((_BYTE)this + 84) & 7u) + 3);
  }
  this->cost_alert = 0;
};

// Line 107: range 00000000141BBAD0-00000000141BBED5
void __cdecl data::CustomLevelGroupConfig::CustomLevelGroupConfig(
        data::CustomLevelGroupConfig *const this,
        const data::CustomLevelGroupConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t group_id; // ecx
  char v4; // al
  std::vector<unsigned int> *p_activity_dungeon_list; // rsi
  uint32_t max_edit_count; // ecx
  char v7; // al
  __int64 v8; // rsi
  uint32_t store_max_count; // ecx
  char v10; // dl
  uint32_t coin_challenge_id; // ecx
  char v12; // al
  __int64 v13; // rsi
  uint32_t coin_exhibition_id; // ecx
  char v15; // dl
  uint32_t finish_exhibition_id; // ecx
  char v17; // al
  __int64 v18; // rsi
  uint32_t cost_alert; // ecx
  char v20; // dl
  const data::CustomLevelGroupConfig *v21; // [rsp+0h] [rbp-20h]

  v21 = a2;
  v2 = (int (**)(...))(&`vtable for'data::CustomLevelGroupConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_CustomLevelGroupConfig = v2;
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
  std::vector<unsigned int>::vector(&this->dungeon_list, &v21->dungeon_list);
  p_activity_dungeon_list = &v21->activity_dungeon_list;
  std::vector<unsigned int>::vector(&this->activity_dungeon_list, &v21->activity_dungeon_list);
  if ( *(_BYTE *)(((unsigned __int64)&v21->max_edit_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v21->max_edit_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v21->max_edit_count);
  }
  max_edit_count = v21->max_edit_count;
  v7 = *(_BYTE *)(((unsigned __int64)&this->max_edit_count >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_activity_dungeon_list) = v7 != 0;
    __asan_report_store4(&this->max_edit_count, p_activity_dungeon_list);
  }
  this->max_edit_count = max_edit_count;
  v8 = (((_BYTE)v21 + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v21->store_max_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v21 + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v21->store_max_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v21->store_max_count);
  }
  store_max_count = v21->store_max_count;
  v10 = *(_BYTE *)(((unsigned __int64)&this->store_max_count >> 3) + 0x7FFF8000);
  if ( v10 != 0 && (char)((((_BYTE)this + 68) & 7) + 3) >= v10 )
  {
    LOBYTE(v8) = v10 != 0;
    __asan_report_store4(&this->store_max_count, v8);
  }
  this->store_max_count = store_max_count;
  if ( *(_BYTE *)(((unsigned __int64)&v21->coin_challenge_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v21->coin_challenge_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v21->coin_challenge_id);
  }
  coin_challenge_id = v21->coin_challenge_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->coin_challenge_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(v8) = v12 != 0;
    __asan_report_store4(&this->coin_challenge_id, v8);
  }
  this->coin_challenge_id = coin_challenge_id;
  v13 = (((_BYTE)v21 + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v21->coin_exhibition_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v21 + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v21->coin_exhibition_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v21->coin_exhibition_id);
  }
  coin_exhibition_id = v21->coin_exhibition_id;
  v15 = *(_BYTE *)(((unsigned __int64)&this->coin_exhibition_id >> 3) + 0x7FFF8000);
  if ( v15 != 0 && (char)((((_BYTE)this + 76) & 7) + 3) >= v15 )
  {
    LOBYTE(v13) = v15 != 0;
    __asan_report_store4(&this->coin_exhibition_id, v13);
  }
  this->coin_exhibition_id = coin_exhibition_id;
  if ( *(_BYTE *)(((unsigned __int64)&v21->finish_exhibition_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v21->finish_exhibition_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v21->finish_exhibition_id);
  }
  finish_exhibition_id = v21->finish_exhibition_id;
  v17 = *(_BYTE *)(((unsigned __int64)&this->finish_exhibition_id >> 3) + 0x7FFF8000);
  if ( v17 != 0 && v17 <= 3 )
  {
    LOBYTE(v13) = v17 != 0;
    __asan_report_store4(&this->finish_exhibition_id, v13);
  }
  this->finish_exhibition_id = finish_exhibition_id;
  v18 = (((_BYTE)v21 + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v21->cost_alert >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v21 + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v21->cost_alert >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v21->cost_alert);
  }
  cost_alert = v21->cost_alert;
  v20 = *(_BYTE *)(((unsigned __int64)&this->cost_alert >> 3) + 0x7FFF8000);
  if ( v20 != 0 && (char)((((_BYTE)this + 84) & 7) + 3) >= v20 )
  {
    LOBYTE(v18) = v20 != 0;
    __asan_report_store4(&this->cost_alert, v18);
  }
  this->cost_alert = cost_alert;
};

// Line 110: range 00000000142A3152-00000000142A31B3
void __cdecl data::CustomLevelGroupConfig::~CustomLevelGroupConfig(data::CustomLevelGroupConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::CustomLevelGroupConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_CustomLevelGroupConfig = v2;
  std::vector<unsigned int>::~vector(&this->activity_dungeon_list);
  std::vector<unsigned int>::~vector(&this->dungeon_list);
};

// Line 110: range 00000000142A31B4-00000000142A31DE
void __cdecl data::CustomLevelGroupConfig::~CustomLevelGroupConfig(data::CustomLevelGroupConfig *const this)
{
  data::CustomLevelGroupConfig::~CustomLevelGroupConfig(this);
  operator delete(this, 0x58uLL);
};

// Line 129: range 0000000013E184A4-0000000013E18658
void __cdecl data::CustomLevelComponentLimitConfig::CustomLevelComponentLimitConfig(
        data::CustomLevelComponentLimitConfig *const this,
        const data::CustomLevelComponentLimitConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t limit_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t component_id; // ecx
  char v7; // dl
  uint32_t max_count; // ecx
  char v9; // al
  const data::CustomLevelComponentLimitConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::CustomLevelComponentLimitConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_CustomLevelComponentLimitConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->limit_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->limit_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->limit_id);
  }
  limit_id = a2->limit_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->limit_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->limit_id, a2);
  }
  this->limit_id = limit_id;
  v5 = (((_BYTE)v10 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->component_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->component_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->component_id);
  }
  component_id = v10->component_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->component_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->component_id, v5);
  }
  this->component_id = component_id;
  if ( *(_BYTE *)(((unsigned __int64)&v10->max_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->max_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->max_count);
  }
  max_count = v10->max_count;
  v9 = *(_BYTE *)(((unsigned __int64)&this->max_count >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->max_count, v5);
  }
  this->max_count = max_count;
};

// Line 132: range 00000000142A3126-00000000142A3150
void __cdecl data::CustomLevelComponentLimitConfig::~CustomLevelComponentLimitConfig(
        data::CustomLevelComponentLimitConfig *const this)
{
  data::CustomLevelComponentLimitConfig::~CustomLevelComponentLimitConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 132: range 00000000142A30E4-00000000142A3125
void __cdecl data::CustomLevelComponentLimitConfig::~CustomLevelComponentLimitConfig(
        data::CustomLevelComponentLimitConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::CustomLevelComponentLimitConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_CustomLevelComponentLimitConfig = v2;
};

// Line 145: range 00000000141BC06C-00000000141BC1A6
void __cdecl data::CustomLevelTagConfig::CustomLevelTagConfig(
        data::CustomLevelTagConfig *const this,
        const data::CustomLevelTagConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t config_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  __int64 v6; // rdx
  bool is_default; // cl
  char v8; // dl
  __int64 v9; // rdx
  const data::CustomLevelTagConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::CustomLevelTagConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_CustomLevelTagConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->config_id);
  }
  config_id = a2->config_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->config_id, a2);
  }
  this->config_id = config_id;
  v5 = ((_BYTE)v10 + 12) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&v10->is_default >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&v10->is_default >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_load1(&v10->is_default, v5, v6);
  is_default = v10->is_default;
  v8 = *(_BYTE *)(((unsigned __int64)&this->is_default >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v8 != 0;
  v9 = (v8 != 0) & (unsigned __int8)((((unsigned __int8)this + 12) & 7) >= v8);
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->is_default, v5, v9);
  this->is_default = is_default;
};

// Line 148: range 00000000142A30B8-00000000142A30E2
void __cdecl data::CustomLevelTagConfig::~CustomLevelTagConfig(data::CustomLevelTagConfig *const this)
{
  data::CustomLevelTagConfig::~CustomLevelTagConfig(this);
  operator delete(this, 0x10uLL);
};

// Line 148: range 00000000142A3076-00000000142A30B7
void __cdecl data::CustomLevelTagConfig::~CustomLevelTagConfig(data::CustomLevelTagConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::CustomLevelTagConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_CustomLevelTagConfig = v2;
};
